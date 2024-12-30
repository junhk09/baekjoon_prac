#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <numeric>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		string s;
		stack<char>st;
		bool pass=true;
		getline(cin, s);
		if (s.size() == 1 && s[0] == '.') {
			
			break;
		}

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(' || s[i] == '[') {
				st.push(s[i]);
			}

			 if (s[i] == ')') {
				
				if (!st.empty()&&st.top() == '('  ) {
					st.pop();
					
				}
				else {
					pass = false;
				}
				
				
			}
			 if (s[i] == ']') {
				
				if (!st.empty()&&st.top() == '['  ) {
					st.pop();
					
				}
				else {
					pass = false;
				}
				
			}
		}


		
		 if (st.empty()&&pass) {
			cout << "yes" << endl;
		}
		 else {
			 cout << "no" << endl;
		 }
		
		
	}
}

