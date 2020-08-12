#include<stdio.h>
#include<string.h>
int main()
{
    char str[]={"my_name_is_edcast_future_skills"};
    int i=0;
    while(str[i]!='\0')
    {

        if(str[i]=='_')
        {
            printf("\0t");
            printf(",%c",str[++i]);
        }
        else
        {
        printf("%c",str[i]);
        }
        i++;
    }
    return 0;
}
