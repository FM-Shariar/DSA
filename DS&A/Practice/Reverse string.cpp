#include<bits/stdc++.h>
using namespace std;
/*This C++ program takes a string as input and reverses the order of the words in the string.
The program defines a function reverse that modifies the input string s by reversing the order of the words.
It iterates over the characters of the string,
accumulating each word in a temporary variable temp. When a space is encountered,
the accumulated word is prepended to the new_string variable.
Finally, the modified s is printed.*/
void reverse(string &s){


    string new_string = "";
        string temp ="";


    for(int i=0; i<s.size();i++){
            if(s[i]!=' '){
                temp += s[i];
            }

            else{
                new_string= temp +" "+new_string;
                temp ="";
            }
        }

            new_string = temp+" "+ new_string;


          s=new_string;


}


int main(){

        string s;


        getline(cin,s);


        cout<<s<<endl;
        reverse(s);
        cout<<s<<endl;



    return 0;
}
