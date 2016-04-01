#include <string>

#include "arm_helper.hpp"

namespace arm
{
  medusa::u32 RegisterFromValue(char const* pRegTypeName, medusa::u32 RegVal)
  {
    static const std::string GPR32 = "GPR32";
    medusa::u32 RegId = 0;
    if (GPR32 == pRegTypeName)
    {
      switch (RegVal)
      {
      case  0: return ARM_RegR0;
      case  1: return ARM_RegR1;
      case  2: return ARM_RegR2;
      case  3: return ARM_RegR3;
      case  4: return ARM_RegR4;
      case  5: return ARM_RegR5;
      case  6: return ARM_RegR6;
      case  7: return ARM_RegR7;
      case  8: return ARM_RegR8;
      case  9: return ARM_RegR9;
      case 10: return ARM_RegR10;
      case 11: return ARM_RegR11;
      case 12: return ARM_RegR12;
      case 13: return ARM_RegR13;
      case 14: return ARM_RegR14;
      case 15: return ARM_RegR15;
      default: break;
      }
    }

    return 0;
  }
}