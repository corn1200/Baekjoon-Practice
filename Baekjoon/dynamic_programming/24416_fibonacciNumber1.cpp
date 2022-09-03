#include <iostream>
using namespace std;

int recursiveFibonacciCalcCount;
int dynamicFibonacciCalcCount;

int recursiveFibonacci(int n) {
	if (n == 1 || n == 2) {
		recursiveFibonacciCalcCount++;
		return 1;
	}
	else {
		return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
	}
}

int dynamicFibonacci(int n) {
	int fibonacciMemory[41] = { 0, 1, 1 };

	for (int i = 3; i <= n; i++)
	{
		dynamicFibonacciCalcCount++;
		fibonacciMemory[i] = (fibonacciMemory[i - 1] + fibonacciMemory[i - 2]);
	}
	return fibonacciMemory[n];
}

int main() {
	int n;
	cin >> n;
	recursiveFibonacci(n);
	dynamicFibonacci(n);
	cout << recursiveFibonacciCalcCount << " " << dynamicFibonacciCalcCount;
	return 0;
}