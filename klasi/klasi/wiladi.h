#pragma once
#include<iostream>
using namespace std;
class wiladi
{
public:
	int a, b, c, d;
	void jami() {
		int n = a * d + b * c, m = d * b;
		cout << n ;
		cout << "/" << m << endl;
	}
	void ganayofi() {
		int n = a * d;
		int m = c * b;
		cout << n;
		cout << "/"<< m << endl;
	}
	void sxvaoba() {
		int n = a * d - b * c, m = d * b;
		cout << n;
		cout << "/"  << m << endl;
	}
	void namravli() {
		int n = a * c, m = d * b;
		cout << n;
		cout << "/"  << m << endl;
	}
};

