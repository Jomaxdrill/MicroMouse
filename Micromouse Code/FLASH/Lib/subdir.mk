################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Lib/Acciones.c" \
"../Lib/Leds.c" \
"../Lib/LibreriaADC.c" \
"../Lib/LibreriaIRQ.c" \
"../Lib/LibreriaKBI.c" \
"../Lib/LibreriaReloj.c" \
"../Lib/LibreriaSerial.c" \
"../Lib/LibreriaTPM.c" \
"../Lib/mc9s08aw60.c" \

C_SRCS += \
../Lib/Acciones.c \
../Lib/Leds.c \
../Lib/LibreriaADC.c \
../Lib/LibreriaIRQ.c \
../Lib/LibreriaKBI.c \
../Lib/LibreriaReloj.c \
../Lib/LibreriaSerial.c \
../Lib/LibreriaTPM.c \
../Lib/mc9s08aw60.c \

OBJS += \
./Lib/Acciones_c.obj \
./Lib/Leds_c.obj \
./Lib/LibreriaADC_c.obj \
./Lib/LibreriaIRQ_c.obj \
./Lib/LibreriaKBI_c.obj \
./Lib/LibreriaReloj_c.obj \
./Lib/LibreriaSerial_c.obj \
./Lib/LibreriaTPM_c.obj \
./Lib/mc9s08aw60_c.obj \

OBJS_QUOTED += \
"./Lib/Acciones_c.obj" \
"./Lib/Leds_c.obj" \
"./Lib/LibreriaADC_c.obj" \
"./Lib/LibreriaIRQ_c.obj" \
"./Lib/LibreriaKBI_c.obj" \
"./Lib/LibreriaReloj_c.obj" \
"./Lib/LibreriaSerial_c.obj" \
"./Lib/LibreriaTPM_c.obj" \
"./Lib/mc9s08aw60_c.obj" \

C_DEPS += \
./Lib/Acciones_c.d \
./Lib/Leds_c.d \
./Lib/LibreriaADC_c.d \
./Lib/LibreriaIRQ_c.d \
./Lib/LibreriaKBI_c.d \
./Lib/LibreriaReloj_c.d \
./Lib/LibreriaSerial_c.d \
./Lib/LibreriaTPM_c.d \
./Lib/mc9s08aw60_c.d \

C_DEPS_QUOTED += \
"./Lib/Acciones_c.d" \
"./Lib/Leds_c.d" \
"./Lib/LibreriaADC_c.d" \
"./Lib/LibreriaIRQ_c.d" \
"./Lib/LibreriaKBI_c.d" \
"./Lib/LibreriaReloj_c.d" \
"./Lib/LibreriaSerial_c.d" \
"./Lib/LibreriaTPM_c.d" \
"./Lib/mc9s08aw60_c.d" \

OBJS_OS_FORMAT += \
./Lib/Acciones_c.obj \
./Lib/Leds_c.obj \
./Lib/LibreriaADC_c.obj \
./Lib/LibreriaIRQ_c.obj \
./Lib/LibreriaKBI_c.obj \
./Lib/LibreriaReloj_c.obj \
./Lib/LibreriaSerial_c.obj \
./Lib/LibreriaTPM_c.obj \
./Lib/mc9s08aw60_c.obj \


# Each subdirectory must supply rules for building sources it contributes
Lib/Acciones_c.obj: ../Lib/Acciones.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/Acciones.args" -ObjN="Lib/Acciones_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/%.d: ../Lib/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Lib/Leds_c.obj: ../Lib/Leds.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/Leds.args" -ObjN="Lib/Leds_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaADC_c.obj: ../Lib/LibreriaADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaADC.args" -ObjN="Lib/LibreriaADC_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaIRQ_c.obj: ../Lib/LibreriaIRQ.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaIRQ.args" -ObjN="Lib/LibreriaIRQ_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaKBI_c.obj: ../Lib/LibreriaKBI.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaKBI.args" -ObjN="Lib/LibreriaKBI_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaReloj_c.obj: ../Lib/LibreriaReloj.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaReloj.args" -ObjN="Lib/LibreriaReloj_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaSerial_c.obj: ../Lib/LibreriaSerial.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaSerial.args" -ObjN="Lib/LibreriaSerial_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/LibreriaTPM_c.obj: ../Lib/LibreriaTPM.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/LibreriaTPM.args" -ObjN="Lib/LibreriaTPM_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '

Lib/mc9s08aw60_c.obj: ../Lib/mc9s08aw60.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: HCS08 Compiler'
	"$(HC08ToolsEnv)/chc08" -ArgFile"Lib/mc9s08aw60.args" -ObjN="Lib/mc9s08aw60_c.obj" "$<" -Lm="$(@:%.obj=%.d)" -LmCfg=xilmou
	@echo 'Finished building: $<'
	@echo ' '


