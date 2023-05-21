#include<iostream>
using namespace std;
/*This C++ program takes the sizes of two arrays as input,
along with their respective values.
It then finds the common elements between the two arrays and stores them in another array c.
The program checks for duplicates in array c to avoid adding the same element multiple times.
Finally, it prints the common elements if there are any,
or outputs "No common elements" if there are none.*/
int main(){

    int n1, n2;
    int i,j;
    int n=0;
    int dup = 0;

    cout<<"Input first array size: ";
    cin>>n1;
    cout<<"Input second array size: ";
    cin>>n2;

    int a[n1],b[n2],c[max(n1,n2)];



    cout<<"Input the value of first array: ";
    for(int i=0; i<n1;i++){
        cin>>a[i];
    }

    cout<<"Input the value of second array: ";
    for(int j=0; j<n2;j++){
        cin>>b[j];
    }

    for(int i = 0; i<n1 ; i++){
        for(int j=0; j<n2; j++){
            if(a[i]==b[j]){
                for(int k=0;k<n2;k++){
                    if(c[k]==b[j]){
                        dup++;
                    }

                }
                if(dup == 0){

                    c[n] =b[j];
                    n++;

                }

            }
        }
    }

    if(n==0){
        cout<<"No common elements";
    }


    else
    {
        cout<<"The Common elements are: ";
        for(int i=0; i<n;i++){
            cout<<c[i]<<" ";
        }
    }
    return 0;
}
