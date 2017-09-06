//
// Created by zsb on 17/8/30.
//
#include <iostream>
using namespace std;

int any_even_one(unsigned x) {
    return (x & 0x55555555)
}

int main() {
    cout<< any_even_one(0xfffffff0) << endl;
}