# specify value directly from command line:
#   make target DF_CPU=16000000 

hex:
	avr-gcc -Os -DF_CPU=16000000 -mmcu=attiny85 -c blinkC.c
	avr-gcc -DF_CPU=16000000 -mmcu=attiny85 -o blinkC.elf blinkC.o
	avr-objcopy -O ihex blinkC.elf blinkC.hex
	rm blinkC.o
	rm blinkC.elf

flash: hex
	avrdude -c usbtiny -p t85 -U flash:w:blinkC.hex 

fuse:
	avrdude -c usbtiny -p t85 -U flash:w:blinkC.hex -U lfuse:w:0xe1:m -U hfuse:w:0xdc:m -U efuse:w:0xff:m

fuse_clock_output:
	avrdude -c avrisp -p t85 -b 19200 -U lfuse:w:0xa1:m -U hfuse:w:0xdc:m -U efuse:w:0xff:m
