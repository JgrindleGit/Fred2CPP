#ifndef HArcadeDrive_H
#define HArcadeDrive_H

#include "../CommandBase.h"
#include "WPILib.h"

class HArcadeDrive: public CommandBase
{
public:
	HArcadeDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
