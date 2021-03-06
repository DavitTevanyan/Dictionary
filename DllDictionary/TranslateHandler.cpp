#include "TranslateHandler.h"

TranslateHandler::TranslateHandler(I_Dictionary& instance) : dll(&instance) 
{
    _Flags flag;
    flags.push_back(flag);
}

vector<CommandHandler::_Flags> TranslateHandler::GetFlag() 
{
    return flags;
}

void TranslateHandler::Execute(const vector<string>& args, const vector<_Flags>& flag, string& result) 
{
    if (args.size() == 2)
        result = dll->Translate(args[1]);
    else
        result = "Please enter correct arguments ";
}

string TranslateHandler::Help() 
{
    return "DLLHANLER   Translates the word that entered,if that word existing\n"
        "             in dictionary. For that you should input TRANSLATE WORD. \n";
}