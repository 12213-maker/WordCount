#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
int main(int argc, char* argv[])
 {

		     if (argc == 3) {
			         //��һ���Ƕ�ȡ�ļ����� 
			         char data;
		         FILE *fp = fopen("D:/Users/mushroomm/Desktop/job/test.txt", "r");
				 
			         if (fp==NULL) {
						 printf("open fail errno = % d reason = % s \n", errno, strerror(errno));
			            printf("�����ļ���ȡʧ��\n");
			            return -1;
			
		             }
		
			         //�Բ��������ж�
			
			
			         if (!strcmp(argv[1], "-c")) {//�ַ���
			            char temp;
			             int num = 0;
			             temp = fgetc(fp);
			             while (temp != EOF) {
				                 //putchar(temp);
					                 temp = fgetc(fp);
				                 num++;
				
			}
			             printf("�ַ�����%d\n", num);
			
				
		}
		         else if (!strcmp(argv[1], "-w")) {//������
			             int w = 0;
			            char a = fgetc(fp);
			            while (a != EOF) {
				                if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) {
					                     while ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
						                         a = fgetc(fp);
					                     w++;
					                     a = fgetc(fp);
					
				}
				                 else
					                     a = fgetc(fp);
				
			}
			             printf("��������%d\n", w);
			
				
		}
	         else if (!strcmp(argv[1], "-l")) {//����
			             char temp;
			             int num = 1;
			             temp = fgetc(fp);
			             while (temp != EOF) {
				
					                 //putchar(temp);
					                 if (temp == '\n') {//�ַ���Ҫ�õ�������ס
					                     num++;
					
				}
				                 temp = fgetc(fp);
				
					
					
			}
			             printf("���ı��ļ�������Ϊ��%d\n", num);
			
				
		}
		         else {
			            printf("���󣺲���������Χ��\n");
			            printf("���������-c��-w��-l\n");
			
		}
		         int n = fclose(fp);
		
	}
	     else {
	         printf("�������в�������Ҫ3��\n");
		         printf("�÷���WorkCount.exe [parameter] [file_name]\n");
	}
	     system("pause");
	     return 0;
	 }

