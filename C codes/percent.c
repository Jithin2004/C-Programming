#include <stdio.h>
main()
{
	int mark,index;
	float p;
	p=mark/12;
	index= p/10;
	switch(index)
	{
		case 10:
		case 9:
		case 8:
		printf("Distinction");
		break;
		case 7:
		case 6:
		printf("First class");
		break;
		case 5:
		printf("Second class");
		break;
		case 4:
		printf("Third class");
		break;
		default:
		printf("Fail");
		break;	
	}
}
