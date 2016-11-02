#include<iostream>
using namespace std;
struct zone {
	int start;
	int end;
}zone[100];

int main() {
	int L, M;
	cin >> L >> M;
	
	int tree[10000];
	for (int i = 0; i < 10000; i++) {
		tree[i] = 1;
	} 
	for (int i = 0; i < M; i++) {
		cin >> zone[i].start >> zone[i].end;
		for (int j = zone[i].start; j <= zone[i].end; j++) {
			tree[j] = 0;
		}
	}
	
	int count = 0;
	for (int i = 0; i < L + 1; i++) {
		if (tree[i] == 1) {
			count++;
		}
	}
	cout << count << endl;
}
