#ifndef REGISTERS_HPP
#define REGISTERS_HPP

namespace Nessi :: Core
  {

  template <typename S>
  class Register
    {
    public:

    Register()
      {

      }

    const S& Get() const
      {
      return value;
      }

    void Set(S value)
      {
      this->value = value;
      }

    private:
    S value;
    };



  } // end namespace Nessi :: Core




#endif // REGISTERS_HPP
