//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    if(x>0&&x%2==0) {
        cout<<"The number is Positive and Even";
    }else if(x>0&&x%2!=0) {
        cout<<"The number is Positive and Odd";
    }else if(x<0&&x%2==0) {
        cout<<"The number is Negative and Even";
    }else if(x<0&&x%2!=0) {
        cout<<"The number is Negative and Odd";
    }else {
        cout<<"The number is Zero and it wouldNot be neither Even and Odd";
    }
    return 0;
}