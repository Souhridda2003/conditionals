#include<iostream>
using namespace std;
int main(){
    float x,y;
    cin>>x>>y;
    if(x==0 &&y==0){
        cout<<"in origin";
    }
    else if(x==0 && y!=0){
        cout<<"in y-axis";
    }
    else if(x!=0 && y==0){
        cout<<"in x-axis";
    }
    else{
        cout<<"on plane";
    }
}