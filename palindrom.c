#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]){
    int len = strlen(str);
    for(int i = 0, j = len-1; i < len/2; j--, i++){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[1001];
    scanf("%s", str);
    if(is_palindrome(str)){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }

    return 0;
}