//#include<iostream>
//#include<cstdlib>
//#include<stdio.h>
//#include<tchar.h>
//#include<cstring>
//#include<string>
//using namespace std;
//#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX_PATH 100
//
//
//int main()
//{
//	char a[100];
//	cin >> a;
//	TCHAR b[100];
//	strcpy(b, a);
//
//	
//
//
//	return 0;
//}



















//int main()
//{
////	char a[100]="hello";
////	TCHAR b[100];
////	//cin >> a;
////#ifdef UNICODE
////	MultiByteToWideChar(CP_ACP, 0, a, -1,b, 100);
////	//memset(b, 0, 100);
////#else
////	strcpy(b, a);
////#endif
////	cout << b;
//
//    char Path[MAX_PATH] = "hello";
//    TCHAR T_Path[MAX_PATH];// = _T("aaaaaaaaaa");
//#ifdef UNICODE
//    MultiByteToWideChar(CP_ACP, 0, Path, -1, T_Path, 100);
//     #else
//        strcpy(T_Path, Path);
//#endif
//    cout << T_Path;
//    ////TCHAR ת char
//    //wcstombs(Path, T_Path, MAX_PATH);
//
//    ////char ת TCHAR
//    //memset(T_Path, 0, MAX_PATH);
//    //mbstowcs(T_Path, Path, MAX_PATH);
//
//
//	return 0;
//}