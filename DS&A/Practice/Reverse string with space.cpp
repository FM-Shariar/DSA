#include<bits/stdc++.h>
using namespace std;
/*This C++ program takes a string as input and creates a new string by reversing the order of the words in the original string.
The program iterates over the characters of the string, accumulating each word in the temporary variable temp.
When a space is encountered, the accumulated word is prepended to the new_string variable.
Finally, the modified string new_string is displayed as output.*/

int main(){

        string s;

        string new_string = "";
        string temp ="";

        cout<<"Input String: ";
        getline(cin,s);

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


            cout<<"New String:"<<new_string<<endl;


    return 0;
}
