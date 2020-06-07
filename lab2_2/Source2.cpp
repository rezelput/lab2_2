/*
#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct stV
{
    int number;
    stV* next;
    stV* sme;
};

int main()
{
    setlocale(0, "");

    int** a, n, i, j;

    cout << "Вводи кол-во вершин графа: ";
    cin >> n;

    a = new int* [n];
    for (i = 0; i < n; i++)
        a[i] = new int[n];

    cout << "Теперь заполняй матрицу смежности!\n";
    cout << "Заполняется так: если между вершинами есть ребро, пиши 1, если нет ребра, тогда пиши 0, понятно??? \n";

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            cout << " a[" << i << "][" << j << "]= ";
            cin >> a[i][j];
            if (a[i][j] > 0)
                a[i][j] = 1;
        }

    for (i = 0; i < n; i++)
    {
        cout << "\n";
        for (j = 0; j < n; j++)
            cout << a[i][j];
    }
    // Формируем матрицу смежности!!!
    stV* P, * T, * R, * top;
    P = new stV;
    P->next = NULL;
    P->sme = NULL;
    P->number = 0;
    top = P;

    for (i = 1; i < n; i++)
    {
        T = new stV;
        T->next = NULL;
        T->number = i;
        T->sme = NULL;
        P->next = T;
        P = T;
    }

    cout << "\n";
    P = top;
    for (i = 0; i < n; i++)
    {
        cout << P->number;
        P = P->next;
    }

    P = top;
    T = top;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            if (a[i][j] == 1)
            {
                R = new stV;
                R->next = NULL;
                R->sme = NULL;
                R->number = j;
                P->sme = R;
                P = R;
            }
        T = T->next;
        P = T;
    }
    // Вывод списка инцидентности
    P = top;
    T = P->sme;
    cout << "\n\n";
    while (P != NULL)
    {
        cout << "\nВершина №" << P->number;
        cout << "\nСмежные вершины: ";
        while (T != NULL)
        {
            cout << T->number << " ";
            T = T->sme;
        }
        P = P->next;
        T = P->sme;
    }

    getch();
}
*/