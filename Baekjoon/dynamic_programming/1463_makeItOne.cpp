#include <iostream>
using namespace std;

int memory[1000002] = { -1, 0, 1, 1, 2, 3, 2, 3, 3, 2, 3 };

int main() {
	int N;
	int currentNum;
	cin >> N;

	if (N == 1) {
		cout << "0";
	}
	else {
		for (int i = 11; i < N; i++)
		{
			if (memory[N] != 0) {
				cout << memory[N];
				return 0;
			}
			else {
			}
		}
	}
	return 0;
}