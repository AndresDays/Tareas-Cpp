#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class DijkstraAlgorithm
{
public:
	int distancia[10];
	vector<vector<int>> costo;

	void calcular(int n, int s)
	{
		vector<int> bandera(n + 1, 0);
		int posMin = 1, c, minimo;

		for (int i = 1; i <= n; i++)
		{
			bandera[i] = 0;
			distancia[i] = costo[s][i];
		}
		c = 2;
		while (c <= n)
		{
			minimo = INT_MAX;
			for (int k = 1; k <= n; k++)
			{
				if (distancia[k] < minimo && bandera[k] != 1)
				{
					minimo = distancia[k]; // Corrección aquí
					posMin = k;
				}
			}
			bandera[posMin] = 1;
			c++;
			for (int k = 1; k <= n; k++)
			{
				if (distancia[posMin] + costo[posMin][k] < distancia[k] && bandera[k] != 1)
					distancia[k] = distancia[posMin] + costo[posMin][k];
			}
		}
	}
};

int main()
{
	int nodos, origen;
	cout << "Ingrese el numero de nodos: ";
	cin >> nodos;
	DijkstraAlgorithm d;
	d.costo.resize(nodos + 1, vector<int>(nodos + 1));

	cout << "Ingrese los pesos de la matriz de costos: \n";
	for (int i = 1; i <= nodos; i++)
	{
		for (int j = 1; j <= nodos; j++)
		{
			cin >> d.costo[i][j];
			if (d.costo[i][j] == 0)
				d.costo[i][j] = INT_MAX;
		}
	}

	cout << "Ingrese el vertice de origen: ";
	cin >> origen;

	d.calcular(nodos, origen);
	cout << "Los caminos mas cortos desde el origen " << origen << " a todos los otros vertices son:\n";
	for (int i = 1; i <= nodos; i++)
	{
		if (i != origen)
			cout << "Origen: " << origen << " Destino: " << i << " Costo minimo: " << d.distancia[i] << endl;
	}

	return 0;
}
