#include <stdio.h>
#include <string.h>

int main(){
    char str[128];
    //scanf("%s", str);
    gets(str);
    printf("%s\n", str);
    int length = strlen(str);
    int left = 0;
    int right = length - 1;
    int flag = 0;
    while(left < right){
        if(str[left] != str[right]){
            flag = 1;
            break;
        }
        left++;
        right--;
    }

    if(flag == 1){
       printf("not palindrome"); 
    }else{
        printf("it's a palindrome");
    }
}

