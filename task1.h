#include <iostream>
using namespace std;

// --------- TASK 1 ---------
// function which will return given amount of bits with desired shift
// uint32 GetBitsFromUint32(unit32 inputValue, uint8 bitOffset, uint8bitLength);
// right shift

//example:
// uint32 res = GetBitsFromUint32(0xABCDEF12, 4, 12);
// result is: res = 0x00000EF1;


uint32_t GetBitsFromUint32(uint32_t inputValue, uint8_t bitOffset, uint8_t bitLength){
    // shift number
    inputValue >>= bitOffset;
    
    // create mask for getting n last bits
    uint32_t mask = ~0;
    mask <<= bitLength;
    mask = ~mask;

    uint32_t res = inputValue & mask;
    return res;
}