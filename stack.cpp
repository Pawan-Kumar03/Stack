#include <iostream>
using namespace std;

class Stack
{
private:
    int top;
    int arr[5];

public:
    Stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }

    // 1. isEmpty function
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }

    // 2. isFull Function
    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
            return false;
    }

    // 3. Push Function
    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack OverFlow" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
            cout<<"Value pushed."<<endl;
        }
    }

    // 4. Pop Function
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack UnderFlow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top]; // this value willbe removed
            arr[top] = 0;
            top--;
            return popValue;
        }
    }
    // 5. Count Function
    int count()
    {
        return (top + 1); // +1 b/c array index starts with 0 and also we initialized top =-1;
    }

    // 6. Peek Function
    int peek(int position)
    {
        if (isEmpty())
        {
            cout << "Stack UnderFlow" << endl;
            return 0;
        }
        else
        {
            return arr[position];
        }
    }

    // 7. Change Function
    void change(int position, int value)
    {
        if (position > 4)
        {
            cout << "Array index out of Bond. Position is greater than Array size. " << endl;
        }
        else
        {
            arr[position] = value;
            cout << "Value changed at position " << position << endl;
        }
    }
    //  8. Print Method
    void print()
    {
        cout << "All values in the Stack are :" << endl;
        for (int i = 4; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Stack s1;
    int option, position, value;

    do
    {
        cout << "What Operation do you want to perform? Select option Number. \nEnter 0 to Exit" << endl;
        cout << "1. Push()" << endl;
        cout << "2. Pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Peek()" << endl;
        cout << "6. Count()" << endl;
        cout << "7. Change()" << endl;
        cout << "8. Display()" << endl;
        cin >> option;

        switch (option)
        {
        case 0:
            /* code */
            break;
        case 1:
            cout << "Push Function Called. Enter an item to push inthe Stack : ";
            cin >> value;
            s1.push(value);
            break;
        case 2:
            cout << "Pop Function Called. poped Value :"<<s1.pop()<< endl;
            break;
        case 3:
            if (s1.isEmpty())
            {
                cout << "Stack is Empty" << endl;
            }
            else
                cout << "Stack is not Empty" << endl;
            break;
        case 4:
            if (s1.isFull())
            {
                cout << "Stack is Full" << endl;
            }
            else
                cout << "Stack is not Full" << endl;
            break;
        case 5:
            cout << "Peek Function Called. Enter Position of item you want to Peek: ";
            cin >> position;
            cout << "Value at position " << position << " is " << s1.peek(position)<<endl;
            break;
        case 6:
            cout << "Count Function Called. Number of items in Stack is : " << s1.count() << endl;
            break;
        case 7:
            cout << "Change Function Called. ";
            cout << "Enter position of item you want to change : ";
            cin >> position;
            cout << "Enter Value of item you want to Change : ";
            cin >> value;
            s1.change(position, value);
            break;
        case 8:
            cout << "Display Function called." << endl;
            s1.print();
            break;
        default:
            cout << "Enter Valid Option number.";
            break;
        }
    } while (option != 0);
}