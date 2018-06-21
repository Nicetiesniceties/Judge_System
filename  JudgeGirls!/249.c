#include<stdio.h>
#include<string.h>
#include<limits.h>
typedef struct employee emp;
int N, M;
struct employee{
	int id;
	char first_name[32];
	char last_name[32];
	int boss_id;
	};
int ultimate_boss(int pre, int now, emp *ptr[]){
	if(pre == now)return now;
	pre = now;
	for(int i = 0; i < N; i++)
		if(ptr[i]->id == ptr[now]->boss_id){now = i; break;}
	return ultimate_boss(pre, now, ptr);
	}
int IsSuperviser(int empl, int super, emp *ptr[]){
	if(empl == super)return 1;
	else if(ptr[empl]->boss_id == ptr[empl]->id)return 0;
	for(int i = 0; i < N; i++)
		if(ptr[empl]->boss_id == ptr[i]->id){empl = i; break;}
	return IsSuperviser(empl, super, ptr);
	}
int main(void)
{
	emp company[32], *ptr[32];
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		ptr[i] = &company[i];
		scanf("%d%s%s%d\n", &ptr[i]->id, ptr[i]->first_name, ptr[i]->last_name, &ptr[i]->boss_id);
		}
	scanf("%d", &M);
	char firstname[32], lastname[32];
	int object[2];
	for(int k = 0; k < M; k++){
		for(int j = 0 ; j < 2; j++){	
			scanf("%s%s", firstname, lastname);
			for(int i = 0; i < N; i++)
				if(!strcmp(firstname, ptr[i]->first_name) && !strcmp(lastname, ptr[i]->last_name)){
					object[j] = i;
					break;
					}
			}		
		if(IsSuperviser(object[0], object[1], ptr)){printf("subordinate\n"); continue;}
		else if(IsSuperviser(object[1], object[0], ptr)){printf("supervisor\n"); continue;}
		if(ultimate_boss(INT_MAX, object[0], ptr) == ultimate_boss(INT_MAX, object[1], ptr))printf("colleague\n");
		else printf("unrelated\n");
		}
	return 0;
	}
