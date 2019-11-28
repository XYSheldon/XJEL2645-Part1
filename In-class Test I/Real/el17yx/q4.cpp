#include "q4.h"
#include <iostream>
// Add any required libraries above

std::string jmp_mnemonic(std::bitset<16> instruction) {
    std::bitset<3> jump(0);
    jump[0]=instruction[0];
    jump[1]=instruction[1];
    jump[2]=instruction[2];
    
    unsigned long jumps=jump.to_ulong();
    switch(jumps)
    {
        case 0 : return "null";
        case 1 : return "JGT";
        case 2 : return "JEQ";
        case 3 : return "JGE";
        case 4 : return "JLT";
        case 5 : return "JNE";
        case 6 : return "JLE";
        case 7 : return "JMP";
    };
    return "null";
}