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
			formas(){};
			virtual double area() = 0;
			virtual double perimetro() = 0;
	};

	class triangulo : public formas{
		private:
			double lado1, lado2, lado3;
		public:
			//recebe como parametros o valor dos 3 lados
			//com isso calcula a altura, com o primeiro lado como base.
			triangulo(double l1, double l2, double l3) : lado1(l1), lado2(l2), lado3(l3){
				formas::largura = l1;
				double s = (l1 + l2 + l3) / 2;
				s = std::sqrt(s*(s - l1)*(s - l2)*(s - l3));
				formas::altura = s / (0.5 * l1);
			}
			//recebe como parametros o valor de um dos lados, e a altura do triangulo 
			//com esse lado como base
			triangulo(double l, double a):lado1(l){
				formas::largura = l;
				formas::altura = a;
				lado2 = std::sqrt((l/2) * (l/2) + a * a);
				lado3 = lado2;
			}
			double area();
			double perimetro();
	};

	class quadrado : public formas{
		public:
			//recebe como parametro o valor do lado
			quadrado(double a) { formas::largura = a; formas::altura = a;}
			double area();
			double perimetro();
	};
	
	class retangulo : public formas {
		public:
			retangulo(double a, double h){ formas::largura = a; formas::altura = h;}
			double area();
			double perimetro();
	};
	
	class circulo {
		private:
			double raio;
		public:
			circulo(double r) : raio(r){}
			double area();
			double perimetro();
	};
	class piramede {
		private:
			triangulo lado;
			quadrado base;
			double altura;
			double largura;
		public:
			//recebe como parametros o valor do lado da base quadrada e altura da piramede
			//com isso é calculado o valor da altura dos triangulos que formam os lados
			piramede(double a, double l) : lado(sqrt(a * a + (l/2) * (l/2)) , l), base(l), altura(a), largura(l){}
			double area();
			double volume();
	};
	class cubo{
		private:
			double lado;
		public:
			cubo(double l):lado(l){}
			double area();
			double volume();
	};
	class esfera{
		private:
			double raio;
		public:
			esfera(double r):raio(r){}
			double area();
			double volume();
	};
	class paralelepipedo{
		private:
			double lado1, lado2, lado3;
		public:
			paralelepipedo(double l1, double l2, double l3):lado1(l1), lado2(l2), lado3(l3){}
			double area();
			double volume();
	};

}
#endif