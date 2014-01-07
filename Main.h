#include "WPILib.h"

#ifndef MAIN_ROBOT_H
#define MAIN_ROBOT_H

class MainRobot : public IterativeRobot
{
	RobotDrive myRobot; // robot drive system
	Joystick stick; // only joystick

public:
	MainRobot();
	
	void RobotInit();
	void DisabledInit();
	void DisabledPeriodic();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestInit();
	void TestPeriodic();
};

#endif
