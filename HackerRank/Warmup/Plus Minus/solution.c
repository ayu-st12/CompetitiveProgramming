#include<stdio.h>
int main()
    {
    int i,n,a[100],p=0,ne=0,z=0;
    float pos,neg,zer;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
        {
        if(a[i]>0)
            p++;
        if(a[i]<0)
            ne++;
        if(a[i]==0)
            z++;
    }
    pos = (float)p/n;
    neg = (float)ne/n; 
    zer = (float)z/n;
    
    printf("%3f\n",pos);
    printf("%3f\n",neg); 
    printf("%3f\n",zer);
}
