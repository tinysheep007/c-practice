#include <stdio.h>
#include <string.h>

int comp(char* str1, char* str2){
    int flag = 0;
    for(int i=0;i<strlen(str1); i++){
        flag = 0;
        for(int j=0;j<strlen(str2);j++){
            if(str1[i+j] != str2[j]){
                flag = 1;
                //printf("comparing %c %c\n", str1[i+j], str2[j]);
                break;
            }
        }
        if(flag == 0){
            break;
        }
    }

    if(flag == 1){
        printf("false. Str1 does not include str2.");
        return 0;
    }else{
        printf("true. Str1 include str2.");
        return 1;
    }

}

int main(){
    char str1[128];
    char str2[128];

    gets(str1);
    gets(str2);
    comp(str1, str2);
    return 0;
    
}

