#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


#define TRUE 1
#define FALSE 0


void intro();
void room();
void bathroom();
void bed();
void safebox();
void computer();
void kitchen();
void com_password();
void boxpassword();
void door();


int findcup = false; 
int brokencup = false;
int losepaper = false;
int findkey = false;



int main() {
  int menu;
  while(1){
    printf("��Ż�� ���� ver.1\n\n");
    printf("1. �����ϱ�\n");
    printf("0. �����ϱ�\n");
    printf(">>");
    scanf("%d",&menu);

    switch(menu){
      case 1:
      intro();
      break;
      case 0:
      return 0;
      default:
      printf("�Է� ����\n");

      

    }
  }
}
void intro(){
//	system("cls");
//	printf("\n\n");
//	printf("���� ���� �ʹ� ���� ���̳� ����.\n");
//	Sleep(1500);
//	printf("�Ӹ��� ���ļ� ���µ� �� ������ ������ ����??\n");
//	Sleep(2500);
//	printf("���� ������ ���� �����̴�... \n");
//	Sleep(2500);
//	printf("���� �����..?\n");
//	Sleep(1500);
//	printf("������ ������ ������ ������ �ϴ� ���� ������ �ʴ´�.\n");
//	Sleep(1500);
//	printf("��� �� �濡�� ������ ������??\n");
//	printf("�ϴ� �ֺ��� ���� �ִ��� ������� �� �� ����.\n");
	room();	
	
}
void room(){
	int menu;
	
	while(1){
		system("cls");
		printf("\n\n");
		printf("�� ���� �����غ���.\n");
		printf("ȭ��ǵ� �ְ� ���� ���� �� ����.\n");
		printf("1. ȭ���  2. ħ��   3. �ֹ� \n");
		printf("4. ��ǻ��  5.�ݰ�    6. ������ \n");
		printf(">>");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				
				if(brokencup){
					printf("\n ���� �ν������� �� �̻� �� �� ����.\n");
					system("pause");
					
				} else{
					bathroom();
					break;
				}
			case 2:
				bed();
			case 3:
				if(losepaper){
					printf("���� ġ����..\n");
					system("pause");
				} else{
					kitchen();
				}
			case 4:
				computer();
			case 5:
				safebox();
			case 6:
				door();
			
		}
		
	}
}
void bathroom(){

	int menu;
	
	while(1) {
		system("cls");
		printf("ȭ��� \n\n");
		printf("�ƹ��͵� ���� ȭ��ǿ� ���� �ϳ� �����ִ�.\n\n");
		printf("1. ����  ���캻��\n");
		printf("2. ����  �μ���\n");
		printf("0. ���ư���\n");
		
		printf(">> ");
		scanf("%d", &menu);
		
		switch (menu){
			case 1:
				printf("\n �� �ȿ� ���ڰ� ���� �ִ� �� ����.\n");
				printf("\n 2867�̶�� �����ִµ�.. ����???\n");
				system("pause");
				break;
			case 2:
				if(brokencup == false){
				printf("\n ���� �����ȴ�..\n");
				printf("\n ��ī�ο�� �� ġ���߰ڴ�.\n");
				system("pause");
				brokencup = true;
				}
				break;
				
			case 0 :
				room();
				
		}
}
}
void bed(){
	int menu;
	
	while(1){
		system("cls");
		
		printf("����� ħ���̴�.\n\n");
		printf("\n\n");
		printf("1.������ Ȯ���Ѵ�.\n");
		printf("2.ħ�븦 Ȯ���Ѵ�.\n");
		printf("0.���ư���\n");
		
		printf(" >> ");
		scanf("%d",&menu);
		
		switch (menu){
			case 1:
				printf("���� �� �ӿ� ���� �ִ� �� ����.\n");
				printf("������ �����ΰ� ����...\n");
				printf("8245��� �����ִ� �� ����.\n");
				system("pause");
				break;
			case 2:
				printf("ħ�뿡 �������Ҵ�..\n");
				printf("�� ǫ���Ѱ� ������...??\n");
				system("pause");
				break;
			case 0:
				room();
		}
		
		
	}
}
void kitchen(){
	int menu;
		while(1){
			system("cls");
			printf("�ֹ�\n");
			printf("������ �δ��ǰ� ���� ���δ�.\n");
			printf("�赵 ���µ� ��鵵 �ִ� �� ����.\n");
			printf("\n\n");
			printf("1.���� Ȯ���Ѵ�.\n");
			printf("2.����� �����Դ´�.\n");
			printf("0. ���ư���\n");
			
			printf(">>\n");
			scanf("%d",&menu);
			
			switch(menu){
				case 1:
					printf("����ȿ� ���̰� �ִ� �� ����.\n");
					printf("�Ѳ��� �������� 5024��� �����ִ� ���̰� �ִ�.\n");
					printf("���� �ǹ��� ??\n");
					system("pause");
					break;
				case 2:
					if(losepaper == false){
					printf("�谡 ���ļ� ����� �����Ծ���.\n");
					printf("����ʹµ� ���ִµ� ???\n");
					printf("�ٸԾ����� �� ġ���߰ڴ�.\n");
					system("pause");
					losepaper=true;
					}
					break;
					
				case 0:
					room();
			}
			
		}
}
void computer(){
	int menu;
		while(1){
			system("cls");
			printf("��ǻ��\n\n");
			printf("��ǻ�� �տ� ���̰� �����ִ�..");
			printf("�̰� �� �϶�°ɱ�??\n");
			printf("\n\n\n");
			printf("1. ���̸� Ȯ���Ѵ�.\n");
			printf("2. ��й�ȣ�� �Է��Ѵ�.\n");
			printf("0. ���ư���\n");
			
			printf(">>\n");
			scanf("%d",&menu);
			
			switch(menu){
				case 1:
					printf("��ȣ�� �Է��϶�� �����ִ�...\n");
					printf("��й�ȣ�� �ټ��ڸ� ��\n");
					printf("�Ʊ� ã�� ��ȣ�� ������ �ִ� �ɱ� ?\n");
					system("pause");
					break;
				case 2:
					com_password();
				case 0:
					room();
					
					
			}
		} 
}
void com_password(){
	char compass[6] = "16136", temp[6];
	
	system("cls");
	printf("\n\n ��й�ȣ �Է� \n\n");
	printf(">>");
	scanf("%s",&temp);
	if(!strcmp(compass, temp)) {
		system("cls");
		printf("��ǻ�� �ȿ��� ���� �������ϵ��� �־���..\n");
		printf("3841�̶�� ���� ���ڵ��� ���� ���..\n");
		printf("�̰͵� ��й�ȣ����??\n");
		system("pause");
		computer();
		
	} else {
		printf("\n\n# ��й�ȣ ���� #\n\n");
		computer();	
	}
}
void safebox(){
		int menu;
		while(1){
			system("cls");
			printf("�ݰ�\n\n");
			printf("�ܴ��� ���̴� �ݰ��..\n");
			printf("��ȣ�� �Է��� �� �ִ� ������ �ִ�..\n");
			printf("1. ��й�ȣ �Է��Ѵ�.\n");
			printf("2. �ݰ� �μź���.\n");
			printf("0. ���ư��� \n");
		
			printf(">>\n");
			scanf("%d",&menu);
		
			switch(menu){
			case 1:
				boxpassword();
			case 2:
				printf("�ݰ� �ܴ��ؼ� �μ����� �ʴ´�..\n");
				printf("�ո� ������ �� ����..\n");
				printf("�ǵ帮�� ���ƾ���..\n");
				system("pause");
				break;
			case 0:
				room();
				
		}
	}
}

		
void boxpassword(){
	char boxpass[5] = "3841", temp[5];
	
	system("cls");
	printf("\n\n ��й�ȣ �Է� \n\n");
	printf(">>");
	scanf("%s",&temp);
	if(!strcmp(boxpass, temp)) {
		system("cls");
		if(findkey){
			printf("����� ��� ã�Ҵ�..\n");
			} else{
				printf("���踦 ȹ���ߴ� ! \n\n");
				printf("����� ���� �������� �����.\n\n");
				findkey = true;
			}
		system("pause");
		safebox();
		
	} else {
		printf("\n\n# ��й�ȣ ���� #\n\n");
		safebox();	
	}
}

