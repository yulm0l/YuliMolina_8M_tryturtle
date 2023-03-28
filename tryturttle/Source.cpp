#include<gl/glut.h>
void DibujarPoligonos()
{
	glClear(GL_COLOR_BUFFER_BIT);
	//patita izq
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(360, 170);
	glVertex2i(310, 170); //3
	glVertex2i(285, 210); //1 BASE
	glVertex2i(330, 280); //1 BASE
	glVertex2i(390, 230); //2 BASE
	glEnd();
	//cola--pentagono invertido
	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(390, 230); //2 BASE
	glVertex2i(450, 190); //2 BASE
	glVertex2i(510, 230); //2 BASE
	glVertex2i(490, 280); //2 BASE
	glVertex2i(410, 280); //2 BASE
	glEnd();
	//otra patita der
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(510, 230); 
	glVertex2i(570, 285); 
	glVertex2i(610, 210); 
	glVertex2i(598, 180); 
	glVertex2i(550, 180); 
	glEnd();
	//trapecio
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(385, 350); 
	glVertex2i(520, 350); 
	glVertex2i(490, 280); 
	glVertex2i(410, 280); 
	glEnd();
	glFlush();
	//---------hexágono
	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(390, 465); 
	glVertex2i(515, 465); 
	glVertex2i(550, 410); 
	glVertex2i(520, 350); 
	glVertex2i(385, 350); 
	glVertex2i(345, 410); 
	glEnd();
	glFlush();
	//---------hexágono mediano
	glColor3f(2.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(515, 465); 
	glVertex2i(390, 465); 
	glVertex2i(367, 505); 
	glVertex2i(400, 530); 
	glVertex2i(502, 530); 
	glVertex2i(532, 505); 
	glEnd();
	//Z1
	glColor3f(0.0f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(502, 530); 
	glVertex2i(400, 530); 
	glVertex2i(390, 602); 
	glVertex2i(450, 640); 
	glVertex2i(510, 602); 
	glEnd();
	//cabecita
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(450, 640); 
	glVertex2i(408, 612); 
	glVertex2i(398, 700); 
	glVertex2i(450, 720); 
	glVertex2i(502, 700); 
	glVertex2i(490, 612); 
	glEnd();

	//lomo izq
	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(390, 230); 
	glVertex2i(330, 280); 
	glVertex2i(385, 350); 
	glVertex2i(410, 280); 
	glEnd();
	//A1
	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);

	glBegin(GL_POLYGON);
	glVertex2i(330, 280); 
	glVertex2i(385, 350); 
	glVertex2i(345, 410); 
	glVertex2i(275, 415); 
	glEnd();
	//A2
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(275, 415); 
	glVertex2i(345, 410); 
	glVertex2i(390, 465); 
	glVertex2i(367, 505); 
	glVertex2i(330, 575); 
	glEnd();
	//A3
	glColor3f(0.5f, 1.5f, 1.5f);
	glBegin(GL_POLYGON);
	glVertex2i(330, 575); 
	glVertex2i(390, 602); 
	glVertex2i(400, 530); 
	glVertex2i(367, 505); 

	glEnd();
	//lomo der
		//B
	glColor3f(0.5f, 1.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(510, 230); 
	glVertex2i(570, 285); 
	glVertex2i(520, 350); 
	glVertex2i(490, 280); 

	glEnd();
	//B1
	glColor4f(102.0f / 255.0f, 204.0f / 255.0f, 153.0f / 255.0f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(520, 350); 
	glVertex2i(570, 285); 
	glVertex2i(618, 415); 
	glVertex2i(550, 410); 
	glEnd();

	//B2
	glColor3f(0.0f, 1.0f, 0.0f);
	glBegin(GL_POLYGON);
	glVertex2i(618, 415); 
	glVertex2i(550, 410); 
	glVertex2i(515, 465); 
	glVertex2i(532, 505); 
	glVertex2i(572, 575); 
	glEnd();
	//B3
	glColor3f(0.5f, 1.5f, 1.5f);
	glBegin(GL_POLYGON);
	glVertex2i(532, 505); 
	glVertex2i(572, 575); 

	glVertex2i(510, 602); 
	glVertex2i(502, 530); 
	glEnd();
	//manita izquierda
		//C1
	glColor3f(0.0f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(348, 650); 
	glVertex2i(390, 602); 
	glVertex2i(330, 575); 
	glVertex2i(240, 650); 
	glEnd();
	//C2
	glColor3f(2.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(240, 650); 
	glVertex2i(330, 575); 
	glVertex2i(220, 575); 
	glEnd();

	//C3
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(240, 650); 
	glVertex2i(220, 575); 
	glVertex2i(140, 500); 
	glVertex2i(165, 600); 
	glEnd();
	//manita derecha
	//D1
	glColor3f(0.0f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex2i(510, 602); 
	glVertex2i(572, 575); 
	glVertex2i(655, 650); 
	glVertex2i(570, 650); 
	glEnd();

	// D2
	glColor3f(2.0f, 0.5f, 1.0f);
	glBegin(GL_POLYGON);
	glVertex2i(572, 575);
	glVertex2i(655, 650);
	glVertex2i(690, 575);
	glEnd();

	// D3
	glColor3f(0.0, 0.6, 0.0);
	glBegin(GL_POLYGON);
	glVertex2i(655, 650); 
	glVertex2i(745, 600);
	glVertex2i(780, 500);

	glVertex2i(690, 575); 

	glEnd();

	glFlush();
}
void IniciarConfiguracion() {
	glClearColor(176.0f / 255.0f, 224.0f / 255.0f, 230.0f / 255.0f, 1.0f);
	glColor3f(0.0, 0.0, 1.0);
	glLineWidth(3.0);
	glOrtho(0, 1000, 0, 800, 1, -1);
}
int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Tortuga-YuliBMS8M");
	glutDisplayFunc(DibujarPoligonos);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
