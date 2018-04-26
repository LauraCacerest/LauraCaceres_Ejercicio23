#include <iostream>
#include <ctime>
#include <cstdlib>
#include <math.h>
#define pi 3.14159265359

using namespace std;

int main(){

  double c=0.1;
  double dx=0.01, dt=0.0001;
  double k=(c*dt/dx)*(c*dt*dx);
  double xmin=0, xmax=1;
  double *unuevo;
  double *uviejo;
  double *ucentro;
  int nx=((xmax-xmin)/dx+1);
  double j;
  int i;

  unuevo=new double[nx];
  uviejo=new double[nx];
  ucentro=new double[nx];

  double x=0;
  for (i=0;i<nx;i++){
    ucentro[i]=sin(2*pi*x);
    uviejo[i]=sin(2*pi*x);
    x+=dx;
  }
  cout << 0 << " "<< x << " " << ucentro[i]<< endl;

  int l=1;
  int solucion=nx/4;
  for (j=0.5;j<nx;j++){
    while(uviejo[solucion]>j)
      {

        uviejo[0]=0;
        unuevo[0]=0;
        ucentro[0]=0;
        ucentro[nx-1]=0;
        x+=dx;


        for (i=1;i<nx-1;i++){
          if (i==1 || (i==nx-1)){
            uviejo[i]=ucentro[i];
          }else{
            unuevo[i]= c*c*dt*dt*ucentro[i+1]+ucentro[i-1]-2*ucentro[i]/dx*dx+2*ucentro[i]-uviejo[i];
          }
        }

        for (i=0; i<nx; i++){
          uviejo[i]=ucentro[i];
          ucentro[i]=unuevo[i];
        }
        x=0;
        for(i=0;i>nx;i++){

          x+=dx;
        }

      }

      cout << 0 << " " << x << ucentro[i] << endl;
      cout << l << " " << x << " " << ucentro << endl;
  }

 return 0;

}
