#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.get();//cin֮��Ҫ��cin.get�������߻��з�����μ�ס��
	for (int i = 0; i < n; i++) {
		char gen[256];
		cin.getline(gen,256);
		char newGen[256];
		for (int j = 0; j < 256; j++) {//����ÿһ������ԣ���switch�ҵ������Ӧ�ļ����
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
		for (int j = 0; j < 256;j++){//���
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

