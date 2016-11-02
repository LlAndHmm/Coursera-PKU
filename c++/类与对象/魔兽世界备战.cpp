#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
//ʿ������ 
int dHP, nHP, iHP, lHP, wHP;

//ʱ�� 
class Clock
{
public :
	Clock() {
		hour = 0;
	}	
	void tick() {
		hour++;
	}
	void printHour() {
		cout << setfill('0') << setw(3) << hour;
	}
	void reset() {
		hour = 0;
	}
private:
	int hour;
}CLOCK;
//˾� 
class Headquater
{
public :
	Headquater(string color_, int M) {
		elements = M;
		color = color_;
		nWarrior = nNinja = nIceman = nWolf = nLion = nDragon = 0;
		warrior_type = 0;
		stop_producing = false;
	}
	int elements;
	string color; 
	bool stop_producing;
	void produceWarrior(); 
private:
	int nNinja;
	int nIceman;
	int nWolf;
	int nLion;
	int nDragon;
	bool choose_type(int type);	
	bool produceIceman();
	bool produceNinja();
	bool produceDragon();
	bool produceLion();
	bool produceWolf();
	int warrior_type;
	int nWarrior;		//ʿ����� 
};
//�ж���������ʿ��
void Headquater::produceWarrior() {
	bool has_produce = false;
	/*���˾��е�����Ԫ����������ĳ����˳��
	Ӧ���������ʿ����ô˾�����ͼ������һ��.
	���������ʿ�����������ˣ���˾�ֹͣ������ʿ.*/
	for (int i = warrior_type; i < 5; i++) {
		has_produce = choose_type(i);
		if (has_produce) {
			warrior_type = i + 1;
			break;
		}
	}
	//�ٴӵ�һ��ʿ��ѭ�����ո�ʧ��λ�� ���� һ��ѭ����� 
	if (!has_produce) {
		for (int i = 0; i < warrior_type; i++) {
			has_produce = choose_type(i);
			if (has_produce) {
				warrior_type = i + 1;
				break;
			}
		}
	}
	//ȷ������ʿ�������ܽ��� 
	if (!has_produce) {
		stop_producing = true; 
		CLOCK.printHour();
		cout << " " << color << " headquarter stops making warriors" << endl;	
	}
	//ѭ������������ 
	else {
		if (warrior_type >= 5) {
			warrior_type = 0;
		}
	}
}	
bool Headquater::choose_type(int type) {
	if (color == "red") {
		switch(type) {
			case 0: return produceIceman();
			case 1: return produceLion();
			case 2: return produceWolf();
			case 3: return produceNinja();
			case 4: return produceDragon();
			default: return false;
		}
	}
	if (color == "blue") {
		switch(type) {
			case 0: return produceLion();
			case 1: return produceDragon();
			case 2: return produceNinja();
			case 3: return produceIceman();
			case 4: return produceWolf();
			default: return false;
		}
	}
}
bool Headquater::produceIceman() {
	if (iHP <= elements) {
		nWarrior++;
		nIceman++;
		elements = elements - iHP;
		CLOCK.printHour();
		cout << " " << color << " iceman " 
		<< nWarrior << " born with strength "
		<< iHP << "," << nIceman << " iceman in "
		<< color << " headquarter" << endl; 	
		return true;
	}
	else return false;
}
bool Headquater::produceNinja() {
	if (nHP <= elements) {
		nWarrior++;
		nNinja++;
		elements = elements - nHP;
		CLOCK.printHour();
		cout << " " << color << " ninja " 
		<< nWarrior << " born with strength "
		<< nHP << "," << nNinja << " ninja in "
		<< color << " headquarter" << endl; 	
		return true;
	}
	else return false;
}
bool Headquater::produceWolf() {
	if (wHP <= elements) {
		nWarrior++;
		nWolf++;
		elements = elements - wHP;
		CLOCK.printHour();
		cout << " " << color << " wolf " 
		<< nWarrior << " born with strength "
		<< wHP << "," << nWolf << " wolf in "
		<< color << " headquarter" << endl; 
		return true;	
	}
	else return false;
}
bool Headquater::produceDragon() {
	if (dHP <= elements) {
		nWarrior++;
		nDragon++;
		elements = elements - dHP;
		CLOCK.printHour();
		cout << " " << color << " dragon " 
		<< nWarrior << " born with strength "
		<< dHP << "," << nDragon << " dragon in "
		<< color << " headquarter" << endl; 
		return true;	
	}
	else return false;
}
bool Headquater::produceLion() {
	if (lHP <= elements) {
		nWarrior++;
		nLion++;
		elements = elements - lHP;
		CLOCK.printHour();
		cout << " " << color << " lion " 
		<< nWarrior << " born with strength "
		<< lHP << "," << nLion << " lion in "
		<< color << " headquarter" << endl;
		return true; 	
	}
	else return false;
}
int main() {
	int nTest;
	cin >> nTest;
	for (int test = 1; test <= nTest; test++) {
		CLOCK.reset();
		int M;
		cin >> M;
		cin >> dHP >> nHP >> iHP >> lHP >> wHP;
		Headquater red("red", M);
		Headquater blue("blue", M);
		cout << "Case:" << test << endl; 
		while(true) {
			if(red.stop_producing && blue.stop_producing) {
				break;
			}
			if(!red.stop_producing) {
				red.produceWarrior();
			}
			if(!blue.stop_producing) {
				blue.produceWarrior();
			}
			CLOCK.tick();
		}
	}
	
}
