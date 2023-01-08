#include <iostream>
#include <string>

using namespace std
class ExecFile;
class TextFile;

class File
{

protected:
	std::string name;
	std::string location ; 
	std::string permissions;
	std::string date;
	
public:
	File();

}



class Directory: protected File
{
protected:

	Directory* p ;
	std::string directories [];
	std::string textfiles [];
	std::string execfile [];
public:
	Directory();
	

}


class TexFile: protected File
{
protected:
//	str::string BelongDirect;

}



class ExecFile: protected TexFile
{
protected:
	ExecFile()
	{
		location="home/bin";
	}

	//BOOLEAN
	(void*) ptr();
public:
	ExecFile();	


		

}



//Class Shell
