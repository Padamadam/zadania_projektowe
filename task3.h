#include <vector>
#include <string>
#include <sstream>
#include <bitset>

#include <iostream>
using namespace std;

// --------- TASK 3 ---------


// Extract bool vector from overloaded function
// std::vector<bool> GetBitsVector(std::string inputValue);
// std::vector<bool> GetBitsVector(uint32 inputValue);

// usage:
// std::vector<bool> res = GetBitsVector(149);
// or
// std::vector<bool> res = GetBitsVector(0x95);
// or
// std::vector<bool> res = GetBitsVector("0x95");
// expected result (index 0 = LSB)

// res = {true, false, true, false, true, false, false, true, ...}


vector<bool> GetBitsVector(string inputValue){
    vector<bool> res;
    stringstream ss;
    ss << hex << inputValue;
    uint32_t n;
    ss >> n;
    bitset<32> b(n);
    string bstr = b.to_string();
    string::iterator it;
      
    for (it = bstr.begin(); it != bstr.end(); ++it) {
        if(*it == '1') res.push_back(true);
        else res.push_back(false);
    }
    return res;
}
