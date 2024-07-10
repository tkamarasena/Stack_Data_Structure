//push the values to the stack

# include <stdio.h>
# include <conio.h>
int main(){
	int i,num[5];
	int count=0;
	int max=5;
	int top=-1;
	char dis;

	printf("Y=Yes\t N=No");

	printf("\nDo you want to add a value to stack: ");
	scanf(" %c", &dis);
	
	while(dis=='Y'){
		
		if(top>=max-1){
			printf("Overflow. Can not Enter the number...");
			break;
		}
		else{
		
		top++;
		printf("Enter a Number: ");
		scanf("%d", &num[top]);
		
		count++;
				
		printf("\nDo you want to add a value to stack: ");
		scanf(" %c", &dis);
		
		if(dis=='N'){
			printf("Program exited..");
		}
	
				
		}
	}
	
	printf("\n\nStack: \t");

	for(i=0;i<count;i++){
		printf("%d\t", num[i]);
	}
	
	
	
	getch();
	return 0;
}
