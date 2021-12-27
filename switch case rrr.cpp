#include<stdio.h>
int main()
{ int ch;
printf("enter the choice her:");
scanf("%d",&ch);
switch(ch)
{
	case 1:
		printf("name:rishitha");
		printf("gender:female");
		printf("age:18");
		break;

	case2:
		printf("name:rikhitha");
		printf("gender:female");
		printf("age:18");
		break;

	case3:
		printf("name:sanjana");
		printf("gender:female");
		printf("age:18");
		break;
	case4:
		printf("name:pavan tej");
		printf("gender:male");
		printf("age:18");
		break;

	case5:
		printf("nmae:venu harsha");
		printf("gender:male");
		printf("age:18");
		break;
	
	default:
		printf("invalid choice");
	}
}
