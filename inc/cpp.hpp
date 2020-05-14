#ifndef _cpp_hpp
#define _cpp_hpp

#include "inc/system.hpp"

//
class Language_Cpp : public GenerateFiles
{
    private:

    public:
        Language_Cpp();
        ~Language_Cpp();
        void Folder_Tree();
        void setIncludeFile(std::string _filePath, std::string _fileName);
};

#endif // _cpp_hpp