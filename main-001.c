#include <stdio.h>
#include <stdlib.h>
typedef struct course
{
	int course1;
	int course2;
	int course3;
	int avg;
}Cou;

//typedef struct course Cou;
//typedef struct course Cou; 
struct student
{
	int stu_id;
	char name[10];
   // struct course cou1; 
    Cou cou1;
};

typedef struct student stu;	
	
int main()
{
//	stu stu1 = { 2022001, "zhangsan",  {60,70, 80 }};
	stu stu[5];
	int i  ,avg ,num = 5;
	float sum = 0;
	printf ("input stud_id , name ,course:");
	//scanf ("%d %s %d %d %d",&stu1.stu_id, &stu1.name, &stu1.cou1.course1,  &stu1.cou1.course2,  &stu1.cou1.course3 );
	for(i = 0; i < num ; i++)
	{
		//printf("请输入第%d个学生信息(input stud_id , name ,course):\n",i+1);
		scanf ("%d %s %d %d %d",&stu[i].stu_id, &stu[i].name, &stu[i].cou1.course1,  &stu[i].cou1.course2,  &stu[i].cou1.course3 );
		stu[i].cou1.avg = (stu[i].cou1.course1 + stu[i].cou1.course2 + stu[i].cou1.course3 )/3; 
	}	
	printf("sum=%f\n", sum);
	for (i = 0; i < num; i++)
	{		printf("平均分：%d\n", stu[i].cou1.avg);
			printf(" stu_id:%d\n name:%s \n course1:%d \n course2:%d\n course3:%d\n",stu[i].stu_id, stu[i].name, stu[i].cou1.course1, stu[i].cou1.course2, stu[i].cou1.course3  );
	}
//	printf(" stu_id:%d\n name:%s \n course1:%d \n course2:%d\n course3:%d\n",stu[i].stu_id, stu[i].name, stu[i].cou1.course1, stu[i].cou1.course2, stu[i].cou1.course3  );
	//printf("学号:%d \n姓名：%s \n分数:%d\n", stu1.stu_id, stu1.name, stu1.cou1.course1 );
	
 } 
