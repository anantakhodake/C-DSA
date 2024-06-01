#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;
    // using for loop
    // int count = 1;
    // for(int i = 1; i <= n ; i++){
    //     for(int j = 1 ; j<=n ; j++){
    //         cout << count << " " ;
    //         count = count +1 ;
    //     }
    //     cout << endl;
    // }

    // using while loop 
    int i = 1 ;
    int count = 1 ;

    while(i<= n){
        int j = 1 ;
        while(j<=n){
            cout << count << " ";
            count = count +1 ;
            j = j+1 ;
        }
        cout << endl;
        i = i+1;
    }
}