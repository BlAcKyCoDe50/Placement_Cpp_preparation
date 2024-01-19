#include <iostream>
using namespace std;

void printPattern(int n)
{

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {
	        if (j == i || j == (n + 1 - i))
				cout << "$";
			else
				cout << " ";
		}
		cout << endl;
	}
}

// Driver Code
int main()
{
    int n;
    cin>>n;
	// Function Call
	printPattern(n);
	return 0;
}
