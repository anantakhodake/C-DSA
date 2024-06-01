#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // using for loop 

    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout << i << " ";

        }
        cout << endl;
    }
}