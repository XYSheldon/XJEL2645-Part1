#include "q1.h"

// import any required libraries here

float calculator(float a, float b, char operation) {
    switch (operation)
    {
        case '+' :
            return a+b;
        case '-' :
            return a-b;
        case '*' : 
            return a*b;
        case '/' : 
            return a/b;
        default:
            return a+b;
    }
}