#ifndef _COMMANDHANDLER_
#define _COMMANDHANDLER_

#include <vector>
#include <string>
#include <fstream>
using namespace std;

class CommandHandler{

public:	
	typedef struct{
		string flagName;
		bool exist;
		int argCount;
	}_Flags;

	virtual vector<_Flags> GetFlag()=0;
	virtual void Execute(const vector<string> & args,const vector<_Flags> & flag,string & result)=0;
	virtual string Help()=0;
protected:
	virtual ~ CommandHandler() {};
	
};

#endif // _COMMANDHANDLER_