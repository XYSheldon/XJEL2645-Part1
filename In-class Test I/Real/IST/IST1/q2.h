#ifndef Q2_H
#define Q2_H

// DO NOT MODIFY THIS FILE!

// API: Calculates the total resistance of a resistor network
// Params:
// values - contains the resistor values (in ohms)
// n - number of resistors
// type - 's' or 'S' for series and 'p' or 'P' for parallel
// Returns:
// the total resistance of the network
// Notes:
// For an unknown type, return -1.0
// Series - Rt = R1 + R2 + R3...
// Parallel - 1/Rt = 1/R1 + 1/R2 + 1/R3... 
float resistor_network(const float values[], int n, char type);

#endif  // Q2_H