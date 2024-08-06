#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){

    for(int i = 0 ;i<n;i++){
        int min = i;
        for(int j =i+1 ; j<n ; j++){
            if(arr[j]<arr[min]){
                min =j;
            }
        }
        int temp = arr[min];
        arr[min]= arr[i];
        arr[i] = temp;
    }
      for(int i = 0; i<n; i++){
        cout << arr[i]<< " ";
    }
}

int main () {
    int arr[] = {10,30,56,87,65};
    int n = sizeof(arr[n]);
    selection_sort(arr,n);
    return 0;

}