#ifndef LiftCommands_H
#define LiftCommands_H

#include "../CommandBase.h"
#include "WPILib.h"

class LiftCommands: public CommandBase
{
public:
	LiftCommands();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
