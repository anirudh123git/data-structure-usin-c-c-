#include <stdio.h>
void mergearray(int a[], int m, int b[], int n);
void display(int arr[], int);
void uni(int a[], int m, int b[], int n);
void intersection(int a[], int m, int b[], int n);
void difference(int a[], int m, int b[], int n);
void symmetric(int a[], int m, int b[], int n);
int main()
{
    int a[5];
    int b[5];

    printf("array 1");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("array 2");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("\n");
    symmetric(a, 5, b, 5);

    return 0;
}
void mergearray(int a[], int m, int b[], int n)
{
    int c[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {

            c[k] = a[i];
            k++;
            i++;
        }
        else
        {

            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < n)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printf("merged array:\n");
    display(c, m + n);
}
void display(int arr[], int m)
{

    int i = 0;
    for (i = 0; i < m; i++)
    {
        printf("%d", arr[i]);
    }
}

void uni(int a[], int m, int b[], int n)
{
    int c[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {

            c[k] = a[i];
            k++;
            i++;
        }
        else if (b[j] < a[i])
        {

            c[k] = b[j];
            j++;
            k++;
        }
        else
        {
            c[k] = a[i];
            k++;
            i++;
            j++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];

        k++;
        i++;
    }
    while (j < n)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printf("union:\n");
    display(c, k);
}
void intersection(int a[], int m, int b[], int n)
{

    int c[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {

            i++;
        }
        else if (b[j] < a[i])
        {

            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
            i++;
            j++;
        }
    }
    printf("Intersection:\n");
    display(c, k);
}

void difference(int a[], int m, int b[], int n)
{
    int c[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {

            c[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > b[j])
        {

            c[k] = a[i];
            j++;
            k++;
        }
        else
        {
            i++;
            j++;
        }
    }

    printf("Difference:\n");
    display(c, k);
}
void symmetric(int a[], int m, int b[], int n)
{
    int c[m + n];

    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {

            c[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
        else
        {

            i++;
            j++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j < n)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printf("SYMMETRIC DIFFERENCE:\n");
    display(c, k);
}
