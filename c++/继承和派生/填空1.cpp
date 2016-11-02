#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
// �ڴ˴�������Ĵ���
class MyString : public string {
private: 
	string s;
public:
	friend class string;
	//���캯�� 
	MyString():s() {}
	MyString(const char* str):s(str) {} 
	MyString(const MyString &t):s(t.s) {}
	//��������
	
	//���� << �����
	friend ostream &operator<<(ostream &output, const MyString &t);
	//����+=����� 
	MyString &operator+=(const char *str) {
		s += str;
		return *this;
	}
	//���� + �����
	friend MyString operator + (const MyString &a, const MyString &b);	
	friend MyString operator + (const char* str, const MyString &a);	
	friend MyString operator + (const MyString &a, const char* str);	
	//����[]�����
	char& operator [] (int i) {
		return s[i];
	}
	//���ظ�ֵ����� 
	MyString &operator = (const MyString &t) {
		s = t.s; 
		return *this;
	}
	MyString &operator = (const char* str) {
		s = str;
		return *this;
	}
	//���أ��������
	string operator () (int i, int j) {
		return s.substr(i, j);
	} 
};

MyString operator + (const MyString &a, const MyString &b) {
	MyString tmp;
	tmp.s = a.s + b.s;
	return tmp;
	}
MyString operator + (const char* str, const MyString &a) {
	MyString tmp(str);
	tmp = tmp + a;
	return tmp;
}
MyString operator + (const MyString &a,const char* str) {
	MyString tmp = a;
	tmp += str;
	return tmp;	
}
ostream& operator << (ostream& output, const MyString &t) {
	output << t.s;
	return output; 	
} 

int CompareString( const void * e1, const void * e2) {
    MyString * s1 = (MyString * ) e1;
    MyString * s2 = (MyString * ) e2;
    if( *s1 < *s2 ) return -1;
    else if( *s1 == *s2 ) return 0;
    else if( *s1 > *s2 ) return 1;
}
int main() {
    MyString s1("abcd-"),s2,s3("efgh-"),s4(s1);
    MyString SArray[4] = {"big","me","about","take"};
    cout << "1. " << s1 << s2 << s3<< s4<< endl;
    s4 = s3; s3 = s1 + s3;
    cout << "2. " << s1 << endl;
    cout << "3. " << s2 << endl;
    cout << "4. " << s3 << endl;
    cout << "5. " << s4 << endl;
    cout << "6. " << s1[2] << endl;
    s2 = s1; s1 = "ijkl-";
    s1[2] = 'A' ;
    cout << "7. " << s2 << endl;
    cout << "8. " << s1 << endl;
    s1 += "mnop";
    cout << "9. " << s1 << endl;
    s4 = "qrst-" + s2;
    cout << "10. " << s4 << endl;
    s1 = s2 + s4 + " uvw " + "xyz";
    cout << "11. " << s1 << endl;
    qsort(SArray,4,sizeof(MyString), CompareString);
    for( int i = 0;i < 4;++i )
        cout << SArray[i] << endl;
    //���s1���±�0��ʼ����Ϊ4���Ӵ�
    cout << s1(0,4) << endl;
    //���s1���±�Ϊ5��ʼ����Ϊ10���Ӵ�
    cout << s1(5,10) << endl;
    return 0;
}
