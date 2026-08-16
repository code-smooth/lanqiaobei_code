#include <iostream>
#include <string>
using namespace std;

int main(){
    int len=0;
    string s;

    cin >>s;
    len = s.length();
    for(int i =len-1;i>=0;i--){
        cout <<s[i];
    } 
    return 0;
}