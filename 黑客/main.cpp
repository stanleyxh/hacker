#include <graphics.h>
#include<iostream>
#include<windows.h>
//#include<string>

using namespace std; 
IMAGE img1;

int Entrance_page(void) {
   string username;
   string password;
    cout << "please input you username" << endl;
    cin >> username;
    cout << "please input password" << endl;
    cin >> password;
    return 0;
}



int main(void){


    Entrance_page();

    system("cls");
    
    int rectangle_x_left = 300, rectangle_y_left = 40, rectangle_x_right = 550, rectangle_y_right = 80;   //���ο����ϽǺ����½����㶨��
    initgraph(600, 400);
         
    loadimage(&img1, "bg.jpg"); //0 ΪĬ��ֵ����bg.jpg��ΪҪ���صı���ͼƬ   //����ͼƬ
    putimage(0, 0, &img1);
          
            //�����ľ���
    for (int i = 0; i < 5; i++)
    {
        rectangle(rectangle_x_left, rectangle_y_left + 60 * i, rectangle_x_right, rectangle_y_right + i * 60);
    };
             //�����ı�����
    settextstyle(30, 10, "΢���ź�");
    settextcolor(RGB(255, 255, 0));     //��Ϊ��ɫ
    setlinecolor(RGB(255, 0, 0));
                    /*
                     rectangle(300, 40, 550, 80);     //���Ͻ����꣨300��40�������½����꣨550��80��
                    rectangle(300, 100, 550, 140);
                    rectangle(300, 160, 550, 200);
                    rectangle(300, 220, 550, 260);
                    rectangle(300, 280, 550, 320);
                    */
                          //�ھ����ڴ�ӡ�ı�

    outtextxy(310, 45, "1-��վ404����");   //��ʼ������ı�����
    outtextxy(310, 105, "2-��վ�۸Ĺ���");
    outtextxy(310, 165, "3-��վ�����޸�");
    outtextxy(310, 225, "4-��վ������¼");
    outtextxy(310, 285, "5-�˳�");

    system("pause");
    closegraph();

    return 0;
}

