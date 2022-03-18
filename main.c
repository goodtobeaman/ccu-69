#include <stdio.h>
#include <stdlib.h>
int leap_year(int year);
int first_day(int year);

int main()
{
    int year,i,a[7],k,b;
    printf("Please input a year:");
    scanf("%d",&year);
    if(leap_year(year)==0)
    {
        printf("JAN\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        int q;
        q=first_day(year);
        for(b=0;b<q;b++)
        {
            printf("    ");
        }
        for(i=1,k=q;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("FEB\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=29;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("MAR\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("APR\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("MAY\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("JUN\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("JUL\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("AUG\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("SEP\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("OCT\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("NOV\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("DEC\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }


    }
    else
    {
        printf("JAN\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<first_day(year);b++)
        {
            printf("    ");
        }
        for(i=1,k=first_day(year);i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("FEB\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=28;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("MAR\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("APR\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("MAY\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("JUN\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("JUL\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("AUG\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("SEP\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("OCT\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("NOV\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=30;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }

        printf("\n");
        printf("DEC\n");
        printf("Sun Mon Tue Wen Thu Fri Sat\n");
        for(b=0;b<k;b++)
        {
            printf("    ");
        }
        for(i=1,k=k;i<=31;i++,k++)
        {
            printf("%3d ",i);
            if(k==6)
            {
                printf("\n");
                k=-1;
            }
        }


    }
    return 0;
}

int leap_year(int year)
{
    if((year%4)!=0)
    {
        return 0;
    }
    else if((year%4)==0)
    {
        if((year%100)!=0)

        {
            return 1;
        }
    }
    else if((year%100)==0)
    {
        if((year%400)!=0)
        {
            return 0;
        }
    }
    else if((year%400)==0)
    {
        return 1;
    }

}

int first_day(int year)
{
    int fd=0,i;
    if(year==1950)
    {
        fd=0;
    }
    for(i=1951;i<=year;i++)
    {
        if(leap_year(i)==0)
        {
            if(fd==1)
            {
                fd=2;
            }
            else
            {
                if(fd==6)
                {
                    fd=0;
                }
                else
                {
                    fd=fd+1;
                }
            }
        }
        if(leap_year(i)==1)
        {
            if(fd==1)
            {
                fd=3;
            }
            else
            {
                if(fd==6)
                {
                    fd=0;
                }
                else
                {
                    fd=fd+1;
                }
            }

        }
    }
    return fd;

}

