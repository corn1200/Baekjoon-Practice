#include <iostream>
#include <limits>
using namespace std;

int memory[1000002] = { -1, 0, 1, 1, 2, 3, 2, 3, 3, 2, 3 };

int main() {
	int N;
	cin >> N;

	if (N == 1) {
		cout << "0";
	}
	else {
		for (int i = 11; i < N; i++)
		{
			if (true) {
				cout << memory[N] << "qwer";
				break;
			}
			else {
				int minRoof = 1000002;
				if (i % 3 == 0) {
					memory[i] = min(memory[i / 3] + 1, minRoof);
				}
				if (i % 2 == 0) {
					memory[i] = min(memory[i / 2] + 1, minRoof);
				}
				if (i - 1 == 0) {
					memory[i] = min(memory[i - 1] + 1, minRoof);
				}
			}
		}
	}
	return 0;
}