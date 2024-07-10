//pop the values from the user

# include <stdio.h>
# include <conio.h>
int main(){
	int i,val,top=4;
	char dis;
	int num[5]={10,20,30,40,50};
	
	printf("Values: \n\t");
	for(i=0;i<5;i++){
		printf("%d\t", num[i]);
	}
	
	printf("\n\n");
	
	printf("Do you want to remove the value: ");
	scanf(" %c", &dis);
	
	while(dis=='Y'){
		if(top==-1){
		printf("Underflow. Can not delete the number..");
		break;
		}
		
		else{
			
			printf("%d is removed.\n", num[top]);
			
		}
		
		top--;
		printf("Do you want to remove the value: ");
		scanf(" %c", &dis);
	
	}	
	
	
	
	getch();
	return 0;
}
