int s=0;
    int e=n-1;
    int num=0;
    while(num<n)
    {
        if(arr[num]==0){
            arr[s]=arr[num];
            s++;

        }
        else{
            arr[e]=arr[num];
            e--;
        }
        num++;
    }