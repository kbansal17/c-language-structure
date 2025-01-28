#include<stdio.h>
struct dist
{
	float m,f,i;
	
};
struct dist add(struct dist d1,struct dist d2)
{
	struct dist d3;
	d3.m=d1.m+d2.m;
	d3.f=d1.f+d2.f;
	d3.i=d1.i+d2.i;
	if(d3.i>=12)
	{
		d3.i=d3.i-12;
		d3.f=d3.f+1;
	}
	if(d3.f>=3.2)
	{
		d3.f=d3.f-3.2;
		d3.m=d3.m+1;
	}
	return d3;
};
main()
{
	struct dist d,d1,d2;
	scanf("%f%f%f",&d.m,&d.f,&d.i);
	scanf("%f%f%f",&d1.m,&d1.f,&d1.i);
	d2=add(d,d1);
	printf("\t%f\t%f\t%f",d2.m,d2.f,d2.i);
}
