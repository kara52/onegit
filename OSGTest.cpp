// OSGTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


//int _tmain(int argc, _TCHAR* argv[])
//{
//	return 0;
//}

#include<osgViewer/Viewer> 
#include<osgDB/ReadFile> 
int main(int argc, char **argv)
{
	osgViewer::Viewer viewer;
	viewer.setSceneData(osgDB::readNodeFile("cow.osg"));
	printf("test line\n");
	return viewer.run();
}
