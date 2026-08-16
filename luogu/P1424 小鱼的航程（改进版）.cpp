#include <iostream>
using namespace std;
int main(){
    int x,n;
    cin>>x>>n;
    int total_distance = 0;
    for(int i=x;i<x+n;i++){
        if((i+1)%7 !=0 and i%7 !=0){
            total_distance = total_distance + 250;
        }
        
    }
    cout<<total_distance<<endl;
    return 0;
}