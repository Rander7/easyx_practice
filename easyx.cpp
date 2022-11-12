//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<easyx.h>
//#include<mmsystem.h>//music,一定放在easyx.h下面
//#pragma comment(lib,"winmm.lib")//库文件引用
//using namespace std;
//
//int main()
//{
//	initgraph(1080, 720);//创建窗口
//	cleardevice();//清除刷新
//	//坐标系规则：x轴不变，y轴为数学上y轴负方向
//	
//	////常见颜色
//	//BLACK;
//	//GREEN;
//
//	////不常见颜色
//	//RGB(176, 253, 174);
//
//	//mci-media control interface
//	//L代表宽字符
//	mciSendString("open Cyberpunk.mp3", 0, 0, 0);//MP3，wav
//	mciSendString("play Cyberpunk.mp3", 0, 0, 0);
//
//	//mciSendString(L"pause Cyberpunk.mp3", 0, 0, 0);//暂停
//	//mciSendString(L"close Cyberpunk.mp3", 0, 0, 0);
//
//	settextcolor(RED);//文字颜色
//	//settextcolor(RGB(176, 253, 174));
//	settextstyle(100,0,"宋体");//文字风格
//	//0代表自适应宽度
//	outtextxy(300, 200, "lucy");//文字坐标
//	/*settextstyle(50, 0, _T("微软雅黑"));
//	outtextxy(0, 0, _T("测试"));*/
//
//
//	////图片的处理
//	////普通绘图
//	//IMAGE bkimg;
//	//loadimage(&bkimg, L"wallhaven-281d5y.png");
//	//putimage(0, 0, &bkimg);
//	
//
//	//批量绘图(缓冲绘图)
//	BeginBatchDraw();//开始批量绘图到缓冲区
//	//理论上1所有想要显示在窗口中东西都应该放在这两行代码中间
//
//	EndBatchDraw();//结束批量绘图，将完整一帧图像输出到窗口中
//
//
//
//	////透明绘图 .png 
//
//	////准备两张图片，黑底白面图，白底彩面图
//	//IMAGE appimg0, appimg1;
//	//loadimage(&appimg0, L"");
//	//loadimage(&appimg1, L"");
//
//	////将两张图片绘制在同一个坐标
//
//	////分别使用二进制操作 spcpaint | spand &
//	//putimage(0, 0, &appimg0，SRCPAINT);//背景黑色换成现在颜色
//	//putimage(0, 0, &appimg1，SRCAND);//主题白色换成现在颜色
//
//	system("pause");
//	return 0;
//}