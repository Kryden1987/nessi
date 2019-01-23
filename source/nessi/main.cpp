#include <iostream>
#include "cli.hpp"
#include "dotnes.hpp"

int main(int argc,char** argv)
  {
  nessi::cli cli;
  
  
  cli.ParseArguments(argc,argv);    

  
  auto file = cli.getFilePath();
  
  nessi::DotNes dotnes(file);
  
  
  }
