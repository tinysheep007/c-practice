#include <stdio.h>

typedef const char* String;

typedef struct Stu {
    int id;
    String name;
} Student;

int main(){
    Student s1 = {1, "Tom"};
    printf("%s\n", s1.name);
}