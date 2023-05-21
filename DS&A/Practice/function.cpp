    #include<iostream>
    using namespace std;



    void testFunction(int m, int n){


           if(n>m){


             for(int i=m; i<=n; i++){
                if(i%2!=0){
                    cout<<i<<" ";
                }
            }
           }

           else{
            cout<<"Maximum number is less than minimum number"<<endl;
           }        

}

            int main(){

            int m,n;

            cout<<"Minimum Value: ";
            cin>>m;

            cout<<"Ending Value: ";
            cin>>n;

                testFunction(m,n);
                
            return 0;

        }