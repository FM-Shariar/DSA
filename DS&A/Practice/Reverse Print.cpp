#include<bits/stdc++.h>
using namespace std;
/*This C++ program takes a string as input and prints the reversed version of the string.
It prompts the user to enter a string,
and then iterates over the characters in reverse order and outputs them.*/
int main(){

        string s;
        cout<<"Input String: ";
        getline(cin,s);

        cout<<"Output: ";
        for(int i=s.size()-1; i>=0;i--){
            cout<<s[i];
        }

    return 0;
}
