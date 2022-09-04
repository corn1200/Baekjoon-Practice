#include <iostream>
using namespace std;

int wMemory[21][21][21];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		if (wMemory[20][20][20] == 0) {
			wMemory[20][20][20] = w(20, 20, 20);
		}
		return wMemory[20][20][20];
	}
	if (a < b && b < c) {
		if (wMemory[a][b][c - 1] == 0) {
			wMemory[a][b][c - 1] = w(a, b, c - 1);
		}
		if (wMemory[a][b - 1][c - 1] == 0) {
			wMemory[a][b - 1][c - 1] = w(a, b - 1, c - 1);
		}
		if (wMemory[a][b - 1][c] == 0) {
			wMemory[a][b - 1][c] = w(a, b - 1, c);
		}
		return wMemory[a][b][c - 1]
			+ wMemory[a][b - 1][c - 1]
			- wMemory[a][b - 1][c];
	}
	if (wMemory[a - 1][b][c] == 0) {
		wMemory[a - 1][b][c] = w(a - 1, b, c);
	}
	if (wMemory[a - 1][b - 1][c] == 0) {
		wMemory[a - 1][b - 1][c] = w(a - 1, b - 1, c);
	}
	if (wMemory[a - 1][b][c - 1] == 0) {
		wMemory[a - 1][b][c - 1] = w(a - 1, b, c - 1);
	}
	if (wMemory[a - 1][b - 1][c - 1] == 0) {
		wMemory[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);
	}
	return wMemory[a - 1][b][c]
		+ wMemory[a - 1][b - 1][c]
		+ wMemory[a - 1][b][c - 1]
		- wMemory[a - 1][b - 1][c - 1];
}

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
	}
	return 0;
}