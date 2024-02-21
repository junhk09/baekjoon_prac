#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main() {
	int T, N;

	cin >> T;
	for (int i = 0; i < T; i++) {
		int sum1 = 0;
		double res = 0, sum2 = 0;
		cin >> N;
		int* C = new int[N];
		double* G = new double[N];

		for (int j = 0; j < N; j++) {
			cin >> C[j] >> G[j];
			sum1 += C[j];
			sum2 += C[j] * G[j];
		}

		res = (double)sum2 / sum1;
		res *= 10;
		res = round(res);
		res /= 10;
		cout << sum1 << " " << res << endl;
		delete[] C;
		delete[] G;
	}



}