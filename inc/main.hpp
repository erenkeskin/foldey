#include <iostream>
#include <string>
#include <Windows.h>

std::string GetCurrentDirectory(void);

#define PROJECT_NAME        "Foldey"
#define PROJECT_PATH        GetCurrentDirectory()
#define VERSION_MAJOR       0
#define VERSION_MINOR       1
#define VERSION_REVISION    1
#define LAST_BUILD_TIME     __DATE__ "." __TIME__

//
std::string GetCurrentDirectory(void)
{
	char buffer[MAX_PATH];
	GetModuleFileNameA(NULL, buffer, MAX_PATH);
	std::string::size_type pos = std::string(buffer).find_last_of("\\/");
	
	return std::string(buffer).substr(0, pos);
}
//
void InformationMessages(void) 
{
    std::cout << "Project " << PROJECT_NAME << std::endl;
    std::cout << "Version: " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REVISION << std::endl;
    std::cout << "Last build " << LAST_BUILD_TIME << std::endl;
    std::cout << "Type -h or --help to list all commands" << std::endl;
}
//
void ListOfCommands(void) 
{
    std::cout << "List of All Commands:" << std::endl;;
    std::cout << "-h/--help" << "\t" << "List all commands" << std::endl;
    std::cout << "-p/--project" << "\t" << "Set Project Name" << std::endl;
    std::cout << "-l/--language" << "\t" << "Set Project Language" << std::endl;
    std::cout << "-i/--include" << "\t" << "Generate include files" << std::endl;
}