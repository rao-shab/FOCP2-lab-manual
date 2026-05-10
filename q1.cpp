#include <iostream>
using namespace std;

int main() {
	int n;
	int i;
	cin >> n;    
  
	int freq[1001] = {0}; 
	int x;

	
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		freq[x]++;
	}

	int maxCount = 0, answer = 0;

	
	for (i = 0; i <= 1000; i++)
	{
		if (freq[i] > maxCount)
		maxCount = freq[i];
	}
	// cout << "Maximum Count is " << maxCount;

	// count how many singers have maximum frequency
	for (int i = 0; i <= 1000; i++)
	{
		if (freq[i] == maxCount)
		answer++;
		// cout << answer;
	}

	cout << answer;
}
