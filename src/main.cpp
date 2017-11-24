#include "include/MatheusRangel.h"
#include <iostream>
using namespace std;
using namespace geometria;
int main(){
	triangulo t1(5, 7, 3);
	triangulo t2(5, 7);
	cout<<"t1: area = "<<t1.area()<<" perimetro = "<< t1.perimetro()<<endl;
	cout<<"t2: area = "<<t2.area()<<" perimetro = "<< t2.perimetro()<<endl;
	quadrado q(5);
	cout<<"q: area = "<<q.area()<<" perimetro = "<< q.perimetro()<<endl;
	retangulo r(5,3);
	cout<<"r: area = "<<r.area()<<" perimetro = "<< r.perimetro()<<endl;
	circulo c(5);
	cout<<"c: area = "<<c.area()<<" perimetro = "<< c.perimetro()<<endl;
	piramede p(5,8);
	cout<<"p: area = "<<p.area()<<" volume = "<< p.volume()<<endl;
	cubo cq(5);
	cout<<"p: area = "<<cq.area()<<" volume = "<< cq.volume()<<endl;
	esfera e(5);
	cout<<"e: area = "<<e.area()<<" volume = "<< e.volume()<<endl;
	paralelepipedo pa(5,3,3);
	cout<<"pa: area = "<<pa.area()<<" volume = "<< pa.volume()<<endl;
}