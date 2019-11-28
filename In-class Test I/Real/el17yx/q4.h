#ifndef Q4_H
#define Q4_H

#include <string>
#include <bitset>

// DO NOT MODIFY THIS FILE!

// API: Return the Hack assembly language jump mnemonic for a given
// C-instruction
// Params:
// instruction - the 16-bit C-instruction
// Returns:
// A string containing the correct jump mnemonic
// Notes:
// C-instruction format
// 1,1,1,a,c1,c2,c3,c4,c5,c6,d1,d2,d3,j1,j2,j3
// Mnemonics - ensure you use the correct case
// 000 - null
// 001 - JGT
// 010 - JEQ 
// 011 - JGE
// 100 - JLT
// 101 - JNE
// 110 - JLE
// 111 - JMP
std::string jmp_mnemonic(std::bitset<16> instruction);

#endif  // Q4_H