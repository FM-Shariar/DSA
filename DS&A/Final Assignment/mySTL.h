#include<iostream>
using namespace std;
template <class type>
class Node
{

    public:

    type data;
    Node *next;
    Node *prev;
    Node *left;
    Node *right;

    Node()
    {

        data  = -1;
        next  = NULL;
        prev  = NULL;
        left  = NULL;
        right = NULL;

    }

    Node(type x)
    {
        data = x;
    }

};


//Single Linked list Class
template <class type>
class SingleLinkedList
{

    public:
    Node<type> *head;
    Node<type> *tail;

    SingleLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertAtLast(type newdata)
    {

        Node<type> *newnode = new Node<type>();
        newnode->data = newdata;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;


        }

        Node<type> *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;

    }

    void insertAtFirst(type newdata)
    {

        Node<type> *newnode = new Node<type>();
        newnode->data = newdata;
        newnode->next = head;
        head = newnode;

    }

    void insertAtAnyPos(type place,type newdata)
    {
        if (place == 1)
        {
            return insertAtFirst(newdata);
        }
        Node<type> *newnode = new Node<type>();
        newnode->data = newdata;
        Node<type> *temp = head;
        for (int i = 0; i < place - 2; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;

    }

    void insertBeforeElement(type olddata, type newdata)
    {

        Node<type> *temp = head;

        int position =1;
        int check = 0;
        while(temp!=NULL)
            {

          if(temp->data==olddata)
            {
                check = 1;
                break;
            }
          else{
            temp=temp->next;
            position++;
          }
        }

        if(check==1)
            {
        insertAtAnyPos(position,newdata);
        }

        else{
        cout << "Data not found before "<<olddata<<endl;
        }

    }

    void deleteElementByValue(type key)
    {

        Node<type>* temp = head;
        Node<type>* prev = NULL;
        if(head->data == key)
        {
            head = head->next;
            return;
        }
        while(temp != NULL)
        {
            if(temp->data == key)
            {
                prev->next = temp->next;
                if(tail == temp)
                {
                    tail = prev;

                }

                }
                prev=temp;
                temp = temp->next;
            }

    }

    void deleteAtPos(int pos)
    {

        if (head == NULL)
            {
                cout << "No Data Found " << endl;
            return;
            }
            Node<type>* temp = head;
            if (pos == 1)
            {
                head = temp->next;
                delete temp;
            return;
            }
            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }
            Node<type>* temp2 = temp->next;
            temp->next = temp2->next;
            return;

    }

    void displayList ()
    {

        Node<type> *temp = head;
        cout<<"The element of Single Linked list: "<<endl;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout<<endl;
    }

};

//Doubly Linked List Class
template <class type>
class DoubleLinkedList
{

    public:

        Node<type>* head;
        Node<type>* tail;

        DoubleLinkedList()
        {
            head=NULL;
            tail=NULL;
        }

    void insertAtLast(type key)
    {

        Node<type>* nn = new Node<type>();
        nn->data = key;
        if(head == NULL){

            head = nn;
            tail = nn;

            }

        else
            {
            tail->next = nn;
            nn->prev = tail;
            tail = nn;
            }
        }

    void insertAtFirst(type key)
    {

        Node<type>* nn = new Node<type>();

            nn->data = key;

            if(head == NULL)
            {
                head = nn;
                tail = nn;
            }

            else
            {
               nn->next = head;
               head->prev = nn;
               head = nn;
            }
        }

    void inserAtAnyPos(int pos, type key)
    {

        Node<type>* newnode = new Node<type>();

            newnode->data = key;

            if (pos == 1)
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;

                return;
            }

            Node<type>* temp = head;

            for (int i = 1; i < pos - 1; i++)
            {
                temp = temp->next;
            }

