#pragma once
#include <iostream>

class Vector {
	double *vector;
	int size;
public:
	Vector(int,double);
	Vector();
	Vector(const Vector &a);
	~Vector();
	void show();
	void push(double);
	void del(int);
	Vector operator+(const Vector &a);
	Vector operator== (const Vector &a);
	int operator< (const Vector &a); 
	int operator> (const Vector &a);
	double operator[](int i);
};
