 #include"stdio.h"
 #include"stdlib.h"
 #include"string.h"

 char* thaythe (char* sMe , char* sCon, char* sThay)
 {
     int lenCon = strlen(sCon);
     int lenThay = strlen(sThay);
     int d=0;
     int truoc;
     char *s,*pCon;
     while ((pCon = strstr (sMe+d , sCon))!=NULL)
     {
         d= pCon -sMe+lenThay;
         s= (char *)calloc(strlen(sMe)+lenThay - lenCon +1,sizeof (char));
         truoc = pCon - sMe;
         strncpy(s,sMe,truoc);
         strncpy(s+truoc,sThay,lenThay);
         strcpy(s+truoc+lenThay,pCon+lenCon);
         sMe=s;
     }
     return sMe;
 }
 int main()
 {
     char s[]="Ta mo thay em o mot noi xa lanm";
     char pat[]="em";
     char rep[]="em yeu";
     char* t=thaythe(s, pat , rep);
     printf("chuoi goc %s\n",s);
     printf("thay the '%s' , voi '%s'\n",pat , rep);
     printf("chuoi moi: %s\n",t);
     return 0;
 }
