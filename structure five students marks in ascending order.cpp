#include<stdio.h>
main()
{
	int i,j;
	struct student
	{
		char name[20];
		int classs,rollno,totalmarks; 
	};
	struct student s[5],t;
	for(i=0;i<=4;i++)
	{
	scanf("%s%d%d%d",&s[i].name,&s[i].classs,&s[i].rollno,&s[i].totalmarks);
}
	for(j=0;j<=4;j++)
	{
	for(i=0;i<4;i++)
		{
			if(s[i].totalmarks>s[i+1].totalmarks)
			{
				t=s[i];
				s[i]=s[i+1];
				s[i+1]=t;
			}
		}
		}	
	for(i=0;i<=4;i++)
	printf("\n%s\n%d\n%d\n%d",s[i].name,s[i].classs,s[i].rollno,s[i].totalmarks);
		
}

