    #include<iostream>
    using namespace std;
    int main(){


    int arr1[10] = {12,32,43,1,54,53,15,64,3,13};

    for(int i =0; i<=9; i++){
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    for(int i=9; i>=0; i--){
        cout<<arr1[i]<<" ";
   }

    return 0;
}