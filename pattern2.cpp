#include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
//    here we can use a for loop for this  pattern

    // for(int i = 1; i<= n; i++){
    //     for(int j = 1 ; j <= n ; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // here we can use a while loop for this pattern

    int i = 1 ;
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout << "*" << " ";
            j=j+1;
        }
        cout << endl ;
        i= i + 1 ;
    }
}