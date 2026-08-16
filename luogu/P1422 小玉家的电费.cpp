#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int total;
    cin>>total;
    double total_price = 0;
    
    if( total <= 150){
        total_price = total * 0.4463;
        cout<<fixed<<setprecision(1)<<total_price<<endl;
    }
    else if( total>=151 and total<=400){
        total_price = 150 * 0.4463 + (total - 150) * 0.4663;
        cout<<fixed<<setprecision(1)<<total_price<<endl;
    }
    else{
        total_price = 150 * 0.4463 + 250 * 0.4663 + (total - 400) * 0.5663;
        cout<<fixed<<setprecision(1)<<total_price<<endl;
    }
    return 0;
}