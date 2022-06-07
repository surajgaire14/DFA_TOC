#include<iostream>
#include<string.h>

int main()
{
	char str[50],state='A';
	int i;
	std::cout<<"Enter string :"<<std::endl;
    std::cin>>str;
	
	for(i=0;i<strlen(str);i++){
		switch(state){
			case 'A':
                str[i] == 'a' ? state = 'B' : state = 'E';
			break;
			case 'B':
                str[i] == 'a' ? state = 'E' : state = 'C';
				break;
			case 'C':
                str[i] == 'a' ? state = 'D' : state = 'E';
				break;	
			case 'D':
                str[i] == 'a' ? state = 'B' : state = 'C';
				break;
			case 'E':
                str[i] == 'a' ? state = 'E' : state = 'E';
				break;								
		}
	}
	
	if(state=='D' || state=='C'){
		std::cout<<"Given string is accepted"<<std::endl;
	}
	else{
		std::cout<<"Given string is rejected"<<std::endl;
	}
}