#include <iostream>
using namespace std;
int tree_height[100];
int main(){
    int x;

    for(int i = 0;i<10;i++){
        cin>>tree_height[i];
    }
    cin>>x;

    int ans = 0;
    for(int i = 0;i<10;i++){
        if(x+30 >= tree_height[i]){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}