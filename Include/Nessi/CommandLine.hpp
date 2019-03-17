#ifndef CLI_HPP
#define CLI_HPP

#include <string>

namespace nessi
  {

  class cli
    {
    public:

    void ParseArguments(int argc,char** argv);    
        
    void PrintHelp(void);
    
    std::string& getFilePath()
      {
      return nesFilePath;    
      }
    
    private:
    
    std::string nesFilePath;    
        
    };




  }




#endif // CLI_HPP
