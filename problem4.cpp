//
// Created by Otabek Goziyev on 19/09/24.
//
#include <iostream>
int main() {
    using namespace std;
    int x,y;
    cout<<"Enter the value of x :"<<endl;
    cin>>x;
    cout<<"Enter the value of y :"<<endl;
    cin>>y;
    if(x%y==0) {
        cout<<x<<" is divisible by "<<y<<endl;
    }else if(x%y!=0){
        cout<<x<<" is NOT divisible by "<<y<<endl;
    }else {
        cout<<"Sorry, "<<x<<" might be any stranger number which I do NOT understand "<<y<<endl;
    }
}