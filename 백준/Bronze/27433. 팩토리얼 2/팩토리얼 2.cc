#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <string>
using namespace std;

void fac(int n, long long a){
    if(n<1){
cout<< a; return;}
a*=n;
    fac(n-1,a);
}
int main() {
 int n;
    cin >> n;
  long long a=1;
    fac(n,a);
	


}