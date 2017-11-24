#ifndef MatheusRangel_H
#define MatheusRangel_H
#include <cmath>
#define PI 3.14159265
namespace geometria
{
	class formas{
		protected:
			double largura;
			double altura;
		public:
			formas();
			virtual double area() = 0;
			virtual double perimetro() = 0;
	};

	class triangulo : public formas{
		private:
			double lado1, lado2, lado3;
		public:
			triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3){
				formas::largura = l1;
				double s = (l1 + l2 + l3) / 2
				s = std::sqrt(s*(s - l1)*(s - l2)*(s - l3))
				formas::altura = s / (0.5 * l1);
			}
			triangulo(double l, double a):lado1(l){
				formas::largura = l;
				formas::altura = a;
				lado2 = std::sqrt((l/2) * (l/2) + a * a);
				lado3 = lado2;
			}
			double area(){ return (formas::largura * formas::altura) / 2;}
			double perimetro(){return lado1 + lado2 + lado3;}	
	};

	class quadradro : public formas{
		public:
			quadradro(double a) : formas::largura(a), formas::altura(a){}
			double area() { return formas::largura * formas::altura; }
			double perimetro() { return formas::largura * 4; }
	};
	
	class retangulo : public formas {
		public:
			retangulo(double a, double h) : formas::largura(a), formas::altura(h){}
			double area() { return formas::largura * formas::altura; }
			double perimetro() { return formas::largura * 2 + formas::altura * 2;}
	};
	
	class circulo {
		private:
			double raio;
		public:
			circulo(double r) : raio(r){}
			double area() { return  PI * raio * raio;}
			double perimetro() { return 2 * PI * raio;}
	}
	class piramede {
		private:
			triangulo lado;
			quadradro base;
			double altura;
			double largura;
		public:
			piramede(double a, double l): altura(a), largura(l){
				lado(sqrt(a * a + (l/2) * (l/2)),l);
				base(l);
			}
			double area() { lado.area()*4 + base.area();}
			double volume() { (base.area()*altura)/3;}
	}
	class cubo{
		private:
			double lado;
		public:
			cubo(double l):lado(l){}
			double area() { return 6 * lado * lado;}
			double volume(){ return lado * lado * lado;}
	}
	class esfera{
		private:
			double raio;
		public:
			esfera(double r):raio(r){}
			double area(){ return 4 * PI * raio * raio;}
			double volume(){ return (4.0/3.0) * PI * raio * raio * raio;}
	}
	class paralalepipedo{
		private:
			double lado1, lado2, lado3;
		public:
			paralalepipedo(double l1, double l2, double l3):lado1(l1), lado2(l2), lado3(l3){}
			double area(){ return (2 * lado1 * lado2) + (2 * lado1 * lado3) + (2 * lado2 * lado3);}
			double volume(){ return lado1 * lado2 * lado3;}
	}

}
#endif