#include <stdio.h>
#include <math.h>

double rad_to_deg(double rad){
	return (rad*180)/M_PI;
}

double deg_to_rad(double deg){
	return (deg*M_PI)/180;
}



int main(){


printf("%g\n\n",sin(deg_to_rad(270)));



	return 0;
}
