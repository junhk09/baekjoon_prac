#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int A, B, C;
	cin >> A >> B >> C;


	// 세 각의 합이 180이 아닌 경우
	if ((A + B + C) != 180)
	{
		cout << "Error";
	}
	// 세 각의 크기가 모두 60인 경우
	else if (A == B && B == C)
	{
		cout << "Equilateral";
	}
	// 두 각이 같은 경우
	else if (A == B || A == C || B == C)
	{
		cout << "Isosceles";
	}
	// 같은 각이 없는 경우
	else
	{
		cout << "Scalene";
	}

	return 0;
}
