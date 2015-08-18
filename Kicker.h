#ifndef Kicker_H
#define Kicker_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Kicker: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *LeftKickerMotor;
	Victor *RightKickerMotor;
public:
	Kicker();
	void InitDefaultCommand();
	void KickForward(float speed);
};

#endif
