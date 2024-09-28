#include <stdio.h>
void main(){

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
}