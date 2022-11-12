//#include<iostream>
//#include<easyx.h>
//using namespace std;
//
//int main()
//{
//	//创建一个窗口，确定其大小
//	initgraph(640, 480,EX_SHOWCONSOLE);//创建图形窗口保留控制台显示
//	//initgraph(640, 480, EX_NOCLOSE | EX_NOMINIMIZE | EX_SHOWCONSOLE);//不能关也不能最小化
//	
//
//	//设置背景颜色 one two两部才能设置背景颜色(清除默认颜色)
//	setbkcolor(WHITE);//one
//	cleardevice();//清屏,这样把黑色清除才能看到填充颜色 two
//
//
//	//画圆
//	setfillcolor(GREEN);//设置填充颜色
//	setlinecolor(BLUE);//设置线条颜色
//	setlinestyle(PS_SOLID,5);//设置线条格式
//
//
//	circle(50, 50, 50);//x,y,半径，无填充
//	fillcircle(50, 150, 50);//有边框填充
//	solidcircle(50, 250, 50);//无边框填充
//
//	
//	//文字输出，简单的cout不能输出到图形窗口
//	//设置文字颜色
//	settextcolor(RED);
//	//设置字体样式
//	settextstyle(20, 0, "宋体");//0是宽度自适应
//
//	//设置背景模式
//	setbkmode(TRANSPARENT);//透明,防止文字将绘图覆盖遮住
//
//
//	//outtextxy(50, 50, "lucy");
//	//参数错误找不到对应函数 error C2665: “outtextxy”: 2 个重载中没有一个可以转换所有参数类型
//	//由于字符集错误导致，解决方案为加L或者_T()
//	//还可以项目->属性->字符集->多字节字符集,推荐使用
//	//outtextxy(50, 50, L"lucy");
//	//outtextxy(50, 50, _T("lucy"));
//	outtextxy(50, 50, "lucy");
//
//
//	//把文字居中
//	fillrectangle(200, 50, 500, 100);//左上角和右下角点的坐标
//	settextcolor(BLACK);
//	char arr[] = "lucy";
//	//矩形宽度=500-200=300，高度=100-50=50
//	int width = 300/2-textwidth(arr)/2;//矩形宽度一半-文字宽度一半=起始文字宽度偏移
//	int height = 50/2-textheight(arr) / 2;
//	outtextxy(width+200, 50+height, arr);//从宽度起始开始，加上偏移量
//	
//
//	//输出图片
//	IMAGE img;//定义一个对象
//	//加载图片
//	//相对路径：./表示当前文件夹下，../当前文件夹的上一级目录 ./xx.jpg
//	//绝对路径：C:\Users\香茗\source\repos\Project3\xx.jpg
//	loadimage(&img,"ecy.jpg", 250, 250);
//	putimage(0, 0, &img);
//
//
//
//
//	getchar();
//	closegraph();
//
//	return 0;
//}
//
//
//
//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<easyx.h>
//#include<conio.h>//使用_getch()函数获取键盘输入值
//using namespace std;
//
//void button(int x, int y, int w, int h,const char*text)
//{
//	setbkmode(TRANSPARENT);
//	setfillcolor(BROWN);
//	fillroundrect(x, y, x + w, y + h, 10, 10);
//
//	settextstyle(30, 0, "黑体");
//
//	
//	char arr[] = "botton";
//	strcpy_s(arr, text);
//	int tx = x + (w - textwidth(arr)) / 2;
//	int ty = y + (h - textheight(arr)) / 2;
//
//	
//	outtextxy(tx, ty, arr);
//
//}
//
//int main()
//{
//	
//	initgraph(640, 480, EX_SHOWCONSOLE);
//	button(50, 50, 150, 50,"button");
//
//
//
//	//鼠标操作
//	ExMessage msg;//消息结构体，用于获取各种信息，包括鼠标
//	while (true)
//	{
//
//		if (peekmessage(&msg, EX_MOUSE))//消息结构体的指针,鼠标消息
//		{
//			switch (msg.message)
//			{
//			case WM_LBUTTONDOWN://判断鼠标是否点击了
//				if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
//				{
//					cout << "按钮已被点击" << endl;
//				}
//				break;
//			default:
//				break;
//			}
//		
//		}
//	}
//
//
//
//
//	getchar();
//	return 0;
//}
//



