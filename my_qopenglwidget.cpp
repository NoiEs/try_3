#include "stdafx.h"
#include "my_qopenglwidget.h"

my_QOpenGLWidget::my_QOpenGLWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{
	QSurfaceFormat format;
	format.setRenderableType(QSurfaceFormat::OpenGL);
	format.setProfile(QSurfaceFormat::CoreProfile);
	format.setVersion(3, 3);
	setFormat(format);
}

my_QOpenGLWidget::~my_QOpenGLWidget()
{
}

void my_QOpenGLWidget::initializeGL()
{
	//initializeOpenGLFunctions();

	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

	setGeometry(20, 50, 300, 200);
	glShadeModel(GL_FLAT);
	glClearColor(0.1, 1.0, 0.2, 0);//�ı䴰�ڵı�����ɫ������������ò�����ú�û��ʲôЧ��
	glClearDepth(1.0);//������Ȼ���
	glEnable(GL_DEPTH_TEST);//������Ȳ���
	glDepthFunc(GL_LEQUAL);//������Ȳ�������
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);//����͸��У��

}

void my_QOpenGLWidget::paintGL()
{
	//������Ļ
	glClear(GL_COLOR_BUFFER_BIT);
}

void my_QOpenGLWidget::resizeGL(int width, int height)
{
	//δʹ��
	Q_UNUSED(width);
	Q_UNUSED(height);
}