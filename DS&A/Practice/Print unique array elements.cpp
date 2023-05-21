#include<iostream>
using namespace std;
/*This C++ program takes the size of an array as input and checks if it is greater than 5.
If the size is greater than 5, it prompts the user to input the values of the array.
It then iterates over the array elements and prints the unique elements in the array.
If a duplicate element is found, it sets the flag variable to 1.
Finally, it prints any elements in the auxiliary array b and displays a message indicating whether the array is already unique or not.
If the size is less than or equal to 5, it outputs an error message indicating an invalid array size.*/
int main(){

    int n;

    int x=0;
    int flag =0;

    cout<<"Input the array size greater than 5: ";
    cin>>n;

    if(n>5){

        int a[n];
        int b[x];
        cout<<"Input the array value: ";
            for(int i =0; i<n;i++){
                cin>>a[i];
            }

        for(int i = 0; i<n; i++){
                int j;
            for( j=0; j<i;j++){
                if(a[i]==a[j]){
                   flag =1;
                   break;
                }
            }
            if(i==j){
                cout<<a[i]<<" ";
            }
        }

        for(int i=0; i<x; i++){
            cout<<b[i]<<" ";
        }

        if(flag==0){

            cout<<"array already unique";


        }














    }

    else{
        cout<<"Invalid !!! Array size is less than 5";
    }




















    return 0;
}
