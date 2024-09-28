#include <stdio.h>
void main(){

	int i, a = 10, b = 20;
	double f;
	char ch;

	for(i = 0; i < 5; i++)
	{
		printf("please enter a char\n"); 
		ch = getchar(); // read a char other code; 
  		ch = getchar(); // This line will flush '\n' character left behind by the previous getchar(). 
		ch = getchar(); 
		printf("ch = %c\n", ch);
		switch(ch){
                case '+': f = a + b; printf("f = %d\n", f);	break;
                case '-': f = a - b; printf("f = %d\n", f); break;
                case '*': f = a * b; printf("f = %d\n", f); break;
                case '/': f = a / b; printf("f = %d\n", f); break;
                default: printf("invalid operation\n"); break;
             
        }
	}





	/*
        ch = '+';
        int a = 10, b = 20;
        double f;
        printf("ch = %c\n", ch);
        switch(ch){
                case '+': f = a + b; printf("f = %d\n", f);	break;
                case '-': f = a - b; printf("f = %d\n", f); break;
                case '*': f = a * b; printf("f = %d\n", f); break;
                case '/': f = a / b; printf("f = %d\n", f); break;
                default: printf("invalid operation\n"); break;
             
        }
        ch = '-';
        printf("ch = %c\n", ch);
        switch (ch) {
                case '+': f = a + b; printf("f = %d\n", f); break;
                case '-': f = a - b; printf("f = %d\n", f); break;
                case '*': f = a * b; printf("f = %d\n", f); break;
                case '/': f = a / b; printf("f = %d\n", f); break;
                default: printf("invalid operator\n"); break;
   
        }
        ch = '*';
        printf("ch = %c\n", ch);
        switch (ch){
                case '+': f = a + b; printf("f = %d\n", f); break;
                case '-': f = a - b; printf("f = %d\n", f); break;
                case '*': f = a * b; printf("f = %d\n", f); break;
                case '/': f = a / b; printf("f = %d\n", f); break;
                default: printf("invalid operator\n"); break;
               
        }
        ch = '/';
        printf("ch = %c\n", ch);
        switch (ch){
                case '+': f = a + b; printf("f = %d\n", f); break;
                case '-': f = a - b; printf("f = %d\n", f); break;
                case '*': f = a * b; printf("f = %d\n", f); break;
                case '/': f = a / b; printf("f = %d\n", f); break;
                default: printf("invalid operator\n"); break;
                
        }
        */
}