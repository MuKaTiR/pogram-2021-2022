#include <iostream>
using namespace std;
int main()
{
	int v, t;
	cin >> v >> t;
	cout << (109 + v * t - (v*t / 109) * 109) - (109 + v * t - (v*t / 109) * 109)/109*109;
}
