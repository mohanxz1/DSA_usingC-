#include<iostream>
using namespace std;

class Stack {
    int size;
    int top;
    int arr[100];
public:
    Stack(int s) {
        size = s;
        top = -1;
    }

    void push(int elements) {
        if(top == size-1) {
            cout << "The Stack is overflow "<<elements <<"  cant be pushed" << endl;
        } else {
            top++;
            arr[top] = elements;
            cout << "The element pushed is " << arr[top] << endl; 
        }
    }

    void pop() {
        if(top == -1) {
            cout << "The Stack is underflow" << endl;
        } else {
            cout << "The element popped is " << arr[top] << endl;
            top--;
        }
    }

    void Display() {
        cout << "All elements in stack are:" << endl;
        for(int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }

    void peak() {
        if(top == -1) {
            cout << "The stack is empty" << endl;
        } else {
            cout << "The top most element is " << arr[top] << endl;
        }
    }

    void left_space() {
        if(top == size-1) {
            cout << "No space left" << endl;
        } else {
            cout << "Left space in stack is " << size-1-top << endl;
        }
    }

    void sum() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        int sum = 0;
        for(int i = top; i >= 0; i--) {
            sum += arr[i];
        }
        cout << "Sum of elements is " << sum << endl;
    }

    void check() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i = top; i >= 0; i--) {
            if(arr[i] % 2 == 0) {
                cout << "Element " << arr[i] << " is even" << endl;
            } else {
                cout << "Element " << arr[i] << " is odd" << endl;
            }
        }
    }
};

void simulation(Stack S) {
    S.push(10);
    S.push(20);
    S.push(30);
    S.Display();
    S.sum();
    S.check();
}

int main() {
    int size;
    cout << "Enter the size of stack" << endl;
    cin >> size;
    Stack Demo(size);
    simulation(Demo);
    return 0;
}
