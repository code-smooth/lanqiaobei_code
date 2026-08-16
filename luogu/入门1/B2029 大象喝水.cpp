#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int h,r;
    double pai = 3.14;
    cin>>h>>r;
    double v = pai*r*r*h;
    double water_v = 20*1000.0;

    double ans = water_v/v;
    cout<<ceil(ans);
    return 0;
}