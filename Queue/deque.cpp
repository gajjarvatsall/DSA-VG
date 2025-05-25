#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;
    int n;
    int front;
    int rear;

public:
    Deque(int size) {
        arr = new int[size];
        n = size;
        front = rear = -1;
    }

    ~Deque() {
        delete[] arr;
    }

    void pushFront(int data) {
        if (front == 0 && rear != -1) {
            cout << "Overflow at Front\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front--;
        }
        arr[front] = data;
    }

    void pushBack(int data) {
        if (rear == n - 1) {
            cout << "Overflow at Back\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = data;
    }

    void popFront() {
        if (isEmpty()) {
            cout << "Underflow at Front\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void popBack() {
        if (isEmpty()) {
            cout << "Underflow at Back\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            rear--;
        }
    }

    int getFront() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return -1;
        }
        return arr[front];
    }

    int getBack() {
        if (isEmpty()) {
            cout << "Deque is Empty\n";
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty() {
        return front == -1;
    }

    int getSize() {
        return isEmpty() ? 0 : rear - front + 1;
    }

    void print() {
        if (isEmpty()) {
            cout << "Deque is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Deque dq(10);

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushFront(2);
    dq.print();  // Output: 2 5 10 20

    cout << "Front: " << dq.getFront() << endl;  // 2
    cout << "Back: " << dq.getBack() << endl;    // 20

    dq.popFront();
    dq.popBack();
    dq.print();  // Output: 5 10

    cout << "Size: " << dq.getSize() << endl;  // 2
    cout << "Is Empty: " << dq.isEmpty() << endl; // 0 (false)

    dq.popFront();
    dq.popBack();
    dq.popFront(); // Underflow

    return 0;
}
