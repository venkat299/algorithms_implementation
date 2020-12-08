//
//  pointers.c
//  BasicPointers
//

/*
 "Today we're learning C Pointers":
 CS Student: *has war flashbacks*
 */

#include <stdio.h>
#include <stdlib.h>

void ex1(void);
void ex2(void);
void ex3(void);

void ex1(){
    
    int  var1;
    char var2[10];
    
    printf("Address of var1 variable: %p\n", &var1);
    printf("Address of var2 variable: %p\n", &var2);
    
    return;
}

void ex2(){
    // Just a regular ol' variable.
    int i = 128;
    // iPtr is a memory address. and we use &i to get the memory address of i.
    int* iPtr = &i;
    
    // When using iPtr now, putting a (*) in front says
    // "lets look at what value the address of i is holding"
    // this is called Dereferencing.
    printf("iPtr points at the location of i; %p.\nThe value in this register is %d\n", iPtr, *iPtr);
}

void ex3(){
    // Cool
    int i = 128;
    // Nice. i think i've got the hang of this!
    int* iPtr = &i;
    // A pointer to a pointer!
    int** iPtrPtr = &iPtr;
    // A pointer to a pointer pointer
    int*** iPtrPtrPtr = &iPtrPtr;
    // A pointer to a pointer pointer, pointing at a pointer!
    int**** iPtrPtrPtrPtr = &iPtrPtrPtr;
    // We need more power!
    int***** iPtrPtrPtrPtrPtr = &iPtrPtrPtrPtr;
    
    printf("i:%d\nDereferencing iPtr (*iPtr):%d\nDouble-Dereferencing iPtrPtr (**iPtrPtr):%d\nTRIPLE-dereferencing (***iPtrPtrPtr):%d\n",i,*iPtr,**iPtrPtr, ***iPtrPtrPtr);
    printf("5-dereferences (*****iPtrPtrPtrPtrPtr): %d\n",*****iPtrPtrPtrPtrPtr);
}


/*
 Fun fact: {int* i} and {int *i} mean the same thing,
 it took me half a semester to figure that out.
 */

int main(int argc, const char * argv[]) {
    ex1();
    ex2();
    ex3();
    
    return EXIT_SUCCESS;
}