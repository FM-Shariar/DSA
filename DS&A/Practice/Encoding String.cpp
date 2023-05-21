#include<iostream>
using namespace std;

/*This C++ program takes a string and an integer j as input,
and applies a specific encoding to the string.
The encode function increments the ASCII value of every j-th and upcomming character in the string by 2.
The encoded string is then returned.
The program prompts the user to enter a string and the value of j,
and displays the converted string as output.*/


string encode(string s, int j){
  int k=0;
 for(int i=0; i<s.size(); i++){
    if(k==j){
      s[i]+=2;
      k=0;
      k--;
    }
    k++;
  }
  return s;
}

int main(){

  string s;

  int j;

  cout << "Enter the string : ";
  getline(cin,s);

  cout <<"Enter the value of J : ";
  cin>> j;

  int size= s.size();
  cout << "Converted String : ";
 cout << encode(s,j-1)<<endl;

}
