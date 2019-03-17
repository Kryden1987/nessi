#ifndef DISASSEMBLER_HPP
#define DISASSEMBLER_HPP



namespace Nessi :: Disassembler
  {
  enum class Addressing
    {
    Immediate,
    Absolute,
    ZeroPage,
    Accumulator,
    Implied,
    AbsoluteX,
    AbsoluteY,
    ZeroPageX,
    ZeroPageY,
    Indirect,
    IndirectX,
    IndirectY,
    Relative,
    Unknown,
    };


  struct Instruction
    {
    const char* name;
    Addressing  addresing;
    char        length;
    };

  class Disassembler
    {
    public:

    Disassembler();

    private:

    Instruction InstructionTable[];
    };




  } // end namespace Nessi :: Disassembler




#endif // DISASSEMBLER_HPP
