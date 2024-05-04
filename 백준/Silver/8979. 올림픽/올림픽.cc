#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int a, b,res=0;
	int gold[1001],silver[1001],bronze[1001];
	cin >> a >>b;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		cin >> gold[k] >> silver[k] >> bronze[k];
	}
	
	for (int i = 1; i <= a; i++) {
		if (gold[i] > gold[b]) {
			res++;
		}
		else if (gold[i] == gold[b]) {
			if (silver[i] > silver[b]) {
				res++;
			}
			else if (silver[i] == silver[b]) {
				if (bronze[i] > bronze[b]) {
					res++;
				}
			}
		}
		
	}
	cout << res+1;
	







}