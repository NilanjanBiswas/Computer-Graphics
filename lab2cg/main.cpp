void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.498f, 0.0f); // Red
	glVertex2f(-1.0f, 0.05f);    // x, y
	glVertex2f(1.0f, 0.05f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 1.0f, 0.941f); // Red
	glVertex2f(-1.0f, 0.1f);    // x, y
	glVertex2f(1.0f, 0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 1.0f, 0.0f); // Red
	glVertex2f(-1.0f, 0.15f);    // x, y
	glVertex2f(1.0f, 0.15f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // Red
	glVertex2f(-1.0f, 0.2f);    // x, y
	glVertex2f(1.0f, 0.2f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.180f, 0.168f, 0.372f); // Red
	glVertex2f(-1.0f, 0.25f);    // x, y
	glVertex2f(1.0f, 0.25f);    // x, y
	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
    glColor3f(0.545f, 0.0f, 1.0f); // Red
	glVertex2f(-1.0f, 0.3f);    // x, y
	glVertex2f(1.0f, 0.3f);    // x, y
	glEnd();


	glFlush();  // Render now
}
