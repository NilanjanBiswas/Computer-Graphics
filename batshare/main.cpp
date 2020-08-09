//#include <cstdio>
//#include<GL/gl.h>
//#include <GL/glut.h>
//
//void myDisplay(void)
//{
//glClear (GL_COLOR_BUFFER_BIT);
//glColor3ub (128, 128, 128);
//glPointSize(5.0);
//
//
////quads
//glBegin(GL_QUADS);
//glColor3ub (1, 1, 1);
//glVertex2i(100, 50);
//glVertex2i(100, 150);
//glVertex2i(250, 150);
//glVertex2i(250, 50);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (30, 50, 128);
//
//glVertex2i(100, 150);
//glVertex2i(100, 180);
//glVertex2i(250, 180);
//glVertex2i(250, 150);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (127, 116, 19);
//
//glVertex2i(100, 180);
//glVertex2i(100, 210);
//glVertex2i(250, 210);
//glVertex2i(250, 180);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (132, 132, 125);
//
//glVertex2i(100, 210);
//glVertex2i(100, 240);
//glVertex2i(250, 240);
//glVertex2i(250, 210);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (132, 132, 125);
//
//glVertex2i(120, 180);
//glVertex2i(120, 270);
//glVertex2i(230, 270);
//glVertex2i(230, 180);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (234, 242, 19);
//
//glVertex2i(120, 180);
//glVertex2i(120, 150);
//glVertex2i(230, 150);
//glVertex2i(230, 180);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (17, 26, 108);
//
//glVertex2i(120, 150);
//glVertex2i(120, 120);
//glVertex2i(230, 120);
//glVertex2i(230, 150);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (62, 63, 63);
//
//glVertex2i(120, 120);
//glVertex2i(120, 10);
//glVertex2i(140, 10);
//glVertex2i(140, 120);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (129, 135, 135);
//
//glVertex2i(140, 120);
//glVertex2i(140, 10);
//glVertex2i(160, 10);
//glVertex2i(160, 120);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (129, 135, 135);
//
//glVertex2i(210, 120);
//glVertex2i(210, 10);
//glVertex2i(230, 10);
//glVertex2i(230, 120);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (62, 63, 63);
//
//glVertex2i(190, 120);
//glVertex2i(190, 10);
//glVertex2i(210, 10);
//glVertex2i(210, 120);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (32, 43, 141);
//
//glVertex2i(140, 150);
//glVertex2i(140, 100);
//glVertex2i(210, 100);
//glVertex2i(210, 150);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (61, 63, 64);
//
//glVertex2i(150, 240);
//glVertex2i(150, 210);
//glVertex2i(200, 210);
//glVertex2i(200, 240);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (168, 136, 29);
//
//glVertex2i(150, 280);
//glVertex2i(150, 270);
//glVertex2i(200, 270);
//glVertex2i(200, 280);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (29, 52, 168);
//
//glVertex2i(150, 330);
//glVertex2i(150, 280);
//glVertex2i(200, 280);
//glVertex2i(200, 330);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (255, 255,255);
//
//glVertex2i(160, 330);
//glVertex2i(160, 310);
//glVertex2i(190, 310);
//glVertex2i(190, 330);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (17, 30, 94);
//
//glVertex2i(120, 10);
//glVertex2i(120, 1);
//glVertex2i(140, 1);
//glVertex2i(140, 10);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (46, 70, 189);
//
//glVertex2i(140, 10);
//glVertex2i(140, 1);
//glVertex2i(160, 1);
//glVertex2i(160, 10);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (46, 70, 189);
//
//glVertex2i(210, 10);
//glVertex2i(210, 1);
//glVertex2i(230, 1);
//glVertex2i(230, 10);
//glEnd();
//
//glBegin(GL_QUADS);
//glColor3ub (17, 30, 94);
//
//glVertex2i(190, 10);
//glVertex2i(190, 1);
//glVertex2i(210, 1);
//glVertex2i(210, 10);
//glEnd();
//
//
//
//
//glFlush ();
//}
//
//void myInit (void)
//{
//glClearColor(1, 1, 1, 1);
//glMatrixMode(GL_PROJECTION);
//glLoadIdentity();
//gluOrtho2D(0.0, 640.0, 0.0, 480.0);
//}
//
//
//
//
//
//int main(int argc, char** argv)
//{
//glutInit(&argc, argv);
//glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
//glutInitWindowSize (640, 480);
//glutInitWindowPosition (200, 200);
//glutCreateWindow ("");
//glutDisplayFunc(myDisplay);
//myInit ();
//glutMainLoop();
//}
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color




    /*glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(0.4f, 0.2f);
    glVertex2f(0.6f, 0.2f);
    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.6f, 0.6f);
    glVertex2f(0.4f, 0.6f);
    glVertex2f(0.3f, 0.4f);
    glEnd();*/
    int bw = 0;
    for (float i = 1.0f;i>=-0.75f;i-=0.25f) {
        for (float j = -1.0f;j<=0.75f;j+=0.25f) {



            glBegin(GL_POLYGON);
            if (bw%2==0)
                glColor3f(0.0f, 0.0f, 0.0f);
            else
                glColor3f(1.0f, 1.0f, 1.0f);
            glVertex2f(j, i);
            glVertex2f(j, i-0.25f);
            glVertex2f(j+0.25f, i-0.25f);
            glVertex2f(j+0.25f, i);
            glEnd();
            bw++;
        }
        bw--;
    }



    glFlush();  // Render now
}



/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);          // Initialize GLUT
    glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
    glutInitWindowSize(320, 320);   // Set the window's initial width & height
    glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
    glutDisplayFunc(display);       // Register callback handler for window re-paint event
    initGL();                       // Our own OpenGL initialization
    glutMainLoop();                 // Enter the event-processing loop
    return 0;
}
