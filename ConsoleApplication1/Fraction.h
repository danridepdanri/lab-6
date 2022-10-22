
#pragma once
#ifdef FRAC_EXPORTS
#define FRAC_API __declspec(dllexport) 
#else
#define FRAC_API __declspec(dllimport)
#endif
#include <iostream>
#include <string>
#include<cassert>
using namespace std;
class FRAC_API Fraction {

private:
	long first;
	unsigned short second;

public:
	Fraction() { 
		first = 0;
		second = 0;
	}
	Fraction(long m_first, unsigned short m_second = 1) { 
		first = m_first;
		second = m_second;


	}


	void init(long f, unsigned short s) { 
		first = f;
		second = s;
	}

	void read() {								
		cout << "Celaya chast': "; cin >> first;
		cout << "Drobnaya chast': "; cin >> second;
	}

	void display() {  
		cout << first << "." << second << endl;
	}

	void ToString() {
		cout << "Processing ToString() start" << endl;
		for (int i = 0; i < 10; i++) {
			cout << "Processing ToString(" << 10 * i << "%" << ")" << endl;

		}
		cout << "Processing ToString() finished" << endl;
		cout << "String: " << endl;
		string tmpCelaya, tmpDrob, tmp;
		tmpCelaya = to_string(first);
		tmpDrob = to_string(second);
		tmp = tmpCelaya + "." + tmpDrob;
		cout << tmp << endl;


	}
	Fraction operator+ (Fraction t2);
	Fraction operator- (Fraction t2);
	Fraction operator* (Fraction t2);

};
