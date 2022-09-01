#include <iostream>
using namespace std;

int memory[1000002] = { -1, 0, 1, 1, 2, 3, 2, 3, 3, 2, 3 };

int main() {
	int N;
	cin >> N;

	if (N == 1) {
		cout << "0";
	}
	else {
		int minRoof = 1000002;
		for (int i = 11; i <= N; i++)
		{
			if (i % 3 == 0) {
				memory[i] = min(memory[i / 3] + 1, minRoof);
				minRoof = memory[i];
			}
			if (i % 2 == 0) {
				memory[i] = min(memory[i / 2] + 1, minRoof);
				minRoof = memory[i];
			}
			memory[i] = min(memory[i - 1] + 1, minRoof);
			minRoof = 1000002;
		}
		cout << memory[N];
	}
	return 0;
}