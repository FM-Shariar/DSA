#include<iostream>
using namespace std;
/*This C++ program initializes a 2D array a with values.
It then prints an L-shaped pattern from the array.
It iterates over the rows and columns of the array and checks if the column index is 0 or the row index is 3.
If the condition is satisfied, it prints the corresponding element.
This results in printing the elements in the leftmost column and the bottom row of the array.*/
int main()
{
        int a[4][4] = {

                {45,64,132,88},
                {65,39,44,13},
                {42,31,21,50},
                {61,53,37,55}

        };

        cout<<"The L-Shape array is : \n"<<endl;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){

                if(j==0 || (i==4-1 )){

                    cout<<a[i][j]<<" ";
                }

            }
            cout<<endl;
        }
    return 0;
}
