#include<iostream>
using namespace std;
int main(){
    cout<<"enter the radius: ";
    int r;
    cin>>r;
    float area=3.14*r*r;
    float circumference=2*3.14*r;
    if(area>circumference){
        cout<<"area is greater";
    }
    else{
        cout<<"circumference is greater";
    }
}