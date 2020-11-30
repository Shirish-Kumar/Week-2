#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int main(void)
{
    string s= get_string("TEXT:");
    int n=strlen(s);
    int sp,se;
    sp=0;
    se=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            sp++;
        }
        else if(s[i]=='.' ||s[i]=='?' ||s[i]=='!' )
        {
            se++;
        }
    }
    int w,l;
    w=sp+1;
    l=n-sp-se;
    float L,S;
    L=((float)l/w)*100;
    S=((float)se/w)*100;
    float index;
    index = (0.0588*L)-(0.296*S)-15.8;
    int grade;
    grade = (int)round(index);
    if(grade<1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade>16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i \n",grade);
    }
}