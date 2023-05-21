#include<iostream>
using namespace std;
/*This C++ program initializes a 2D array a with values.
It then prints the array in a specific pattern where only the elements on the main diagonal and the anti-diagonal are displayed,
and the rest of the elements are replaced with empty spaces.
The program iterates over the rows and columns of the array.
If the current element is on the main diagonal (where i is equal to j) or on the anti-diagonal (where i + j is equal to 3),
it prints the element. Otherwise, it prints an empty space.*/
int main()
{
    int a[4][4] =
    {
        {45,64,132,88},
        {65,39,44,13},
        {42,31,21,50},
        {61,53,37,55}

    };


    cout<<"The 2D array is : \n"<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {

            if(i==j || i+j==3)
            {

                cout<<a[i][j]<<" ";
            }

            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}

