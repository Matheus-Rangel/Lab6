#include "include/MatheusRangel.h"

namespace geometria{

	double triangulo::area(){ return (formas::largura * formas::altura) / 2;}
	double triangulo::perimetro(){return lado1 + lado2 + lado3;}

	double quadrado::area() { return formas::largura * formas::altura; }
	double quadrado::perimetro() { return formas::largura * 4; }

	double retangulo::area() { return formas::largura * formas::altura; }
	double retangulo::perimetro() { return formas::largura * 2 + formas::altura * 2;}

	double circulo::area() { return  PI * raio * raio;}
	double circulo::perimetro() { return 2 * PI * raio;}

	double piramede::area() { return lado.area()*4 + base.area();}
	double piramede::volume() { return (base.area()*altura)/3;}

	double cubo::area() { return 6 * lado * lado;}
	double cubo::volume(){ return lado * lado * lado;}

	double esfera::area(){ return 4 * PI * raio * raio;}
	double esfera::volume(){ return (4.0/3.0) * PI * raio * raio * raio;}

	double paralelepipedo::area(){ return (2 * lado1 * lado2) + (2 * lado1 * lado3) + (2 * lado2 * lado3);}
	double paralelepipedo::volume(){ return lado1 * lado2 * lado3;}
}