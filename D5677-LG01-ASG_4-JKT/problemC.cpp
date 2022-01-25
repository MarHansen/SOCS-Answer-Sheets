#include<stdio.h>

int main(){
	double a, b, c, d;
	double hasilA,hasilB,hasilC,hasilD;
	double total1,total2,total3,total4,total;
	
	for(int i=0;i<3;i++){
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
		hasilA=a/1;
		hasilB=b/2;
		hasilC=c/3;
		hasilD=d/4;
	
		total1=hasilA+hasilB+hasilC+hasilD;
		total2=hasilB+hasilC+hasilD+hasilC;
		total3=hasilC+hasilD+hasilC+hasilB;
		total4=hasilD+hasilC+hasilB+hasilA;
		total=total1+total2+total3+total4;
		
		printf("%0.2lf\n", total);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
