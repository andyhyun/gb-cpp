#include <cstdint>
#include <iostream>

using Byte = std::uint8_t;
using Word = std::uint16_t;

struct CPU {
    // Registers of the Sharp LR35902
    //
    // Note: considering putting registers into array instead of individual
    //       names, using functions to change a particular register
    Byte A; Byte F;
    Byte B; Byte C;
    Byte D; Byte E;
    Byte H; Byte L;
    Word PC;
    Word SP;
};

int main() {
    return 0;
}
