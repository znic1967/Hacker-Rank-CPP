################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Mod\ Equations.cpp 

OBJS += \
./src/Mod\ Equations.o 

CPP_DEPS += \
./src/Mod\ Equations.d 


# Each subdirectory must supply rules for building sources it contributes
src/Mod\ Equations.o: ../src/Mod\ Equations.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Mod Equations.d" -MT"src/Mod\ Equations.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


