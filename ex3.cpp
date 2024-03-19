#include<iostream>
using namespace std;
int main(){
    cout<<"entr the length: ";
    int l;
    cin>>l;
    cout<<"entr the breadth: ";
    int b;
    cin>>b;
    int area=l*b;
    int perimeter=2*(l+b);
    if(area>perimeter){
        cout<<"area is greater: "<<area;
    }
    else{
        cout<<"perimeter is greater: "<<perimeter;
    }
}