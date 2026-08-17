#include <iostream>
using namespace std;

class Stack
{
public:
    int arr[100];
    int top = -1;

    void push(int value)
    {
        arr[++top] = value;
    }

    void pop()
    {
        top--;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    st.pop();

    st.display();

    return 0;
}