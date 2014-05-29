#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *fp;
char subject[5][20];
char c;
int i,score,sum=0,count=0;
double ave=0;

fp=fopen("grade.csv","r");
if(fp==NULL) {
	printf("can't open file\n");
	exit(1);
}
for(i=0; i<5; i++){
	fscanf(fp,"%s",subject[i]);
}

while(1){
	if(fscanf(fp,"%d",&score)==EOF) break;
	fscanf(fp,"%c",&c);
	count++;
	sum+=score;
}

ave=sum;
ave=ave/(count);
printf("sum:%d  average:%f \n",sum,ave);

return 0;
}
