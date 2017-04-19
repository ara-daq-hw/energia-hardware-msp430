# energia-hardware-msp430

This is the required Energia library dependencies, or modifications to the energia board configurations for the MSP430 uCs used in the DAQ box.

Install this by deleting the Energia/hardware/msp430 directory for Energia 17. Replace it with the content of this github, so `git clone https://github.com/ara-daq-hw/energia-hardware-msp430.git msp430`

This is **NOT** the firmware to actually run the uCs, but rater fixes to various hardware header files to make them compatible with our uC, or fix Energia mistakes.
