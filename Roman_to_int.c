#include<stdio.h>
#include<string.h>

int main(){
    char chk,rn[10];
    int i,int_value=0;
    printf("Enter a Roman Number\n");
    gets(rn);
    for(i=0 ; rn[i] != '\0'; i++){
    	chk=rn[i];
    	switch(chk){
    		case 'I':
    			int_value =int_value+1;
    			break;
    		case 'V':
    			int_value =int_value + 5;
    			break;
    		case 'X':
				int_value =int_value+ 10;
				break;
			case 'L':
				int_value =int_value+ 50;
				break;
			case 'C':
				int_value =int_value+ 100;
				break;
			case 'D':
				int_value =int_value+ 500;
				break;
			case 'M':
				int_value =int_value+ 1000;
				break;			
		}		      
    }
    printf("%d",int_value);

}
