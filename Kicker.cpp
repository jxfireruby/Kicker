#include "Kicker.h"
#include "../RobotMap.h"

Kicker::Kicker() :
		Subsystem("ExampleSubsystem")
{
	LeftKickerMotor 	= 	new Victor(KickerMotorLeft);
	RightKickerMotor 	= 	new Victor(KickerMotorRight);
}

void Kicker::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	LeftKickerMotor		-> SetSpeed(0.0);
	RightKickerMotor	-> SetSpeed(0.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void Kicker::KickForward(float speed)
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	LeftKickerMotor		-> SetSpeed(speed);
	RightKickerMotor	-> SetSpeed(-speed);
}
