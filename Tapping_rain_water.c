int trap(int* height, int heightSize){
    int l, r, rh, lh, sum, waterHeight;
    sum = 0;
    waterHeight  = 0;
    r = heightSize-1;
    l = 0;
    while(l<r){
        rh = height[r];
        lh = height[l];
        if(rh>lh){
           if(lh > waterHeight){
               sum += (r-l+1)*(lh-waterHeight);
               waterHeight = lh;
           }
            sum-=lh;
            l++;
        }else {
            if(rh > waterHeight){
               sum += (r-l+1)*(rh-waterHeight);
                waterHeight = rh;
           }
            sum-=rh;
            r--;
        }
    }
    sum-= waterHeight;
    return sum;
}