#include <iostream>
#include <iomanip>
using namespace std;
//ÅÐ¶ÏÊÇ·ñÎªÈòÄê
bool leapY(int y){
	if ((y % 4 == 0 && y % 100 != 0)|| y % 400 == 0)
		return true;
	else
		return false;
}

int maxDay[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void tomorrow(int &y, int &m, int &d){
	if (m == 12 && d==31){
		y++;
		m = 1;
		d = 1;	
	} else if (m == 2 && leapY(y)) {
		if (d == 28) {
			d++;
		} else if (d == 29) {
			m++;
			d = 1;
		}
	}
	else if (d == maxDay[m - 1]){
		m++;
		d = 1;
	}
	else
		d++;	
}

int main(){
	int y, m, d;
	
	char c;
	cin >> y >> c >> m >> c >> d;
	tomorrow(y, m, d);
	
	cout << y << "-" << setfill('0') << setw(2) << m << "-" << setfill('0') << setw(2) << d << endl;

	//system("pause");
	return 0;
}
