#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include<math.h>
#include <stdlib.h>

void Draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3d(0,0,0);
	glBegin(GL_TRIANGLE_STRIP);
    glVertex2f(-6.0,-4.0);
    glVertex2f(-6.0,2.0);
    glVertex2f(-3.0,-3.0);
	glVertex2f(-2.0,3.0);
    glVertex2f(0.0,-1.0);
	glEnd();
	glFlush();
}


void Initialize() {
	glClearColor(0, 255, 0, 0.5);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);
}
int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(476, 477);
	glutInitWindowPosition(250, 250);
	glutCreateWindow("Triangle strip");
	Initialize();
	glutDisplayFunc(Draw);
	glutMainLoop();
	return EXIT_SUCCESS;
}
