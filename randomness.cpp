//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main() {
    srand(time(0));
    int num=100+rand()%101;
    cout<<num<<endl;
    return 0;
}