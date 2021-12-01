// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/MotorInitializationSubsystem.h"
#include "Constants.h"
#include "rev/CANSparkMax.h"

#define BrushlessMotorIdentifier rev::CANSparkMax::MotorType::kBrushless

/*
Cpp api for the can spark maxes:
https://docs.revrobotics.com/sparkmax/software-resources/spark-max-api-information#c++-api

*/

 MotorInitilization:: MotorInitilization() {
  // Implementation of subsystem constructor goes here.
  //CAN bus configuration found in constant
  rev::CANSparkMax RightFrontLeadMotor{RightFrontMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax RightBackFollowMotor{RightBackMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax LeftFrontLeadMotor{LeftFrontMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax LeftBackFollowMotor{LeftBackMotorCANID, BrushlessMotorIdentifier};


  RightBackFollowMotor.Follow(RightFrontLeadMotor);
  LeftBackFollowMotor.Follow(LeftFrontLeadMotor);


  }

void  MotorInitilization::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void  MotorInitilization::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
