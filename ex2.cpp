#include<iostream>
using namespace std;
int main(){
    cout<<"entr the year :";
    int y;
    cin>>y;
    if(y%4==0){
        cout<<"yes it is leap year";
    }
    else{
        cout<<"no it is not leap year";
    }
}