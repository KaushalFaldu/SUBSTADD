#include<stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        for(int i=0;i<n;i++){
            scanf("%d",&b[i]);
        }
        int count=1;
        for(int i=0;i<n;i++){
            if((b[i]-a[i])!=x && (b[i]-a[i])!=y){
                count=0;
                break;
            }
        }
        if(count==0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}