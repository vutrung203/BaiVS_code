 #include<iostream>
 #include<stdio.h>
 using namespace std;

 int giaithua(int n)
 {
    if(n==0 || n==1)
    return 1;
    else
    return n*giaithua(n-1);
 }
 int main ()
 {
    int n,gt;
    do
    {
        cout<<"nap vao n (n>1)";
        cin>>n;
    } while (n<0);
    gt = giaithua(n);
    //printf("%d! = %d ",n,gt);
    cout<<n<<"! = "<<gt;
 }//cout<<n<<gt;