#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*chương trình đếm tần suất trong các file text.
- tên file nguồn/đich nhập vào từ bàn phím dạng *.txt
- xuất ra tần suất các từ dạng
    em: 3        oi: 1         ha: 1      noi: 1
    pho: 1       ta: 2         con: 4     mui: 2
*/

typedef struct
{
    char w[8];
    int freq;
} WORD;

int main()
{
    FILE *fin, *fout;
    char ten_file_vao[50], ten_file_ra[50];
    WORD words[1000];
    int nwords=0;
    int nlines=0;
    int i,k=0;
    char *dau_cau = " .,;:?!()\"\\'\n";
    printf(" file nguon:"); gets(ten_file_vao);
    printf(" file dich:"); gets(ten_file_ra);
    fin = fopen("D:\\file_input\\hanoi.txt","r");
    if (fin == NULL)
    {
        printf("Loi mo file %s", ten_file_vao);
        exit(1);
    }
    char s[1000];
    while (fgets(s,sizeof(s), fin) !=NULL)
    {
        nlines++;
        char *p = s;
        while ((p=strtok(p, dau_cau)) !=NULL)
        {
            p = strlwr(p);
            for (i = 0; i<k;++i)
                if((strcmp( words[i].w,p))==0)
            {
                words[i].freq++;
                break;
            }
            if (i == k)
            {
                strcpy( words[k].w,p);
                words[k++].freq = 1;

            }
            nwords++;
            p = NULL;
        }

    }
    fclose(fin);
    fout = fopen("D:\\file_input\\ketquaa.txt","w");
    if (fout ==NULL)
    {
        printf("loi mo ra %s", ten_file_ra);
        exit(1);
    }
    printf("File  % s co %d dong , &d tu, voi tan so cac tu:\n", ten_file_vao, nlines, nwords);
    fprintf(fout,"File  % s co %d dong , &d tu, voi tan so cac tu:\n", ten_file_vao, nlines, nwords);
    for (i = 0;i<k;++i)
    {
        printf("%8s:%3d ", words[i].w, words[i].freq);
        fprintf(fout,"%8s:%3d ", words[i].w, words[i].freq);
        if ( i>0 &&(i+1) %4==0)
        {
            printf("%c",'\n');
            fprintf(fout,"%c",'\n');
        }
    }
    putchar('\n');
    fclose(fout);
    return 0;
}
