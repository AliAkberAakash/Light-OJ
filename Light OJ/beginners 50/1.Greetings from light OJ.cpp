/*
* Solution to Greetings from light OJ
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
        scanf("%d %d", &a, &b);

        a+=b;

        printf("Case %d: %d\n", i+1, a);
    }

    return 0;
}
