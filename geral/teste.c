#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
int main(){
system("color a");

char nm[3][20],aux[20];
int j,i;           
int cmp;


for (int i = 0; i < 3; i++)
{
    printf("Nome: %i",i+1);
    scanf("%s", nm[i]);        
}

for (int i = 0; i < 3; i++)
{
    for (int j = i+1; j < 3; j++)
    {
        cmp=strcmp(nm[i],nm[j]);
        if (cmp>0)           
        {
            strcpy(aux,nm[i]);
            strcpy(nm[i],nm[j]);        
            strcpy(nm[j],aux);
        }
    }
}
printf("\n nomes em ordem alfabetica:\n\n");
for (int i = 0; i < 3; ++i)
{
    puts(nm[i]);        
}
}