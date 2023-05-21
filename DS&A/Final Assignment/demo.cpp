#include<iostream>
#include"mySTL.h"
using namespace std;
int main()
{

    //SingleLinkedList
    cout<<"Single Linked List Operation Starts Here - "<<endl;
    SingleLinkedList<int>SL;

    SL.insertAtFirst(10);
    SL.insertAtAnyPos(2,20);
    SL.insertAtAnyPos(3,30);
    SL.insertAtAnyPos(4,40);
    SL.insertAtAnyPos(5,50);
    SL.insertAtAnyPos(6,60);
    SL.insertAtAnyPos(7,70);
    SL.insertAtAnyPos(8,80);
    SL.insertAtAnyPos(9,90);
    SL.insertAtLast(100);
    SL.insertBeforeElement(100,99);
    SL.insertBeforeElement(80,79);
    SL.displayList();

    cout<<"After Deletion Operation: "<<endl;
    SL.deleteAtPos(3);
    SL.deleteElementByValue(60);
    SL.displayList();


    SingleLinkedList<char>SLC;

    SLC.insertAtFirst('t');
    SLC.insertAtFirst('a');
    SLC.insertAtFirst('n');
    SLC.insertAtFirst('v');
    SLC.insertAtLast('i');
    SLC.insertAtAnyPos(2,'w');
    SLC.insertAtAnyPos(3,'z');

    SLC.displayList();

    cout<<"After Deletion Operation: "<<endl;
    SLC.deleteAtPos(3);
    SLC.deleteElementByValue('w');
    SLC.displayList();

    cout<<"Single Linked list Operation Completed Here!!!!\n"<<endl;



    //DoubleLinkedList

    cout<<"Double Linked list Operation Starts Here - "<<endl;
    DoubleLinkedList <int> DL;
    DL.insertAtLast(22);
    DL.insertAtFirst(32);
    DL.inserAtAnyPos(2,42);
    DL.insertAtLast(55);
    DL.insertBeforeElement(55,54);
    DL.insertBeforeElement(32,33);
    DL.insertAtLast(65);
    DL.displayList();
    cout<<"After Deletion Operation: "<<endl;
    DL.deleteAtPos(1);
    DL.insertAtLast(96);
    DL.displayList();
    cout<<"Double Linked list Operation Completed Here!!!!\n"<<endl;

    //Stack
    cout<<"Stack Operation Starts Here"<<endl;

    Stack<int> SS;

    SS.Push(10);
    SS.Push(20);
    SS.Push(30);
    SS.Push(40);
    SS.Push(50);
    SS.Push(60);
    SS.Top();
    SS.pop();
    SS.Top();
    SS.pop();
    SS.pop();
    SS.pop();
    SS.pop();
    SS.Top();
    SS.pop();
    SS.Push(69);
    SS.Top();
    SS.pop();
    SS.Top();

    cout<<"Stack Operation Completed Here!!!!\n"<<endl;

    //Queue
    cout<<"Queue Operation Starts Here"<<endl;
    Queue<int> QQ;

    QQ.enqueue(12);
    QQ.enqueue(13);
    QQ.enqueue(14);
    QQ.enqueue(15);
    QQ.enqueue(16);
    QQ.enqueue(18);

    QQ.Front();
    QQ.dequeue();
    QQ.Front();
    QQ.dequeue();
    QQ.Front();
    QQ.dequeue();
    QQ.Front();
    QQ.dequeue();
    QQ.Front();

    QQ.Rear();

    cout<<"Queue Operation Completed Here!!!!\n"<<endl;


    //BST
    cout<<"BST Operation Starts Here"<<endl;

    BST <int> TR;

    TR.insertBST(45);
    TR.insertBST(16);
    TR.insertBST(49);
    TR.insertBST(47);
    TR.insertBST(32);
    TR.insertBST(64);
    TR.insertBST(132);
    TR.insertBST(80);
    TR.insertBST(90);
    TR.insertBST(30);
    TR.insertBST(23);
    TR.insertBST(11);

    cout<<"In-order is: ";
    TR.displayInorder(TR.root);
    cout<<"\nPost-order is: ";
    TR.displayPostorder(TR.root);

    cout<<"\nPre-order is: ";
    TR.displayPreorder(TR.root);



   if(TR.searchInBST(TR.root,11) == NULL)
    {

        cout<<"Key not found in BST"<<endl;

    }

   else
    {
        cout<<"\nKey found in BST"<<endl;
    }

   if(TR.searchInBST(TR.root,0) == NULL)
    {

        cout<<"Key not found in BST"<<endl;

    }

   else
    {
        cout<<"Key found in BST "<<endl;
    }

    cout<<"BST Operation Completed Here!!!!"<<endl;

}
