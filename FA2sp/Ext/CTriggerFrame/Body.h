#pragma once

#include <CTriggerFrame.h>
#include "../FA2Expand.h"

class NOVTABLE CTriggerFrameExt : public CTriggerFrame
{
public:
	typedef BOOL(*FuncT_PTM)(MSG* pMsg);

	static CTriggerFrame* Instance;

	//hook function to replace in virtual function map
	BOOL PreTranslateMessageExt(MSG* pMsg);

	static void ProgramStartupInit();

	CTriggerFrameExt() {};
	~CTriggerFrameExt() {};

private:

};