// HttpClientTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "HttpClient.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CHttpClient clinet;
	std::string out;
	clinet.Get("http://www.weather.com.cn/data/cityinfo/101010100.html", out);
	printf(out.c_str());
	system("pause");
	return 0;
}

