#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie();

ll stack1[100], n = 100, top = -1;

void push(ll val)
{
   if(top >= n - 1)
      cout << "stack Overflow" << endl;
   else
   {
      top++;
      stack1[top] = val;
   }
}
void pop()
{
   if(top <= -1)
      cout << "Stack Underflow" << endl;
   else
   {
      cout << "The popped element is " << stack1[top] << endl;
      top--;
   }
}
void display()
{
   if(top >= 0)
   {
      cout<<"Stack elements are:";
      for(int i = top; i >= 0; i--)
         cout << stack1[i] << " ";
         cout << endl;
   }
   else
      cout << "Stack is empty" << endl;
}
int main()
{
    io
    ll ch, val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop from stack" << endl;
    cout << "3) Display stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice: " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            {
                cout << "Enter value to be pushed:" << endl;
                cin >> val;
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout << "Exit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid Choice" << endl;
            }
        }
    }
    while(ch != 4);
    cerr << "time elapsed " << (double) clock() / CLOCKS_PER_SEC << "s" << endl;
}
