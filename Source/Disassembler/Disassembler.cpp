#include "Disassembler.hpp"



namespace Nessi :: Disassembler
{

Disassembler::Disassembler()
  {
  InstructionTable[100] =   {
                              {"BRK",1,Addressing::Implied    },    //0
                              {"ORA",1,Addressing::IndirectX  },    //1
                              {"---",1,Addressing::Unknown    },    //2
                              {"SLO",1,Addressing::IndirectX  },    //3
                              {"---",1,Addressing::Unknown    },    //4
                              {"ORA",1,Addressing::ZeroPage   },    //5
                              {"ASL",1,Addressing::ZeroPage   },    //6
                              {"SLO",1,Addressing::ZeroPage   },    //7
                              {"PHP",1,Addressing::Implied    },    //8
                              {"ORA",1,Addressing::Immediate  },    //9
                              {"ASL",1,Addressing::Accumulator},    //A
                              {"ANC",1,Addressing::Immediate  },    //B
                              {"---",1,Addressing::Unknown    },    //C
                              {"ORA",1,Addressing::Absolute   },    //D
                              {"ASL",1,Addressing::Absolute   },    //E
                              {"SLO",1,Addressing::Absolute   },    //F
                              {"BPL",1,Addressing::Relative   },    //10
                              {"ORA",1,Addressing::IndirectY  },    //11
                              {"---",1,Addressing::Unknown    },    //12
                              {"SLO",1,Addressing::IndirectY  },    //13
                              {"---",1,Addressing::Unknown    },    //14
                              {"ORA",1,Addressing::ZeroPageX  },    //15
                              {"ASL",1,Addressing::ZeroPageX  },    //16
                              {"SLO",2,Addressing::ZeroPageX  },    //17
                              {"CLC",1,Addressing::Implied    },    //18
                              {"ORA",3,Addressing::AbsoluteY  },    //19
                              {"---",1,Addressing::Unknown    },    //1A
                              {"SLO",3,Addressing::AbsoluteY  },    //1B
                            };


  }


} // end namespace Nessi :: Disassembler
