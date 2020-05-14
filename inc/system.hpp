#include <iostream>
#include <string>
#include <Windows.h>
#include <direct.h>
#include <fstream>

class GenerateFiles
{
private:
    std::string projectFolderPath;
    std::string projectName;     // default: foldey_project
    std::string projectLanguage; // default: cpp
    std::string includeFile;

public:
    GenerateFiles(std::string _projectFolderPath);
    GenerateFiles(std::string _projectFolderPath, std::string _projectName);
    GenerateFiles(std::string _projectFolderPath, std::string _projectName, std::string _projectLanguage);
    GenerateFiles(std::string _projectFolderPath, std::string _projectName, std::string _projectLanguage, std::string _includeFile);
    //GenerateFiles(std::string _projectFolderPath, std::string _projectName, std::string _projectLanguage, std::string _includeFile, ...);
    ~GenerateFiles();

    // Setters
    void setProjectFolderPath(std::string _projectFolderPath);
    void setProjectName(std::string _projectName);
    void setProjectLanguage(std::string _projectLanguage);
    virtual void setIncludeFile(std::string _includeFile);

    // Getters
    std::string getProjectFolderPath(void) const;
    std::string getProjectName(void) const;
    std::string getProjectLanguage(void) const;
    std::string getIncludeFile(void) const;

    std::string makeFolder(std::string _filePath, std::string _folderName);
    std::string makeFile(std::string _filePath, std::string _fileName);
};
