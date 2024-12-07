#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
using namespace std;
int w[10];
int main() {
	stack<int> a;
	queue<int> b;
	int f;
	for (int i = 0;i < 10;i++) {
		cin >> f;
		a.push(f);
		b.push(f);
	}
	while (!a.empty()) {
		cout << a.top() << " ";
		a.pop();
	}
	cout << "\n";
	while (!b.empty()) {
		cout << b.front() << " ";
		b.pop();
	}
	
}
