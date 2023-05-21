#include<iostream>
using namespace std;

void testFunc(){


        int n,fact =1;
        bool is_prime = true;

        cout<<"Enter a positive integer: ";
        cin>>n;

         if(n==0 || n==1){

         is_prime = false;

         }

        
        for(int i=2;i<=n/2; i++){

        if(n%i == 0){

            is_prime=false;
            break;
        }
                         }

        if(is_prime){
       
        for(int i= 1; i<=n; i++){
            fact =fact*i;
        }

        cout<<fact<<endl;

        }

        else cout<<"Error! not a prime number";

}

        int main(){

        testFunc();


        return 0;
}