#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b&&b==c)cout<<"equilateral";
    else if(a==b || b==c || c==a)cout<<"isosceles";
    else cout<<"scalene";
}