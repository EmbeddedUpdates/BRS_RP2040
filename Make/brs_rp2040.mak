
# ARMGNU ?= arm-none-eabi

# XCPU = -mcpu=cortex-m0

# AOPS = --warn --fatal-warnings $(XCPU)
# COPS = -Wall -O2 -ffreestanding $(XCPU)ß
# LOPS = -nostdlib 

# all : notmain.uf2

# clean:
# 	rm -f *.bin
# 	rm -f *.o
# 	rm -f *.elf
# 	rm -f *.list
# 	rm -f *.uf2
# 	rm -f makeuf2
	
# makeuf2 : makeuf2.c crcpico.h
# 	gcc -O2 makeuf2.c -o makeuf2
	
# notmain.uf2 : notmain.bin makeuf2
# 	./makeuf2 notmain.bin notmain.uf2

# start.o : start.s
# 	$(ARMGNU)-as $(AOPS) start.s -o start.o

# notmain.o : notmain.c
# 	$(ARMGNU)-gcc $(COPS) -mthumb -c notmain.c -o notmain.o

# notmain.bin :               memmap.ld start.o notmain.o
# 	$(ARMGNU)-ld $(LOPS) -T memmap.ld start.o notmain.o -o notmain.elf
# 	$(ARMGNU)-objdump -D notmain.elf > notmain.list
# 	$(ARMGNU)-objcopy -O binary notmain.elf notmain.bin

#Component specific makefile for brs_rp2040
$(info Executing: Components/brs_rp2040/make/$(brs_rp2040).mak)
BRS_RP2040_VERSION_INT = 01.00.00
#C files that should be compiled in this component
C_SOURCE_FILES += Components/brs_rp2040/$(BRS_RP2040_VERSION_INT)/Source/notmain.c

#Compiled Assembly that should be included in this component link
S_ASSEMBLY_FILES += Components/brs_rp2040/$(BRS_RP2040_VERSION_INT)/Source/start.S

#if Linker command file not set, set default
#makefile.project.part.defines can overwrite this if desired
ifeq ($(LINKER_COMMAND_FILE), )
    LINKER_COMMAND_FILE = $(ROOT_DIR)/Components/brs_rp2040/$(BRS_RP2040_VERSION_INT)/Source/brs_rp2040.ld
endif

#include path for header files in this component
INCLUDE_PATH += $(ROOT_DIR)/Components/brs_rp2040/$(BRS_RP2040_VERSION_INT)/Include

#include for the SDK - which is a dependency for this component
ifneq ($(RP2040_SDK_USED), 1)
    INCLUDE_PATH += $(RP2040_SDK)/
endif




##-------------------------------------------------------------------------
##
## Copyright (c) 2021 David Welch dwelch@dwelch.com
##
## Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
##
## The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
##
## THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
##
##-------------------------------------------------------------------------
