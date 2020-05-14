#include "inc/main.hpp"
#include "inc/system.hpp"

using namespace std;

int main(int argc, char **argv)
{
    // Check Missing Arguments
    if (argc < 2)
    {
        cout << "Error: Missing arguments, please type -h or --help" << endl;
        return 1;
    }

    InformationMessages();

    auto generatedFiles = GenerateFiles(PROJECT_PATH);

    for (int i = 0; i < argc; i++)
    {
        //
        if ((string(argv[i]) == "-h") || (string(argv[i]) == "--help"))
        {
            ListOfCommands();
        }

        //
        if ((string(argv[i]) == "-f") || (string(argv[i]) == "--folder"))
        {
            cout << "Set project path" << endl;
            generatedFiles.setProjectFolderPath(string(argv[i + 1]));
        }

        //
        if ((string(argv[i]) == "-p") || (string(argv[i]) == "--project"))
        {
            cout << "Set project name" << endl;
            generatedFiles.setProjectName(string(argv[i + 1]));
        }

        //
        if ((string(argv[i]) == "-l") || (string(argv[i]) == "--language"))
        {
            cout << "Set project language" << endl;
            generatedFiles.setProjectLanguage(string(argv[i + 1]));
        }

        //
        if ((string(argv[i]) == "-i") || (string(argv[i]) == "--include"))
        {
            cout << "Set include file" << endl;
            generatedFiles.setIncludeFile(string(argv[i + 1]));
        }

        // TODO: If not these commands
    }

    return 0;
}