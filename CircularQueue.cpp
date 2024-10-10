#include <iostream>
using namespace std;

#define max_size 5 // Maximum size of the queue

int front = -1;
int rear = -1;
int arr[max_size];

// Function to add an element to the queue
void enqueue(int element) {
    // Check if the queue is full
    if ((front == 0 && rear == max_size - 1) || (front == (rear + 1) % max_size)) {
        cout << "Queue is full" << endl;
        return;
    }

    // Check if the queue is empty
    if (front == -1) {
        front = 0;
        rear = 0;
        arr[rear] = element;
    } else {
        // Update rear in circular manner
        rear = (rear + 1) % max_size;
        arr[rear] = element;
    }
}

// Function to remove an element from the queue
void dequeue() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    // Check if there is only one element left in the queue
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        // Update front in circular manner
        front = (front + 1) % max_size;
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }

    cout << "Queue elements are: ";
    if (rear >= front) {
        // Print elements from front to rear
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    } else {
        // Print elements from front to max_size-1, then from 0 to rear
        for (int i = front; i < max_size; i++) {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int choice;
    while (true) {
        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter the element: ";
                cin >> element;
                enqueue(element);
                break;
            }
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout << "Enter a valid choice!" << endl;
        }
    }
    return 0;
}
