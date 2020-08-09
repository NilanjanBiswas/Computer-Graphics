#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(8.0);
	// Draw a Red 1x1 Square centered at origin

	////////////////////////////////////////////////////1////////////////////////////////////

    glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, 0.5f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.5f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.5f);    // x, y

	glEnd();

	///////////////////////////2///////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.43f);    // x, y

	glEnd();


	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.57f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.5f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.43f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.08f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.01f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.06f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.41f, 0.43f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.48f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.55f, 0.43f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, 0.43f);    // x, y

	glEnd();

	///////////////////////////3///////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.64f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.57f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.5f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.43f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.01f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.41f, 0.36f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.48f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.55f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.62f, 0.36f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, 0.36f);    // x, y

	glEnd();

	/////////////////////////////4////////////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.71f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.64f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.62f, 0.29f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.69f, 0.29f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, 0.29f);    // x, y

	glEnd();

	///////////////////////////////5/////////////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.78f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.71f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.22f);    // x, y

	glEnd();
	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.43f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.41f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.22f);    // x, y

	glEnd();

	///
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.69f, 0.22f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.76f, 0.22f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, 0.22f);    // x, y

	glEnd();

	/////////////////////////////6//////////////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.92f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.85f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.78f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.15f);    // x, y

	glEnd();
	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.43f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.41f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.15f);    // x, y

	glEnd();

	///
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, 0.15f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.76f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.83f, 0.15f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.9f, 0.15f);    // x, y

	glEnd();

	////////////////////////////7/////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.85f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.08f);    // x, y

	glEnd();
///
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
 	glVertex2f(0.55f, 0.08f);    // x, y

	glEnd();
///
	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.83f, 0.08f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, 0.08f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, 0.08f);    // x, y

	glEnd();

	///////////////////////////////////8///////////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, 0.01f);    // x, y

	glEnd();
///
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, 0.01f);    // x, y

	glEnd();

	///
	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, 0.01f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, 0.01f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, 0.01f);    // x, y

	glEnd();

	//////////////////////////9//////////////////////////////

    glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.06f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.06f);    // x, y

	glEnd();

	///
    glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, -0.06f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, -0.06f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, -0.06f);    // x, y

	glEnd();


	////////////////////////10/////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.13f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.13f);    // x, y

	glEnd();

	///

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, -0.13f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, -0.13f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, -0.13f);    // x, y

	glEnd();

	//////////////////////////11///////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.2f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.2f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, -0.2f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, -0.2f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, -0.2f);    // x, y

	glEnd();


	/////////////////////////////12////////////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.99f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.92f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.85f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.27f);    // x, y

	glEnd();

	///

    glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.27f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.83f, -0.27f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.9f, -0.27f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.97f, -0.27f);    // x, y

	glEnd();

	///////////////////////////13////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.92f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.85f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.78f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.34f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.34f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.34f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.76f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.83f, -0.34f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.9f, -0.34f);    // x, y

	glEnd();

	/////////////////////////////14//////////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.85f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.78f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.71f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.41f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.41f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.69f, -0.41f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.76f, -0.41f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.83f, -0.41f);    // x, y

	glEnd();

	/////////////////////////////15////////////////////////////////////////////

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.78f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.71f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.64f, -0.48f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.48f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.62f, -0.48f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.69f, -0.48f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.76f, -0.48f);    // x, y

	glEnd();


	///////////////////////////////16//////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.71f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.64f, -0.55f);    // x, y

	glEnd();


	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.57f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.5f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.08f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.06f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.48f, -0.55f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.55f, -0.55f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.62f, -0.55f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.69f, -0.55f);    // x, y

	glEnd();

	////////////////////////////17/////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.64f, -0.62f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.57f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.5f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.43f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.36f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.29f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.22f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.15f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.08f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(-0.01f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.06f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.13f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.2f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.27f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.34f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.41f, -0.62f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.48f, -0.62f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.8f, 0.0f); // Red
	glVertex2f(0.55f, -0.62f);    // x, y

	glEnd();

	///

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.62f, -0.62f);    // x, y

	glEnd();


	/////////////////////////////18/////////////////////////////////////

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.57f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.5f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.43f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.36f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.29f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.22f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.15f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.08f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.01f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.06f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.13f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.27f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.34f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.41f, -0.69f);    // x, y

	glEnd();

	 glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.48f, -0.69f);    // x, y

	glEnd();

	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.55f, -0.69f);    // x, y

	glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
