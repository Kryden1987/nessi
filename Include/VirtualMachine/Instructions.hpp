#ifndef INSTRUCTIONS_HPP
#define INSTRUCTIONS_HPP



namespace Nessi :: VirtualMachine
  {

  class Instructions
    {
    public:

    Instructions()
      {

      }

    private:

    void Opcode_00_BRK(void);
    void Opcode_01_ORA(void);
    void Opcode_03_SLO(void);
    void Opcode_05_ORA(void);
    void Opcode_06_ASL(void);
    };










  } // end namespace  Nessi :: VirtualMachine


#endif // INSTRUCTIONS_HPP
