#include<iostream>
using namespace std;
int main(){
    cout<<"entr the char: ";
    char ch;
    cin>>ch;
    if(ch>='0' && ch<='9'){
        cout<<"its a number";
    }
    else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<"its a alphabet";
    }
    else{
        cout<<"its a special char";
    }
}