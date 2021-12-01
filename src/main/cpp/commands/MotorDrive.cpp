// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/MotorDrive.h"
#include "subsystems/MotorInitializationSubsystem.h"
#include "frc/drive/DifferentialDrive.h"
MotorDrive::MotorDrive(MotorDrive* MotorInitializationSubsystem)
    : MotorInitializationSubsystem{MotorInitializationSubsystem} {
        frc::DifferentialDrive::ArcadeDrive();
    }
