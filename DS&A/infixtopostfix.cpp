#include <iostream>
#include <string>
using namespace std;
class Stack {
    int top; // denotes the empty index of array
    char arr[100]; //collection
    int maxsize; //size of array

    public:
    Stack(){
        maxsize = 100;
        top = 0;
    }
    void push(char element){
        if(top < maxsize){
            arr[top] = element;
            top++;
        }
        else{
            cout << "Stack is Full"<<endl;
        }
    }
    bool isFull(){
        if(top < maxsize){
            return false;
        }
        return true;
    }
    int topIndex(){
        return top;
    }
    char topElement(){
        if(top > 0)
            return arr[top-1];
        else cout <<"Stack empty"<<endl;
    }
    void pop(){
        if(top>0) top--;
        else cout<<"Can't pop stack empty" <<endl;
    }
    void show(){
        for(int i=0;i<top;i++){
            cout<<arr[i] << " ";
        }
        cout <<endl;
    }
};

int getPre(char c){
    if(c =='-'){
        return 2;
    }
    else if(c=='+'){
        return 2;
    }
    else if(c=='*'){
        return 4;
    }
    else if(c=='/'){
        return 4;
    }
    return 0;


}

int main() {
    string infix = "(2*6)/(4-1)+5*(3+6)";
    Stack s;
    string postfix;

    infix.push_back(')');
    s.push('(');
    for(int i=0;i<infix.length();i++){
        char ch = infix[i];
        if(ch >=48 && ch<= 57){ //operand based on ASCII
            postfix.push_back(ch);
        }
        else if(ch == '('){
            s.push(ch);
        }
        else if(ch == ')'){
            while(s.topElement() != '('){
                postfix.push_back(s.topElement());
                s.pop();
            }
            s.pop();
        }
        else{ //operator
            //cout << ch << endl
            if(s.topElement() == '('){
                s.push(ch);
            }
            else{

                    while(getPre(ch) <= getPre(s.topElement())){
                    postfix.push_back(s.topElement());
                    s.pop();
                    }
                s.push(ch);
                }
            }
    }
    if(s.topIndex() != 0){
        while(s.topElement()!= '('){
             postfix.push_back(s.topElement());
             s.pop();
        }
        s.pop();
    }
    cout << postfix;




    return 0;
}
