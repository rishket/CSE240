	
#include <stdio.h>
void main(){

	int i, a = 10, b = 20;
	double f;
	char ch;

	for(i = 0; i < 5; i++)
	{
		printf("please enter a char\n"); 
		scanf(" %c", &ch);
		printf("ch = %c\n", ch);
		switch(ch){
                case '+': f = (double)a + (double)b; printf("f = %f\n", f);	break;
                case '-': f = (double)a - (double)b; printf("f = %f\n", f); break;
                case '*': f = (double)a * (double)b; printf("f = %f\n", f); break;
                case '/': f = (double)a / (double)b; printf("f = %f\n", f); break;
                default: printf("invalid operation\n"); break;
             
        }
	}
}