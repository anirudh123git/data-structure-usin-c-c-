#include <bits/stdc++.h>
using namespace std;

struct student
{
    int roll;
    char name[20];
    int m;
};
void display(student s)
{
    cout << s.roll << " " << s.name << " " << s.m << endl;
}

int main()
{
    student *p;
    student s[3];
    p=s;
    for (int i = 0; i < 3; i++)
    {
        cout << "enter details of student" << i + 1 << endl;
        cout << "enter rollno:" << endl;
        cin >> (p + i)->roll;
        cout << "enter name:" << endl;
        cin.ignore();
        cin.getline((p + i)->name, 20);
        cout << "enter marks:" << endl;
        cin >> (p + i)->m;
    }
    for (int i = 0; i < 3; i++)
    {
        display(*(p + i));
    }
    return 0;
}
