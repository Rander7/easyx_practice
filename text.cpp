//#include<iostream>
//#include<easyx.h>
//using namespace std;
//
//int main()
//{
//	//����һ�����ڣ�ȷ�����С
//	initgraph(640, 480,EX_SHOWCONSOLE);//����ͼ�δ��ڱ�������̨��ʾ
//	//initgraph(640, 480, EX_NOCLOSE | EX_NOMINIMIZE | EX_SHOWCONSOLE);//���ܹ�Ҳ������С��
//	
//
//	//���ñ�����ɫ one two�����������ñ�����ɫ(���Ĭ����ɫ)
//	setbkcolor(WHITE);//one
//	cleardevice();//����,�����Ѻ�ɫ������ܿ��������ɫ two
//
//
//	//��Բ
//	setfillcolor(GREEN);//���������ɫ
//	setlinecolor(BLUE);//����������ɫ
//	setlinestyle(PS_SOLID,5);//����������ʽ
//
//
//	circle(50, 50, 50);//x,y,�뾶�������
//	fillcircle(50, 150, 50);//�б߿����
//	solidcircle(50, 250, 50);//�ޱ߿����
//
//	
//	//����������򵥵�cout���������ͼ�δ���
//	//����������ɫ
//	settextcolor(RED);
//	//����������ʽ
//	settextstyle(20, 0, "����");//0�ǿ������Ӧ
//
//	//���ñ���ģʽ
//	setbkmode(TRANSPARENT);//͸��,��ֹ���ֽ���ͼ������ס
//
//
//	//outtextxy(50, 50, "lucy");
//	//���������Ҳ�����Ӧ���� error C2665: ��outtextxy��: 2 ��������û��һ������ת�����в�������
//	//�����ַ��������£��������Ϊ��L����_T()
//	//��������Ŀ->����->�ַ���->���ֽ��ַ���,�Ƽ�ʹ��
//	//outtextxy(50, 50, L"lucy");
//	//outtextxy(50, 50, _T("lucy"));
//	outtextxy(50, 50, "lucy");
//
//
//	//�����־���
//	fillrectangle(200, 50, 500, 100);//���ϽǺ����½ǵ������
//	settextcolor(BLACK);
//	char arr[] = "lucy";
//	//���ο��=500-200=300���߶�=100-50=50
//	int width = 300/2-textwidth(arr)/2;//���ο��һ��-���ֿ��һ��=��ʼ���ֿ��ƫ��
//	int height = 50/2-textheight(arr) / 2;
//	outtextxy(width+200, 50+height, arr);//�ӿ����ʼ��ʼ������ƫ����
//	
//
//	//���ͼƬ
//	IMAGE img;//����һ������
//	//����ͼƬ
//	//���·����./��ʾ��ǰ�ļ����£�../��ǰ�ļ��е���һ��Ŀ¼ ./xx.jpg
//	//����·����C:\Users\����\source\repos\Project3\xx.jpg
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
//#include<conio.h>//ʹ��_getch()������ȡ��������ֵ
//using namespace std;
//
//void button(int x, int y, int w, int h,const char*text)
//{
//	setbkmode(TRANSPARENT);
//	setfillcolor(BROWN);
//	fillroundrect(x, y, x + w, y + h, 10, 10);
//
//	settextstyle(30, 0, "����");
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
//	//������
//	ExMessage msg;//��Ϣ�ṹ�壬���ڻ�ȡ������Ϣ���������
//	while (true)
//	{
//
//		if (peekmessage(&msg, EX_MOUSE))//��Ϣ�ṹ���ָ��,�����Ϣ
//		{
//			switch (msg.message)
//			{
//			case WM_LBUTTONDOWN://�ж�����Ƿ�����
//				if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
//				{
//					cout << "��ť�ѱ����" << endl;
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



//����������Ϣ
#include<iostream>
#include<easyx.h>//������windows.h
#include<conio.h>//ʹ��_getch()������ȡ����ֵ
#include<cstdio>
#include<mmsystem.h>//music,һ������easyx.h����
#pragma comment(lib,"winmm.lib")//���ļ�����
using namespace std;


