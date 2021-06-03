#include<string.h>
#include<stdio.h>
int main()
{
    int a;
    char s[100];
    char t[100];
    gets(s);
    puts(s);
    for(a=0;a<5;a+2)
    {
        t[a]=s[a];
    }
    t[a]='\0';
    puts(t);
}
