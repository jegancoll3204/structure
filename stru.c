#include<stdio.h>
int main()
{
    struct  st
    {
        int a[9];
        char name[90];
        int reg;
    };
    struct st s1;

    int i,total=0,n;
    char j[90];
    char z[][40]={"Tamil","English","Mathematics","Physics","Chemistry","Computer Science"};
    printf("\n\n\n");
    printf("______________________STUDENTS MARK____________________________\n");
    printf("Student Name     :");
    scanf("%s",s1.name);
    printf("Register Number  :");
    scanf("%d",&s1.reg);
    for(i=0;i<6;i++)
    {
        printf("Enter %s Mark \n",z[i]);
        scanf("%d",&s1.a[i]);
        total=total+s1.a[i];

    }

    
    
    printf("_________________________STUDENTS DETAILS_________________________\n");
    printf("NAME OF STUDENT  :%s\n",s1.name);
    printf("Register Number  :%d\n",s1.reg); printf("\n");
    
    printf("SUBJECT           MARK        RESULT\n");
    
    printf("--------------------------------------\n");
    printf("Tamil            :%d        ",s1.a[0]);  if(s1.a[0]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("English          :%d        ",s1.a[1]);  if(s1.a[1]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("Mathematics      :%d        ",s1.a[2]);  if(s1.a[2]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("Physics          :%d        ",s1.a[3]);  if(s1.a[3]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("Chemistry        :%d        ",s1.a[4]);  if(s1.a[4]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("Computer Science :%d        ",s1.a[5]);  if(s1.a[5]>=35) printf("Pass\n"); else printf("Fail\n");
    printf("Total            :%d        \n",total);    
    printf("___________________________________________________________________\n");

    
}
