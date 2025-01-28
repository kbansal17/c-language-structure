#include<stdio.h>
main()
{
	struct object
	{
		char name[50];
		int age;
	};
	struct object o1={"khushi",19};
		struct object o2={"harsh",20};
		struct object o3={"abc"};
		o3.age=o2.age;
		printf("%s\t%d",o1.name,o1.age);
		printf("\n%s\t%d",o2.name,o2.age);
		printf("\n%s\t%d",o3.name,o3.age);
}
