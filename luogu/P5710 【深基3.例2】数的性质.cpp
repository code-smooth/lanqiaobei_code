#include <iostream>

using namespace std;
int main(){
    int x;
    cin>>x;
    int a=0,b=0,c=0,d=0;
    int p1,p2;

    if(x%2 ==0){  p1 = 1;}
    else{  p1 = 0;}
    if(x > 4 and x <= 12){  p2 = 1;}
    else{  p2 = 0;}

    if(p1 == 1 and p2 == 1){ a = 1;}
    if(p1 == 1 or p2 == 1){ b = 1;}
    if(p1 == 0 and p2 == 0){ d = 1;}
    if(p1 ==1 ^ p2 == 1){ c = 1;}

    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}

