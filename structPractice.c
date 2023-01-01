#include <stdio.h>

//the struct name could start with lower or Upper case
struct Student{
    int id;
    char *name;
    int age;
};

void editName(struct Student *s , char* newName) {
    s->name = newName;
}

int main(){
    struct Student s1 = {1, "bob", 24};
    printf("%d\n", s1.id);
    struct Student s2 = {2, .age = 20};

    struct Student students[] = {{1,"john", 12},{2,"jin", 31},{3,"hade", 22}};
    printf("second student name: %s\n", students[1].name);

    struct Student * sPtr = &s1;
    printf("age of s1 (*sPtr).age: %d\n", (*sPtr).age);
    //we use the -> method to get the age because the . has a higher excution 
    //priority than *, it means we will get the age property of the address of Ptr
    //but the address itself has no age. Only the actual object that holds the age value has age
    
    //the -> method can be used to get the property from a pointer 
    printf("age of s1 sPtr->age: %d\n", sPtr->age);

    printf("original name of s1: %s\n", s1.name);
    editName(&s1, "peater");
    //we must pass in the address and change the name property at that
    //address, in order to affect the real struct Student
    //or else it will be like the failure of swap vars because we are changing local vars of method
    printf("after change: %s\n", s1.name);
}

