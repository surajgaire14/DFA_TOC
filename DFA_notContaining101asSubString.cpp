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
                str[i] == '1' ? state = 'B' : state = 'A';
			break;
			case 'B':
                str[i] == '1' ? state = 'B' : state = 'C';
				break;
			case 'C':
                str[i] == '1' ? state = 'D' : state = 'A';
				break;
			case 'D':
                str[i] == '1' ? state = 'D' : state = 'D';
				break;
								
		}
	}
	
	if(state!='D'){
		std::cout<<"Given string is accepted"<<std::endl;
	}
	else{
		std::cout<<"Given string is rejected"<<std::endl;
	}
}