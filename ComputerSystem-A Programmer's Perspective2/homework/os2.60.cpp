//
// Created by zsb on 17/8/30.
//

#include <iostream>

using namespace std;

unsigned replace_byte(unsigned x, unsigned char b, int i) {
    return (x & (~(0xFF << (i << 3)))) | (b << (i << 3));
}

int main() {
    cout << hex << replace_byte(0x12345678, 0xAB, 2) << endl;
    cout << hex << replace_byte(0x12345678, 0xAB, 0) << endl;

//    unsigned char b = 0xab;
//    cout << hex << (b<<(3<<3))<<endl; // 只能偏移4个字节

}