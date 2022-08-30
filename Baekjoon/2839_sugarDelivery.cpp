#include <iostream>
using namespace std;

int main() {
	int totalKilogram = 0;
	int fiveKiloCount = 0;
	int threeKiloCount = 0;

	cin >> totalKilogram;
	fiveKiloCount = totalKilogram / 5;

	if (totalKilogram % 5 == 0) {
		cout << fiveKiloCount;
	}
	else {
		int restKilo = 0;
		for (fiveKiloCount; fiveKiloCount > -1; fiveKiloCount--)
		{
			restKilo = totalKilogram - (fiveKiloCount * 5);
			threeKiloCount = restKilo / 3;
			if (restKilo % 3 == 0) {
				int totalCount = fiveKiloCount + threeKiloCount;
				cout << totalCount << "\n";
				return 0;
			}
		}
		cout << "-1";
	}
	return 0;
}