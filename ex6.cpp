#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout<<"a has least marks";
    }
    else if(b<=a && b<=c){
        cout<<"b has least marks";
    }
    else{
        cout<<"c has least marks";
    }
}