void button(int x, int y, int w, int h,const char*text)
{
	setbkmode(TRANSPARENT);
	setfillcolor(BROWN);
	fillroundrect(x, y, x + w, y + h, 10, 10);

	settextstyle(30, 0, "����");

	
	char arr[] = "botton";
	strcpy_s(arr, text);
	int tx = x + (w - textwidth(arr)) / 2;
	int ty = y + (h - textheight(arr)) / 2;

	
	outtextxy(tx, ty, arr);

}


void change()//���Ĵ��ڱ���
{
	//��ȡ���ھ��,�൱�ڴ��ڵ����֤,Ψһ��ʶһ������
	HWND hnd = GetHWnd();
	//���ô��ڱ���
	SetWindowText(hnd, "lucy");
	//�������ڣ���ʾ�û�����
	int is_ok = MessageBox(hnd, "��ϲ", "��ʾ", MB_OKCANCEL);//����ĳɵ�ǰ������һֱ�����ڸô����ϲ㣬��������
	if (is_ok == IDOK)
	{
		cout << "������ok" << endl;
	}
	else if (IDCANCEL == is_ok)
	{
		cout << "������ȡ��" << endl;
	}

}


int main()
{
	initgraph(849, 1200, EX_SHOWCONSOLE);
	//��ȡ����������Ϣ
	

	mciSendString("open Cyberpunk.mp3 alias BGM", 0, 0, 0);
	mciSendString("play BGM repeat", 0, 0, 0);

	change();

	int x = 30;
	int y = 40;
	

	while (true)
	{

		//˫�����ͼ��Ҫ���ڻ�ͼ����֮ǰ��֮��
		BeginBatchDraw();


		//���ñ�����ɫ one two�����������ñ�����ɫ(���Ĭ����ɫ)
		setbkcolor(WHITE);//one
		cleardevice();//����,�����Ѻ�ɫ������ܿ��������ɫ two

		

		//���ͼƬ
		IMAGE img;//����һ������
		loadimage(&img,"ecy.jpg");
		putimage(0, 0, &img);


		//���ƿ��ƶ�����
		setfillcolor(RED);
		setlinecolor(BLUE);
		setlinestyle(PS_SOLID, 5);
		fillcircle(x, y, 20);


		//���ñ���ģʽ
		setbkmode(TRANSPARENT);//͸��,��ֹ���ֽ���ͼ������ס
		button(50, 50, 150, 50, "button");

		FlushBatchDraw();
		////˫�����ͼ��Ҫ���ڻ�ͼ����֮ǰ��֮��
		//EndBatchDraw();

		ExMessage msg;



			if (peekmessage(&msg, EX_KEY |EX_MOUSE))//�ж����޼��̰���
			{

				//char key = _getch();//����������������һֱ�ڵ�

				if (GetAsyncKeyState(VK_UP))
				{
					y -= 20;
					cout << "���ϣ� " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_DOWN))
				{
					y += 20;
					cout << "���£� " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_LEFT))
				{
					x -= 20;
					cout << "���� " << x << " " << y << endl;
				}
				if (GetAsyncKeyState(VK_RIGHT))
				{
					x += 20;
					cout << "���ң� " << x << " " << y << endl;
				}


				//switch (msg.message)
				//{
				//case WM_LBUTTONDOWN://�ж�����Ƿ�����
				//	if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
				//	{
				//		cout << "��ť�ѱ����" << endl;
				//	}
				//	break;
				//default:
				//	break;
				//}
				if (msg.message== WM_LBUTTONDOWN&&msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
				{
					cout << "��ť�ѱ����" << endl;
				}
				
			
			}
			//if (peekmessage(&msg, EX_MOUSE))//��Ϣ�ṹ���ָ��,�����Ϣ
			//{
			//	switch (msg.message)
			//	{
			//	case WM_LBUTTONDOWN://�ж�����Ƿ�����
			//		if (msg.x >= 50 && msg.x <= 50 + 150 && msg.y >= 50 && msg.y <= 50 + 50)
			//		{
			//			cout << "��ť�ѱ����" << endl;
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