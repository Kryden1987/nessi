#include "cli.hpp"
#include <experimental/filesystem>
#include <iostream>

namespace fs = std::experimental::filesystem;

namespace nessi
{
    
    
void cli::ParseArguments(int argc,char** argv)
  {
  if (argc>1)
    {
    nesFilePath = argv[1];
  
    fs::path  path(nesFilePath);
  
    if  (fs::exists(path) == true)
        {
        std::cout << "file exists\n";
        }
    else
        {
        std::cout << " file does not exist\n";
        }
    }
  }
    
    
void cli::PrintHelp(void)
  {
      
  }
    
} // end namespace nessi