#include<stdio.h>
main()
{
	int dat1sum,dat2sum,resuma;
	int dat1res,dat2res,resresta;
	int dat1mul,dat2mul,resmulti;
	int dat1div,dat2div,resdivi;
printf("\n");
	printf("Escribe el valor que quiera sumar:");
	scanf("%d",&dat1sum);
	printf("Escribe el valor que quiera sumar:");
	scanf("%d",&dat2sum);
	resuma=dat1sum+dat2sum;
	printf("Resultado de la suma: %d\n",resuma);
printf("\n");
    printf("Escribe el valor que quiera restar:");
	scanf("%d",&dat1res);
	printf("Escribe el valor que quiera restar:");
	scanf("%d",&dat2res);
    resresta=dat1res-dat2res;
	printf("Resultado de la resta: %d\n",resresta);
printf("\n");
    printf("Escribe el valor que quiera multiplicar:");
	scanf("%d",&dat1mul);
	printf("Escribe el valor que quiera multiplicar:");
	scanf("%d",&dat2mul);
    resmulti=dat1mul*dat2mul;
	printf("Resultado de la multiplicaicon: %d\n",resmulti);
printf("\n");
    printf("Escribe el valor que quiera dividir:");
	scanf("%d",&dat1div);
	printf("Escribe el valor que quiera dividir:");
	scanf("%d",&dat2div);
	resdivi=dat1div/dat2div;
	printf("Resultado de la division: %d\n",resdivi);
printf("\n");		
}
