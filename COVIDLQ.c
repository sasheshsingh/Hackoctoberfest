#include<stdio.h>
int main(void)
{
    int t;
    scanf("%d",&t);
    for (int iter=0;iter<t;iter++)
    {
        int len;
        scanf("%d",&len);
        int a[len];
        for (int it=0;it<len;it++)
        {
            scanf("%d",&a[it]);
        }
        int i=0,ans=1,j,flag2=0;
        while (1)
        {
            if (a[i]==1 || i==len-1)
            {break;}
            i++;}
        j=i+1;
        while (1)
        {
            if (a[j]==1||j==len)
            {break;}
            j++;
        }
        if (a[i]==1&&a[j]==1)
        {
            if (j-i<6)
                ans=0;
        }
        while(j<len)
        {
            if (a[i]==0)
            {
                i++;
            }
            if (a[j]==0)
            {
                j++;
            }
            if (a[i]==1&&a[j]==1)
            {
                if (j-i>=6)
                {
                    i++;
                    j++;
                }
                else
                {
                    ans=0;
                    break;
                }
            }
        }
        if (ans==1)
        {printf("YES\n");}
        if (ans==0)
        {printf("NO\n");}
    }
    return 0;
}