/*
	키보드 키 값을 확인 해주는 프로그램
	파일 수정 후 github 로 push 테스트
*/
#include <stdio.h>
#include <conio.h>
 
void main()
{
           int cnt = 1;
           int temp=0;
 
           printf("press 'Esc'(keycode 27) to EXIT\n");
 
           while( temp != 27)
           {
                     printf("\n input any key : ");
                     temp = getch();
 
                     if( temp == 224)            // 방향키 입력되면 2byte 문자 앞부분 무시
                     {
                                temp = getch();
 
                                switch(temp)
                                {
                                          case 72 :
                                                     printf("\nUp\n");
                                                     printf("□□■□□\n");
                                                     printf("□■■■□\n");
                                                     printf("■■■■■\n");
                                                     printf("□□■□□\n");
                                                     printf("□□■□□\n");
                                                     break;
                                          case 75 :
                                                     printf("\nLeft\n");
                                                     printf("□□■□□\n");
                                                     printf("□■■□□\n");
                                                     printf("■■■■■\n");
                                                     printf("□■■□□\n");
                                                     printf("□□■□□\n");
                                                     break;
                                          case 77 :
                                                     printf("\n Right\n");
                                                     printf("□□■□□\n");
                                                     printf("□□■■□\n");
                                                     printf("■■■■■\n");
                                                     printf("□□■■□\n");
                                                     printf("□□■□□\n");
                                                     break;
                                          case 80 :
                                                     printf("\n Down\n");
                                                     printf("□□■□□\n");
                                                     printf("□□■□□\n");
                                                     printf("■■■■■\n");
                                                     printf("□■■■□\n");
                                                     printf("□□■□□\n");
                                                     break;
                                          default :
                                                     break;
                                }
                     }
                    
                     printf("\ncount : %3d\n",cnt++);
                     printf("keycode<%d> | ASCII<%c> \n" , temp, temp );
 
           }
 
 
}
