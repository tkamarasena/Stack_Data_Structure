# include <stdio.h>
# include <conio.h>

void adding(int num[]);
void removing(int num[]);

void menu();


int num[5];
int max=5;
int top=-1;




int main(){
	
	menu();
	
	
	getch();
	return 0;
}


void menu(){
	char dis;

	while(dis!=3){
		printf("\n\t1.Do you wante to push values?\n\t");
		printf("2.Do you wante to remove values?\n\t");
		printf("3.Exite from the stack.\n");
		
		int n;
		printf("Enter your desission: ");
		scanf("%d", &dis);
		
		switch(dis){
			case 1:
				adding(num);				
				break;
				
				case 2:
					removing(num);					
					break;
					
					case 3:
						printf("Exited from the program..");
						break;
						
						default: printf("Invalid selection..");
						
		}
	}	
	
}

void adding(int num[]){        // push values to stack	
	
	
		if(top>=max-1){
			printf("Overflow. Can not Enter the number...");
			
		}
		else{
		
		int val;
		printf("Enter a Number: ");
		scanf("%d", &val);
		
		top++;
		
		num[top]=val;		
				
		}
	
}


void removing(int num[]){	

		if(top<=-1){
		printf("Underflow. Can not delete the number..");
		
		}
		
		else{			
			printf("%d is removed.\n", num[top]);
			top--;
		}	
	
}

