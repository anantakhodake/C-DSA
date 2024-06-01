#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;

// using for loop
    // for(int i = 1 ; i<=n ; i++){
    //     for(int j = 1 ; j <= n ; j++){
    //         char ch = 'A' + i - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl ;
    // }

    // using while loop
    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        char ch = 'A' + i - 1 ;
        while(j<=n){
            cout << ch << " ";
            j = j+1 ;
        }
        cout << endl ;
        i = i+1 ;
    }
}