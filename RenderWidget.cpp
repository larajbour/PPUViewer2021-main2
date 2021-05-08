//
// copyright 2018 Palestine Polytechnic Univeristy
//
// This software can be used and/or modified for academich use as long as 
// this commented part is listed
//
// Last modified by: Zein Salah, on 26.03.2021
//


#include "RenderWidget.h"
#include <glut.h>
#include <QPainter>

RenderWidget::RenderWidget(QWidget *parent) : QGLWidget(parent)
{

}


RenderWidget::~RenderWidget()
{

}


QSize RenderWidget::minimumSizeHint() const
{
    return QSize(0, 0);
}


QSize RenderWidget::sizeHint() const
{
    return QSize(800, 800);
}


void RenderWidget::initializeGL()
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-200.0, 800.0, -200.0, 800.0);
}


void RenderWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);

//    glLineWidth(3);
//    glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//   glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    glBegin(GL_TRIANGLES);
    glColor3f(1, 0, 0);
    glVertex2i(350, 400);
    glColor3f(0, 0, 1);
    glVertex2i(600, 400);
    glColor3f(0, 1, 0);
    glVertex2i(475, 600);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0, 0.3, 0.7);
    glVertex2i(380, 50);
    glVertex2i(600, 50);
    glVertex2i(650, 250);
    glVertex2i(500, 380);
    glVertex2i(340, 250);
   
    glEnd();


    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1, 0, 0);
    glVertex2i(500, 170);//v0
    glColor3f(0, 1, 0);
 
    glVertex2i(420, 80);//v1
    glColor3f(0, 1, 0);
    glVertex2i(580, 80);//v2
    glColor3f(0, 1, 0);
    glVertex2i(500, 300);//v3
    glColor3f(0, 1, 0);
    glVertex2i(420, 80);
    glColor3f(0, 1, 0);
    glVertex2i(500, 300);//v3
    

    glEnd();


    



    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 0);
    glVertex2i(-150, 600);
    glColor3f(0, 0, 0);
    glVertex2i(200, 200);
    glColor3f(1, 1, 1);
    glVertex2i(200, 600);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0, 0, 0);
    glVertex2i(-150, 600);
    glColor3f(0, 0, 0);
    glVertex2i(200, 200);
    glColor3f(1, 1, 1);
    glVertex2i(-150, 200);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1, 1, 0);
    glVertex2i(-50, 50);

    glVertex2i(250, 50);

    glVertex2i(-50, 310);

    glEnd();


    

    

    
    //glBegin(GL_TRIANGLES);
    //  glColor3f(1.0, 0.0, 0.0);   // red
    //  glVertex2f(100, 100);
    //  glColor3f(0.0, 1.0, 0.0);   // green
    //  glVertex2f(400, 100);
	   // glColor3f(0.0, 0.0, 1.0);   // blue
    //  glVertex2f(250, 400);
    //glEnd();



  

    glFlush();
}


void RenderWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);

//    glViewport(0, 0, width, height);
}


