#include <iostream>
using namespace std;

long long padovanMemory[101] = { 0,1,1,1,2,2,3,4,5,7,9 };
int N, T;

long long padovan(int N) {
	if (padovanMemory[N] == 0) {
		padovanMemory[N] = padovan(N - 2) + padovan(N - 3);
	}
	return padovanMemory[N];
}

int main() {
	cin >> T;

	for (int j = 0; j < T; j++)
	{
		cin >> N;
		cout << padovan(N) << endl;
	}
	return 0;
}