void door(){
	int menu;
		while(1){
			system("cls");
			printf("������\n\n");
			printf("���� ���� ����ִ�..\n");
			printf("���谡 �־�� ���� �� ���� �� ����..\n");
			printf("\n\n");
			printf("1. ���� ����\n");
			printf("2. ���� �μ���.\n");
			printf("0. ���ư���\n");
			
			printf(">>");
			scanf("%d", &menu);
			
			switch(menu){
				case 1:
					if(findkey == true){
						printf("���� ���ȴ�..\n");
						printf("���� ������ �ְ� ���..\n");
						printf("�Ӹ����°� �ʹ� �������..\n");
						printf("�׳����� ��� ���°���??\n");
						printf("��� ���Դ����� �𸣰ھ�..\n");
						printf("�ƹ�ư �����ɷ� ��������..\n");
						printf("THE END\n\n");
						
						
						system("pause");
						return;
					}
					else{
						printf("���� ������ �ʴ´�.\n");
						printf("���谡 �ʿ��Ѱ� ����..\n");
						door();
					}
				case 2:
					printf("���� �Ⱦ������Ҵ�..\n");
					printf("�����⸸ �ϰ� �ƹ��� ���� �Ͼ�� �ʴ´�.\n");
					system("pause");
					break;
					
				case 0:
					room();
					
					break;
			}
			
		}
}
	
