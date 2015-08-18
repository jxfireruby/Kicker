#include "ToKick.h"

ToKick::ToKick()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(kicker);
}

// Called just before this Command runs the first time
void ToKick::Initialize()
{
	kicker -> KickForward(1.0);
}

// Called repeatedly when this Command is scheduled to run
void ToKick::Execute()
{

}

// Make this return true when this Command no longer needs to run execute()
bool ToKick::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void ToKick::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToKick::Interrupted()
{

}
