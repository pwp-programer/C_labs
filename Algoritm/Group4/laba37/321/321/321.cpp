#include <iostream>
using namespace std;
const int n = 9; //размер матрицы
int i, j;
int GM[n][n] = { //матрица смежности
	{0, 2, 0, 1, 1, 0, 0, 0, 0},
	{2, 0, 1, 0, 1, 1, 0, 0, 0},
	{0, 1, 0, 0, 0, 2, 0, 0, 0},
	{1, 0, 0, 2, 1, 0, 0, 0, 0},
	{1, 1, 0, 1, 0, 0, 0, 0, 0},
	{0, 1, 2, 0, 0, 0, 0, 0, 1},
	{0, 0, 0, 1, 0, 0, 0, 1, 0},
	{0, 0, 0, 0, 0, 0, 1, 2, 3},
	{0, 0, 0, 0, 1, 1, 0, 3, 0}
};
void BFS(bool* visited, int unit) {
	int* queue = new int[n]; //выделение памяти под вершину
	int count, head;
	for (i = 0; i < n; i++)
		queue[i] = 0;
	count = 0; head = 0;
	queue[count++] = unit;
	visited[unit] = true;
	while (head < count) { //проверка  текущего элемента с последующими шагами
		unit = queue[head++];
		cout << unit + 1 << " ";
		for (i = 0; i < n; i++)
			if (GM[unit][i] && !visited[i]) {
				queue[count++] = i;
				visited[i] = true;
			}
	}
	delete[]queue; //освобождение памяти
}
int main() {
	setlocale(LC_ALL, "Rus");
	int start;
	cout << "Стартовая вершина >> ";
	cin >> start;
	bool* visited = new bool[n]; //выделение памяти
	cout << "Матрица смежности графа: " << endl;
	for (i = 0; i < n; i++) {
		visited[i] = false; 
		for (j = 0; j < n; j++)
			cout << " " << GM[i][j];
		cout << endl;
	}
	cout << "Порядок обхода: ";
	BFS(visited, start - 1); //вызов функции
	delete[]visited; //освобождение памяти
	system("pause");
	return 0;
}
