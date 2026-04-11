// count even and odd
#include<Stdio.h>
int main(){
    int arr[] = {123,1345235,345,767,8754,234434556,4234};
    int length = sizeof(arr)/sizeof(arr[0]);
    
    int i;
    int even = 0,odd = 0;
    for(i = 0; i<length;i++){
        (arr[i]%2 ==0)?(even++):(odd++);
    }    
    printf("%d are even;\n%d are odd", even,odd);
}