#include <iostream>
#include <vector>

using namespace std;

void printReverse(const vector<char>& v, unsigned int i) {
    if (i >= v.size()) {
        return;
    }
    printReverse(v, i + 1);
    cout << v[i] << ", ";
}
