#include "Main.h"

MainRobot::MainRobot():
	myRobot(1, 2),	// these must be initialized in the same order
	stick(1)		// as they are declared above.
{
	myRobot.SetExpiration(0.1);
	this->SetPeriod(0); 	//Set update period to sync with robot control packets (20ms nominal)
}

void MainRobot::RobotInit()
{
	
}


void MainRobot::DisabledInit() {
}


void MainRobot::DisabledPeriodic() {
}


void MainRobot::AutonomousInit() {
}


void MainRobot::AutonomousPeriodic() {
}


void MainRobot::TeleopInit() {
}


void MainRobot::TeleopPeriodic() {
	myRobot.ArcadeDrive(stick); // drive with arcade style 
}


void MainRobot::TestInit() {
}


void MainRobot::TestPeriodic() {
}

START_ROBOT_CLASS(MainRobot);

