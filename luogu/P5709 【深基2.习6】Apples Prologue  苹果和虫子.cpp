#include <iostream>
using namespace std;
int main()
{
    int m,t,s;
    cin>>m>>t>>s;
    if(t == 0){
        cout<<0;
        return 0;
    }
    int eaten = s/t;
    if(s%t != 0){
        eaten++;
    }
    if(eaten > m){
        eaten = m;
    }
    
    cout<<m-eaten;
    
    return 0;
}