#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int award_money(char[]);

int main(void){
	
	char input_number[9];
	
	do{
		printf("請輸入統一號碼:");
		gets(input_number);
		printf("中獎金額%d元\n",award_money(input_number));
	}while(input_number!=NULL);
	
	return 0;
	system("pause");

}
int award_money(char input_number[]){
	
	char first_award[9]="00106725";
	char second_award[9]="90819218";
	char thirst_award[3][9]={"13440631","26650552","09775722" };
	char additional_award[2][4]={"809","264"};
	int same_number=0;
	int i;
	
	for(i=7;i>=0;i--){
		
		if(first_award[i]==input_number[i]){
			same_number+=1;
		}
		else{
			break;
		}
	}	
	if(same_number>=3){
		
		switch(same_number){
			
			case 8:{
				return 10000000;
				break;
			}
			case 7:{
				return 40000;
				break;
			}
			case 6:{
				return 10000;
				break;
			}
			case 5:{
				return 4000;
				break;
			}
			case 4:{
				return 1000;
				break;
			}
			case 3:{
				return 200;
				break;
			}
					
		}
	}
	
	
	if(strcmp(input_number,second_award)==0){
		return 2000000;
	}
	else{
		
		for(i=0;i<3;i++){
			
			if(strcmp(input_number,thirst_award[i])==0){
				return 200000;
				break;
			}
		}
		for(i=0;i<2;i++){
			
			if(strncmp(&input_number[5],additional_award[i],3)==0){
				return 200;
				break;
			}
		}
		
	
	} 
	return 0; 
}
