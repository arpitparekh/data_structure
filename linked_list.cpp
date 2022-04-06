#include<iostream>

using namespace std;

struct Node{

    int data;
    Node* address;

};

class LinkedList{

    private:
        Node* head;
    public:
        LinkedList(){
            head=NULL;
        }

        void addElement(int number){
            
            Node* newNode=new Node();
            newNode->data=number;
            newNode->address=NULL;
            
            if(head==NULL){     // for first
                head=newNode;
            }else{
                
                Node* temp=head;
                
                while(temp->address!=NULL){
                    temp = temp->address;
                }
                temp->address=newNode;
            }
        }

        void printList(){
            
            Node* temp = head;

            if(temp!=NULL){

                while(temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->address;
                }

            }else{

                cout<<"List is Empty"<<endl;
            }
        }
};

int main(){

    LinkedList list;

    list.addElement(12);
    list.addElement(13);
    list.addElement(14);
    list.addElement(15);

    list.printList();

    return 0;

}