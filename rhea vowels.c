#include<stdio.h>
main()
{
	char s1[10];
	int i,v=0;
	gets(s1);
	for(i=0;s1[i]!='/0';i++)
	{
		if(s1[i]=='a'!!s1[i]=='e'!!s1[i]=='i'!!s1[i]=='o'!!s1[i]=='u')
		{
			v=v+1;
		}
		printf("%d",v);
	}
	else
	printf("not a vowel");
}
