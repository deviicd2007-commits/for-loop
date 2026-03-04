# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num,actualSum=0;
    int expectedSum=n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        scanf("%d",&num);
        actualSum+=num;
    }
    int missing=expectedSum-actualSum;
    printf("%d",missing);
    return 0;
}