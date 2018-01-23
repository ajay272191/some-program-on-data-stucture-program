#include<stdio.h>
int hash(int);
int insert(int);
int search(int);
int del(int);
#define SIZE 1000;
int i,table[SIZE];
int main()
{
    int ch,x;

    printf("insert the distinct element\n");
    while(1)
    {
        printf("1.for insert the element\n ");
        printf("2.for delete any element\n ");
        printf("3.for search any element\n");
        printf("4.for exit\n");
        scanf("%d",&ch);
        switch(ch)
            {
            case 1:printf("give the value\n");
                    scanf("%d",&x);
                    insert(x);
                break;
            case 2:printf("give the element to delete\n");
                  scanf("%d",&x);
                  del(x);
                break;
            case 3:printf("give the element to search\n");
                    scanf("%d",&x);
                    search(x);
                break;
            case 4:
                exit(0);
                break;

            default :
                    printf("enter right choice\n");
                    break;
            }


    }
}
int hash(int x)
{
    int hashindex;
    hashindex = x%SIZE ;
    return hashindex;}


int insert(int x)
{


    i=hash(x);
        while(i!=SIZE)
            {
                if(table[i]==NULL)
                    {
                        table[i]=x;
                        return ;
                    }
                else if(table[i]==x)
                    {
                        return 0;
                    }
                else
                    {
                        i++;
                    }

            }
            printf("can't be inserted due to size of table");
        return 0;
}

int search(int x)
{
    i=hash(x);
    if(table[i]==NULL)
        {
            printf("element is not present\n");
            return ;
        }
    else
    {
        while(i!=SIZE)
            {
                if(table[i]==x)
                    {
                        printf("element is present\n");
                        return 0;
                    }
                else
                    {
                        i++;
                    }

            }
            printf("element is not present\n");
    }
}
int del(int x)
{
    i=hash(x);
    if(table[i]==NULL)
        {
            printf("element is not present\n");
            return ;
        }
    else
    {
        while(i!=SIZE)
            {
                if(table[i]==x)
                    {
                        table[i]='NULL';
                        printf("element is deleted\n");
                        return 0;
                    }
                else
                    {
                        i++;
                    }

            }
            printf("element is not present\n");
    }
}
