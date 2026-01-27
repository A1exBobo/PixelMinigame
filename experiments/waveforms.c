#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define WindowXsize 600
#define WindowYsize 400
#define pi 3.141


int main(){
	//general formula y(t) = A * sin(w*t + e)
	
	double A,w,e,y;
	srand(time(NULL));
	A = rand() % (WindowYsize - 20);
	w = 10;
    e = 0;
	
	
	for(int t = 0;t < WindowXsize;t++){
			double phase = w*t+e;
			y = A*sin(phase);
			
			printf("y[%d] = %f\n",t,y);
		}
	
	
	
	
	
	
	}
