#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define n 10
struct Dequeue
{
    int a[n];
    int f,r;

}dq;
void initialize()
{
  dq.f=-1;
  dq.r=0;
}
bool isFull()
{
     return ((dq.f == 0 && dq.r == n - 1) ||
      dq.f == dq.r + 1);
}
bool isEmpty() {
  return (dq.f == -1);
}
void insertfront(int key)
{
   if (isFull()) {
    cout << "Overflow"
       << endl;
    return;
  }

  if (dq.f == -1) {
    dq.f = 0;
    dq.r = 0;
  }

  else if (dq.f == 0)
    dq.f = n - 1;

  else
    dq.f = dq.f - 1;

  dq.a[dq.f] = key;
}
void insertrear(int key)
{
    if (isFull()) {
    cout <<" Overflow"<< endl;
    return;
  }

  if (dq.f == -1) {
    dq.f = 0;
    dq.r = 0;
  }

  else if (dq.r== n-1)
    dq.r=0;

  else
    dq.r= dq.r + 1;

}