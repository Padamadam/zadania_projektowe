#include <iostream>
using namespace std;

// --------- TASK2 ---------
//overload function with const char *:

// uint32 GetBitsFromUint32(const char* inputValue, uint8 bitOffset, uint8 bitLength);
// uint32 res = GetBitsFromStr("0xABCDEF12", 4, 12); // pay attention to quotation!
// result shall be the same
// res = 0x00000EF1;

uint32_t GetBitsFromStr(const char* inputValue, uint8_t bitOffset, uint8_t bitLength){

    // convert to uint32_t
    uint32_t hexValue = strtoul(inputValue, NULL, 16);
    // shift number
    hexValue >>= bitOffset;
    
    // create mask for getting n last bits
    uint32_t mask = ~0;
    mask <<= bitLength;
    mask = ~mask;

    uint32_t res = hexValue & mask;
    return res;
}