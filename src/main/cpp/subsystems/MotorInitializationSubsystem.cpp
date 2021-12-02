// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/MotorInitializationSubsystem.h"
#include "Constants.h"
#include "rev/CANSparkMax.h"
#include "frc/SpeedControllerGroup.h"
#include "frc/RobotDrive.h"
#include "frc/Joystick.h"
#include "RobotContainer.h"
#define BrushlessMotorIdentifier rev::CANSparkMax::MotorType::kBrushless

/*
Cpp api for the can spark maxes:
https://docs.revrobotics.com/sparkmax/software-resources/spark-max-api-information#c++-api

*/

 MotorInitilization:: MotorInitilization() {
  // Implementation of subsystem constructor goes here.
  //CAN bus configuration found in constant
  rev::CANSparkMax RightFrontMotor{RightFrontMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax RightBackMotor{RightBackMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax LeftFrontMotor{LeftFrontMotorCANID, BrushlessMotorIdentifier};
  rev::CANSparkMax LeftBackMotor{LeftBackMotorCANID, BrushlessMotorIdentifier};

  /*   //TODO: put this in motor drive once working
  RightBackMotor.Follow(RightFrontMotor);
  LeftBackMotor.Follow(LeftFrontMotor); 
  */

  frc::SpeedControllerGroup RightMotors(RightFrontMotor, RightBackMotor);
  frc::SpeedControllerGroup LeftMotors(LeftFrontMotor, LeftBackMotor);

  frc::RobotDrive RobotDrive(RightMotors, LeftMotors);
  frc::RobotDrive::CheckMotors();
  frc::RobotDrive Drive(InputSpeed, InputTurning);

  }

void  MotorInitilization::Periodic() {
  // Implementation of subsystem periodic method goes here.
}

void  MotorInitilization::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}
