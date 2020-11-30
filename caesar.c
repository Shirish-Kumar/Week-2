#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
    int k =atoi(argv[1]);
    string s=get_string("PLAIN TEXT:");
    int n=strlen(s);
    string y[n];
    printf("CIPHER TEXT:");
    for(int i=0;i<n;i++)
    {
        int r;
        r=(int)s[i]+k;
        if(isupper(s[i]))
        {
            if(r>90)
            {
              printf("%c",(char)(r-26)); 
            }
            else if(r<65)
            {
               printf("%c",(char)(r+26)); 
            }
            else
            {
              printf("%c",(char)r);
            }
        }
        else if(islower(s[i]))
        {
            if(r>122)
            {
                 printf("%c",(char)(r-26));
            }
            else if(r<97)
            {
                printf("%c",(char)(r+26));
            }
            else
            {
              printf("%c",(char)r);
            }
        }
        else
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
    }
    else
    {
        printf("USAGE: ./caesar KEY\n");
    }
    
}
