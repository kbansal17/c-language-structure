#include<stdio.h>
struct book
{
	char name[40];
	int page,price;
};
void display(struct book b)
{
	printf("\t%s\t%d\t%d",b.name,b.page,b.price);
}
main()
{
	struct book b1;
	scanf("%s%d%d",&b1.name,&b1.page,&b1.price);
	display(b1);
}
