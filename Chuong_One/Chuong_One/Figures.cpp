#include"Figures.h" // nhằm để biết cấu trúc của lớp Point2D, cicle
#include <iostream>

using namespace std;
void Point2D::Set(double Xo, double Yo)
{
	X = Xo; 
	Y = Yo; // Tương đương: this-> X = Xo; this-> Y = Yo;
}
void Point2D::Move(double dX, double dY)
{
	X += dX;
	Y += dY;
}
void Point2D::Scale(double sX, double sY)
{
	X *= sX;
	Y *= sY;
}

const double PI = 3.14159;

void Circle::Set(double Xo, double Yo, double r)
{
	Center.Set(Xo, Yo);
	if (r < 0)
		r = 0;
	this->Radius = r;	
}
void Circle::Move(double dX, double dY)
{
	Center.Move(dX, dY); //gọi phương thức của Point2D
}
double Circle::Area()
{
	return  PI * Radius * Radius;
}
double Circle::Perimeter()
{
	return 2 * PI * Radius;
}
void Circle::Set(double r)
{
	if (r >= 0)
		Radius = r;
}

void main()
{
	Circle cir;
	cir.Set(0, 10, 20);
	cir.Set(-5); 
	

}