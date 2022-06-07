#include<iostream>
#include<string.h>

void find_suff(char s[])
{
	int i,j,k;
	char suffix[50];
	for(i=0;i<=strlen(s);i++)
	{
		k=i;
		for(j=0;j<strlen(s);j++)
		{
			suffix[j]=s[k];
			k++;
		}
		suffix[j]='\0';
		std::cout<<"suffix is :"<<suffix<<std::endl;
	}
}

void find_prefix(char s[])
{
	int i,j,k;
	char suffix[50];
	for(i=0;i<=strlen(s);i++)
	{
	
		for(j=0;j<i;j++)
		{
			k=j;
			suffix[j]=s[k];
			k++;
		}
		suffix[j]='\0';
		std::cout<<"prefix is :"<<suffix<<std::endl;
	}
}

int main()
{
	char str[50];
	std::cout<<"Enter string :"<<std::endl;
    std::cin>>str;
	find_prefix(str);
	find_suff(str);
	return 0;
}
