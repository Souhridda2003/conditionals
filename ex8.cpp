#include<iostream>
using namespace std;
int main(){
    cout<<"enter points(x1,x2)";
    int x1,y1;
    cin>>x1>>y1;
    cout<<"enter points(x2,y2)";
    int x2,y2;
    cin>>x2>>y2;
    cout<<"enter points(x3,y3)";
    int x3,y3;
    cin>>x3>>y3;
    int slope1=y1-y2/x1-x1;
    int slope2=y2-y3/x2-x3;
    // int slope3=y3/x3;
    if(slope1==slope2){
        cout<<"it is in same line";
    }
    else{
        cout<<"it is not in same line";
    }
}