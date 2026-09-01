#include <stdio.h>

int main() {
    int a[10]={1,3,4,6,7,8,10,11,43};
    
    //transversal
    for(int i=0;i<10;i++){
        printf("%d\t",a[i]);
    }
    
    //linear searching
	
	int sea=6;
	for (int i=0; i<10;i++){
	    if(a[i]==sea){
	        printf("found at the index %d\n",i);
	        
	    }
	}
	
    //max no
    int max=a[0];
    for(int i=0;i<10;i++){
        if(max<a[i]){
            max=a[i];
        
        }
    }
    printf(" maximum no is %d\n",max);
    
    int min=a[0];
    for(int i=0; i<10;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("minimum no is %d\n",min);
    
    //insert at begining
    int last=8;
    int val=12;
    for(int i=last;i>=0; i--){
        a[i+1]=a[i];
    }
    a[0]=val;
    last++;
    printf("after adding at beginig\n");
    for(int i=0;i<=last;i++){
        printf("%d\t",a[i]);
    }
   
   //insert at given pos
   int pos=3;
   int val_pos=24;
   int end=10;
   for(int i=end;i>=pos;i--){
       a[i+1]=a[i];
   }
    a[pos]=val_pos;
    //last++;
    printf("\nafter adding at given pos\n");
    for(int i=0;i<=end;i++){
        printf("%d\t",a[i]);
    }
    
    // insert at last
    a[end+1]=50;
    last++;
    printf("\ninsert at last\n");
    for(int i=0;i<=end+1;i++){
        
        printf("%d\t",a[i]);
    }
    
    
}

//max no
