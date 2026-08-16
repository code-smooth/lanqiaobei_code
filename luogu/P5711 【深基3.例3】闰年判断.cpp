#include <iostream>
using namespace std;
int main(){
    int n,year;
    cin>>n;

    if(n %4 ==0 and n %100 !=0){
        year = 1;
    }
    else if(n %100 ==0 and n %400 ==0){
        year = 1;
    }
    else{
        year = 0;
    }

    cout<<year;
    return 0;
}