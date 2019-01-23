#include "dotnes.hpp"
#include <fstream>
#include <iostream>

namespace nessi
{
    
    
    
DotNes::DotNes(std::string nesFilePath)
  {
  std::ifstream nesFile;
  
  nesFile.open(nesFilePath,std::ios::binary | std::ios::in);
  
  char line[4];
  
  if (nesFile.is_open())
     {
     nesFile.read(line,3);
  
     std::cout<<line<<std::endl;
     }
  nesFile.close();
  }
    
    
    
} // end namespace nessi