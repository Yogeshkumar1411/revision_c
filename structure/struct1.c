#include<stdio.h>
#include<string.h>
struct stu
{
	char name[20];
	int roll_no;
	char *roll; 
};

struct school
{
	char name[50];
	struct stu s[10];
};

int main()
{
	struct school s1;
	strcpy(s1.name,"Bitsilica");
	s1=(struct school){
		.s={

	[0] = {
                        .name = "Yogesh",
                        .roll_no = 01,
                        .roll = "Student"
                },

                [1] = {
                        .name = "Dharma",
                        .roll_no = 02,
                        .roll = "Student"
                }
		}	
                        
        };
        printf("School name = %s\n",s1.name);
        int i;
        for(i=0;i<2;i++)
        {
                printf("Candi name = %s\n Roll_no = %d\n Roll = %s\n",s1.s[i].name,s1.s[i].roll_no,s1.s[i].roll);
        }
}
