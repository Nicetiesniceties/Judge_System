#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char first_name[20];
	char last_name[20];
    int id;
    char phone[10];
    float grade[4];
    int birth_year;
    int birth_month;
    int birth_day;
} Student;
int main(void)
{
	char file1[81], file2[81], test[101];
	scanf("%s%s", file1, file2);
	FILE *fp1 = fopen(file1, "rb");
	FILE *fp2 = fopen(file2, "wb");
	assert(fp1 != NULL);assert(fp2 != NULL);
	fprintf(fp2, "<table border=\"1\">\n<tbody>\n<tr>\n");
	while(fscanf(fp1, "%s", test) != EOF){
		printf("%s", test);
		fseek(fp1, -strlen(test), SEEK_CUR);
		Student *student;
		fscanf(fp1, "%s%s%d%s%f%f%f%f%d%d%d", student->first_name, student->last_name, &(student->id), student->phone, &(student->grade[0]), &(student->grade[1]), &(student->grade[2]),  &(student->grade[3]), &(student->birth_year), &(student->birth_month), &(student->birth_day));
		//fprintf(fp2, "<td>%s%s</td>\n<td>%d</td>\n<td>%s</td>\n<td>%f, %f, %f, %f</td>\n<td>%d, %d, %d</td>", student->first_name, student->last_name, student->id, student->phone, student->grade[0], student->grade[1], student->grade[2], student->grade[3], student->birth_year, student->birth_month, student->birth_day);
		}
	fclose(fp1);
	fprintf(fp2, "</tr>\n</tbody>\n</table>\n");
	fclose(fp2);
	return 0;
	}
