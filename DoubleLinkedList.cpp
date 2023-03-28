#include <iostream>
using namespace std;

class Node{
    public:
        Node *next;
        Node *prev;
        int data;

        Node(int val){
            data = val;
            next = prev = NULL;
        }
};

class LinkedList{
    public:
        void push(Node *&head, int val){
            Node *n = new Node(val);
            if(head == NULL){
                head = n;
                head->next = head->prev = NULL;
            }else{
                Node *temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = n;
                n->prev = temp;
                n->next = NULL;
            }
        }

        void unshift(Node *&head, int val){
            Node *n = new Node(val);
            if(head == NULL){
                head = n;
                head->next = head->prev = NULL;
            }else{
                n->next = head;
                head->prev = n;
                n->prev = NULL;
                head = n;
            }
        }

        void shift(Node *&head){
            if(head != NULL){
                Node *todelete = head;
                head = head->next;
                head->prev = NULL;
                delete todelete;

            }
        }

        void pop(Node *&head){
            if(head != NULL){
                Node *temp = head;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->prev->next = NULL;
                delete temp;
            }
        }

        void display(Node* head){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << "\t";
                temp = temp->next;
            }
            cout << endl;
        }
};

int main(){
    LinkedList l1;
    Node *head = NULL;
    l1.push(head, 1);
    l1.push(head, 2);
    l1.push(head, 3);
    l1.push(head, 4);

    l1.unshift(head, 5);
    l1.unshift(head, 6);
    l1.unshift(head, 7);

    l1.pop(head);
    l1.pop(head);

    l1.shift(head);
    l1.shift(head);

    l1.display(head);
}