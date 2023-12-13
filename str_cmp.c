#include<stdio.h>
#include<string.h>
int main(){
    int found = 0;
    char s1[30] = "abcdefghijklmn";
    char s2[10] = "cde";
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    int i,j;

    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if (s1[i+j]!=s2[j]){
                break;
            }
        }
        if(j==l2){
            found = 1;
            break;
        }
    }
    if (found){
        printf("Its present!!");
    }else{
        printf("Not present!");
    }




    return 0;
}
