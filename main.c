#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
	char* name; 
	int age ;
	
}person;
int main() {
	
	person p; 
	p.name="Derya";
	p.age=30;
	printf("Adress of struct: %p\n", &p);
	printf("Adress of name: %p\n", &(p.name));
	printf("Adress of age: %p\n", &(p.age));
	printf("------------------------------\n");
	
	
	person* ptr = &p; 
	printf("Adress of p.age %p\n ",&(ptr->age));
    printf("Adress of p.name %p\n",&(ptr->name));
	
}
