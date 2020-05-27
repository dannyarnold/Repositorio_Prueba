#include <iostream>
#include <vector>

using namespace std;

vector<int> Obtener_Primos(int limit)
{
    int divisiones;
    vector<int> resultados;

    for (int i = 1; i < limit; i++)
    {
        divisiones = 0;
        for (int j = 1; j < limit; j++)
        {
            if (i % j == 0)
            {
                divisiones++;
            }
        }
        if (divisiones == 2)
        {
            resultados.push_back(i);
        }
    }
    return resultados;
}

int main()
{
    for (int primo : Obtener_Primos(100))
    {
        cout << "Este Nro es primo: " << primo << endl;
    }
}