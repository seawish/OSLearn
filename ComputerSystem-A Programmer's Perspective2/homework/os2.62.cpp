//
// Created by zsb on 17/8/30.
//
#include <iostream>
using namespace std;

/**
 * 是否是逻辑位移
 * @return
 */
int int_shifts_are_logical() {
    int x = (~0);
    x >>= 1;
    return !!(~x);
}

int unsigned_shifts_are_logical() {
    unsigned int x = (~0);
    x >>= 1;
    return !!(~x);
}

int main() {
    cout << int_shifts_are_logical() << endl;
    cout << unsigned_shifts_are_logical() << endl;
}