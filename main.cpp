#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

void executeTask1(){
    uint32_t inputValue = 0xABCDEF12;
    uint8_t bitOffset = 4;
    uint8_t bitLength = 12;
    
    uint32_t res = GetBitsFromUint32(inputValue, bitOffset, bitLength);
    cout << hex << res << endl;
}

void executeTask2(){
    const char* inputValue = "0xABCDEF12";
    uint8_t bitOffset = 4;
    uint8_t bitLength = 12;
    
    uint32_t res = GetBitsFromStr(inputValue, bitOffset, bitLength);
    cout << hex << res << endl;
}

void executeTask3(){
    string inputValue = "0x95";
    vector<bool> res = GetBitsVector(inputValue);
    cout << "{";
    for (unsigned int i = res.size()-1; i > 0; --i){
        if (res[i]) cout << "true";
        else cout << "false";
        cout << ' ';
    }
    cout << "}" << endl;
}

int main(){
    executeTask1();
    cout << "Task1 finished" << endl;
    executeTask2();
    cout << "Task2 finished" << endl;
    executeTask3();
    cout << "Task3 finished" << endl;

    return 0;
}
