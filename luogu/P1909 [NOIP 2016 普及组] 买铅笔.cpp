#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n;
   long long a_num,a_price;
   long long b_num,b_price;
   long long c_num,c_price;

    cin>>n;
    cin>>a_num>>a_price;
    cin>>b_num>>b_price;
    cin>>c_num>>c_price;


    long long a_totalnum =0 ,a_pennum =0;
    long long b_totalnum =0 ,b_pennum = 0;
    long long c_totalnum =0 ,c_pennum = 0;

    while (a_pennum<n){
        a_totalnum ++;
        a_pennum = a_pennum + a_num ;
    }
    while (b_pennum<n){
        b_totalnum ++;
        b_pennum = b_pennum + b_num ;
    }
    while (c_pennum<n){
        c_totalnum ++;
        c_pennum = c_pennum + c_num ;
    }

    long long a_totalprice = a_totalnum * a_price;
    long long b_totalprice = b_totalnum * b_price;
    long long c_totalprice = c_totalnum * c_price;

    long long minprice = min(a_totalprice,min(b_totalprice,c_totalprice));

    cout<<minprice;



    return 0;
}