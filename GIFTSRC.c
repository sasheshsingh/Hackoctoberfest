#include<stdio.h>
int main()
{
    int iter,t,x,y;
    scanf("%d",&t);
    for (iter=0;iter<t;iter++)
    {
        x=0;
        y=0;
        int len;
        char flag0='0',flag1='0';
        scanf("%d",&len);
        char str[len];
        scanf("%s",&str);

        for (int i=0;i<len;i++)
        {
            if (str[i]==flag0||str[i]==flag1)
            { continue;}
            else
                {
                if (str[i] == 'L')
                {
                    x--;
                    flag0='L';
                    flag1='R';
                }
                if (str[i] == 'R')
                {
                    x++;
                    flag0='L';
                    flag1='R';
                }
                if (str[i] == 'U')
                {
                    y++;
                    flag0='U';
                    flag1='D';
                }
                if (str[i] == 'D')
                {
                    y--;
                    flag0='U';
                    flag1='D';
                }

            }
        }
        printf("%d %d\n",x,y);
    }
    return 0;
}