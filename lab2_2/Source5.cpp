#include <iostream>
#include <queue> 
#include<fstream>
#include <string>
#include <stack>
using namespace std;
struct Edge {
    int begin;
    int end;
};
int n, m;
int** mas;
void write()
{
    ifstream in("input.txt");
    ofstream out("output.txt");

    int n, m, i, j;

    in >> n >> m;

    int AdjacencyMatrix[100][100];

    // Заполняем матрицу нулями
    for (int i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            AdjacencyMatrix[i][j] = 0;
        }
    }

    // Вписываем в матрицу рёбра
    for (int k = 0; k < m; k++) {
        in >> i >> j;
        AdjacencyMatrix[i - 1][j - 1] = 1;
        AdjacencyMatrix[j - 1][i - 1] = 1;
    }

    // Вывод матрицы в файл
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            out << AdjacencyMatrix[i][j] << ' ';
        }
        out << '\n';
    }
}

void read()
{
    ifstream f("output.txt");
    f >> n >> m;
    cout << n << "  " << m << endl;
    mas = new int* [n];
    for (int i = 0; i < n; i++) {
        mas[i] = new int[m];
        for (int j = 0; j < m; j++)
            f >> mas[i][j];
    }
    f.close();
}
void graph() {
    stack<int> Stack;
    stack<Edge> Edges;
    int req;
    Edge e;
    int nodes[3];
    for (int i = 0; i < 3; i++)
        nodes[i] = 0;
    cout << "N = ";
    cin >> req;
    req--;
    Stack.push(0);
    while (!Stack.empty())
    {
        int node = Stack.top();
        Stack.pop();
        if (nodes[node] == 2) continue;
        nodes[node] = 2;
        for (int j = 2; j >= 0; j--)
        {
            if (mas[node][j] == 1 && nodes[j] != 2)
            {
                Stack.push(j);
                nodes[j] = 1;
                e.begin = node; e.end = j;
                Edges.push(e);
                if (node == req) break;
            }
        }
        cout << node + 1 << endl;
    }
    cout << "Путь до вершины " << req + 1 << endl;
    cout << req + 1;
    while (!Edges.empty())
    {
        e = Edges.top();
        Edges.pop();
        if (e.end == req)
        {
            req = e.begin;
            cout << " <- " << req + 1;
        }
    }
    cin.get(); cin.get();
    
}
int main() {
    system("chcp 1251");
    system("cls");
   
    write();
       mas = new int* [n];
    read();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mas << endl;
        cout << endl;
    }
    graph();
          
  
}