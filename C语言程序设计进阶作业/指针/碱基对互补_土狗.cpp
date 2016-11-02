#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.get();//cin之后要用cin.get（）读走换行符，这次记住了
	for (int i = 0; i < n; i++) {
		char gen[256];
		cin.getline(gen,256);
		char newGen[256];
		for (int j = 0; j < 256; j++) {//对于每一个碱基对，用switch找到与其对应的碱基对
				switch (gen[j]) {
				case 'A': newGen[j] = 'T';
					break;
				case 'T': newGen[j] = 'A';
					break;
				case 'C': newGen[j] = 'G';
					break;
				case 'G': newGen[j] = 'C';
					break;
				default: newGen[j] = '\0';
					break;				
			}
		}
		for (int j = 0; j < 256;j++){//输出
			if (newGen[j] != '\0')
				cout << newGen[j];
			else {
				cout << endl;
				break;
			}			
		}					
	}
	return 0;
}

