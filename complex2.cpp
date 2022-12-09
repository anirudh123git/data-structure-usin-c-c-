
#include <iostream>
using namespace std;
struct complex
{
  int real;
  int img;

} ;
complex add(complex c1, complex c2)
{
  complex res;
  res.real = c1.real + c2.real;
  res.img = c1.img + c2.img;
  return res;
}
complex sub(complex c1, complex c2)
{
  complex res;
  res.real = c1.real - c2.real;
  res.img = c1.img - c2.img;
  return res;
}
complex mul(complex c1, complex c2)
{
  complex res;
  res.real = c1.real * c2.real - c1.img * c2.img;
  res.img = c1.real * c2.img + c1.img * c2.real;
  return res;
}

int main()
{
  complex x, y;
  cout << "enter first number:" << endl;
  cin >> x.real >> x.img;
  cout << "enter second number:" << endl;
  cin >> y.real >> y.img;
  cout << "1.Addition" << endl;
  cout << "2.subtraction" << endl;
  cout << "3.multiplication" << endl;
  cout << "enter your choice:" << endl;
  int ch;
  cin >> ch;
  complex resul;
  switch (ch)
  {
  case 1:
    resul = add(x, y);
    break;

  case 2:
    resul = sub(x, y);
    break;
  case 3:
    resul = mul(x, y);
    break;
  default:
    cout << "invaild";
  };
  cout << resul.real << "+" << resul.img << "i" << endl;

  return 0;
}