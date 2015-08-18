#ifndef ToKick_H
#define ToKick_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToKick: public CommandBase
{
public:
	ToKick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
