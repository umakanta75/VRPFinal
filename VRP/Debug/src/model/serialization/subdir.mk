################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/model/serialization/CriteriaDao.cpp 

OBJS += \
./src/model/serialization/CriteriaDao.o 

CPP_DEPS += \
./src/model/serialization/CriteriaDao.d 


# Each subdirectory must supply rules for building sources it contributes
src/model/serialization/%.o: ../src/model/serialization/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/boost -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -pthread -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