//键盘输入信息
#include<iostream>
#include<easyx.h>//包含了windows.h
#include<conio.h>//使用_getch()函数获取键盘值
#include<cstdio>
#include<mmsystem.h>//music,一定放在easyx.h下面
#pragma comment(lib,"winmm.lib")//库文件引用
using namespace std;


void button(int x, int y, int w, int h,const char*text)
{
	setbkmode(TRANSPARENT);
	setfillcolor(BROWN);
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextstyle(30, 0, "黑体");

	
	char arr[] = "botton";
	strcpy_s(arr, text);
	int tx = x + (w - textwidth(arr)) / 2;
	int ty = y + (h - textheight(arr)) / 2;

	
	outtextxy(tx, ty, arr);

}


void change()//更改窗口标题
{
	//获取窗口句柄,相当于窗口的身份证,唯一标识一个窗口
	HWND hnd = GetHWnd();
	//设置窗口标题
	SetWindowText(hnd, "lucy");
	//弹出窗口，提示用户操作
	int is_ok = MessageBox(hnd, "恭喜", "提示", MB_OKCANCEL);//句柄改成当前窗口则一直出现在该窗口上层，不能跳过
	if (is_ok == IDOK)
	{
		cout << "你点击了ok" << endl;
	}
	else if (IDCANCEL == is_ok)
	{
		cout << "你点击了取消" << endl;
	}

}


int main()
{
	initgraph(849, 1200, EX_SHOWCONSOLE);
	//获取键盘输入信息
	

	mciSendString("open Cyberpunk.mp3 alias BGM", 0, 0, 0);
	mciSendString("play BGM repeat", 0, 0, 0);

	change();

	int x = 30;
	int y = 40;
	

	while (true)
	{

		//双缓冲绘图需要放在绘图代码之前和之后
		BeginBatchDraw();


		//设置背景颜色 one two两部才能设置背景颜色(清除默认颜色)
		setbkcolor(WHITE);//one
		cleardevice();//清屏,这样把黑色清除才能看到填充颜色 two

		

		//输出图片
		IMAGE img;//定义一个对象
		loadimage(&img,"ecy.jpg");
		putimage(0, 0, &img);


		//绘制可移动的球
		setfillcolor(RED);
		setlinecolor(BLUE);
		setlinestyle(PS_SOLID, 5);
		fillcircle(x, y, 20);


		//设置背景模式
		setbkmode(TRANSPARENT);//透明,防止文字将绘图覆盖遮住
		button(50, 50, 150, 50, "button");

		FlushBatchDraw();
		////双缓冲绘图需要放在绘图代码之前和之后
		//EndBatchDraw();

		ExMessage msg;



			if (peekmessage(&msg, EX_KEY |EX_MOUSE))//判断有无键盘按下
			{

				//char key = _getch();//阻塞函数，不输入一直在等

				if (GetAsyncKeyState(VK_UP))
				{
					y -= 20;
					cout << "向上！ " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_DOWN))
				{
					y += 20;
					cout << "向下！ " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_LEFT))
				{
					x -= 20;
					cout << "向左！ " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_RIGHT))
				{
					x += 20;
					cout << "向右！ " << x << " " << y << endl;
				}


				//switch (msg.message)
				//{
				//case WM_LBUTTONDOWN://判断鼠标是否点击了
				//	if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
				//	{
				//		cout << "按钮已被点击" << endl;
				//	}
				//	break;
				//default:
				//	break;
				//}
				if (msg.message== WM_LBUTTONDOWN&&msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
				{
					cout << "按钮已被点击" << endl;
				}
				
			
			}
			//if (peekmessage(&msg, EX_MOUSE))//消息结构体的指针,鼠标消息
			//{
			//	switch (msg.message)
			//	{
			//	case WM_LBUTTONDOWN://判断鼠标是否点击了
			//		if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
			//		{
			//			cout << "按钮已被点击" << endl;
			//		}
			//		break;
			//	default:
			//		break;
			//	}
		
			//}
	}

	getchar();
	closegraph();
}