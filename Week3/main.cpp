#include <iostream>
#include <fstream>
#include <math.h>

double f(double x){
    double y = exp(-pow(x,2));
    return y;
}

double DC(double x, double h){
    
    double d;
    double fdc;
    
    
    d = 0;
    if (h!=d){
        fdc = (f(x+h)-f(x-h))/2*h;
    }
    return fdc;
}
    
int main(){

	std::ofstream *File; // Definimos apuntador

	File = new std::ofstream[2]; // Reservamos memoria

	File[0].open( "MisDatos.txt", std::ofstream::trunc ); // Abrir y dejar listo para escribir

	std::cout << File  << std::endl;
	double h = 0.01;
	double Np=40/h;
	double j=-20;
	for(int i = 0; i <=Np; i++){
	    
		File[0] << j << " " << DC(j,h) << std::endl;
		j=j+h;
	    
	}
	File[0].close();

	return 0;
}
