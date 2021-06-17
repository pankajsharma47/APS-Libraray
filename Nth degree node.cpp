#include <bits/stdc++.h>
using namespace std;

void minMax(int edges[][2], int len, int n)
{

	map<int, int> m;

	for (int i = 0; i < len; i++) {

     	m[edges[i][0]]++;
		m[edges[i][1]]++;
	}

	int maxi = 0;
	int mini = n;

	for (int i = 1; i <= n; i++) {
		maxi = max(maxi, m[i]);
		mini = min(mini, m[i]);
	}
	cout << "Nodes with maximum degree : ";
	for (int i = 1; i <= n; i++) {
		if (m[i] == maxi)
			cout << i << " ";
	}
	cout << endl;
	cout << "Nodes with minimum degree : ";
	for (int i = 1; i <= n; i++) {
		if (m[i] == mini)
			cout << i << " ";
	}
}
int main()
{
	int n = 4, m = 6;

	// The edge list
	int edges[][2] = { { 1, 2 },
					{ 1, 3 },
					{ 1, 4 },
					{ 2, 3 },
					{ 2, 4 },
					{ 3, 4 } };

	minMax(edges, m, 4);

	return 0;
}
