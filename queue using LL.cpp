#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(NULL), rear(NULL) {}

    void enqueue(int item) {
        Node* newNode = new Node(item);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (!isEmpty()) {
            int frontItem = front->data;
            Node* temp = front;
            front = front->next;
            delete temp;
            if (front == NULL) {
                rear = NULL;
            }
            return frontItem;
        } else {
            cout<< "Queue is empty."<<endl;
            return -1;
        }
    }

    int peek() {
        if (!isEmpty()) {
            return front->data;
        } else {
            cout<< "Queue is empty." <<endl;
            return -1;
        }
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue queue;

    while (true) {
        cout << "Queue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Check if queue is empty\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin>>choice;

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter the value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                cout << "Enqueued " << value << " into the queue." <<endl;
                break;
            }

            case 2: {
                int dequeuedItem = queue.dequeue();
                if (dequeuedItem != -1) {
                    cout << "Dequeued item: " << dequeuedItem <<endl;
                }
                break;
            }

            case 3: {
                int frontItem = queue.peek();
                if (frontItem != -1) {
                    cout << "Front element: "<<frontItem<<endl;
                }
                break;
            }

            case 4: {
                cout << "Is the queue empty? "<< (queue.isEmpty() ? "Yes":"No")<<endl;
                break;
            }

            case 5:
                cout<<"Exiting the program."<<endl;
                return 0;

            default:
                cout<< "Invalid choice. Please enter a valid option." <<endl;
        }
    }

    return 0;
}

