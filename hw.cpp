#include<iostream>

using namespace std ;

int main (){

    // question 1

    for( int i = 0 ; i<= 15 ; i += 2){

        cout << i << " ";

        if( i & 1){
            continue;
        }

        i++ ;
    }
}