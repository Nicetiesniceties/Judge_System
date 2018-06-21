#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct person {
    unsigned int id;
    char name[32];
	};
struct friends {
    unsigned id1;
    unsigned id2;
	};
int main(void)
{
	FILE *fp = fopen("friends", "rb");
	assert(fp != NULL);
	int P, F;
	fread(&P, 4, 1, fp);
	struct person *Person[P];
	struct friends *Friend;
	for(int i = 0; i < P; i++)
		fread(Person[i], sizeof(person), 1, fp);
	fread(&F, 4, 1, fp);
	int relationship[P][P] = {0};
	for(int i = 0; i < F; i++){
		fread(Friend, sizeof(friends), 1, fp);
		int id1, id2;
		
		}
	return 0;
	}
