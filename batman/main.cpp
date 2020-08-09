#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (128, 128, 128);
glPointSize(5.0);


//quads
glBegin(GL_QUADS);
glColor3ub (1, 1, 1);
glVertex2i(100, 50);
glVertex2i(100, 150);
glVertex2i(250, 150);
glVertex2i(250, 50);
glEnd();

glBegin(GL_QUADS);
glColor3ub (30, 50, 128);

glVertex2i(100, 150);
glVertex2i(100, 180);
glVertex2i(250, 180);
glVertex2i(250, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (127, 116, 19);

glVertex2i(100, 180);
glVertex2i(100, 210);
glVertex2i(250, 210);
glVertex2i(250, 180);
glEnd();

glBegin(GL_QUADS);
glColor3ub (132, 132, 125);

glVertex2i(100, 210);
glVertex2i(100, 240);
glVertex2i(250, 240);
glVertex2i(250, 210);
glEnd();

glBegin(GL_QUADS);
glColor3ub (132, 132, 125);

glVertex2i(120, 180);
glVertex2i(120, 270);
glVertex2i(230, 270);
glVertex2i(230, 180);
glEnd();

glBegin(GL_QUADS);
glColor3ub (234, 242, 19);

glVertex2i(120, 180);
glVertex2i(120, 150);
glVertex2i(230, 150);
glVertex2i(230, 180);
glEnd();

glBegin(GL_QUADS);
glColor3ub (17, 26, 108);

glVertex2i(120, 150);
glVertex2i(120, 120);
glVertex2i(230, 120);
glVertex2i(230, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (62, 63, 63);

glVertex2i(120, 120);
glVertex2i(120, 10);
glVertex2i(140, 10);
glVertex2i(140, 120);
glEnd();

glBegin(GL_QUADS);
glColor3ub (129, 135, 135);

glVertex2i(140, 120);
glVertex2i(140, 10);
glVertex2i(160, 10);
glVertex2i(160, 120);
glEnd();

glBegin(GL_QUADS);
glColor3ub (129, 135, 135);

glVertex2i(210, 120);
glVertex2i(210, 10);
glVertex2i(230, 10);
glVertex2i(230, 120);
glEnd();

glBegin(GL_QUADS);
glColor3ub (62, 63, 63);

glVertex2i(190, 120);
glVertex2i(190, 10);
glVertex2i(210, 10);
glVertex2i(210, 120);
glEnd();

glBegin(GL_QUADS);
glColor3ub (32, 43, 141);

glVertex2i(140, 150);
glVertex2i(140, 100);
glVertex2i(210, 100);
glVertex2i(210, 150);
glEnd();

glBegin(GL_QUADS);
glColor3ub (61, 63, 64);

glVertex2i(150, 240);
glVertex2i(150, 210);
glVertex2i(200, 210);
glVertex2i(200, 240);
glEnd();

glBegin(GL_QUADS);
glColor3ub (168, 136, 29);

glVertex2i(150, 280);
glVertex2i(150, 270);
glVertex2i(200, 270);
glVertex2i(200, 280);
glEnd();

glBegin(GL_QUADS);
glColor3ub (29, 52, 168);

glVertex2i(150, 330);
glVertex2i(150, 280);
glVertex2i(200, 280);
glVertex2i(200, 330);
glEnd();

glBegin(GL_QUADS);
glColor3ub (255, 255,255);

glVertex2i(160, 330);
glVertex2i(160, 310);
glVertex2i(190, 310);
glVertex2i(190, 330);
glEnd();

glBegin(GL_QUADS);
glColor3ub (17, 30, 94);

glVertex2i(120, 10);
glVertex2i(120, 1);
glVertex2i(140, 1);
glVertex2i(140, 10);
glEnd();

glBegin(GL_QUADS);
glColor3ub (46, 70, 189);

glVertex2i(140, 10);
glVertex2i(140, 1);
glVertex2i(160, 1);
glVertex2i(160, 10);
glEnd();

glBegin(GL_QUADS);
glColor3ub (46, 70, 189);

glVertex2i(210, 10);
glVertex2i(210, 1);
glVertex2i(230, 1);
glVertex2i(230, 10);
glEnd();

glBegin(GL_QUADS);
glColor3ub (17, 30, 94);

glVertex2i(190, 10);
glVertex2i(190, 1);
glVertex2i(210, 1);
glVertex2i(210, 10);
glEnd();




glFlush ();
}

void myInit (void)
{
glClearColor(1, 1, 1, 1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}





int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 200);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
