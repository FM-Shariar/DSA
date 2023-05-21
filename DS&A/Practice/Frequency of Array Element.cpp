#include<iostream>
using namespace std;
/*This C++ program takes the size of an array and its values as input.
It then finds the frequency of each unique element in the array and displays the result.
The program uses another array called freq to keep track of the frequencies.
It initializes all elements of freq to -1. It then iterates over the array elements,
counting the occurrence of each element and updating the corresponding frequency in the freq array.
4Finally, it prints the elements along with their frequencies if the frequency is not 0.*/
int main(){

    int n, c;

    cout<<"Input the array size: ";
    cin>>n;

    int a[n], freq[n];

    cout<<"Input the value of array: ";

    for(int i=0; i<n; i++){
        cin>>a[i];
        freq[i] = -1;
    }

    for(int i =0; i<n; i++){
        c=1;
        for(int j=i+1; j<n;j++){
            if(a[i]==a[j]){
                c++;
                freq[j] = 0;
            }
        }
        if(freq[i]!= 0){
            freq[i] = c;
        }
    }

    for(int i=0; i<n; i++){
        if(freq[i]!=0){
            cout<<a[i]<<" occurs = " <<freq[i]<<" times"<<endl;
        }
    }


    return 0;
}
