#include <iostream>
using namespace std;
/*int main()
{
    int N, kol = 0, k;
    cin >> N;
    int** A = new int* [N];
    for (int i = 0; i < N; i++)  //запишем все ребра, kol-количество точек
    {
        A[i] = new int[2];
        cin >> A[i][0] >> A[i][1];
        if (A[i][0] > kol)
            kol = A[i][0];
        if (A[i][1] > kol)
            kol = A[i][1];
    }
    bool** B = new bool* [kol];
    for (int i = 1; i <= kol; i++) //для каждой точки найдем все смежные
    {
        B[i] = new bool[kol];
        for (int j = 0; j < N; j++)
        {
            if (A[j][0] == i)
            {
                k = A[j][1];
                B[i][k] = 1;
            }
            else
                if (A[j][1] == i)
                {
                    k = A[j][0];
                    B[i][k] = 1;
                }
            if (A[i][0] == A[i][1])
                B[A[i][0]][A[i][0]] = 0;
        }
        for (int j = 1; j < kol; j++)
            if (B[i][j] != 1)
                B[i][j] = false;
    }
    for (int i = 1; i <= kol; i++)
    {
        for (int j = 1; j <= kol; j++)
            cout << B[i][j] << "  ";
        cout << endl;
    }
    return 1;
}*/