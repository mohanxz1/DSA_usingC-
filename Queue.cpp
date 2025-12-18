#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>

using namespace std;

class LinearQueue
{
private:
    int queue[100];
    int rear, size, front;

public:
    LinearQueue(int q)
    {
        size = q;
        front = -1;
        rear = -1;
    }

    void enqueue(int items)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full!!" << endl;
            return;
        }

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = items;
        cout << items << " " << "is enqueued into the queue." << endl;
    }

    void dequeue()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << queue[front] << " " << "is dequeued in the queue." << endl;
            front++;
        }

        if (front > rear)
        {
            rear = front = -1;
        }
    }

    void peek()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << queue[front] << " " << "is the first element present in the queue." << endl;
        }
    }

    void display()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "Elements in the queue is:" << endl;

            for (int i = front; i <= rear; i++)
            {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }

    void summation()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int sum = 0;
            for (int i = front; i <= rear; i++)
            {
                sum += queue[i];
            }
            cout << sum << " " << "in the summation of the queue" << endl;
        }
    }

    void even_odd()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                if (queue[i] % 2 == 0)
                {
                    cout << queue[i] << " " << "is even" << endl;
                }
                else
                {
                    cout << queue[i] << " " << "is odd" << endl;
                }
            }
        }
    }

    void Average()
    {
        if (front == -1 || rear == -1 || front > rear)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            int Avg = 0;
            int sum = 0;
            int count = 0;
            for (int i = front; i <= rear; i++)
            {
                sum = sum + queue[i];
                count++;
            }
            Avg = sum / count;
            ;
            cout << Avg;
        }
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    LinearQueue A(size);
    int choice, items;
    while (true)
    {
        cout << "Menu:Queue Operations!!!\n";
        cout << "1.Enqueue\n";
        cout << "2.Dequeue\n";
        cout << "3.Peak\n";
        cout << "4.Display\n";
        cout << "5.Summation\n";
        cout << "6.Average\n";
        cout << "7.Even_Odd\n";
        cout << "8.Exit\n";
        cout << "Enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the item" << endl;
            cin >> items;
            A.enqueue(items);
            break;
        case 2:
            A.dequeue();
            break;

        case 3:
            A.peek();
            break;

        case 4:
            A.display();
            break;

        case 5:
            A.summation();
            break;

        case 6:
            A.Average();
            break;

        case 7:
            A.even_odd();
            break;
        case 8:
            cout << "Exiting....";
            return 0;

        default:
            cout << "Enter the correct choice " << endl;
        }
    }
    return 0;
}
