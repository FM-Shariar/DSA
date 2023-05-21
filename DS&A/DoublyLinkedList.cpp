#include <iostream>
using namespace std;
class Node{
    public:
        Node* prev;
        int value;
        Node* next;
        Node(){
            prev= NULL;
            value = 0;
            next = NULL;
        }
};
class DoublyLinkedList{
    public:
        Node* head;
        Node* tail;
        DoublyLinkedList(){
            head= NULL;
            tail = NULL;
        }
        void Add(int x){
            Node* nn = new Node();
            nn->value = x;
            if(head == NULL){
                head = nn;
                tail = nn;
            }
            else{
                tail->next = nn;
                nn->prev = tail;
                tail = nn;
            }
        }
        void PrintForward(){
            Node* tmp = head;
            while(tmp != NULL){
                cout << tmp->value<< " ";
                tmp = tmp->next;
            }
        }
        void PrintBackward(){
            Node* tmp = tail;
            while(tmp !=NULL){
                cout<< tmp->value << " ";
                tmp = tmp->prev;
            }
        }

        void Delete(int v){
            Node* temp=head;
            if(head->value == v){
                head = head->next;
                head->prev = NULL;
                return;
            }
            if(tail->value == v){
                tail = tail->prev;
                tail->next = NULL;
                return;
            }
            while(temp != NULL){
                if(temp->value == v){
                    temp->prev->next = temp->next;
                    temp->next->prev = temp->prev;

                }

                temp= temp->next;
            }
        }

};

int main()
{
    DoublyLinkedList ll;
    ll.Add(10);
    ll.Add(20);
    ll.Add(30);
    ll.Add(40);
    ll.Add(50);
    //ll.Delete(10);
    //ll.Delete(50);
    ll.Delete(30);
    ll.PrintForward();
    cout <<endl;
    ll.PrintBackward();

    return 0;
}
