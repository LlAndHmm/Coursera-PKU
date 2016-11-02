#include <iostream>
#include <cstring>
using namespace std;
// 在此处补充你的代码
class Array2 {
private:
	int** p;
public:
	int row;
	int col;
	//无参构造函数 
	Array2() {
		
	}
	//有参构造函数 
	Array2(int r, int c) {
		row = r;
		col = c;
		p = new int*[c];
		for (int i = 0; i < c;i++) {
			p[i] = new int[r];
		}		
	}
	void operator = (const Array2 &a) {
		row = a.row;
		col = a.col;
		p = new int*[a.col];
		for (int i = 0; i < a.col; i++) {
			p[i] = new int[a.row];
		}
		for(int i = 0;i < a.row; ++i )
        	for(int j = 0; j < a.col; j ++ )
				p[i][j] = a.p[i][j];
	}
	int* operator [] (int i) {
		cout << p[i] << endl;
		return p[i] ;
	}
	int& operator () (int i, int j) {
		return p[i][j];
	}
	~ Array2 () {
		if (p != NULL) {
			for (int i = 0; i < row; i++) {
				delete []p[i];
			} 
		}
		delete []p;
	} 	
};

int main() {
    Array2 a(3,4);
    int i,j;
    for( i = 0;i < 3; ++i )
        for( j = 0; j < 4; j ++ )
            a[i][j] = i * 4 + j;		//实际a[i]返回的是含四个元素的一维数组的指针 
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << a(i,j) << ",";
        }
        cout << endl;
    }
    cout << "next" << endl;
    Array2 b;
	b = a;
    for( i = 0;i < 3; ++i ) {
        for( j = 0; j < 4; j ++ ) {
            cout << b[i][j] << ",";
        }
        cout << endl;
    }
    return 0;
}
