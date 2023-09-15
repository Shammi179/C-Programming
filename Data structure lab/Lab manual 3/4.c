#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
{
    char nm[200],ad[300],uni[100],sub[100],sec[100],sem[100],hc[100],hb[100],hg[100],hy[100],ss[100],sb[100],sy[100],sg[100],father[100],mother[100],fmad[200];
};
int main()
{
    struct st *ptr;
    ptr=(struct st*)malloc(sizeof(struct st));
        printf("Name:");
        gets(ptr->nm);
        printf("Address:");
        gets(ptr->ad);
        printf("Education:\n\nUniversity:");
        gets(ptr->uni);
        printf("Undergraduate in B.Sc:");
        gets(ptr->sub);
        printf("Sec:");
        gets(ptr->sec);
        printf("Semester:");
        gets(ptr->sem);
        printf("H.S.C.:");
        printf("College:");
        gets(ptr->hc);
        printf("Board:");
        gets(ptr->hb);
        printf("GPA:");
        gets(ptr->hg);
        printf("Passing year:");
        gets(ptr->hy);
        printf("S.S.C.:\nSchool:");
        gets(ptr->ss);
        printf("Board:");
        gets(ptr->sb);
        printf("GPA:");
        gets(ptr->sg);
        printf("Passing year:");
        gets(ptr->sy);
        printf("Personal Information:\nFather's name:");
        gets(ptr->father);
        printf("Mother's name:");
        gets(ptr->mother);
        printf("Address:");
        gets(ptr->fmad);
        printf("Name:%s\n\nAddress:%s\nEducation:\n\nUniversity:%s\nUndergraduate in B.Sc:%s\n\nSec:%s\n\nSemester:%s\n\n",ptr->nm,ptr->ad,ptr->uni,ptr->sub,ptr->sec,ptr->sem);
        printf("HSC:\n\nCollege:%s\nBoard:%s\nGPA:%s\nPassing Year:%s\n\nSSC:\n\nSchool:%s\nBoard:%s\nGPA:%s\nPassing year:%s\n",ptr->hc,ptr->hb,ptr->hg,ptr->hy,ptr->ss,ptr->sb,ptr->sg,ptr->sy);
         printf("\nPersonal Info:\n\nFather's name:%s\nMother's Name:%s\nAddress:%s\n\nAnd so on,which you want to add.\n",ptr->father,ptr->mother,ptr->fmad);
               }
