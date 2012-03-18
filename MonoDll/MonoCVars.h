#ifndef __MONOCVARS_H__
#define __MONOCVARS_H__

struct SCVars
{
	int mono_revertScriptsOnError;
	int mono_exceptionsTriggerMessageBoxes;
	int mono_exceptionsTriggerFatalErrors;

	SCVars()
	{
		memset(this,0,sizeof(SCVars));
	}

	~SCVars() { ReleaseCVars(); }

	void InitCVars(IConsole *pConsole);
	void ReleaseCVars();
};

#endif //__MONOCVARS_H__