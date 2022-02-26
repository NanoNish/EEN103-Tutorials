#include <iostream>
using namespace std;
class node{
    public:
        double data;
        node *next;
};
class list{
    public:
        node *head;
        node *new_node = new node();
        long int count;
        list(){
            head = NULL;
            new_node = head;
            count = 0;
        }
        void push_back(double num){
            node *temp = new node;
            temp->data = num;
            temp->next = NULL;
            if (head == NULL){
                head = temp;
                new_node = temp;
                return;
            }
            else{
                new_node->next = temp;
                new_node = temp;
            }
            count++;
        }
        void display(){
            node *it = head;
            cout << count + 1 << ": ";
            while (it != NULL){
                cout << it->data << " --> ";
                it = it->next;
            }
            cout << "NULL" << endl;
        }
        list sort(){
            list sort_l;
            for (int i = 0; i < count + 1; i++){
                node *new_node = head;
                node *ptrcurrent;
                double max(-1);
                while (new_node != NULL){
                    if (new_node->data > max){
                        max = new_node->data;
                        ptrcurrent = new_node;
                    }
                    new_node = new_node->next;
                }
                sort_l.push_back(ptrcurrent->data);
                ptrcurrent->data = -1;
            }
            return sort_l;
        }
};

int main(){
    list l1;
    l1.push_back(11.1);
    l1.push_back(2.301);
    l1.push_back(59.64);
    l1.push_back(420.69);
    l1.display();
    l1.sort().display();
    return 0;
}