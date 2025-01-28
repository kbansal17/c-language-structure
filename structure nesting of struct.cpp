#include<stdio.h>
main()
{
	
	
	struct book
	{
		char name[40];
		int price,pages;
	};
   	
	struct author
	{
		struct book b1;
		char authorname[50];
		int age;
	};
	struct author a1={{"wind in the willows",300,359},"khushi",19};

	printf("\t%s\t%d\t%d\t%s\t%d",a1.b1.name,a1.b1.price,a1.b1.pages,a1.authorname,a1.age);
}
