#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int max_digit_length = 1000; 

void printanswer(char* a, int x);


int main(void) {
    
    char* a1 = malloc(sizeof(char* )*max_digit_length);
    char* b1 = malloc(sizeof(char* )*max_digit_length);

    printf("Please enter the First Multiplicant:\t");
	scanf("%s", a1);
	printf("Please enter the Second Multiplicant:\t");
    scanf("%s", b1);

    long a_len = strlen(a1);
    long b_len = strlen(b1);

    char* a = malloc(sizeof(char* )* (a_len+1)); 
    char* b = malloc(sizeof(char* )* (b_len+1)); 


    strcpy(a, a1);
    strcpy(b, b1);

    free(a1);
    free(b1);

    // fill with leading zeroes
    if (a_len > b_len) { 
        int diff = a_len-b_len;
        char* temp = malloc(sizeof(char*) * (diff+1));
        
    }

    printanswer(a, a_len);

    free(a);
    free(b);

} 

int karatsuba (int a , int b){
    
    return 0;
}

void printanswer(char *x, int n){
	int flag=0;
	int i=0;
	while(flag==0)
		{
			if(x[i]=='0' && flag==0 && i<n)
				{flag=0;i++;}
			else 
				flag=1;
		}
	if(flag==1)
		printf("The RESULT is:\t %s\n\n",x+i);
			
}