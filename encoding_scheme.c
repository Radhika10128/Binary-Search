#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*
 * Complete the function below.
 */
char* encode(char* input) {
char *arr="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz+/0123456789";
int len=strlen(input);
int size=strlen(input)*4/3 + 5;
char *output=(char *)malloc(sizeof(char)*size);
int index=0;
int i;
for(i=0;i<len-2;i=i+3)
{
    output[index++]=arr[input[i]>>2];
    output[index++]=arr[(input[i]&0x03)<<4 | (input[i+1]&0xF0)>>4];
    output[index++]=arr[(input[i+1]&0x0F)<<2 | (input[i+2]&0xC0)>>6];
    output[index++]=arr[(input[i+2]&0x3F)];
}
if(len%3==2)
{
    output[index++]=arr[input[i]>>2];
    output[index++]=arr[(input[i]&0x03)<<4 | (input[i+1]&0xF0)>>4];
    output[index++]=arr[(input[i+1]&0x0F)<<2];
    output[index++]='=';
}
else if(len%3==1)
{
    output[index++]=arr[input[i]>>2];
    output[index++]=arr[(input[i]&0x03)<<4];
    output[index++]='=';
    output[index++]='=';
}
output[index]='\0';
return output;
}