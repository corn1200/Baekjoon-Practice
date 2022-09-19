#include <iostream>

using namespace std;
int sequence[100001];

int main() {
	int n;
	int i;
	int data;
	int maxSequence;
	int maxSum;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			cin >> maxSequence;
			maxSum = maxSequence;
			continue;
		}
		cin >> data;
		maxSequence = max(maxSequence + data, data);
		maxSum = max(maxSum, maxSequence);
	}

	cout << maxSum;
	return 0;
}