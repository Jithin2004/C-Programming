#include <stdio.h>
main()
{
	int mark;
	printf("Enter your mark(0-1200)");
	scanf("%d",&mark);
	if(mark==1200)
	printf("Full mark with Distinction");
	else if (mark<1200&&mark>=960)
	printf("Distinction");
	else if (mark<960&&mark>=720)
	printf("First Class");
	else if (mark<720&&mark>=600)
	printf("Second Class");
	else if (mark<600&&mark>=420)
	printf("Pass");
	else 
	printf("fail");
}

