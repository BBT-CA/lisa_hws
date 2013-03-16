################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Data.cpp \
../src/Iterator.cpp \
../src/List.cpp \
../src/Node.cpp \
../src/hw3_feb.cpp 

OBJS += \
./src/Data.o \
./src/Iterator.o \
./src/List.o \
./src/Node.o \
./src/hw3_feb.o 

CPP_DEPS += \
./src/Data.d \
./src/Iterator.d \
./src/List.d \
./src/Node.d \
./src/hw3_feb.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


