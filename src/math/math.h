#ifndef MATH_H
#define MATH_H

class Matrix {
	public:
		Matrix(int n, int m);
		~Matrix();
	
		Matrix operator*(const int b);
		Matrix operator*(const float b);
		Matrix operator*(const Matrix& b);
	
		Matrix& operator*=(const int b);
		Matrix& operator*=(const float b);
		Matrix& operator*=(const Matrix& b);
	
		Matrix operator+(const int b);
		Matrix operator+(const float b);
		Matrix operator+(const Matrix& b);
	
		Matrix& operator+=(const int b);
		Matrix& operator+=(const float b);
		Matrix& operator+=(const Matrix& b);
	
		Matrix operator-(const int b);
		Matrix operator-(const float b);
		Matrix operator-(const Matrix& b);
	
		Matrix& operator-=(const int b);
		Matrix& operator-=(const float b);
		Matrix& operator-=(const Matrix& b);
		
	
	protected:
		float * data;
};

#endif
