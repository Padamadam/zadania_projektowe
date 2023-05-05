#include "task1.h"

int main(){
    uint32_t inputValue = 0xABCDEF12;
    uint8_t bitOffset = 4;
    uint8_t bitLength = 12;
    
    uint32_t res = GetBitsFromUint32(inputValue, bitOffset, bitLength);
    cout << hex << res << endl;
    return 0;
}
