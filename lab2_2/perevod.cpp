/*
#include<iostream>
#include<fstream>

using namespace std;

class gp {
public:
    const int n = 5;
    int i, j;


    int intoout() {
        ifstream in("input.txt");
        ofstream out("output.txt");

        int n, m, i, j, k;

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

        in.close();
        out.close();
        return 0;
    }
    // запись из output в массив
    bool read()
    {
        setlocale(LC_ALL, "RUSSIAN");

        ifstream in("output.txt");

        if (in.is_open())
        {
            //Если открытие файла прошло успешно

            //Вначале посчитаем сколько чисел в файле
            int count = 0;// число чисел в файле
            int temp;//Временная переменная

            while (!in.eof())// пробегаем пока не встретим конец файла eof
            {
                in >> temp;//в пустоту считываем из файла числа
                count++;// увеличиваем счетчик числа чисел
            }


            in.seekg(0, ios::beg);
            in.clear();

            int count_space = 0;
            char symbol;
            while (!in.eof())
            {
                
                in.get(symbol);
                if (symbol == ' ') count_space++;
                if (symbol == '\n') break;//Если дошли до конца строки, то выходим из цикла
            }
            //cout << count_space << endl;

           
            in.seekg(0, ios::beg);
            in.clear();

           
            int n = count / (count_space + 1);//число строк
            int m = count_space + 1;//число столбцов на единицу больше числа пробелов
            double** x;
            x = new double* [n];
            for (int i = 0; i < n; i++) x[i] = new double[m];

            //Считаем матрицу из файла
            for (int i = 0; i < n; i++)
                for (int j = 0; j < m; j++)
                    in >> x[i][j];

            //Выведем матрицу
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                    cout << x[i][j] << "\t";
                cout << "\n";
            }

            for (int i = 0; i < n; i++) delete[] x[i];
            delete[] x;

            in.close();
        }
        else
        {
            //Если открытие файла прошло не успешно
            cout << "Файл не найден.";
        }
    }
    //поиск в глубину
    void DFS(int st)
    {
        bool visited = read();
        int r;
        cout << st + 1 << " ";
        visited[&st] = true;
        bool graph = read();
        for (r = 0; r <= n; r++)
            if ((graph[&st][&r] != 0) && (!visited[&r]))
                DFS(r);
    }

//главная функция
void main()
{
    
    cout << "Стартовая вершина: ";
        DFS();
    system("pause>>void");
}

};

*/