#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int samllest = min(a,min(b,c));
    int largest = max(a,max(b,c));
    int middle = a+b+c-samllest-largest;

    if (samllest + middle > largest){
        if( samllest * samllest + middle * middle == largest * largest){
        cout<<"Right triangle"<<endl;
    }

        else if( samllest * samllest + middle * middle > largest * largest){
        cout<<"Acute triangle"<<endl;
    }

        else if( samllest * samllest + middle * middle < largest * largest){
        cout<<"Obtuse triangle"<<endl;
    }

    
        if( samllest == middle and middle == largest){
        cout<<"Isosceles triangle"<<endl<<"Equilateral triangle";
        }
        else if( samllest == middle or middle == largest){
        cout<<"Isosceles triangle"<<endl;
    
    }

    }
    else {
        cout<<"Not triangle"<<endl;
    }
    


    
    return 0;
}