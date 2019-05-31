/* 計算機概論實務-基本練習作業-作業19*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/05/14 01:15*/ 
#include<stdio.h>  //函示庫 
#include<stdlib.h> //函示庫 
#include<math.h>   //函示庫 
int main()
{
	printf("計算機概論實務-基礎練習作業-作業19\n");
	printf("製作人：郭柏鋒\n");
	printf("完成時間：2019/05/14 01:15\n");
	printf("-------------------------------------------------\n");
	printf("                算圖中的點：矩形                 \n");
	printf("-------------------------------------------------\n");
	printf("請輸入一連串(最多10個)矩形的左上及右下座標：（輸入完畢後請輸入{*}）\n");  
    char s[5];
    int n=0;
    double map[11][4];
    int cr[11];
      while(1)
      {
          scanf("%s",s);//輸入模式(是"r"的時候,輸入矩形座標,是"*"的時候,結束輸入矩形座標(判斷) 
          if(s[0]=='*') break; //是"*"的時候,結束輸入矩形座標(判斷)
          if(s[0]=='r') //是"r"的時候,輸入矩形座標,並繼續儲存到陣列 
          {
            scanf("%lf %lf %lf %lf",&map[n][0],&map[n][1],&map[n][2],&map[n][3]); //輸入 
             cr[n]=1;
          } 
          else
          {
            scanf("%lf %lf %lf",&map[n][0],&map[n][1],&map[n][2]);//輸入 
            cr[n]=0;
          }  
          n++; 
     }
    int a,b,c,m=0;
    double x,y; 
      while(1)
      {
      	printf("請輸入座標(x,y)：");  
        scanf("%lf %lf",&x,&y);//輸入兩點 
        if(x==9999.9&&y==9999.9) break; //座標等於(9999.9,9999.9),跳過 
        int flag=0;
        m++;
          for(a=0;a<n;a++) //判斷 
          {
            if(cr[a]==1&&x>map[a][0]&&x<map[a][2]&&y<map[a][1]&&y>map[a][3]) 
              {printf("判斷結果：Point %d is contained in figure %d\n",m,a+1);flag=1;}   
            if(cr[a]==0&&sqrt((x-map[a][0])*(x-map[a][0])+(y-map[a][1])*(y-map[a][1]))<map[a][2]) 
              {printf("判斷結果：Point %d is contained in figure %d\n",m,a+1);flag=1;}  
         }
            if(flag==0)
               printf("判斷結果：Point %d is not contained in any figure\n",m);  
      } 
       return 0;
}
