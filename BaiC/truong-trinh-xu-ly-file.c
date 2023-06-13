#include"stdio.h"
#include"conio.h"
#include"stdlib.h"

void  main()
{
    int a[1000];
    FILE *finput,*fketqua;
    finput=fopen("D:\\file_input\\trung.txt","r");
    if (finput==NULL)
    {
        printf("file khong ton tai");
        exit(1);
    }
    int n=0;
    int num;
    while(fscanf(finput,"%d",&num)!=EOF);
    {
        a[n]=num;
        printf("%8d",num);
        n++;
    }
    fclose(finput);
    int so_chan=0,so_le=0,so_duong=0,so_am=0,so_0=0,so_max=a[0],so_min=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]%2==0)
        so_chan++;
        else
            so_le++;
        if (a[i]>0)
            so_duong++;
        else if (a[i]==0)
        so_0++;
        else
            so_am++;
        if (a[i]>so_max)
        so_max=a[i];
        if (a[i]<so_min)
        so_min=a[i];
    }
    fketqua=fopen("D:\\file_input\\ketqua.txt","w");
    fprintf(fketqua,"so phan tu:%d\n",n);
    fprintf(fketqua,"so cac so chan:%d\n",so_chan);
    fprintf(fketqua,"so cac so le:%d\n",so_le);
    fprintf(fketqua,"so cac so duong:%d\n",so_duong);
    fprintf(fketqua,"so cac so am:%d\n",so_am);
    fprintf(fketqua,"so cac so 0:%d\n",so_0);
    fprintf(fketqua,"so lon nhat:%d\n",so_max);
    fprintf(fketqua,"so nho nhat:%d\n",so_min);
    fclose(fketqua);
}
