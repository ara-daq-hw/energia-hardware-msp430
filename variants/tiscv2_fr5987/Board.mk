######################################
# Board specific
ARCH = msp430
MCU = msp430fr5987
MCU_FLAG = -mmcu=$(MCU)
F_CPU = 8000000L
FLASH_SIZE = 64512
UPLOAD_COMMAND = $(MSPDEBUG) $(VERBOSE_UPLOAD) tilib --force-reset "prog build/$(SKETCH_NAME).bin"
######################################
