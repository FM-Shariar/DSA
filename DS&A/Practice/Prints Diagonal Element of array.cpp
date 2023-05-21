#include<iostream>
using namespace std;
/*This C++ program initializes a 2D array a with values.
It then prints the diagonal elements of the array.
It iterates over the rows and columns of the array,
and if the row index is equal to the column index,
it prints the corresponding element.
Otherwise, it prints a blank space.*/
int main(){
        int a[4][4] = {
                {45,64,132,88},
                {65,39,44,13},
                {42,31,21,50},
                {61,53,37,55}
        };


        cout<<"The Diagonal of 2D array is : \n"<<endl;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){

                if(i==j){

                    cout<<a[i][j]<<" ";
                }

                else{
                    cout<<" ";
                }

            }
            cout<<endl;
        }

    return 0;
}
