#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    // here we can use for this pattern using for loop 
    // for(int i = 1 ; i <=n ; i++){
    //     for(int j = 1 ; j <= i ; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // here we can use while loop for this pattern

    int i = 1;
    while(i <= n){
        int j = 1;
        while(j<=i){
            cout << "*" << " ";
            j = j+1 ;
        }
        cout << endl;
         i = i+1;
    }
}