            newnode->next = temp->next;
            newnode->prev = temp;
            Node<type>* temp2 = temp->next;
            temp2->prev = newnode;
            temp->next = newnode;
        }


    void insertBeforeElement(type olddata, type newdata)
    {

        Node<type> *temp = head;

        int position =1;
        int check = 0;
        while(temp!=NULL){
        if(temp->data==olddata)
            {
                 check = 1;
                break;
            }

          else{

            temp=temp->next;
            position++;

             }

         }

        if(check==1)
        {

        inserAtAnyPos(position,newdata);

        }

    else{

        cout << "Data not found before "<<olddata<<endl;

    }

    }

    void deleteElementByValue(type key)
    {

            Node<type>* temp = head;
            Node<type>* prev1 =NULL;
            Node<type>* front1 =NULL;

            if(head->data == key)
            {

                head = head->next;
                head->prev = NULL;
                return;

            }

            while(temp != NULL)
            {
                if(temp->data == key)
                {

                    prev1->next = temp->next;
                    front1 = temp->next;
                    front1->prev=prev1;
                    if(tail == temp)
                    {
                        tail = prev1;
                        tail->next = NULL;
                    }

                }

                prev1=temp;
                temp = temp->next;
            }

        }

    void deleteAtPos(int n)
    {

            if (head == NULL)
            {
                cout << "Empty Doubly Linked list " << endl;
                return;

            }

            Node<type>* temp = head;
            if (n == 1)

            {
                head = temp->next;
                head->prev = NULL;
            return;
            }

            for (int i = 1; i < n - 1; i++)
            {
                temp = temp->next;
            }

            Node<type>* temp2 = temp->next;
            temp->next = temp2->next;
            Node<type>* temp3 = temp2->next;
            temp3->prev = temp2;
            return;

        }

    void displayList()
    {
            Node<type>* temp = head;
            cout<<"The element of Doubly Linked list: "<<endl;
            while(temp != NULL)
            {
                cout << temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

    };


//Stack Class
template <class type>
class Stack{

        public:

        Node <type>* top;
        int size;

        Stack(){

            top = NULL;
            size = 0;

        }

        void Push(int x){

            Node<type>* nn = new Node<type>(x);
            nn->next = top;
            top =nn;
            size++;
            nn = top;

        }

        void pop()
        {

            if(top == NULL)
            {
                cout<<"Stack is empty. "<<endl;
                return;
            }

            Node<type>* res = top;
            top = top->next;
            size--;

        }

        void Top()
        {

            if(top==NULL)
            {
                cout<<"Stack is empty."<<endl;
                return;
            }

            else
            {
                cout<<"Top element is: "<<top->data<<endl;
            }

        }

    };

//Queue Class
template <class type>
class Queue
{

    public:

    Node <type>* front;
    Node <type>* rear;

    Queue()
    {

        front = NULL;
        rear  = NULL;
    }

    void enqueue(type x)
    {

        Node <type>* n = new Node<type>(x);

        if(front == NULL)
        {

            front=rear=n;
            return;
        }

        rear->next = n;
        rear = n;

    }

    void dequeue()
    {

         if(front == NULL)
        {
            cout<<"Queue is already empty"<<endl;
            return;
         }

         Node<type> *todelete = front;
         front = front->next;
         delete todelete;

    }

    void Front()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            cout<<"Front element of queue is: "<<front->data<<endl;
        }
    }

    void Rear(){
        if(rear==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        else
        {
            cout<<"Rear element of queue is: "<<rear->data<<endl;
        }
    }

    };

//BST Class
template <class type>
class BST{

    public:
    Node<type>* root;

    BST()
    {
        root = NULL;
    }

    void insertBST(type x)
    {
        Node <type> *nn = new Node <type>();
        nn->data = x;

        if(root==NULL)
        {
            root = nn;
        }
        else
        {
            Node <type> * curr= root;
            Node <type> * p = NULL;

            while(curr!=NULL)
                {
                p = curr;
                if(x<p->data)
                {
                    curr = p->left;
                }
                else
                {
                    curr= p->right;
                }
            }

            if(x<p->data)
            {
                p->left = nn;
            }
            else
            {
                p->right = nn;
            }
        }
    }

    Node<type>* searchInBST(Node <type> *root, type key){

        if(root == NULL)
        {

            return NULL;
        }

        if(root->data == key)
        {

            return root;
        }

        if(root->data > key)
        {

            return searchInBST(root->left, key);
        }

        return searchInBST(root->right,key);
    }

    void displayInorder(Node <type> *node)
    {
        if(node==NULL){
            return;
        }

        displayInorder(node->left);
        cout<<node->data<<" ";
        displayInorder(node->right);
    }

    void displayPostorder(Node <type>* node){

        if(node==NULL)
        {
            return;
        }
        displayPostorder(node->left);
        displayPostorder(node->right);
        cout<<node->data<<" ";
    }

    void displayPreorder(Node <type>* node)
    {

        if(node==NULL)
        {
            return;
        }
        cout<<node->data<<" ";
        displayPreorder(node->left);
        displayPreorder(node->right);

    }

};

