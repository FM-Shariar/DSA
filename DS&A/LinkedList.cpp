#include <iostream>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node(){
            val=0;
            next =NULL;
        }

};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        LinkedList(){
            head=NULL;
            tail=NULL;
        }
        void Add(int x){
            Node* nn = new Node();
            nn->val = x;
            if(head == NULL){
                head = nn;
                tail = nn;
            }
            else{
                tail->next = nn;
                tail = nn;
            }
        }
        void PrintList(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->val<<" ";
                temp = temp->next;
            }
        }
        void Delete(int v){
            Node* temp = head;
            Node* prev =NULL;
            if(head->val == v){
                head = head->next;
                return;
            }


            while(temp != NULL){
                if(temp->val == v){
                    prev->next = temp->next;
                    if(tail == temp){
                        tail = prev;
                    }

                }
                prev=temp;
                temp = temp->next;
            }
        }

};
int main()
{
    LinkedList ll;
    ll.Add(10);
    ll.Add(20);
    ll.Add(30);
    ll.Add(40);
    ll.Add(50);

    ll.Delete(50);
    ll.Add(60);
    ll.PrintList();

    return 0;
}
