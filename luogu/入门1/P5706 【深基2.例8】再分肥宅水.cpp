#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double t,ans=0;
    int n;

    cin >>t>>n;

    int cups = n*2;
    ans = t/n;

    cout <<setprecision(3)<<fixed<<ans<<endl;
    cout <<cups;
   
    return 0;
}