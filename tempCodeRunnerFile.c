    printf("enter the no. of element in array:");
    scanf("%d",&n);
    int arr[n];

    printf("enter the element of array\n:");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   printf("leader element are:");
   //loop from left to right
   for(int i=0;i<n;i++){
    int j;
    for(int j=i+1;j<n;j++){
    if(arr[i]<arr[j]){
        break;
    }
   }
   if(j==n){// If no larger element found on the right
    printf("%d",arr[i]);
   }
}
printf("\n");
return 0;
}