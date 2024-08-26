#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//void bubble_sort(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 4,3,6,9,1,2,10,8,7,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	system("pause");
//	return 0;
//}

//#include<string>
//struct Student
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main()
//{
//	Student stu = { "Zhang San",25,85 };
//	cout << stu.name << " " << stu.age << " " << stu.score << endl;
//	system("pause");
//	return 0;
//}

//#include<string>
//#include<ctime>
//struct Student
//{
//	string name;
//	int score;
//};
//struct teacher
//{
//	string name;
//	Student stuArr[5];
//};
//void value(teacher* teaARR, int len)
//{
//	string alpha = "abcde";
//	for (int i = 0; i < len; i++)
//	{
//		teaARR[i].name = "teacher_";
//		teaARR[i].name += alpha[i];
//		for (int j = 0; j < 5; j++)
//		{
//			teaARR[i].stuArr[j].name = "student_";
//			teaARR[i].stuArr[j].name += alpha[j];
//			int random = rand() % 61 + 40;//(0~60)+40=40~100
//			teaARR[i].stuArr[j].score = random;
//		}
//	}
//}
//void print(teacher teaArr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师姓名：" << teaArr[i].name << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名" << teaArr[i].stuArr[j].name << " 学生成绩" << teaArr[i].stuArr[j].score << endl;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	teacher teaArr[3];
//	int len = sizeof(teaArr) / sizeof(teaArr[0]);
//	value(teaArr,len);
//	print(teaArr, len);
//	system("pause");
//	return 0;
//}

#include<string>
struct hero
{
	string name;
	int age;
	string sex;
};
void bubble(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void printf(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].name << " " << arr[i].age << " " << arr[i].sex << endl;
	}
}
int main()
{
	hero arr[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, len);
	printf(arr, len);
	system("pause");
	return 0;
}