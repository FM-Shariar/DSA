#include<iostream>
using namespace std;

int main(){


    int arr[100] = {10,55,65,15};
    int size = 4;


    

    for(int i= size ; i>0;i-- ){
        arr[i]= arr[i-1];

    }

    arr[0]= 75;
    size++;

    for(int i=size; i>3; i--){

          arr[i]= arr[i-1];

    }
        arr[3] = 99;
        size++;

    cout<<"The array is after insertion: ";
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }








    return 0;
}