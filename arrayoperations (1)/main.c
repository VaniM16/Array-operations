#include <stdio.h>

int main()
{
    int a[10],n,i,j,op,el,flag=0,s,pos,del,posi;
    do{
    
    printf("\n Array Operations \n");
    printf("\n 1.Create 2.Insert 3.Display 4.Search 5.Delete  6.Exit \n Enter your choice: ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Enter limit: ");
        scanf("%d",&n);
        
            printf("Enter the elements: ");
            for(i=0;i<n;i++)
            {
              scanf("%d",&a[i]);
            }
        break;
        
        case 2:
        printf("Enter the position: ");
        scanf("%d",&pos);
        printf("Enter element to insert: ");
        scanf("%d",&el);
        for(i=n-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
            
        }
        a[pos-1]=el;
        printf("Array after insertion: ");
        for(i=0;i<=n;i++)
        {
            printf("%d \t",a[i]);
        }
        n=n+1;
        break;
        
        case 3:
        if(n==0)
        {
            printf("\n No elements to display");
        }
        else
        {
            printf("Array elements are: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
        }
        break;
        case 4:
        printf("Enter the number to be searched:");
        scanf("%d",&s);
        for(i=0;i<n;i++)
        {
            if(a[i]==s)
            {
             flag=1;
             posi=i+1;
             break;
                
            }
        }
        
        if(flag==0)
        {
            printf("Element not found");
        }
        else
        printf("Element found at position %d",posi);
        
        break;
        
        case 5:
    
        if(n==0)
        {
            printf("Array is empty");
        
        }
        
        printf("Enter the element to delete: ");
        scanf("%d",&del);
        for(i=0;i<n;i++)
        {
            if(a[i]==del)
            {
                pos=i;
                break;
            
            }
        
        
        }
        for(j=pos;j<n;j++)
        {
            a[j]=a[j+1];
        }
        printf("Array after deletion: \n");
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        
        break;
        n=n-1;
        
    }
    }while(op!=6);
}





