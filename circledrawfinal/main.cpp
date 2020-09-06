#include<windows.h>
#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>



using namespace std;


void Draw() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // just keep
    glMatrixMode(GL_MODELVIEW);

    glColor3f(0.2, 0.6, 0.6);
    glTranslatef(0.0,0.0,-5.0);


                glBegin(GL_TRIANGLES);
                glColor3f(0.0, 1.0, 0.0);
                glVertex3f(-1.5, -1.5, 0);
                glVertex3f(-1.5, 0, 0);
                glVertex3f(0, -1.5, 0);
                glEnd();

            glBegin(GL_QUADS);
              glColor3f (1.0, 0.0, 0.0);

              glVertex3f (0.9, 0.9, 0.0);
              glVertex3f (1.9, 0.9, 0.0);
              glVertex3f (1.9, 1.9, 0.0);
              glVertex3f (0.9, 1.9, 0.0);

    glEnd();



    glFlush();
}



void lightSetting()
{
    float zpos = -10.0;
    GLfloat ambientIntensity0[4] = {0.0, 0.0, 0.0, 0.0}; // 6. ambient property
    GLfloat diffuseIntensity0[4] = {0.0, 0.0, 0.0, 0.0}; // 8. ambient property

    GLfloat ambientIntensity1[4] = {0.5, 0.5, 0.5, 0.5}; // 6. ambient property
    GLfloat diffuseIntensity1[4] = {0.5, 0.5, 0.5, 0.5}; // 8. ambient property

    GLfloat position0[4] = {1.0, 1.0, zpos, 0.0}; // 10. position property
    GLfloat position1[4] = {-1.0, -1.0, zpos, 0.0}; // 10. position property



    glEnable(GL_DEPTH_TEST); // 4. just keep
    glEnable(GL_COLOR_MATERIAL); // 3. Materals' color



    glEnable(GL_LIGHTING); // 1. enable lighting
    glEnable(GL_LIGHT0); // 2. enable light 0
    glEnable(GL_LIGHT1); // 2. enable light 0
    glEnable(GL_NORMALIZE);


    glLightfv(GL_LIGHT0, GL_AMBIENT, ambientIntensity0); // 7. ambient property adding to Light0
    glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuseIntensity0); // 9. ambient property adding to Light0
    glLightfv(GL_LIGHT0, GL_POSITION, position0); // 11. position property adding to Light0



    //set up light 0 properties
    glLightfv(GL_LIGHT1, GL_AMBIENT, ambientIntensity1); // 7. ambient property adding to Light0
    glLightfv(GL_LIGHT1, GL_DIFFUSE, diffuseIntensity1); // 9. ambient property adding to Light0
    glLightfv(GL_LIGHT1, GL_POSITION, position1); // 11. position property adding to Light0
}




void Initialize() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluPerspective(45.0, 1.00, 1.0, 200.0);
}



int main(int iArgc, char** cppArgv) {
    glutInit(&iArgc, cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("AIUB");
    Initialize();
    lightSetting();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
