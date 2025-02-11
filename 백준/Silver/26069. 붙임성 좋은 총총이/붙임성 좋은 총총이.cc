#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	set<string>st;
	int n,res=0;
	cin >> n;
	st.insert("ChongChong");
	for (int i = 0; i < n; i++) {
		string s1, s2;
		cin >> s1 >> s2;
		if (st.find(s1) != st.end()) {
			st.insert(s2);
		}
		else if(st.find(s2)!= st.end()){
			st.insert(s1);
		}
	
	}
	
	cout <<st.size();




	return 0;


}