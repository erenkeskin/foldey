#include "inc/system.hpp"

//
GenerateFiles::GenerateFiles(std::string _projectFolderPath)
    : projectFolderPath(_projectFolderPath), projectName("foldey_project"), projectLanguage("cpp")
{
}
//
GenerateFiles::GenerateFiles(std::string _projectFolderPath, std::string _projectName)
    : projectFolderPath(_projectFolderPath), projectName(_projectName), projectLanguage("cpp")
{
}
//
GenerateFiles::GenerateFiles(std::string _projectFolderPath, std::string _projectName, std::string _projectLanguage)
    : projectFolderPath(_projectFolderPath), projectName(_projectName), projectLanguage(_projectLanguage)
{
}
//
GenerateFiles::GenerateFiles(std::string _projectFolderPath, std::string _projectName, std::string _projectLanguage, std::string _includeFile)
    : projectFolderPath(_projectFolderPath), projectName(_projectName), projectLanguage(_projectLanguage), includeFile(_includeFile)
{
}
//
GenerateFiles::~GenerateFiles()
{
}

// Setters
void GenerateFiles::setProjectFolderPath(std::string _projectFolderPath)
{
    projectFolderPath = _projectFolderPath;
}
void GenerateFiles::setProjectName(std::string _projectName)
{
    projectName = _projectName;
}
void GenerateFiles::setProjectLanguage(std::string _projectLanguage)
{
    projectLanguage = _projectLanguage;
}
void GenerateFiles::setIncludeFile(std::string _includeFile)
{
    includeFile = _includeFile;
}

// Getters
std::string GenerateFiles::getProjectFolderPath(void) const
{
    return projectFolderPath;
}
// Getters
std::string GenerateFiles::getProjectName(void) const
{
    return projectName;
}
std::string GenerateFiles::getProjectLanguage(void) const
{
    return projectLanguage;
}
std::string GenerateFiles::getIncludeFile(void) const
{
    return includeFile;
}


//
std::string GenerateFiles::makeFolder(std::string _filePath, std::string _folderName)
{
    mkdir((_filePath + "/" + _folderName).c_str());
    return (_filePath + "/" + _folderName);
}
//
std::string GenerateFiles::makeFile(std::string _filePath, std::string _fileName)
{
    std::ofstream makeFileCommand((_filePath + "/" + _fileName).c_str());
    if (makeFileCommand.is_open())
    {
        return (_filePath + "/" + _fileName);
    }
    return "File cannot open.";
    
}
