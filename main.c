//
//  main.c
//  14
//
//  Created by 이예림 on 12/4/25.
//

#include <stdio.h>
#include <stdlib.h>

void main(int argc, const char * argv[]) {
    char*pc = NULL; //문자형 포인트변수 선언 , 초기화: NULL
    int i=0;
    
    pc = (char*)malloc(100*sizeof(char)); //동적할당 malloc함수 쓰기, 기본단위 1bytex100
    if(pc==NULL){
        printf("메모리 할당 오류\n");
        exit(1);
    }
    
    for(i=0;i<26;i++){
        pc[i]='a'+i;
    }
    pc[i] = 0;
    printf("%s\n",pc);
    free(pc);
}
