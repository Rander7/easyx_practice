//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<easyx.h>
//#include<mmsystem.h>//music,һ������easyx.h����
//#pragma comment(lib,"winmm.lib")//���ļ�����
//using namespace std;
//
//int main()
//{
//	initgraph(1080, 720);//��������
//	cleardevice();//���ˢ��
//	//����ϵ����x�᲻�䣬y��Ϊ��ѧ��y�Ḻ����
//	
//	////������ɫ
//	//BLACK;
//	//GREEN;
//
//	////��������ɫ
//	//RGB(176, 253, 174);
//
//	//mci-media control interface
//	//L������ַ�
//	mciSendString("open Cyberpunk.mp3", 0, 0, 0);//MP3��wav
//	mciSendString("play Cyberpunk.mp3", 0, 0, 0);
//
//	//mciSendString(L"pause Cyberpunk.mp3", 0, 0, 0);//��ͣ
//	//mciSendString(L"close Cyberpunk.mp3", 0, 0, 0);
//
//	settextcolor(RED);//������ɫ
//	//settextcolor(RGB(176, 253, 174));
//	settextstyle(100,0,"����");//���ַ��
//	//0��������Ӧ���
//	outtextxy(300, 200, "lucy");//��������
//	/*settextstyle(50, 0, _T("΢���ź�"));
//	outtextxy(0, 0, _T("����"));*/
//
//
//	////ͼƬ�Ĵ���
//	////��ͨ��ͼ
//	//IMAGE bkimg;
//	//loadimage(&bkimg, L"wallhaven-281d5y.png");
//	//putimage(0, 0, &bkimg);
//	
//
//	//������ͼ(�����ͼ)
//	BeginBatchDraw();//��ʼ������ͼ��������
//	//������1������Ҫ��ʾ�ڴ����ж�����Ӧ�÷��������д����м�
//
//	EndBatchDraw();//����������ͼ��������һ֡ͼ�������������
//
//
//
//	////͸����ͼ .png 
//
//	////׼������ͼƬ���ڵװ���ͼ���׵ײ���ͼ
//	//IMAGE appimg0, appimg1;
//	//loadimage(&appimg0, L"");
//	//loadimage(&appimg1, L"");
//
//	////������ͼƬ������ͬһ������
//
//	////�ֱ�ʹ�ö����Ʋ��� spcpaint | spand &
//	//putimage(0, 0, &appimg0��SRCPAINT);//������ɫ����������ɫ
//	//putimage(0, 0, &appimg1��SRCAND);//�����ɫ����������ɫ
//
//	system("pause");
//	return 0;
//}