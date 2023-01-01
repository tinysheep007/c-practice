#include <stdio.h>
// all variable name inside any enum can not repeat in other enums.
enum Status {low=1, middle=2, high=3};

enum Status2 {l, m, h};

enum Status3 {l2, m2=5, h2};

int main(){
    enum Status s1 = middle;
    printf("middle with everything =1 =2 =3 : %d\n", s1);
    enum Status2 s2 = m;
    printf("middle without explicit label =1 =2 =3: %d\n", s2);
    enum Status3 s3 = h2;
    printf("high with middle set to 5: %d\n", s3);
}