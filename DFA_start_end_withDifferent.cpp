#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50],state='A';
	int i;
	// printf("Enter string : \n");
	// gets(str);
    cout<<"Enter a string"<<endl;
    cin>>str;
	
	for(i=0;i<strlen(str);i++){
		switch(state){
			case 'A':
                str[i] == 'a' ? state = 'B' : state = 'C';	
			break;
			case 'B':
                str[i] == 'a' ? state = 'B' : state = 'D';	
				break;
			case 'C':
                str[i] == 'a' ? state = 'E' : state = 'C';	
				break;	
			case 'D':
                str[i] == 'a' ? state = 'B' : state = 'D';	
				break;				
				case 'E':
                str[i] == 'a' ? state = 'E' : state = 'C';	
				break;		
		}
	}
	
	if(state=='D' || state=='E'){
        cout<<"Given string is accepted"<<endl;
	}
	else{
	    cout<<"Given string is rejected"<<endl;
	}
}