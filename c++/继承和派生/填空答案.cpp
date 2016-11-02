#include<cstring>
#include<iostream>
using namespace std;

class mystring:public string
{
private:
	string store;
public:
	friend class string;
	mystring(const char *s):store(s) {}
	// mystring(string s):store(s) {}
	mystring():store() {}
	mystring(const mystring &t):store(t.store) {}
	mystring &operator=(const mystring &t)
	{
		store = t.store;
		return *this;
	}
	mystring &operator=(const char *s)
	{
		store = s;
		return *this;
	}
	friend mystring operator+(const mystring &a, const mystring &b);
	friend mystring operator+(const mystring &a, char *s);
	friend mystring operator+(const char *s, const mystring &a);
	mystring &operator+=(const char *s)
	{
		store += s;
		return *this;
	}
	friend ostream &operator<<(ostream &output, const mystring &t);
	char &operator[](int ptr)
	{
		return store[ptr];
	}
};

mystring operator+(const mystring &a, const mystring &b)
{
	mystring tmp;
	tmp.store = a.store + b.store;
	return tmp;
}

mystring operator+(const mystring &a, const char *s)
{
	mystring tmp = a;
	tmp += s;
	return tmp;
}

mystring operator+(const char *s, const mystring &a)
{
	mystring tmp(s);
	tmp = tmp + a;
	return tmp;
}

ostream &operator<<(ostream &output, const mystring &t)
{
	output << t.store;
	return output;
}

int comparestring(const void * e1, const void *e2)
{
	mystring *s1 = (mystring *) e1;
	mystring *s2 = (mystring *) e2;
	if (*s1 < *s2)
		return -1;
	else if (*s1 == *s2)
		return 0;
	else if (*s1 > *s2)
		return 1;
}

int main()
{
	mystring s1("abcd-"), s2, s3("efgh-"), s4(s1);
	mystring sarray[4] = {"big", "me", "about", "take"};
	cout << "1. " << s1 << s2 << s3 << s4 << endl;
	s4 = s3;
	s3 = s1 + s3;
	cout << "2. " << s1 << endl;
	cout << "3. " << s2 << endl;
	cout << "4. " << s3 << endl;
	cout << "5. " << s4 << endl;
	cout << "6. " << s1[2] << endl;

	s2 = s1;
	s1 = "ijkl-";
	s1[2] = 'A';
	cout << "7. " << s2 << endl;
	cout << "8. " << s1 << endl;
	s1 += "mnop";
	cout << "9. " << s1 << endl;
	s4 = mystring("qrst-") + s2;
	cout << "10. " << s4 << endl;
	s1 = s2 + s4 + " uvw " + "xyz";
	cout << "11. " << s1 << endl;
	// qsort(sarray, 4, sizeof(mystring), comparestring);
	for (int i = 0; i < 4; i ++)
		cout << sarray[i] << endl;
	// cout << s1(0, 4) << endl;
	// cout << s1(5, 10) << endl;
	return 0;
}
