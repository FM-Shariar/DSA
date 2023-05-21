#include<iostream>
using namespace std;
/*This C++ program initializes an array a with 10 elements.
It prompts the user to input a number to search for.
It then iterates over the elements of the array and counts the occurrences of the input number.
The count is incremented each time the input number is found in the array.
Finally, it displays the count indicating how many times the input number occurs in the array.*/
int main(){

    int n;
    int count = 0;

    int a[10] = {8,4,6,1,6,9,6,1,9,8};

    cout<<"Input a number to search: ";
    cin>>n;

    for(int i=0; i<10;i++){
        if(a[i]==n){
            count++;
        }
    }

    cout<<"The number occurs "<<count<<" times in the array";
    return 0;
}
