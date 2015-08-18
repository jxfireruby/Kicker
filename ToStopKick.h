#ifndef ToStopKick_H
#define ToStopKick_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToKick: public CommandBase
{
public:
	ToStopKick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
