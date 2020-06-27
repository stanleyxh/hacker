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
    
    int rectangle_x_left = 300, rectangle_y_left = 40, rectangle_x_right = 550, rectangle_y_right = 80;   //矩形框左上角和右下角两点定义
    initgraph(600, 400);
         
    loadimage(&img1, "bg.jpg"); //0 为默认值，“bg.jpg”为要加载的背景图片   //加载图片
    putimage(0, 0, &img1);
          
            //画空心矩形
    for (int i = 0; i < 5; i++)
    {
        rectangle(rectangle_x_left, rectangle_y_left + 60 * i, rectangle_x_right, rectangle_y_right + i * 60);
    };
             //设置文本字体
    settextstyle(30, 10, "微软雅黑");
    settextcolor(RGB(255, 255, 0));     //设为黄色
    setlinecolor(RGB(255, 0, 0));
                    /*
                     rectangle(300, 40, 550, 80);     //左上角坐标（300，40），右下角坐标（550，80）
                    rectangle(300, 100, 550, 140);
                    rectangle(300, 160, 550, 200);
                    rectangle(300, 220, 550, 260);
                    rectangle(300, 280, 550, 320);
                    */
                          //在矩形内打印文本

    outtextxy(310, 45, "1-网站404攻击");   //开始坐标加文本内容
    outtextxy(310, 105, "2-网站篡改攻击");
    outtextxy(310, 165, "3-网站攻击修复");
    outtextxy(310, 225, "4-网站攻击记录");
    outtextxy(310, 285, "5-退出");

    system("pause");
    closegraph();

    return 0;
}

