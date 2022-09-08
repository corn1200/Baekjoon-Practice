#include <iostream>
using namespace std;

int main() {
	long n;
	cin >> n;

	long beforeCount = 0;
	long currentCount = 1;
	long tempData;
	for (long i = 0; i < n; i++)
	{
		tempData = currentCount;
		currentCount = (currentCount + beforeCount) % 15746;
		beforeCount = tempData;
	}
	cout << currentCount;
	return 0;
}