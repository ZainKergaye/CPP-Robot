// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

//CAN BUS
int RightFrontMotorCANID = 0;
int RightBackMotorCANID = 0;
int LeftFrontMotorCANID = 0;
int LeftBackMotorCANID = 0;

//Device ID for Spark Motor Controllers
int SparkDeviceID = 5;

//Device Type here
int MotorControllerDeviceType = 2;

/*
CAN Addressing link found here:
https://docs.wpilib.org/en/stable/docs/software/can-devices/can-addressing.html 
You can change device id and device type
*/




/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */
