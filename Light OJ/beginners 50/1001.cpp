/*
* Solution to Light OJ 1001
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>

int main()
{
    int t,a,b;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d",&a);

        if(a>=10)
            {
                b=a-10;
                a=a-b;
            }
        else
            b=0;

        printf("%d %d\n", a,b);

    }

    return 0;
}
