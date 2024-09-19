//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
using namespace std;
int main() {
    int x,y,z;
    cout<<"Enter any three numbers to check what is the largest one!! :\n";
    cin>>x>>y>>z;
    if(x>y&&x>z) {
        cout<<x<<" is the largest number";
    }else if (y>x&&y>z) {
        cout<<y<<" is the largest number";
    }else if(z>x&&z>y){
        cout<<z<<" is the largest number";
    }
    return 0;
}