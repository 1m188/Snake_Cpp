#include <QtWidgets/QApplication>
#include "Director.h"
#include "Config.h"

int main(int argc, char *argv[])
{
#ifdef NDEBUG
	QApplication::addLibraryPath("./plugins"); //�����汾�ӳ�������Ŀ¼��Ѱ��������
#endif // NDEBUG

	QApplication a(argc, argv);
	//��ʼ���������
	Config::getInstance()->init();
	//�趨��Ϸ����
	Director::getInstance()->setWindow(new Window());
	Director::getInstance()->getWindow()->show();
	a.exec();
	//�����������
	Config::getInstance()->uninit();

	return 0;
}