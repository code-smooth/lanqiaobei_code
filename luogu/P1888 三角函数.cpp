#include <iostream>
#include <algorithm>
int gcd(int a,int b){            //自定义：求最大公约数
    if(b==0) return a;
    else{
        return gcd(b,a%b);
    }
}
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;


    int maxlenth = max(a,max(b,c));
    int minlenth = min(a,min(b,c));
    
    int g  = gcd(maxlenth,minlenth);     //求最大公约数



    cout<<minlenth/g<<"/"<<maxlenth/g;

    
    return 0;
}