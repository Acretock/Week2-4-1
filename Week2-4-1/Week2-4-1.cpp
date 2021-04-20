#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	string s;
	set<string> set;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s;
		set.insert(s);
	}
	cout << set.size();
}
