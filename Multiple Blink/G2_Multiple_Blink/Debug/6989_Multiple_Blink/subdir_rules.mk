################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
6989_Multiple_Blink/%.obj: ../6989_Multiple_Blink/%.c $(GEN_OPTS) | $(GEN_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccs910/ccs/tools/compiler/ti-cgt-msp430_18.12.2.LTS/bin/cl430" -vmsp --use_hw_mpy=none --include_path="C:/ti/ccs910/ccs/ccs_base/msp430/include" --include_path="C:/Users/ngpii/Documents/GitHub/lab-2-blink-led-papasn7/Multiple Blink" --include_path="C:/ti/ccs910/ccs/tools/compiler/ti-cgt-msp430_18.12.2.LTS/include" --advice:power=all --define=__MSP430G2553__ -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="6989_Multiple_Blink/$(basename $(<F)).d_raw" --obj_directory="6989_Multiple_Blink" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


