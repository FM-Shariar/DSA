#include<iostream>
using namespace std;
/*This C++ program creates two arrays,
a and b, with initial values.
It then creates a third array, c, with a size of 13.
The program then combines the elements of arrays a and b into array c by copying the elements sequentially.
Finally, it prints the elements of array c in reverse order.*/
int main(){

    int a[5] = {10,20,30,40,50};
    int b[8] = {1,2,3,4,5,6,7,8};

    int c[13];
    int j=0;

    for(int i=0; i<5;i++){
        c[j++] = a[i];
    }

    for(int i=0; i<8;i++){
        c[j++] = b[i];
    }

    for(int i=13-1; i>=0; i--){
        cout<<c[i]<<" ";
    }

    return 0;
}
