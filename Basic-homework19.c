/* �p������׹��-�򥻽m�ߧ@�~-�@�~19*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/05/14 01:15*/ 
#include<stdio.h>  //��ܮw 
#include<stdlib.h> //��ܮw 
#include<math.h>   //��ܮw 
int main()
{
	printf("�p������׹��-��¦�m�ߧ@�~-�@�~19\n");
	printf("�s�@�H�G���f�W\n");
	printf("�����ɶ��G2019/05/14 01:15\n");
	printf("-------------------------------------------------\n");
	printf("                ��Ϥ����I�G�x��                 \n");
	printf("-------------------------------------------------\n");
	printf("�п�J�@�s��(�̦h10��)�x�Ϊ����W�Υk�U�y�СG�]��J������п�J{*}�^\n");  
    char s[5];
    int n=0;
    double map[11][4];
    int cr[11];
      while(1)
      {
          scanf("%s",s);//��J�Ҧ�(�O"r"���ɭ�,��J�x�ήy��,�O"*"���ɭ�,������J�x�ήy��(�P�_) 
          if(s[0]=='*') break; //�O"*"���ɭ�,������J�x�ήy��(�P�_)
          if(s[0]=='r') //�O"r"���ɭ�,��J�x�ήy��,���~���x�s��}�C 
          {
            scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]); //��J 
             cr[n]=1;
          } 
          else
          {
            scanf("%lf %lf %lf",&map[n][0],&map[n][1],&map[n][2]);//��J 
            cr[n]=0;
          }  
          n++; 
     }
    int a,b,c,m=0;
    double x,y; 
      while(1)
      {
      	printf("�п�J�y��(x,y)�G");  
        scanf("%lf %lf",&x,&y);//��J���I 
        if(x==9999.9&&y==9999.9) break; //�y�е���(9999.9,9999.9),���L 
        int flag=0;
        m++;
          for(a=0;a<n;a++) //�P�_ 
          {
            if(cr[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3]) 
              {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}   
            if(cr[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2]) 
              {printf("�P�_���G�GPoint %d is contained in figure %d\n",m,a+1);flag=1;}  
         }
            if(flag==0)
               printf("�P�_���G�GPoint %d is not contained in any figure\n",m);  
      } 
       return 0;
}
