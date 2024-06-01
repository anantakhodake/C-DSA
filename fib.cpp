#include<iostream>
using namespace std;

int main(){
    // first we take an input 
    int n;

    cin >> n;

    int a = 0;

    int b = 1;

    cout << a << " " << b << " " ;


    for(int i = 1 ; i<=n ; i++){
        
       int fibNumber = a + b;

        cout << fibNumber << " " ;

        a = b;
        b = fibNumber ;

    }

}