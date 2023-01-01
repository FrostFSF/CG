#include <iostream.h>
#include <conio.h>

class Complex
{
	private:
	int real;
	int imaginary;
	
	
	public:
	Complex();
	friend istream & operator >> (istream &in, Complex &c)
	{
		cout << "Enter real part: ";
		in >> c.real;
		cout << "Enter imaginary part: ";
		in >> c.imaginary;
		
		return in;
	}
	friend ostream & operator << (ostream &out, Complex &c)
	{
		out << c.real << "+" << c.imaginary << "i";
		return out;
	}
	Complex operator + (Complex &c)
	{
		Complex temp;
		temp.real = real+c.real;
		temp.imaginary = imaginary+c.imaginary;
		return temp;
	}
	Complex operator * (Complex &c)
	{
		Complex temp;
		temp.real = real*c.real - imaginary*c.real;
		temp.imaginary = real*c.imaginary + imaginary*c.real;
		return temp;
	}
};


Complex::Complex()
{
	real = 0;
	imaginary = 0;
}


int main()
{
	Complex c1,c2,result;
	
	cout << "Complex c1: ";
	cout << c1 << endl;
	cin >> c1;
	
	cout << "Complex c2: ";
	cout << c2 << endl;
	cin >> c2;
	
	result = c1+c2;
	cout << "Addition of two complex: ";
	cout << result;
	result = c1*c2;
	cout << "Multiplication of two complex: ";
	cout << result;
	
	getch();
	return 0;	
}
