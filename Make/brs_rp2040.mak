#Component specific makefile for brs_rp2040
$(info Executing: Components/brs_rp2040/make/$(brs_rp2040).mak)
#C files that should be compiled in this component
C_SOURCE_FILES += Components/brs_rp2040/Source/BRS_RP2040.c

#Compiled Assembly that should be included in this component link
S_ASSEMBLY_FILES += Components/brs_rp2040/Source/start.S

#if Linker command file not set, set default
#makefile.project.part.defines can overwrite this if desired
ifeq ($(LINKER_COMMAND_FILE), )
    LINKER_COMMAND_FILE = $(ROOT_DIR)/Components/brs_rp2040/Source/brs_rp2040.ld
endif

#include path for header files in this component
INCLUDE_PATH += $(ROOT_DIR)/Components/brs_rp2040/Include

#include for the SDK - which is a dependency for this component
ifneq ($(RP2040_SDK_USED), 1)
    INCLUDE_PATH += $(RP2040_SDK)/
endif
