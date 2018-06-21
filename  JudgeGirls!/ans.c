#include <stdio.h>
#include <string.h>
typedef struct employee {
  int id;
  char first_name[32];
  char last_name[32];
  int boss_id;
}Employee;
Employee A[32];
int fboss, index1, index2, success;
void search(int index, int n, int bossid)
{
  int i;
  if(A[index].id == A[index].boss_id){
    fboss = index;
    return;
  }
  for(i = 0; i < n; i++){
    if(A[index].boss_id == bossid){
      success = 1;
      return;
    }
    else if(A[index].boss_id == A[i].id){
      search(i, n, bossid);
      break;
    }
  }
  return;
}
int main()
{
  int i, j, n;
  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i].id);
    scanf("%s", A[i].first_name);
    scanf("%s", A[i].last_name);
    scanf("%d", &A[i].boss_id);
  }
  int amount, fboss1, fboss2;
  char p1[2][32], p2[2][32];
  scanf("%d", &amount);
  for(i = 0; i < amount; i++){
    scanf("%s%s", p1[0], p1[1]);
    scanf("%s%s", p2[0], p2[1]);
    for(j = 0; j < n; j++)
      if((strcmp(A[j].first_name, p1[0]) == 0) && (strcmp(A[j].last_name, p1[1]) == 0)){
    index1 = j;
    break;
      }
    for(j = 0; j < n; j++)
      if((strcmp(A[j].first_name, p2[0]) == 0) && (strcmp(A[j].last_name, p2[1]) == 0)){
    index2 = j;
    break;
      }
    success = 0;
    fboss1 = -1;
    fboss2 = -2;
    search(index1, n, A[index2].id);
    if(success){
      printf("subordinate\n");
      continue;
    }
    fboss1 = fboss;
    search(index2, n, A[index1].id);
    if(success){
      printf("supervisor\n");
      continue;
    }
    fboss2 = fboss;
    if(fboss1 == fboss2){
      printf("colleague\n");
      continue;
    }
    printf("unrelated\n");
  }
  return 0;
}
