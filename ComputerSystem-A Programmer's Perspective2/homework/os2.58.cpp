//
// Created by zsb on 17/8/30.
//
#include <iostream>
using namespace std;

/**
 * 大端序返回0，小断序返回1
 * @return
 */
int is_little_endian() {
    int x = 1;
    char *p = (char*)&x; //取低地址
    return p[0];
}


int main() {
    cout<<"小端序："<<is_little_endian() << endl;
    return 0;
}