
#include <bits/stdc++.h>
using namespace std;
#define size 50
int stk[size];
int top = -1;
bool isempty()
{
  if (top == -1)
  {
    return true;
  }
  return false;
}
void push(int x)
{
  if (top == size - 1)
  {
    cout << "stack overflow" << endl;
    return;
  }
  else
  {
    top++;
    stk[top] = x;
  }
}
void pop()
{

  if (isempty())
  {
    cout << "stack underflow" << endl;
    return;
  }
  else
  {
    int item = stk[top];
    top--;
    char s[37] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << s[item];
  }
}
void dectohex(int n)
{

  while (n != 0)
  {

    int r = n % 16;
    push(r);
    n = n / 16;
  }
  while (!isempty())
  {

    pop();
  }
}

int main()
{
  int n;
  cout << "enter decimal number:" << endl;
  cin >> n;
  cout << "Hexadecimal is:" << endl;
  dectohex(n);

  return 0;
}
