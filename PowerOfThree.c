bool isPowerOfThree(int n) {

    if (n==0)
        return 0;
        
    int next=n;
    while (next%3==0) {
        next=next/3;
    }
    
    if (next==1)
        return 1;
    else
        return 0;
}
