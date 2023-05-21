#include<bits/stdc++.h>
using namespace std;
/*This C++ program takes a string as input and encodes
it by incrementing the ASCII value of each non-space character by 2.
The program prompts the user to enter a string,
and then iterates over the characters of the string in reverse order.
If the character is not a space, its ASCII value is incremented by 2.
Finally, the encoded string is displayed as output.*/
int main(){

        string s;

        cout<<"Input String: ";
        getline(cin,s);

        for(int i=s.size()-1;i>=0;i--){
            if(s[i] != ' ')
                    s[i] +=2;

        }

        cout<<"Encoded String: "<<s;

    return 0;
}
