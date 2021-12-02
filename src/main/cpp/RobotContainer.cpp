// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"
#include "frc/Joystick.h"
#include "subsystems/MotorInitializationSubsystem.h"
#include "Constants.h"

/* RobotContainer::RobotContainer() : m_autonomousCommand(&m_subsystem) {
  // Initialize all of your commands and subsystems here
  MotorInitilization();
  // Configure the button bindings



  ConfigureButtonBindings();
} */

void RobotContainer::ConfigureButtonBindings() {
  // Configure your button bindings here

  frc::Joystick Joystick0(Joystick0Port);
}

/* frc2::Command* RobotContainer::GetAutonomousCommand() {
  // An example command will be run in autonomous
  return &m_autonomousCommand;
}
 */