//
//Semestre 2018 - 2
// ******** COMPUTACIÓN GRÁFICA ******** //
// ******** GRUPO: 04 *************//
// ---- ALUMNO: Ramírez Morales Gerardo Joel ---- //


#include "Main.h"

float X = 3.55;
float Y = 0.1;
float a = 0.38;
float b = 0.36;
float c = 0.75;

void InitGL ( GLvoid )     // Inicializamos parametros
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
}

void display(void)   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limpiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Código del dubijo a Realizar (MEGAMAN/ZERO)
	//Fondo del dibujo
	glPushMatrix();
	glTranslated(0.0, 21.8, 0);
	
	//********* FONDO
	glBegin(GL_POLYGON);
	glColor3f(0.152f, 0.113f, 0.117f);
	glVertex3f(0, 0, 0);
	glVertex3f(0, -21.8, 0);
	glColor3f(0.086f, 0.039f, 0.047f);
	glVertex3f(4.52, -21.8, 0);
	glVertex3f(4.52, 0, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.95f, 0.95f, 0.95f);
	glVertex3f(4.52, -21.8, 0);
	glVertex3f(4.52, 0, 0);
	glVertex3f(9.94, 0, 0);
	glVertex3f(9.94, -21.8, 0);
	glEnd();

	glBegin(GL_POLYGON);//CUELLO
	glColor3f(0.09f, 0.16f, 0.27f);
	glVertex3f(3.18, -11.07, 0);
	glVertex3f(3.18, -13, 0);
	glVertex3f(6.76, -13, 0);
	glVertex3f(6.76, -11.07, 0);
	glEnd();
	
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.4);
	glBegin(GL_LINE_LOOP);//Delineado Cuello
	glVertex3f(3.18, -11.07, 0);
	glVertex3f(3.18, -13, 0);
	glVertex3f(6.76, -13, 0);
	glVertex3f(6.76, -11.07, 0);
	glEnd();

	glBegin(GL_POLYGON);//parte del casco 
	glVertex3f(0.75, -6.31, 0);
	glVertex3f(1.91, -6.38, 0);
	glVertex3f(2.88, -10.08, 0);
	glVertex3f(1.26, -10.29, 0);
	glVertex3f(0.6, -8.17, 0);
	glEnd();


	// ********** ROSTRO
	glColor3f(0.98f, 0.87f, 0.76f);
	
	glBegin(GL_POLYGON);
	glVertex3f(1.76, -6.33, 0);
	glVertex3f(8.24, -6.33, 0);
	glVertex3f(8.90, -7.86, 0);
	glVertex3f(6.69, -11.49, 0);
	glEnd();
	
	glBegin(GL_TRIANGLES);
	glVertex3f(1.76, -6.33, 0);
	glVertex3f(1.43, -7.46, 0);
	glVertex3f(6.69, -11.49, 0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(5.59, -7.76, 0);
	glVertex3f(6.69, -11.49, 0);
	glVertex3f(6.49, -11.49, 0);//lineas
	glVertex3f(6.41, -11.56, 0);
	glVertex3f(6.34, -11.62, 0);
	glVertex3f(6.28, -11.64, 0);
	glVertex3f(6.20, -11.71, 0);
	glVertex3f(6.11, -11.77, 0);
	glVertex3f(6.04, -11.82, 0);
	glVertex3f(5.99, -11.85, 0);
	glVertex3f(5.92, -11.9, 0);
	glVertex3f(5.80, -11.96, 0);
	glVertex3f(5.74, -12.0, 0);
	glVertex3f(5.64, -12.06, 0);
	glVertex3f(5.57, -12.10, 0);
	glVertex3f(5.49, -12.14, 0);
	glVertex3f(5.44, -12.17, 0);
	glVertex3f(5.38, -12.21, 0);
	glVertex3f(5.31, -12.24, 0);
	glVertex3f(5.24, -12.28, 0);
	glVertex3f(5.19, -12.31, 0);
	glVertex3f(5.14, -12.34, 0);
	glVertex3f(5.05, -12.35, 0);
	glVertex3f(4.97, -12.36, 0);
	glVertex3f(4.86, -12.36, 0);
	glVertex3f(4.76, -12.35, 0);
	glVertex3f(4.73, -12.34, 0);
	glVertex3f(4.71, -12.31, 0);
	glVertex3f(4.66, -12.28, 0);
	glVertex3f(4.49, -12.24, 0);
	glVertex3f(4.42, -12.21, 0);
	glVertex3f(4.36, -12.17, 0);
	glVertex3f(4.31, -12.14, 0);
	glVertex3f(4.23, -12.10, 0);
	glVertex3f(4.16, -12.06, 0);
	glVertex3f(4.06, -12.0, 0);
	glVertex3f(4.0, -11.96, 0);
	glVertex3f(3.88, -11.90, 0);
	glVertex3f(3.81, -11.85, 0);
	glVertex3f(3.76, -11.82, 0);
	glVertex3f(3.69, -11.77, 0);
	glVertex3f(3.60, -11.71, 0);
	glVertex3f(3.52, -11.64, 0);
	glVertex3f(3.46, -11.62, 0);
	glVertex3f(3.39, -11.56, 0);
	glVertex3f(3.31, -11.49, 0);
	glVertex3f(3.26, -11.42, 0);
	glVertex3f(3.17, -11.37, 0);
	glVertex3f(3.09, -11.28, 0);
	glVertex3f(2.99, -11.20, 0);
	glVertex3f(2.92, -11.13, 0);
	glVertex3f(2.85, -11.07, 0);
	glVertex3f(2.81, -11.03, 0);
	glVertex3f(2.74, -10.96, 0);
	glVertex3f(2.67, -10.89, 0);
	glVertex3f(2.60, -10.82, 0);
	glVertex3f(2.53, -10.75, 0);
	glVertex3f(2.46, -10.68, 0);
	glVertex3f(2.39, -10.58, 0);
	glVertex3f(2.32, -10.50, 0);
	glVertex3f(2.25, -10.39, 0);
	glVertex3f(2.18, -10.28, 0);
	glVertex3f(2.14, -10.15, 0);
	glVertex3f(2.07, -10.05, 0);
	glVertex3f(2.02, -9.91, 0);
	glVertex3f(1.99, -9.80, 0);
	glVertex3f(1.95, -9.66, 0);
	glVertex3f(1.9, -9.51, 0);
	glVertex3f(1.86, -9.41, 0);
	glVertex3f(1.83, -9.27, 0);
	glVertex3f(1.8, -9.17, 0);
	glVertex3f(1.78, -9.02, 0);
	glVertex3f(1.75, -8.82, 0);
	glVertex3f(1.75, -8.78, 0);
	glVertex3f(1.72, -8.64, 0);
	glVertex3f(1.7, -8.53, 0);
	glVertex3f(1.67, -8.39, 0);
	glVertex3f(1.64, -8.28, 0);
	glVertex3f(1.6, -8.14, 0);
	glVertex3f(1.58, -8.04, 0);
	glVertex3f(1.55, -7.93, 0);
	glVertex3f(1.50, -7.79, 0);
	glVertex3f(1.47, -7.65, 0);
	glVertex3f(1.45, -7.54, 0);
	glVertex3f(1.46, -7.46, 0);//fin linea
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.4);
	glBegin(GL_LINE_LOOP);//Deklineado rostro
	glVertex3f(1.76, -6.33, 0);
	glVertex3f(8.24, -6.33, 0);
	glVertex3f(8.90, -7.86, 0);
	glVertex3f(6.69, -11.49, 0);
	glVertex3f(6.69, -11.49, 0);
	glVertex3f(6.69, -11.49, 0);
	glVertex3f(6.49, -11.49, 0);//lineas
	glVertex3f(6.41, -11.56, 0);
	glVertex3f(6.34, -11.62, 0);
	glVertex3f(6.28, -11.64, 0);
	glVertex3f(6.20, -11.71, 0);
	glVertex3f(6.11, -11.77, 0);
	glVertex3f(6.04, -11.82, 0);
	glVertex3f(5.99, -11.85, 0);
	glVertex3f(5.92, -11.9, 0);
	glVertex3f(5.80, -11.96, 0);
	glVertex3f(5.74, -12.0, 0);
	glVertex3f(5.64, -12.06, 0);
	glVertex3f(5.57, -12.10, 0);
	glVertex3f(5.49, -12.14, 0);
	glVertex3f(5.44, -12.17, 0);
	glVertex3f(5.38, -12.21, 0);
	glVertex3f(5.31, -12.24, 0);
	glVertex3f(5.24, -12.28, 0);
	glVertex3f(5.19, -12.31, 0);
	glVertex3f(5.14, -12.34, 0);
	glVertex3f(5.05, -12.35, 0);
	glVertex3f(4.97, -12.36, 0);
	glVertex3f(4.86, -12.36, 0);
	glVertex3f(4.76, -12.35, 0);
	glVertex3f(4.73, -12.34, 0);
	glVertex3f(4.71, -12.31, 0);
	glVertex3f(4.66, -12.28, 0);
	glVertex3f(4.49, -12.24, 0);
	glVertex3f(4.42, -12.21, 0);
	glVertex3f(4.36, -12.17, 0);
	glVertex3f(4.31, -12.14, 0);
	glVertex3f(4.23, -12.10, 0);
	glVertex3f(4.16, -12.06, 0);
	glVertex3f(4.06, -12.0, 0);
	glVertex3f(4.0, -11.96, 0);
	glVertex3f(3.88, -11.90, 0);
	glVertex3f(3.81, -11.85, 0);
	glVertex3f(3.76, -11.82, 0);
	glVertex3f(3.69, -11.77, 0);
	glVertex3f(3.60, -11.71, 0);
	glVertex3f(3.52, -11.64, 0);
	glVertex3f(3.46, -11.62, 0);
	glVertex3f(3.39, -11.56, 0);
	glVertex3f(3.31, -11.49, 0);
	glVertex3f(3.26, -11.42, 0);
	glVertex3f(3.17, -11.37, 0);
	glVertex3f(3.09, -11.28, 0);
	glVertex3f(2.99, -11.20, 0);
	glVertex3f(2.92, -11.13, 0);
	glVertex3f(2.85, -11.07, 0);
	glVertex3f(2.81, -11.03, 0);
	glVertex3f(2.74, -10.96, 0);
	glVertex3f(2.67, -10.89, 0);
	glVertex3f(2.60, -10.82, 0);
	glVertex3f(2.53, -10.75, 0);
	glVertex3f(2.46, -10.68, 0);
	glVertex3f(2.39, -10.58, 0);
	glVertex3f(2.32, -10.50, 0);
	glVertex3f(2.25, -10.39, 0);
	glVertex3f(2.18, -10.28, 0);
	glVertex3f(2.14, -10.15, 0);
	glVertex3f(2.07, -10.05, 0);
	glVertex3f(2.02, -9.91, 0);
	glVertex3f(1.99, -9.80, 0);
	glVertex3f(1.95, -9.66, 0);
	glVertex3f(1.9, -9.51, 0);
	glVertex3f(1.86, -9.41, 0);
	glVertex3f(1.83, -9.27, 0);
	glVertex3f(1.8, -9.17, 0);
	glVertex3f(1.78, -9.02, 0);
	glVertex3f(1.75, -8.82, 0);
	glVertex3f(1.75, -8.78, 0);
	glVertex3f(1.72, -8.64, 0);
	glVertex3f(1.7, -8.53, 0);
	glVertex3f(1.67, -8.39, 0);
	glVertex3f(1.64, -8.28, 0);
	glVertex3f(1.6, -8.14, 0);
	glVertex3f(1.58, -8.04, 0);
	glVertex3f(1.55, -7.93, 0);
	glVertex3f(1.50, -7.79, 0);
	glVertex3f(1.47, -7.65, 0);
	glVertex3f(1.45, -7.54, 0);
	glVertex3f(1.46, -7.46, 0);//fin linea
	glEnd();

	//sombras:
	glColor3f(0.96f, 0.79f, 0.654f);

	glBegin(GL_POLYGON);
	glVertex3f(1.43, -7.46, 0);
	glVertex3f(1.76, -6.33, 0);
	glVertex3f(2.05, -7.40, 0);
	glVertex3f(1.97, -7.50, 0);
	glVertex3f(1.93, -7.53, 0);
	glVertex3f(1.88, -7.58, 0);
	glVertex3f(1.83, -7.66, 0);
	glVertex3f(1.79, -7.73, 0);
	glVertex3f(1.76, -7.81, 0);
	glVertex3f(1.74, -7.87, 0);
	glVertex3f(1.69, -7.97, 0);
	glVertex3f(1.68, -8.04, 0);
	glVertex3f(1.66, -8.15, 0);
	glVertex3f(1.65, -8.18, 0);
	glVertex3f(1.64, -8.25, 0);
	glVertex3f(1.60, -8.14, 0);
	glVertex3f(1.58, -8.04, 0);
	glVertex3f(1.55, -7.93, 0);
	glVertex3f(1.50, -7.79, 0);
	glVertex3f(1.47, -7.65, 0);
	glVertex3f(1.45, -7.54, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(6.41, -11.56, 0);
	glVertex3f(6.34, -11.62, 0);
	glVertex3f(6.28, -11.64, 0);
	glVertex3f(6.20, -11.71, 0);
	glVertex3f(6.11, -11.77, 0);
	glVertex3f(6.04, -11.82, 0);
	glVertex3f(5.99, -11.85, 0);
	glVertex3f(5.92, -11.9, 0);
	glVertex3f(5.80, -11.96, 0);
	glVertex3f(5.74, -12.0, 0);
	glVertex3f(5.64, -12.06, 0);
	glVertex3f(5.57, -12.10, 0);
	glVertex3f(5.49, -12.14, 0);
	glVertex3f(5.44, -12.17, 0);
	glVertex3f(5.38, -12.21, 0);
	glVertex3f(5.31, -12.24, 0);
	glVertex3f(5.24, -12.28, 0);
	glVertex3f(5.19, -12.31, 0);
	glVertex3f(5.14, -12.34, 0);
	glVertex3f(6.63, -11.20, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(7.57, -9.49, 0);
	glVertex3f(7.54, -9.35, 0);
	glVertex3f(7.50, -9.28, 0);
	glVertex3f(7.78, -9.15, 0);
	glVertex3f(7.47, -9.06, 0);
	glVertex3f(7.45, -9.99, 0);
	glVertex3f(7.43, -8.81, 0);
	glVertex3f(7.40, -8.8, 0);
	glVertex3f(7.36, -8.79, 0);//ojo izq
	glVertex3f(7.42, -8.70, 0);
	glVertex3f(7.48, -8.63, 0);
	glVertex3f(7.55, -8.55, 0);
	glVertex3f(7.58, -8.50, 0);
	glVertex3f(7.61, -8.40, 0);
	glVertex3f(7.7, -8.21, 0);
	glVertex3f(7.75, -8.07, 0);//Fin Ojo inicio de sombreado negro
	glVertex3f(7.81, -7.79, 0);
	glVertex3f(7.93, -7.72, 0);
	glVertex3f(8.02, -7.51, 0);
	glVertex3f(8.11, -7.29, 0);
	glVertex3f(8.18, -7.11, 0);
	glVertex3f(8.25, -6.89, 0);
	glVertex3f(8.37, -6.72, 0);
	glVertex3f(8.35, -9.29, 0);
	glEnd();
	
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(4.90, -6.49, 0);
	glVertex3f(6.41, -8.40, 0);
	glVertex3f(6.24, -8.56, 0);
	glVertex3f(4.93, -9.42, 0);//Punta del casco
	glVertex3f(3.66, -8.53, 0);
	glVertex3f(3.47, -8.39, 0);
	glEnd();
	
	glBegin(GL_POLYGON);//NARIZ
	glVertex3f(4.92, -9.52, 0);
	glVertex3f(4.97, -9.53, 0);
	glVertex3f(5.01, -9.57, 0);
	glVertex3f(5.06, -9.63, 0);
	glVertex3f(5.09, -9.67, 0);
	glVertex3f(5.09, -9.7, 0);
	glVertex3f(5.12, -9.77, 0);
	glVertex3f(5.12, -9.84, 0);
	glVertex3f(5.09, -9.91, 0);
	glVertex3f(5.07, -9.96, 0);
	glVertex3f(5.04, -10.01, 0);
	glVertex3f(5.03, -10.05, 0);
	glVertex3f(4.99, -10.12, 0);
	glVertex3f(4.97, -10.12, 0);
	glVertex3f(4.90, -10.12, 0);
	glVertex3f(4.9, -10.05, 0);
	glVertex3f(4.83, -10.04, 0);
	glVertex3f(4.79, -9.98, 0);
	glVertex3f(4.74, -9.87, 0);
	glVertex3f(4.72, -9.84, 0);
	glVertex3f(4.71, -9.77, 0);
	glVertex3f(4.76, -9.7, 0);
	glVertex3f(4.8, -9.63, 0);
	glVertex3f(4.84, -9.59, 0);
	glVertex3f(4.88, -9.52, 0);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.91, -10.2, 0);
	glVertex3f(4.92, -10.37, 0);
	glVertex3f(4.96, -10.40, 0);
	glVertex3f(4.96, -10.26, 0);
	glEnd();

	
	glBegin(GL_POLYGON);//boca parte 1
	glVertex3f(4.45, -11.07, 0);
	glVertex3f(4.48, -11.04, 0);
	glVertex3f(4.52, -10.99, 0);
	glVertex3f(4.56, -10.97, 0);
	glVertex3f(4.62, -10.94, 0);
	glVertex3f(4.66, -10.94, 0);
	glVertex3f(5.12, -10.94, 0);
	glVertex3f(5.19, -10.95, 0);
	glVertex3f(5.24, -10.98, 0);
	glVertex3f(5.36, -11.01, 0);
	glVertex3f(5.43, -11.04, 0);
	glVertex3f(5.44, -11.07, 0);
	glEnd();
	
	glBegin(GL_POLYGON);//boca parte 2
	glVertex3f(4.88, -11.25, 0);
	glVertex3f(4.97, -11.25, 0);
	glVertex3f(5.04, -11.28, 0);
	glVertex3f(5.08, -11.29, 0);
	glVertex3f(5.08, -11.35, 0);
	glVertex3f(5.04, -11.37, 0);
	glVertex3f(4.97, -11.39, 0);
	glVertex3f(4.88, -11.39, 0);
	glVertex3f(4.83, -11.37, 0);
	glVertex3f(4.8, -11.35, 0);
	glVertex3f(4.8, -11.29, 0);
	glVertex3f(4.83, -11.27, 0);
	glEnd();
	// nariz y boca linea
	glColor3f(0.4f, 0.333f, 0.2f);
	glLineWidth(0.8);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.27, -11.16, 0);
	glVertex3f(4.3, -11.14, 0);
	glVertex3f(4.37, -11.1, 0);
	glVertex3f(4.45, -11.07, 0);
	glVertex3f(4.52, -11.05, 0);
	glVertex3f(4.59, -11.04, 0);
	glVertex3f(5.29, -11.04, 0);
	glVertex3f(5.33, -11.05, 0);
	glVertex3f(5.43, -11.08, 0);
	glVertex3f(5.47, -11.08, 0);
	glVertex3f(5.54, -11.11, 0);
	glVertex3f(5.56, -11.16, 0);
	glEnd();

	glLineWidth(1);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.84, -9.69, 0);
	glVertex3f(4.89, -9.77, 0);
	glVertex3f(4.91, -9.80, 0);
	glVertex3f(4.91, -10.09, 0);
	glEnd();

	//Ojos
	glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_POLYGON);//SOMBRA Megaman
	glVertex3f(1.55, -6.69, 0);
	glVertex3f(1.66, -6.81, 0);
	glVertex3f(1.72, -6.99, 0);
	glVertex3f(1.76, -7.15, 0);
	glVertex3f(1.82, -7.3, 0);
	glVertex3f(1.89, -7.48, 0);
	glVertex3f(1.94, -7.62, 0);
	glVertex3f(2.01, -7.77, 0);
	glVertex3f(2.05, -7.88, 0);
	glVertex3f(2.17, -8.08, 0);
	glVertex3f(3.73, -8.67, 0);
	glVertex3f(3.74, -7.26, 0);
	glVertex3f(1.69, -6.31, 0);
	glEnd();

	glBegin(GL_POLYGON);//sombra ZERO
	glVertex3f(7.99, -5.99, 0);
	glVertex3f(8.48, -6.49, 0);
	glVertex3f(8.26, -6.91, 0);
	glVertex3f(8.18, -7.06, 0);
	glVertex3f(8.09, -7.03, 0);
	glVertex3f(8.02, -7.51, 0);
	glVertex3f(7.93, -7.73, 0);
	glVertex3f(7.79, -8.05, 0);
	glVertex3f(6.19, -8.68, 0);
	glVertex3f(6.19, -7.40, 0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);//BLANCO DE LOS OJOS
	glBegin(GL_POLYGON);//OJO Megaman
	glVertex3f(2.0, -6.42, 0);
	glVertex3f(1.98, -6.6, 0);
	glVertex3f(1.98, -6.74, 0);
	glVertex3f(1.99, -6.91, 0);
	glVertex3f(2.01, -7.09, 0);
	glVertex3f(2.04, -7.23, 0);
	glVertex3f(2.06, -7.49, 0);
	glVertex3f(2.1, -7.64, 0);
	glVertex3f(2.12, -7.83, 0);
	glVertex3f(2.17, -8.04, 0);
	glVertex3f(2.2, -8.18, 0);
	glVertex3f(2.23, -8.33, 0);
	glVertex3f(2.25, -8.4, 0);
	glVertex3f(2.28, -8.5, 0);//linea ojo
	glVertex3f(2.36, -8.59, 0);
	glVertex3f(2.36, -8.59, 0);
	glVertex3f(2.47, -8.67, 0);
	glVertex3f(2.54, -8.72, 0);
	glVertex3f(2.68, -8.81, 0);
	glVertex3f(2.82, -8.87, 0);
	glVertex3f(2.97, -8.93, 0);
	glVertex3f(3.10, -8.97, 0);
	glVertex3f(3.25, -9, 0);
	glVertex3f(3.39, -9.05, 0);//fin linea
	glVertex3f(3.57, -9.02, 0);
	glVertex3f(3.6, -9.02, 0);
	glVertex3f(3.67, -8.94, 0);
	glVertex3f(3.7, -8.85, 0);
	glVertex3f(3.7, -8.78, 0);
	glVertex3f(3.7, -8.7, 0);
	glVertex3f(3.69, -8.6, 0);
	glVertex3f(3.66, -8.52, 0);
	glVertex3f(3.64, -8.43, 0);
	glVertex3f(3.63, -8.36, 0);
	glVertex3f(3.63, -8.32, 0);
	glVertex3f(3.59, -8.21, 0);
	glVertex3f(3.42, -7.26, 0);
	glVertex3f(2.49, -6.41, 0);
	glEnd();

	glColor3f(0.75f, 0.823f, 0.827f);
	glBegin(GL_POLYGON);//OJO megaman sombra
	glVertex3f(2.0, -6.42, 0);
	glVertex3f(1.98, -6.6, 0);
	glVertex3f(1.98, -6.74, 0);
	glVertex3f(1.99, -6.91, 0);
	glVertex3f(2.01, -7.09, 0);
	glVertex3f(2.04, -7.23, 0);
	glVertex3f(2.06, -7.49, 0);
	glVertex3f(3.69, -8.6, 0);
	glVertex3f(3.66, -8.52, 0);
	glVertex3f(3.64, -8.43, 0);
	glVertex3f(3.63, -8.36, 0);
	glVertex3f(3.63, -8.32, 0);
	glVertex3f(3.59, -8.21, 0);
	glVertex3f(3.42, -7.26, 0);
	glVertex3f(2.49, -6.41, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//LINEA DEL OJO
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(2.28, -8.5, 0);
	glVertex3f(2.36, -8.59, 0);
	glVertex3f(2.36, -8.59, 0);
	glVertex3f(2.47, -8.67, 0);
	glVertex3f(2.54, -8.72, 0);
	glVertex3f(2.68, -8.81, 0);
	glVertex3f(2.82, -8.87, 0);
	glVertex3f(2.97, -8.93, 0);
	glVertex3f(3.10, -8.97, 0);
	glVertex3f(3.25, -9, 0);
	glVertex3f(3.39, -9.05, 0);
	glEnd();

	glColor3f(1.0f, 1.0f, 1.0f);//BLANCO DE LOS OJOS
	glBegin(GL_POLYGON);//OJO ZERO
	glVertex3f(7.93, -6.38, 0);//**
	glVertex3f(7.99, -6.66, 0);
	glVertex3f(7.92, -6.71, 0);
	glVertex3f(7.93, -6.89, 0);
	glVertex3f(7.93, -6.99, 0);
	glVertex3f(7.92, -7.09, 0);
	glVertex3f(7.90, -7.20, 0);//**
	glVertex3f(7.89, -7.30, 0);
	glVertex3f(7.88, -7.41, 0);
	glVertex3f(7.87, -7.48, 0);
	glVertex3f(7.84, -7.62, 0);
	glVertex3f(7.80, -7.76, 0);
	glVertex3f(7.79, -7.84, 0);
	glVertex3f(7.76, -7.97, 0);
	glVertex3f(7.76, -8.05, 0);
	glVertex3f(7.68, -8.2, 0);
	glVertex3f(7.64, -8.33, 0);
	glVertex3f(7.58, -8.44, 0);//linea
	glVertex3f(7.54, -8.51, 0);
	glVertex3f(7.47, -8.63, 0);
	glVertex3f(7.37, -8.69, 0);
	glVertex3f(7.19, -8.8, 0);
	glVertex3f(6.98, -8.9, 0);
	glVertex3f(6.8, -8.96, 0);
	glVertex3f(6.63, -9.02, 0);
	glVertex3f(6.45, -9.06, 0);//fin linea
	glVertex3f(6.38, -9.04, 0);
	glVertex3f(6.32, -8.99, 0);
	glVertex3f(6.27, -8.92, 0);
	glVertex3f(6.23, -8.85, 0);
	glVertex3f(6.2, -8.79, 0);
	glVertex3f(6.2, -8.86, 0);
	glVertex3f(6.23, -8.6, 0);
	glVertex3f(6.25, -8.53, 0);//**
	glVertex3f(6.27, -8.43, 0);
	glVertex3f(6.28, -8.36, 0);
	glVertex3f(6.29, -8.32, 0);
	glVertex3f(6.32, -8.18, 0);
	glVertex3f(6.50, -7.29, 0);
	glVertex3f(6.99, -6.49, 0);//**
	glEnd();
	
	glColor3f(0.75f, 0.823f, 0.827f);
	glBegin(GL_POLYGON);//OJO ZERO sombra
	glVertex3f(7.93, -6.38, 0);//**
	glVertex3f(7.99, -6.66, 0);
	glVertex3f(7.92, -6.71, 0);
	glVertex3f(7.93, -6.89, 0);
	glVertex3f(7.93, -6.99, 0);
	glVertex3f(7.92, -7.09, 0);
	glVertex3f(7.90, -7.20, 0);//**
	glVertex3f(6.25, -8.53, 0);//**
	glVertex3f(6.27, -8.43, 0);
	glVertex3f(6.28, -8.36, 0);
	glVertex3f(6.29, -8.32, 0);
	glVertex3f(6.32, -8.18, 0);
	glVertex3f(6.50, -7.29, 0);
	glVertex3f(6.99, -6.49, 0);//**
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//LINEA DEL OJO
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.58, -8.44, 0);//linea
	glVertex3f(7.54, -8.51, 0);
	glVertex3f(7.47, -8.63, 0);
	glVertex3f(7.37, -8.69, 0);
	glVertex3f(7.19, -8.8, 0);
	glVertex3f(6.98, -8.9, 0);
	glVertex3f(6.8, -8.96, 0);
	glVertex3f(6.63, -9.02, 0);
	glVertex3f(6.45, -9.06, 0);//fin linea
	glEnd();

	glBegin(GL_TRIANGLE_FAN);//Ojo zero (azul)
	glColor3f(0.0f, 0.137f, 0.39f);
	glVertex3f(6.73, -7.99, 0);
	glColor3f(0.0f, 0.86f, 0.96f);
	glVertex3f(7.27, -7, 0);//DELINEADO  INICIO ***
	glVertex3f(7.27, -7.26, 0);
	glVertex3f(7.26, -7.47, 0);
	glVertex3f(7.26, -7.58, 0);
	glVertex3f(7.23, -7.76, 0);
	glVertex3f(7.21, -7.87, 0);
	glVertex3f(7.19, -7.97, 0);
	glVertex3f(7.15, -8.08, 0);
	glVertex3f(7.12, -8.16, 0);//DELINEADO **
	glVertex3f(7.09, -8.26, 0);//DELINEADO *
	glVertex3f(7.04, -8.36, 0);
	glVertex3f(6.95, -8.50, 0);
	glVertex3f(6.91, -8.55, 0);
	glVertex3f(6.84, -8.63, 0);
	glVertex3f(6.77, -8.68, 0);
	glVertex3f(6.70, -8.71, 0);
	glVertex3f(6.64, -8.71, 0);
	glVertex3f(6.59, -8.67, 0);
	glVertex3f(6.55, -8.64, 0);
	glVertex3f(6.49, -8.57, 0);
	glVertex3f(6.44, -8.50, 0);//DELINEADO *
	glVertex3f(6.41, -8.39, 0);//DELINEADO **
	glVertex3f(6.39, -8.32, 0);
	glVertex3f(6.38, -8.2, 0);
	glVertex3f(6.37, -8.11, 0);
	glVertex3f(6.35, -8, 0);//DELINEADO FIN **
	glVertex3f(6.39, -7.86, 0);
	glVertex3f(6.56, -7.64, 0);
	glVertex3f(6.99, -7.26, 0);
	glVertex3f(7.27, -7, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.03f, 0.27f, 0.38f);
	glVertex3f(6.35, -8, 0);
	glVertex3f(6.37, -8.15, 0);
	glVertex3f(6.37, -8.22, 0);
	glVertex3f(6.40, -8.29, 0);
	glVertex3f(6.56, -8.18, 0);
	glVertex3f(6.6, -8.19, 0);
	glVertex3f(6.63, -8.26, 0);
	glVertex3f(6.65, -8.29, 0);
	glVertex3f(6.67, -8.33, 0);
	glVertex3f(6.7, -8.35, 0);
	glVertex3f(6.74, -8.36, 0);
	glVertex3f(6.78, -8.32, 0);
	glVertex3f(6.81, -8.29, 0);
	glVertex3f(6.83, -8.25, 0);
	glVertex3f(6.85, -8.22, 0);
	glVertex3f(6.88, -8.15, 0);
	glVertex3f(6.89, -8.08, 0);
	glVertex3f(6.9, -8.01, 0);
	glVertex3f(6.91, -7.94, 0);
	glVertex3f(6.94, -7.83, 0);
	glVertex3f(7.24, -7.55, 0);
	glVertex3f(7.26, -7.48, 0);
	glVertex3f(7.27, -7.36, 0);
	glVertex3f(7.26, -7.25, 0);
	glVertex3f(7.23, -7.16, 0);
	glEnd();

	glColor3f(0.06f, 0.98f, 0.965f);
	glBegin(GL_POLYGON);//ILUMINACION DE OJO DE ZERO (AZUL)
	glVertex3f(6.53, -8.61, 0);
	glVertex3f(6.56, -8.55, 0);
	glVertex3f(6.6, -8.53, 0);
	glVertex3f(6.63, -8.5, 0);
	glVertex3f(6.67, -8.47, 0);
	glVertex3f(6.7, -8.46, 0);
	glVertex3f(6.75, -8.46, 0);
	glVertex3f(6.78, -8.47, 0);
	glVertex3f(6.81, -8.74, 0);
	glVertex3f(6.83, -8.51, 0);
	glVertex3f(6.86, -8.53, 0);
	glVertex3f(6.91, -8.55, 0);
	glVertex3f(6.84, -8.63, 0);
	glVertex3f(6.77, -8.68, 0);
	glVertex3f(6.70, -8.71, 0);
	glVertex3f(6.64, -8.71, 0);
	glVertex3f(6.59, -8.67, 0);
	glVertex3f(6.55, -8.64, 0);
	glEnd();


	glColor3f(0.0f, 0.0f, 0.0f);//LINEA DEL OJO zero
	glLineWidth(1.75);
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.27, -7, 0);//DELINEADO  INICIO ***
	glVertex3f(7.27, -7.26, 0);
	glVertex3f(7.26, -7.47, 0);
	glVertex3f(7.26, -7.58, 0);
	glVertex3f(7.23, -7.76, 0);
	glVertex3f(7.21, -7.87, 0);
	glVertex3f(7.19, -7.97, 0);
	glVertex3f(7.15, -8.08, 0);
	glVertex3f(7.12, -8.16, 0);
	glEnd();

	glLineWidth(1.4);	
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.12, -8.16, 0);//DELINEADO **
	glVertex3f(7.09, -8.26, 0);//DELINEADO *
	glVertex3f(7.04, -8.36, 0);
	glVertex3f(6.95, -8.50, 0);
	glVertex3f(6.91, -8.55, 0);
	glVertex3f(6.84, -8.63, 0);
	glVertex3f(6.77, -8.68, 0);
	glVertex3f(6.70, -8.71, 0);
	glVertex3f(6.64, -8.71, 0);
	glVertex3f(6.59, -8.67, 0);
	glVertex3f(6.55, -8.64, 0);
	glVertex3f(6.49, -8.57, 0);
	glVertex3f(6.44, -8.50, 0);
	glVertex3f(6.41, -8.39, 0);//DELINEADO *
	glEnd();

	glLineWidth(1.75);
	glBegin(GL_LINE_STRIP);
	glVertex3f(6.41, -8.39, 0);//DELINEADO **
	glVertex3f(6.39, -8.32, 0);
	glVertex3f(6.38, -8.2, 0);
	glVertex3f(6.37, -8.11, 0);
	glVertex3f(6.35, -8, 0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);//OJO PARTE NEGRA DE ZERO
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(6.73, -7.97, 0);
	glColor3f(0.15f, 0.15f, 0.15f);
	glVertex3f(6.73, -8.25, 0);
	glVertex3f(6.76, -8.21, 0);
	glVertex3f(6.78, -8.14, 0);
	glVertex3f(6.79, -8.07, 0);
	glVertex3f(6.81, -8, 0);
	glVertex3f(6.8, -7.89, 0);
	glVertex3f(6.80, -7.79, 0);
	glVertex3f(6.78, -7.68, 0);
	glVertex3f(6.66, -7.67, 0);
	glVertex3f(6.64, -7.87, 0);
	glVertex3f(6.65, -7.97, 0);
	glVertex3f(6.66, -8.12, 0);
	glVertex3f(6.67, -8.18, 0);
	glVertex3f(6.71, -8.22, 0);
	glVertex3f(6.73, -8.25, 0);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);//Ojo MEGAMAN (VERDE)
	glColor3f(0.07f, 0.451f, 0.38f);
	glVertex3f(3.19, -8.04, 0);
	glColor3f(0.498f, 1.0f, 0.8f);
	glVertex3f(3.56, -7.99, 0);//**
	glVertex3f(3.56, -8.08, 0);
	glVertex3f(3.56, -8.15, 0);
	glVertex3f(3.55, -8.26, 0);
	glVertex3f(3.55, -8.36, 0);
	glVertex3f(3.52, -8.4, 0);
	glVertex3f(3.49, -8.49, 0);//**
	glVertex3f(3.48, -8.50, 0);//*
	glVertex3f(3.42, -8.59, 0);
	glVertex3f(3.37, -8.64, 0);
	glVertex3f(3.34, -8.68, 0);
	glVertex3f(3.28, -8.72, 0);
	glVertex3f(3.21, -8.71, 0);
	glVertex3f(3.17, -8.69, 0);
	glVertex3f(3.13, -8.67, 0);
	glVertex3f(3.1, -8.64, 0);
	glVertex3f(3.02, -8.57, 0);
	glVertex3f(2.96, -8.49, 0);
	glVertex3f(2.91, -8.39, 0);//*
	glVertex3f(2.89, -8.34, 0);//**
	glVertex3f(2.85, -8.29, 0);
	glVertex3f(2.82, -8.2, 0);
	glVertex3f(2.78, -8.11, 0);
	glVertex3f(2.75, -8.04, 0);
	glVertex3f(2.73, -7.93, 0);
	glVertex3f(2.71, -7.83, 0);//**
	glVertex3f(2.7, -7.74, 0);//***
	glVertex3f(2.68, -7.65, 0);
	glVertex3f(2.67, -7.58, 0);
	glVertex3f(2.65, -7.44, 0);
	glVertex3f(2.64, -7.33, 0);
	glVertex3f(2.66, -7.19, 0);//***
	glVertex3f(2.82, -7.07, 0);
	glVertex3f(3.49, -7.35, 0);
	glVertex3f(3.67, -7.76, 0);
	glVertex3f(3.56, -7.99, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.05f, 0.52f, 0.49f);
	glVertex3f(2.65, -7.19, 0);
	glVertex3f(2.65, -7.29, 0);
	glVertex3f(2.65, -7.37, 0);
	glVertex3f(2.66, -7.48, 0);
	glVertex3f(2.68, -7.56, 0);
	glVertex3f(3.02, -7.87, 0);
	glVertex3f(3.03, -8.06, 0);
	glVertex3f(3.04, -8.15, 0);
	glVertex3f(3.07, -8.26, 0);
	glVertex3f(3.1, -8.32, 0);
	glVertex3f(3.13, -8.36, 0);
	glVertex3f(3.19, -8.39, 0);
	glVertex3f(3.26, -8.40, 0);
	glVertex3f(3.28, -8.36, 0);
	glVertex3f(3.32, -8.33, 0);
	glVertex3f(3.34, -8.29, 0);
	glVertex3f(3.36, -8.18, 0);
	glVertex3f(3.53, -8.33, 0);
	glVertex3f(3.54, -8.29, 0);
	glVertex3f(3.55, -8.18, 0);
	glVertex3f(3.59, -7.76, 0);
	glEnd();

	glColor3f(0.77f, 1.0f, 0.79f);
	glBegin(GL_POLYGON);//ILUMINACION OJO MEGAMAN VERDE
	glVertex3f(3.06, -8.57, 0);
	glVertex3f(3.08, -8.53, 0);
	glVertex3f(3.1, -8.5, 0);
	glVertex3f(3.14, -8.47, 0);
	glVertex3f(3.19, -8.46, 0);
	glVertex3f(3.25, -8.44, 0);
	glVertex3f(3.29, -8.47, 0);
	glVertex3f(3.32, -8.5, 0);
	glVertex3f(3.34, -8.54, 0);
	glVertex3f(3.37, -8.57, 0);
	glVertex3f(3.40, -8.61, 0);
	glVertex3f(3.37, -8.64, 0);
	glVertex3f(3.34, -8.68, 0);
	glVertex3f(3.28, -8.72, 0);
	glVertex3f(3.21, -8.71, 0);
	glVertex3f(3.17, -8.69, 0);
	glVertex3f(3.13, -8.67, 0);
	glVertex3f(3.1, -8.64, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//LINEA DEL OJO megamam
	glLineWidth(1.75);
	glBegin(GL_LINE_STRIP);
	glVertex3f(2.7, -7.74, 0);//***
	glVertex3f(2.68, -7.65, 0);
	glVertex3f(2.67, -7.58, 0);
	glVertex3f(2.65, -7.44, 0);
	glVertex3f(2.64, -7.33, 0);
	glVertex3f(2.66, -7.19, 0);
	glEnd();

	glLineWidth(1.4);
	glBegin(GL_LINE_STRIP);
	glVertex3f(3.56, -7.99, 0);//**
	glVertex3f(3.56, -8.08, 0);
	glVertex3f(3.56, -8.15, 0);
	glVertex3f(3.55, -8.26, 0);
	glVertex3f(3.55, -8.36, 0);
	glVertex3f(3.52, -8.4, 0);
	glVertex3f(3.49, -8.49, 0);//**
	glVertex3f(3.48, -8.50, 0);//*
	glVertex3f(3.42, -8.59, 0);
	glVertex3f(3.37, -8.64, 0);
	glVertex3f(3.34, -8.68, 0);
	glVertex3f(3.28, -8.72, 0);
	glVertex3f(3.21, -8.71, 0);
	glVertex3f(3.17, -8.69, 0);
	glVertex3f(3.13, -8.67, 0);
	glVertex3f(3.1, -8.64, 0);
	glVertex3f(3.02, -8.57, 0);
	glVertex3f(2.96, -8.49, 0);
	glVertex3f(2.91, -8.39, 0);//*
	glVertex3f(2.89, -8.34, 0);//**
	glVertex3f(2.85, -8.29, 0);
	glVertex3f(2.82, -8.2, 0);
	glVertex3f(2.78, -8.11, 0);
	glVertex3f(2.75, -8.04, 0);
	glVertex3f(2.73, -7.93, 0);
	glVertex3f(2.71, -7.83, 0);//**
	glVertex3f(2.7, -7.74, 0);//***
	glEnd();

	glBegin(GL_TRIANGLE_FAN);//OJO PARTE NEGRA DE MEGAMAN
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(6.73 - X, -7.97, 0);
	glColor3f(0.15f, 0.15f, 0.15f);
	glVertex3f(6.73 - X, -8.25, 0);
	glVertex3f(6.76 - X, -8.21, 0);
	glVertex3f(6.78 - X, -8.14, 0);
	glVertex3f(6.79 - X, -8.07, 0);
	glVertex3f(6.81 - X, -8, 0);
	glVertex3f(6.8 - X, -7.89, 0);
	glVertex3f(6.80 - X, -7.79, 0);
	glVertex3f(6.78 - X, -7.68, 0);
	glVertex3f(6.66 - X, -7.67, 0);
	glVertex3f(6.64 - X, -7.87, 0);
	glVertex3f(6.65 - X, -7.97, 0);
	glVertex3f(6.66 - X, -8.12, 0);
	glVertex3f(6.67 - X, -8.18, 0);
	glVertex3f(6.71 - X, -8.22, 0);
	glVertex3f(6.73 - X, -8.25, 0);
	glEnd();
	
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);//ILUMINACION EN BLANCO OJO MEGAMAN
	glVertex3f(2.78, -8.25, 0);
	glVertex3f(2.86, -8.23, 0);
	glVertex3f(2.93, -8.26, 0);
	glVertex3f(3, -8.3, 0);
	glVertex3f(3.03, -8.34, 0);
	glVertex3f(3.05, -8.36, 0);
	glVertex3f(3, -8.40, 0);
	glVertex3f(2.96, -8.41, 0);
	glVertex3f(2.89, -8.43, 0);
	glVertex3f(2.85, -8.41, 0);
	glVertex3f(2.74, -8.25, 0);
	glEnd();

	glBegin(GL_POLYGON);//ILUMINACION EN BLANCO OJO ZERO
	glVertex3f(2.78 + X, -8.25, 0);
	glVertex3f(2.86 + X, -8.23, 0);
	glVertex3f(2.93 + X, -8.26, 0);
	glVertex3f(3 + X, -8.3, 0);
	glVertex3f(3.03 + X, -8.34, 0);
	glVertex3f(3.05 + X, -8.36, 0);
	glVertex3f(3 + X, -8.40, 0);
	glVertex3f(2.96 + X, -8.41, 0);
	glVertex3f(2.89 + X, -8.43, 0);
	glVertex3f(2.85 + X, -8.41, 0);
	glVertex3f(2.74 + X, -8.44, 0);
	glVertex3f(2.75 + X, -8.34, 0);
	glVertex3f(2.76 + X, -8.26, 0);
	glEnd();


//------- MEGAMAN -------//
	// CASCO 
	glColor3f(0.1f, 0.152f, 0.232f);//PARTE TRACERA DERECHA
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -9.51, 0);
	glVertex3f(0.11, -9.61, 0);
	glVertex3f(0.21, -9.71, 0);
	glVertex3f(0.35, -9.81, 0);
	glVertex3f(0.46, -9.88, 0);
	glVertex3f(0.57, -9.98, 0);
	glVertex3f(0.71, -10.08, 0);
	glVertex3f(0.85, -10.15, 0);
	glVertex3f(0.96, -10.23, 0);
	glVertex3f(1.09, -10.3, 0);
	glVertex3f(1.25, -10.4, 0);
	glVertex3f(1.31, -10.42, 0);
	glVertex3f(0.81, -7.13, 0);
	glVertex3f(0.0, -7.13, 0);
	glEnd();
	glColor3f(0.258f, 0.298f, 0.39f);//
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -7.05, 0);
	glVertex3f(0.0, -8.58, 0);
	glVertex3f(0.7, -8.96, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);//PARTE TRACERA DERECHA DELINEADO
	glLineWidth(2);
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.0, -9.51, 0);
	glVertex3f(0.11, -9.61, 0);
	glVertex3f(0.21, -9.71, 0);
	glVertex3f(0.35, -9.81, 0);
	glVertex3f(0.46, -9.88, 0);
	glVertex3f(0.57, -9.98, 0);
	glVertex3f(0.71, -10.08, 0);
	glVertex3f(0.85, -10.15, 0);
	glVertex3f(0.96, -10.23, 0);
	glVertex3f(1.09, -10.3, 0);
	glVertex3f(1.25, -10.4, 0);
	glVertex3f(1.31, -10.42, 0);
	glVertex3f(0.81, -7.13, 0);
	glVertex3f(0.0, -7.13, 0);
	glEnd();

	glColor3f(0.35f, 0.52f, 0.78f);
	glBegin(GL_TRIANGLE_FAN);
	glVertex3f(4.52, -4.63, 0);
	glVertex3f(4.52, -0.73, 0);//DELINEADO
	glVertex3f(3.38, -0.84, 0);
	glVertex3f(3.28, -0.89, 0);
	glVertex3f(3.17, -0.93, 0);
	glVertex3f(3.06, -0.98, 0);
	glVertex3f(2.96, -1.03, 0);
	glVertex3f(2.83, -1.09, 0);
	glVertex3f(2.75, -1.13, 0);
	glVertex3f(2.64, -1.19, 0);
	glVertex3f(2.56, -1.23, 0);//INICIO BRILLO
	glVertex3f(2.5, -1.28, 0);
	glVertex3f(2.43, -1.32, 0);
	glVertex3f(2.35, -1.38, 0);
	glVertex3f(2.25, -1.43, 0);
	glVertex3f(2.18, -1.48, 0);
	glVertex3f(2.11, -1.54, 0);
	glVertex3f(2.03, -1.58, 0);
	glVertex3f(1.97, -1.63, 0);
	glVertex3f(1.93, -1.66, 0);
	glVertex3f(1.86, -1.73, 0);
	glVertex3f(1.79, -1.78, 0);
	glVertex3f(1.72, -1.83, 0);
	glVertex3f(1.69, -1.87, 0);
	glVertex3f(1.61, -1.94, 0);
	glVertex3f(1.53, -2.01, 0);
	glVertex3f(1.48, -2.07, 0);
	glVertex3f(1.41, -2.13, 0);
	glVertex3f(1.33, -2.2, 0);
	glVertex3f(1.27, -2.26, 0);
	glVertex3f(1.2, -2.33, 0);
	glVertex3f(1.19, -2.36, 0);
	glVertex3f(1.12, -2.43, 0);
	glVertex3f(1.09, -2.48, 0);
	glVertex3f(1.05, -2.54, 0);
	glVertex3f(0.98, -2.61, 0);
	glVertex3f(0.95, -2.65, 0);
	glVertex3f(0.91, -2.72, 0);
	glVertex3f(0.84, -2.79, 0);
	glVertex3f(0.8, -2.86, 0);
	glVertex3f(0.73, -2.94, 0);
	glVertex3f(0.7, -3, 0);
	glVertex3f(0.65, -3.07, 0);
	glVertex3f(0.59, -3.15, 0);
	glVertex3f(0.55, -3.21, 0);
	glVertex3f(0.49, -3.31, 0);
	glVertex3f(0.45, -3.39, 0);
	glVertex3f(0.42, -3.46, 0);
	glVertex3f(0.38, -3.53, 0);
	glVertex3f(0.34, -3.6, 0);
	glVertex3f(0.29, -3.7, 0);
	glVertex3f(0.25, -3.81, 0);
	glVertex3f(0.21, -3.92, 0);
	glVertex3f(0.17, -3.99, 0);
	glVertex3f(0.14, -4.1, 0);
	glVertex3f(0.09, -4.2, 0);
	glVertex3f(0.06, -4.27, 0);
	glVertex3f(0.02, -4.37, 0);
	glVertex3f(0.0, -4.34, 0);//FIN DELINADO
	glVertex3f(0.0, -5.73, 0);//FIN BRILLO (UNA PARTE)
	glVertex3f(1.82, -6.2, 0);
	glVertex3f(2.48, -6.72, 0);
	glVertex3f(3.19, -7.44, 0);
	glVertex3f(3.74, -8.01, 0);
	glVertex3f(4.52, -8.71, 0);
	glEnd();
	
	glColor3f(0.55f, 0.8f, 0.94f);
	glBegin(GL_POLYGON);//1
	glVertex3f(2.56, -1.23, 0);//INICIO BRILLO
	glVertex3f(2.5, -1.28, 0);
	glVertex3f(2.43, -1.32, 0);
	glVertex3f(2.35, -1.38, 0);
	glVertex3f(2.25, -1.43, 0);
	glVertex3f(2.18, -1.48, 0);
	glVertex3f(2.11, -1.54, 0);
	glVertex3f(2.03, -1.58, 0);
	glVertex3f(1.97, -1.63, 0);
	glVertex3f(1.93, -1.66, 0);
	glVertex3f(1.86, -1.73, 0);
	glVertex3f(1.79, -1.78, 0);
	glVertex3f(1.72, -1.83, 0);
	glVertex3f(1.69, -1.87, 0);
	glVertex3f(1.61, -1.94, 0);
	glVertex3f(1.53, -2.01, 0);
	glVertex3f(1.48, -2.07, 0);
	glVertex3f(1.41, -2.13, 0);
	glVertex3f(1.33, -2.2, 0);
	glVertex3f(1.27, -2.26, 0);
	glVertex3f(1.2, -2.33, 0);
	glVertex3f(1.19, -2.36, 0);
	glVertex3f(1.12, -2.43, 0);
	glVertex3f(1.09, -2.48, 0);
	glVertex3f(1.05, -2.54, 0);
	glVertex3f(0.98, -2.61, 0);
	glVertex3f(0.95, -2.65, 0);
	glVertex3f(0.91, -2.72, 0);
	glVertex3f(0.84, -2.79, 0);
	glVertex3f(0.8, -2.86, 0);
	glVertex3f(0.73, -2.94, 0);
	glVertex3f(0.7, -3, 0);
	glVertex3f(0.83, -3.06, 0);
	glVertex3f(0.93, -2.93, 0);
	glVertex3f(1.25, -2.5, 0);
	glVertex3f(1.66, -2.07, 0);
	glVertex3f(2.08, -1.67, 0);
	glVertex3f(2.48, -1.38, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glVertex3f(0.7, -3, 0);
	glVertex3f(0.65, -3.07, 0);
	glVertex3f(0.59, -3.15, 0);
	glVertex3f(0.55, -3.21, 0);
	glVertex3f(0.49, -3.31, 0);
	glVertex3f(0.45, -3.39, 0);
	glVertex3f(0.42, -3.46, 0);
	glVertex3f(0.38, -3.53, 0);
	glVertex3f(0.34, -3.6, 0);
	glVertex3f(0.29, -3.7, 0);
	glVertex3f(0.25, -3.81, 0);
	glVertex3f(0.21, -3.92, 0);
	glVertex3f(0.17, -3.99, 0);
	glVertex3f(0.14, -4.1, 0);
	glVertex3f(0.09, -4.2, 0);
	glVertex3f(0.06, -4.27, 0);
	glVertex3f(0.02, -4.37, 0);
	glVertex3f(0.0, -4.34, 0);
	glVertex3f(0.0, -5.73, 0);
	glVertex3f(0.28, -5.68, 0);
	glVertex3f(0.28, -5.22, 0);
	glVertex3f(0.31, -4.97, 0);
	glVertex3f(0.34, -4.89, 0);
	glVertex3f(0.42, -4.52, 0);
	glVertex3f(0.52, -4.23, 0);
	glVertex3f(0.61, -3.99, 0);
	glVertex3f(0.83, -3.06, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glVertex3f(0.61, -3.99, 0);
	glVertex3f(0.99, -3.49, 0);
	glVertex3f(1.47, -2.93, 0);
	glVertex3f(1.91, -2.51, 0); 
	glVertex3f(2.26, -2.22, 0);
	glVertex3f(2.61, -1.93, 0);
	glVertex3f(2.72, -1.68, 0);
	glVertex3f(2.72, -1.79, 0);
	glVertex3f(2.69, -1.76, 0);
	glVertex3f(2.67, -1.76, 0);
	glVertex3f(2.56, -1.79, 0);
	glVertex3f(2.46, -1.86, 0);
	glVertex3f(2.15, -2, 0);
	glVertex3f(1.81, -2.25, 0);
	glVertex3f(1.51, -2.46, 0);
	glVertex3f(1.15, -2.78, 0);
	glVertex3f(1.02, -2.93, 0);
	glVertex3f(0.91, -3.0, 0);
	glVertex3f(0.83, -3.06, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -0.73, 0);//DELINEADO casco
	glVertex3f(3.38, -0.84, 0);
	glVertex3f(3.28, -0.89, 0);
	glVertex3f(3.17, -0.93, 0);
	glVertex3f(3.06, -0.98, 0);
	glVertex3f(2.96, -1.03, 0);
	glVertex3f(2.83, -1.09, 0);
	glVertex3f(2.75, -1.13, 0);
	glVertex3f(2.64, -1.19, 0);
	glVertex3f(2.56, -1.23, 0);
	glVertex3f(2.5, -1.28, 0);
	glVertex3f(2.43, -1.32, 0);
	glVertex3f(2.35, -1.38, 0);
	glVertex3f(2.25, -1.43, 0);
	glVertex3f(2.18, -1.48, 0);
	glVertex3f(2.11, -1.54, 0);
	glVertex3f(2.03, -1.58, 0);
	glVertex3f(1.97, -1.63, 0);
	glVertex3f(1.93, -1.66, 0);
	glVertex3f(1.86, -1.73, 0);
	glVertex3f(1.79, -1.78, 0);
	glVertex3f(1.72, -1.83, 0);
	glVertex3f(1.69, -1.87, 0);
	glVertex3f(1.61, -1.94, 0);
	glVertex3f(1.53, -2.01, 0);
	glVertex3f(1.48, -2.07, 0);
	glVertex3f(1.41, -2.13, 0);
	glVertex3f(1.33, -2.2, 0);
	glVertex3f(1.27, -2.26, 0);
	glVertex3f(1.2, -2.33, 0);
	glVertex3f(1.19, -2.36, 0);
	glVertex3f(1.12, -2.43, 0);
	glVertex3f(1.09, -2.48, 0);
	glVertex3f(1.05, -2.54, 0);
	glVertex3f(0.98, -2.61, 0);
	glVertex3f(0.95, -2.65, 0);
	glVertex3f(0.91, -2.72, 0);
	glVertex3f(0.84, -2.79, 0);
	glVertex3f(0.8, -2.86, 0);
	glVertex3f(0.73, -2.94, 0);
	glVertex3f(0.7, -3, 0);
	glVertex3f(0.65, -3.07, 0);
	glVertex3f(0.59, -3.15, 0);
	glVertex3f(0.55, -3.21, 0);
	glVertex3f(0.49, -3.31, 0);
	glVertex3f(0.45, -3.39, 0);
	glVertex3f(0.42, -3.46, 0);
	glVertex3f(0.38, -3.53, 0);
	glVertex3f(0.34, -3.6, 0);
	glVertex3f(0.29, -3.7, 0);
	glVertex3f(0.25, -3.81, 0);
	glVertex3f(0.21, -3.92, 0);
	glVertex3f(0.17, -3.99, 0);
	glVertex3f(0.14, -4.1, 0);
	glVertex3f(0.09, -4.2, 0);
	glVertex3f(0.06, -4.27, 0);
	glVertex3f(0.02, -4.37, 0);
	glVertex3f(0.0, -4.34, 0);//FIN DELINADO
	glEnd();
	
	glColor3f(0.823f, 0.925f, 0.99f);
	glBegin(GL_POLYGON);//PARTE DE GRIS TRIANGULAR
	glVertex3f(2.01, -3.44, 0);//DELINEADO NEGRO
	glVertex3f(4.94, -9.42, 0);// DELINEADO
	glVertex3f(1.36, -5.92, 0);
	glVertex3f(1.3, -6, 0);
	glVertex3f(1.23, -6.07, 0);
	glVertex3f(1.16, -6.15, 0);
	glVertex3f(1.11, -6.21, 0);
	glVertex3f(1.03, -6.28, 0);
	glVertex3f(0.98, -6.35, 0);
	glVertex3f(0.93, -6.42, 0);
	glVertex3f(0.86, -6.53, 0);
	glVertex3f(0.79, -6.63, 0);
	glVertex3f(0.74, -6.71, 0);
	glVertex3f(0.67, -6.81, 0);
	glVertex3f(0.63, -6.86, 0);
	glVertex3f(0.59, -6.95, 0);
	glVertex3f(0.52, -7.05, 0);
	glVertex3f(0.49, -7.13, 0);
	glVertex3f(0.45, -7.2, 0);
	glVertex3f(0.42, -7.27, 0);
	glVertex3f(0.38, -7.34, 0);
	glVertex3f(0.35, -7.43, 0);
	glVertex3f(0.33, -7.48, 0);
	glVertex3f(0.0, -6.76, 0);//**
	glVertex3f(0.0, -5.67, 0);//DELINEADO **
	glVertex3f(0.04, -5.6, 0);
	glVertex3f(0.07, -5.52, 0);
	glVertex3f(0.13, -5.43, 0);
	glVertex3f(0.18, -5.32, 0);
	glVertex3f(0.24, -5.24, 0);
	glVertex3f(0.29, -5.15, 0);
	glVertex3f(0.33, -5.08, 0);
	glVertex3f(0.39, -4.99, 0);
	glVertex3f(0.43, -4.93, 0);
	glVertex3f(0.49, -4.85, 0);
	glVertex3f(0.55, -4.76, 0);
	glVertex3f(0.61, -4.69, 0);
	glVertex3f(0.67, -4.62, 0);
	glVertex3f(0.74, -4.52, 0);
	glVertex3f(0.81, -4.44, 0);
	glVertex3f(0.85, -4.4, 0);
	glVertex3f(0.92, -4.33, 0);
	glVertex3f(0.99, -4.25, 0);
	glVertex3f(1.06, -4.18, 0);
	glVertex3f(1.13, -4.11, 0);
	glVertex3f(1.2, -4.04, 0);
	glVertex3f(1.23, -4.01, 0);
	glVertex3f(1.31, -3.95, 0);
	glVertex3f(1.38, -3.88, 0);
	glVertex3f(1.45, -3.82, 0);
	glVertex3f(1.52, -3.76, 0);
	glVertex3f(1.59, -3.71, 0);
	glVertex3f(1.66, -3.66, 0);
	glVertex3f(1.73, -3.62, 0);
	glVertex3f(1.8, -3.56, 0);
	glVertex3f(1.87, -3.52, 0);
	glVertex3f(1.94, -3.46, 0);
	glEnd();
	
	glColor3f(0.59f, 0.81f, 1.0f);
	glBegin(GL_POLYGON);//BRILLO DE LA PARTE DEl triangulo 
	glVertex3f(2.13, -4.09, 0);//1
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(3.1, -7.37, 0);
	glVertex3f(2.86, -7.01, 0);
	glVertex3f(2.7, -6.77, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glVertex3f(0.87, -4.61, 0);
	glVertex3f(1.04, -5.61, 0);
	glVertex3f(1.16, -5.93, 0);
	glVertex3f(0.32, -7.58, 0);
	glVertex3f(0.12, -7.69, 0);
	glVertex3f(0.08, -7.58, 0);
	glVertex3f(0.06, -7.47, 0);
	glVertex3f(0.02, -7.33, 0);
	glVertex3f(0.0, -7.3, 0);
	glVertex3f(0.0, -5.82, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glVertex3f(0.08, -7.58, 0);
	glVertex3f(0.12, -7.69, 0);
	glVertex3f(0.8, -7.48, 0);
	glVertex3f(1.20, -7.61, 0);
	glVertex3f(1.28, -7.99, 0);
	glVertex3f(1.4, -8.47, 0);
	glVertex3f(1.56, -9, 0);
	glVertex3f(1.71, -9.49, 0);
	glVertex3f(1.92, -9.89, 0);
	glVertex3f(2.65, -11.57, 0);
	glVertex3f(2.55, -11.56, 0);
	glVertex3f(1.81, -11.11, 0);
	glVertex3f(1.63, -10.93, 0);
	glVertex3f(1.49, -10.75, 0);
	glVertex3f(1.31, -10.5, 0);
	glVertex3f(1, -10, 0);
	glVertex3f(0.77, -9.5, 0);
	glVertex3f(0.3, -8.29, 0);
	glVertex3f(0.2, -7.99, 0);
	glVertex3f(0.14, -7.78, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);// DELINEADO parte del casco (codigo de arriba)
	glLineWidth(2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(1.92, -9.89, 0);
	glVertex3f(2.65, -11.57, 0);
	glVertex3f(2.55, -11.56, 0);
	glVertex3f(1.81, -11.11, 0);
	glVertex3f(1.63, -10.93, 0);
	glVertex3f(1.49, -10.75, 0);
	glVertex3f(1.31, -10.5, 0);
	glVertex3f(1, -10, 0);
	glVertex3f(0.77, -9.5, 0);
	glVertex3f(0.3, -8.29, 0);
	glVertex3f(0.2, -7.99, 0);
	glVertex3f(0.14, -7.78, 0);
	glVertex3f(0.12, -7.69, 0);
	glVertex3f(0.08, -7.58, 0);
	glVertex3f(0.06, -7.47, 0);
	glVertex3f(0.02, -7.33, 0);
	glVertex3f(0.0, -7.3, 0);
	glEnd();
	glColor3f(0.9f, 0.3f, 0.05f);
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -8.62, 0);
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(4.52, -9.03, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.0, -5.67, 0);//DELINEADO triangulo
	glVertex3f(0.04, -5.6, 0);
	glVertex3f(0.07, -5.52, 0);
	glVertex3f(0.13, -5.43, 0);
	glVertex3f(0.18, -5.32, 0);
	glVertex3f(0.24, -5.24, 0);
	glVertex3f(0.29, -5.15, 0);
	glVertex3f(0.33, -5.08, 0);
	glVertex3f(0.39, -4.99, 0);
	glVertex3f(0.43, -4.93, 0);
	glVertex3f(0.49, -4.85, 0);
	glVertex3f(0.55, -4.76, 0);
	glVertex3f(0.61, -4.69, 0);
	glVertex3f(0.67, -4.62, 0);
	glVertex3f(0.74, -4.52, 0);
	glVertex3f(0.81, -4.44, 0);
	glVertex3f(0.85, -4.4, 0);
	glVertex3f(0.92, -4.33, 0);
	glVertex3f(0.99, -4.25, 0);
	glVertex3f(1.06, -4.18, 0);
	glVertex3f(1.13, -4.11, 0);
	glVertex3f(1.2, -4.04, 0);
	glVertex3f(1.23, -4.01, 0);
	glVertex3f(1.31, -3.95, 0);
	glVertex3f(1.38, -3.88, 0);
	glVertex3f(1.45, -3.82, 0);
	glVertex3f(1.52, -3.76, 0);
	glVertex3f(1.59, -3.71, 0);
	glVertex3f(1.66, -3.66, 0);
	glVertex3f(1.73, -3.62, 0);
	glVertex3f(1.8, -3.56, 0);
	glVertex3f(1.87, -3.52, 0);
	glVertex3f(1.94, -3.46, 0);
	glVertex3f(2.01, -3.44, 0);//DELINEADO NEGRO
	glVertex3f(4.94, -9.42, 0);
	glEnd();

	glColor3f(0.29f, 0.46f, 0.68f);
	glBegin(GL_POLYGON);
	glVertex3f(1.36, -5.92, 0);
	glVertex3f(1.3, -6, 0);
	glVertex3f(1.23, -6.07, 0);
	glVertex3f(1.16, -6.15, 0);
	glVertex3f(1.11, -6.21, 0);
	glVertex3f(1.03, -6.28, 0);
	glVertex3f(0.98, -6.35, 0);
	glVertex3f(0.93, -6.42, 0);
	glVertex3f(0.86, -6.53, 0);
	glVertex3f(0.79, -6.63, 0);
	glVertex3f(0.74, -6.71, 0);
	glVertex3f(0.67, -6.81, 0);
	glVertex3f(0.63, -6.86, 0);
	glVertex3f(0.59, -6.95, 0);
	glVertex3f(0.52, -7.05, 0);
	glVertex3f(0.49, -7.13, 0);
	glVertex3f(0.45, -7.2, 0);
	glVertex3f(0.42, -7.27, 0);
	glVertex3f(0.38, -7.34, 0);
	glVertex3f(0.35, -7.43, 0);
	glVertex3f(0.33, -7.48, 0);
	glVertex3f(0.32, -7.58, 0);
	glVertex3f(1.20, -7.61, 0);
	glVertex3f(1.85, -6.46, 0);
	glEnd();

	// delineado interno del triangulo gris del caSCO
	glColor3f(0.37f, 0.38f, 0.55f);
	glLineWidth(1.0);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(1.36, -5.92, 0);
	glVertex3f(1.3, -6, 0);
	glVertex3f(1.23, -6.07, 0);
	glVertex3f(1.16, -6.15, 0);
	glVertex3f(1.11, -6.21, 0);
	glVertex3f(1.03, -6.28, 0);
	glVertex3f(0.98, -6.35, 0);
	glVertex3f(0.93, -6.42, 0);
	glVertex3f(0.86, -6.53, 0);
	glVertex3f(0.79, -6.63, 0);
	glVertex3f(0.74, -6.71, 0);
	glVertex3f(0.67, -6.81, 0);
	glVertex3f(0.63, -6.86, 0);
	glVertex3f(0.59, -6.95, 0);
	glVertex3f(0.52, -7.05, 0);
	glVertex3f(0.49, -7.13, 0);
	glVertex3f(0.45, -7.2, 0);
	glVertex3f(0.42, -7.27, 0);
	glVertex3f(0.38, -7.34, 0);
	glVertex3f(0.35, -7.43, 0);
	glVertex3f(0.33, -7.48, 0);
	glVertex3f(0.32, -7.58, 0);
	glVertex3f(1.28, -7.61, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.32, -7.58, 0);
	glVertex3f(0.42, -8, 0);
	glVertex3f(0.57, -8.47, 0);
	glVertex3f(0.74, -8.99, 0);
	glVertex3f(0.95, -9.51, 0);
	glVertex3f(1.16, -9.98, 0);
	glVertex3f(1.24, -10.2, 0);
	glVertex3f(1.34, -10.37, 0);
	glVertex3f(1.46, -10.58, 0);
	glVertex3f(1.56, -10.76, 0);
	glVertex3f(1.68, -11.01, 0);
	glEnd();

	glBegin(GL_POLYGON);//parte superior de la gema
	glColor3f(0.30f, 0.44f, 0.66f);
	glVertex3f(4.52, -3.28, 0);//1
	glVertex3f(4.23, -3.28, 0);
	glVertex3f(3.77, -3.99, 0);
	glVertex3f(3.51, -3.74, 0);
	glVertex3f(3.77, -3.29, 0);
	glVertex3f(4.12, -2.82, 0);
	glVertex3f(4.52, -2.82, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glColor3f(0.60f, 0.81f, 0.98f);
	glVertex3f(4.07, -0.2, 0);
	glVertex3f(4.52, -0.18, 0);
	glVertex3f(4.52, -2.82, 0);
	glColor3f(0.1f, 1.0f, 1.0f);
	glVertex3f(4.12, -2.82, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glColor3f(0.30f, 0.44f, 0.66f);
	glVertex3f(3.51, -3.74, 0);
	glVertex3f(3.49, -0.83, 0);
	glVertex3f(4.07, -0.2, 0);
	glColor3f(0.1f, 1.0f, 1.0f);
	glVertex3f(4.12, -2.82, 0);
	glEnd();

	glBegin(GL_POLYGON);//GEMA ROJA CASCO MEGAMAN 1
	glColor3f(0.68f, 0.1f, 0.08f);
	glVertex3f(4.52, -6.84, 0);//delineado
	glVertex3f(4.45, -6.66, 0);
	glVertex3f(4.4, -6.61, 0);
	glVertex3f(4.35, -6.38, 0);
	glVertex3f(4.31, -6.24, 0);
	glVertex3f(4.27, -6.10, 0);
	glVertex3f(4.19, -5.83, 0);
	glVertex3f(4.13, -5.64, 0);
	glVertex3f(4.09, -5.43, 0);
	glVertex3f(4.03, -5.21, 0);
	glVertex3f(3.96, -4.97, 0);
	glVertex3f(3.92, -4.79, 0);
	glVertex3f(3.88, -4.59, 0);//delineado fin parte 1
	glColor3f(0.29f, 0.1f, 0.09f);
	glVertex3f(4.3, -4.12, 0);
	glVertex3f(4.35, -4.23, 0);
	glVertex3f(4.4, -4.37, 0);
	glVertex3f(4.45, -4.49, 0);
	glVertex3f(4.48, -4.62, 0);
	glVertex3f(4.52, -4.7, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glVertex3f(3.88, -4.59, 0);//delineado parte 2
	glVertex3f(3.84, -4.4, 0);
	glVertex3f(3.8, -4.23, 0);
	glVertex3f(3.76, -4.06, 0);
	glVertex3f(3.77, -3.99, 0);//fin delineado ***********************************
	glVertex3f(4.23, -3.28, 0);//*************************************************
	glVertex3f(4.52, -3.26, 0);
	glVertex3f(4.52, -3.37, 0);
	glVertex3f(4.4, -3.37, 0);
	glVertex3f(4.33, -3.39, 0);
	glVertex3f(4.28, -3.46, 0);
	glVertex3f(4.3, -3.5, 0);
	glVertex3f(4.23, -3.58, 0);
	glVertex3f(4.18, -3.67, 0);
	glVertex3f(4.16, -3.76, 0);
	glVertex3f(4.18, -3.85, 0);
	glVertex3f(4.22, -3.95, 0);
	glVertex3f(4.25, -4.06, 0);
	glVertex3f(4.27, -4.13, 0);
	glVertex3f(4.3, -4.12, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(4.52, -3.37, 0);
	glVertex3f(4.4, -3.37, 0);
	glVertex3f(4.33, -3.39, 0);
	glVertex3f(4.28, -3.46, 0);
	glVertex3f(4.51, -4.09, 0);
	glColor3f(0.56f, 0.05f, 0.27f);
	glVertex3f(4.3, -3.5, 0);
	glVertex3f(4.23, -3.58, 0);
	glVertex3f(4.18, -3.67, 0);
	glVertex3f(4.16, -3.76, 0);
	glVertex3f(4.18, -3.85, 0);
	glVertex3f(4.22, -3.95, 0);
	glVertex3f(4.25, -4.06, 0);
	glVertex3f(4.27, -4.13, 0);
	glVertex3f(4.3, -4.12, 0);
	glVertex3f(4.35, -4.23, 0);
	glVertex3f(4.4, -4.37, 0);
	glVertex3f(4.45, -4.49, 0);
	glVertex3f(4.48, -4.62, 0);
	glVertex3f(4.52, -4.7, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -6.84, 0);
	glVertex3f(4.45, -6.66, 0);
	glVertex3f(4.4, -6.61, 0);
	glVertex3f(4.35, -6.38, 0);
	glVertex3f(4.31, -6.24, 0);
	glVertex3f(4.27, -6.10, 0);
	glVertex3f(4.19, -5.83, 0);
	glVertex3f(4.13, -5.64, 0);
	glVertex3f(4.09, -5.43, 0);
	glVertex3f(4.03, -5.21, 0);
	glVertex3f(3.96, -4.97, 0);
	glVertex3f(3.92, -4.79, 0);
	glVertex3f(3.88, -4.59, 0);
	glVertex3f(3.84, -4.4, 0);
	glVertex3f(3.8, -4.23, 0);
	glVertex3f(3.76, -4.06, 0);
	glVertex3f(3.77, -3.99, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);// LINEAS DE LA PARTE DE ARRIBA DE LA GEMA
	glLineWidth(2.2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -3.28, 0);
	glVertex3f(4.23, -3.28, 0);
	glVertex3f(3.77, -3.99, 0);
	glEnd();
	glLineWidth(1.2);
	glBegin(GL_LINE_STRIP);
	glVertex3f(3.77, -3.99, 0);
	glVertex3f(3.51, -3.74, 0);
	glVertex3f(3.49, -0.83, 0);
	glVertex3f(4.07, -0.2, 0);
	glColor3f(0.1f, 1.0f, 1.0f);
	glVertex3f(4.12, -2.82, 0);
	glEnd();

	//**** CUERPO DE MEGAMAN ********

	glBegin(GL_POLYGON);// hombro
	glColor3f(0.1f, 0.21f, 0.41f);
	glVertex3f(0.0, -12.43, 0);
	glVertex3f(0.07, -12.42, 0);
	glVertex3f(0.15, -12.46, 0);
	glVertex3f(0.25, -12.5, 0);
	glVertex3f(0.32, -12.53, 0);
	glVertex3f(0.39, -12.56, 0);
	glVertex3f(0.52, -12.63, 0);
	glVertex3f(0.6, -12.66, 0);
	glVertex3f(0.68, -12.7, 0);
	glVertex3f(0.78, -12.77, 0);
	glVertex3f(0.86, -12.84, 0);
	glVertex3f(0.95, -12.91, 0);
	glVertex3f(1.02, -12.98, 0);
	glVertex3f(1.09, -13.05, 0);
	glVertex3f(1.18, -13.16, 0);
	glVertex3f(1.23, -13.23, 0);
	glVertex3f(1.28, -13.3, 0);
	glVertex3f(1.32, -13.37, 0);
	glVertex3f(1.32, -14.63, 0);
	glVertex3f(0.0, -14.63, 0);
	glEnd();
	glColor3f(0.27f, 0.39f, 0.57f);//brillo hombro
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -12.88, 0);
	glVertex3f(0.06, -12.84, 0);
	glVertex3f(0.07, -12.83, 0);
	glVertex3f(0.13, -12.8, 0);
	glVertex3f(0.18, -12.78, 0);
	glVertex3f(0.21, -12.77, 0);
	glVertex3f(0.28, -12.76, 0);
	glVertex3f(0.35, -12.75, 0);
	glVertex3f(0.37, -12.77, 0);
	glVertex3f(0.33, -12.8, 0);
	glVertex3f(0.28, -12.83, 0);
	glVertex3f(0.21, -12.87, 0);
	glVertex3f(0.12, -12.91, 0);
	glVertex3f(0.07, -12.95, 0);
	glVertex3f(0.0, -12.98, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2);//delineado externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.0, -12.43, 0);
	glVertex3f(0.07, -12.42, 0);
	glVertex3f(0.15, -12.46, 0);
	glVertex3f(0.25, -12.5, 0);
	glVertex3f(0.32, -12.53, 0);
	glVertex3f(0.39, -12.56, 0);
	glVertex3f(0.52, -12.63, 0);
	glVertex3f(0.6, -12.66, 0);
	glVertex3f(0.68, -12.7, 0);
	glVertex3f(0.78, -12.77, 0);
	glVertex3f(0.86, -12.84, 0);
	glVertex3f(0.95, -12.91, 0);
	glVertex3f(1.02, -12.98, 0);
	glVertex3f(1.09, -13.05, 0);
	glVertex3f(1.18, -13.16, 0);
	glVertex3f(1.23, -13.23, 0);
	glVertex3f(1.28, -13.3, 0);
	glVertex3f(1.32, -13.37, 0);
	glVertex3f(1.32, -14.63, 0);
	glEnd();

	glBegin(GL_POLYGON);//pecho
	glColor3f(0.22f, 0.43f, 0.65f);
	glVertex3f(4.52, -12.96, 0);//**
	glVertex3f(2.6, -12.94, 0);
	glVertex3f(2.5, -12.95, 0);
	glVertex3f(2.36, -12.97, 0);
	glVertex3f(2.24, -12.98, 0);
	glVertex3f(2.12, -13.02, 0);
	glVertex3f(2, -13.05, 0);
	glVertex3f(1.91, -13.08, 0);
	glVertex3f(1.83, -13.09, 0);
	glVertex3f(1.72, -13.13, 0);
	glVertex3f(1.62, -13.16, 0);
	glVertex3f(1.53, -13.19, 0);
	glVertex3f(1.45, -13.23, 0);
	glVertex3f(1.37, -13.26, 0);
	glVertex3f(1.3, -13.29, 0);//**
	glVertex3f(1.22, -13.34, 0);//*
	glVertex3f(1.12, -13.39, 0);
	glVertex3f(1.03, -13.44, 0);
	glVertex3f(0.94, -13.51, 0);
	glVertex3f(0.84, -13.59, 0);
	glVertex3f(0.77, -13.65, 0);
	glVertex3f(0.66, -13.73, 0);
	glVertex3f(0.59, -13.8, 0);
	glVertex3f(0.52, -13.88, 0);
	glVertex3f(0.45, -13.93, 0);
	glVertex3f(0.42, -13.97, 0);
	glVertex3f(0.35, -14.05, 0);
	glVertex3f(0.28, -14.11, 0);
	glVertex3f(0.21, -14.18, 0);
	glVertex3f(0.09, -14.29, 0);
	glVertex3f(0.05, -14.34, 0);
	glVertex3f(0.0, -14.43, 0);//*
	glVertex3f(0.0, -17.98, 0);
	glVertex3f(4.52, -17.98, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -12.96, 0);//**
	glVertex3f(2.6, -12.94, 0);
	glVertex3f(2.5, -12.95, 0);
	glVertex3f(2.36, -12.97, 0);
	glVertex3f(2.24, -12.98, 0);
	glVertex3f(2.12, -13.02, 0);
	glVertex3f(2, -13.05, 0);
	glVertex3f(1.91, -13.08, 0);
	glVertex3f(1.83, -13.09, 0);
	glVertex3f(1.72, -13.13, 0);
	glVertex3f(1.62, -13.16, 0);
	glVertex3f(1.53, -13.19, 0);
	glVertex3f(1.45, -13.23, 0);
	glVertex3f(1.37, -13.26, 0);
	glVertex3f(1.3, -13.29, 0);//**
	glEnd();
	glLineWidth(1.2);//delineado interno
	glBegin(GL_LINE_STRIP);
	glVertex3f(1.22, -13.34, 0);//*
	glVertex3f(1.12, -13.39, 0);
	glVertex3f(1.03, -13.44, 0);
	glVertex3f(0.94, -13.51, 0);
	glVertex3f(0.84, -13.59, 0);
	glVertex3f(0.77, -13.65, 0);
	glVertex3f(0.66, -13.73, 0);
	glVertex3f(0.59, -13.8, 0);
	glVertex3f(0.52, -13.88, 0);
	glVertex3f(0.45, -13.93, 0);
	glVertex3f(0.42, -13.97, 0);
	glVertex3f(0.35, -14.05, 0);
	glVertex3f(0.28, -14.11, 0);
	glVertex3f(0.21, -14.18, 0);
	glVertex3f(0.09, -14.29, 0);
	glVertex3f(0.05, -14.34, 0);
	glVertex3f(0.0, -14.43, 0);
	glEnd();
	glBegin(GL_POLYGON);//brillo
	glColor3f(0.352f, 0.63f, 0.8f);
	glVertex3f(0.0, -14.85, 0);
	glVertex3f(0.04, -14.77, 0);
	glVertex3f(0.09, -14.71, 0);
	glVertex3f(0.14, -14.56, 0);
	glVertex3f(0.22, -14.57, 0);
	glVertex3f(0.29, -14.49, 0);
	glVertex3f(0.39, -14.42, 0);
	glVertex3f(0.47, -14.35, 0);
	glVertex3f(0.54, -14.31, 0);
	glVertex3f(0.61, -14.25, 0);
	glVertex3f(0.71, -14.19, 0);
	glVertex3f(0.78, -14.14, 0);
	glVertex3f(0.85, -14.13, 0);
	glVertex3f(0.87, -14.15, 0);
	glVertex3f(0.84, -14.2, 0);
	glVertex3f(0.8, -14.29, 0);
	glVertex3f(0.76, -14.36, 0);
	glVertex3f(0.7, -14.46, 0);
	glVertex3f(0.66, -14.53, 0);
	glVertex3f(0.6, -14.68, 0);
	glVertex3f(0.56, -14.79, 0);
	glVertex3f(0.53, -14.89, 0);
	glVertex3f(0.5, -14.59, 0);
	glVertex3f(0.48, -15.06, 0);
	glVertex3f(0.45, -15.18, 0);
	glVertex3f(0.42, -15.3, 0);
	glVertex3f(0.41, -15.3, 0);
	glVertex3f(0.39, -15.49, 0);
	glVertex3f(0.37, -15.59, 0);
	glVertex3f(0.37, -15.84, 0);
	glVertex3f(0.0, -15.84, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombra por el cuello
	glColor3f(0.1f, 0.21f, 0.41f);
	glVertex3f(4.52, -12.96, 0);//**
	glVertex3f(2.6, -12.94, 0);
	glVertex3f(2.5, -12.95, 0);
	glVertex3f(2.36, -12.97, 0);
	glVertex3f(2.24, -12.98, 0);
	glVertex3f(2.12, -13.02, 0);
	glVertex3f(1.49, -13.39, 0);
	glVertex3f(1.98, -13.65, 0);
	glVertex3f(2.49, -13.86, 0);
	glVertex3f(3, -14.08, 0);
	glVertex3f(3.5, -14.25, 0);
	glVertex3f(4.02, -14.49, 0);
	glVertex3f(4.52, -14.62, 0);
	glEnd();

	glBegin(GL_POLYGON);//abdomen
	glColor3f(0.486f, 0.847f, 1.0f);
	glVertex3f(4.52, -17.98, 0);
	glVertex3f(4.52, -21.8, 0);
	glVertex3f(1.03, -21.8, 0);//**
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.95, -21.52, 0);
	glVertex3f(0.9, -21.36, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.77, -20.98, 0);
	glVertex3f(0.70, -20.82, 0);//**
	glVertex3f(0.0, -17.98, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(1.03, -21.8, 0);//**
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.95, -21.52, 0);
	glVertex3f(0.9, -21.36, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.77, -20.98, 0);
	glVertex3f(0.70, -20.82, 0);//**
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.10f, 0.188f, 0.321f);//intermedio pecho y abdomen
	glVertex3f(4.52, -17.78, 0);
	glVertex3f(4.52, -18.17, 0);
	glVertex3f(3.46, -18.17, 0);
	glVertex3f(3.46, -17.78, 0);
	glEnd();
	glColor3f(0.2f, 0.47f, 0.63f);//sombra pecho/abdomen
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -18.14, 0);
	glVertex3f(3.62, -18.14, 0);
	glVertex3f(3.62, -18.49, 0);
	glVertex3f(4.52, -18.49, 0);
	glEnd();
	
	glBegin(GL_POLYGON);
	glColor3f(0.07f, 0.15f, 0.22f);//cuello
	glVertex3f(3.15, -12.42, 0);//**
	glVertex3f(3.07, -12.43, 0);
	glVertex3f(2.6, -12.88, 0);
	glVertex3f(2.59, -12.94, 0);//***
	glVertex3f(2.65, -12.99, 0);
	glVertex3f(2.68, -13.02, 0);
	glVertex3f(2.72, -13.05, 0);
	glVertex3f(2.79, -13.10, 0);
	glVertex3f(2.86, -13.16, 0);//---
	glVertex3f(2.92, -13.19, 0);
	glVertex3f(2.97, -13.23, 0);
	glVertex3f(3.04, -13.26, 0);
	glVertex3f(3.13, -13.3, 0);
	glVertex3f(3.21, -13.34, 0);//---
	glVertex3f(3.28, -13.35, 0);
	glVertex3f(3.42, -13.39, 0);
	glVertex3f(3.49, -13.41, 0);
	glVertex3f(3.6, -13.44, 0);
	glVertex3f(3.67, -13.46, 0);
	glVertex3f(3.81, -13.48, 0);
	glVertex3f(3.95, -13.52, 0);
	glVertex3f(4.02, -13.53, 0);
	glVertex3f(4.16, -13.54, 0);
	glVertex3f(4.52, -13.54, 0);//*
	glVertex3f(4.52, -12.94, 0);//*
	glVertex3f(4.3, -12.95, 0);
	glVertex3f(4.23, -12.91, 0);
	glVertex3f(4.09, -12.91, 0);
	glVertex3f(3.97, -12.87, 0);
	glVertex3f(3.88, -12.85, 0);
	glVertex3f(3.77, -12.82, 0);
	glVertex3f(3.7, -12.8, 0);
	glVertex3f(3.59, -12.77, 0);
	glVertex3f(3.52, -12.75, 0);
	glVertex3f(3.45, -12.72, 0);
	glVertex3f(3.35, -12.66, 0);
	glVertex3f(3.3, -12.63, 0);//*
	glVertex3f(3.24, -12.59, 0);
	glVertex3f(3.21, -12.55, 0);
	glVertex3f(3.16, -12.49, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.24f, 0.3f, 0.36f);//2
	glVertex3f(4.52, -12.94, 0);//*
	glVertex3f(4.3, -12.95, 0);
	glVertex3f(4.23, -12.91, 0);
	glVertex3f(4.09, -12.91, 0);
	glVertex3f(3.97, -12.87, 0);
	glVertex3f(3.88, -12.85, 0);
	glVertex3f(3.77, -12.82, 0);
	glVertex3f(3.7, -12.8, 0);
	glVertex3f(3.59, -12.77, 0);
	glVertex3f(3.52, -12.75, 0);
	glVertex3f(3.45, -12.72, 0);
	glVertex3f(3.35, -12.66, 0);
	glVertex3f(3.3, -12.63, 0);//*
	glVertex3f(2.86, -13.16, 0);//---
	glVertex3f(2.92, -13.19, 0);
	glVertex3f(2.97, -13.23, 0);
	glVertex3f(3.04, -13.26, 0);
	glVertex3f(3.13, -13.3, 0);
	glVertex3f(3.21, -13.34, 0);
	glVertex3f(3.53, -12.95, 0);
	glVertex3f(3.67, -12.98, 0);
	glVertex3f(3.74, -13, 0);
	glVertex3f(3.85, -13, 0);
	glVertex3f(3.99, -13.03, 0);
	glVertex3f(4.48, -13.05, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.4);//delineado externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(3.15, -12.42, 0);//**
	glVertex3f(3.07, -12.43, 0);
	glVertex3f(2.6, -12.88, 0);
	glVertex3f(2.59, -12.94, 0);
	glEnd();
	glLineWidth(1.4);//delineado interno
	glBegin(GL_LINE_STRIP);
	glVertex3f(2.59, -12.94, 0);//**
	glVertex3f(2.65, -12.99, 0);
	glVertex3f(2.68, -13.02, 0);
	glVertex3f(2.72, -13.05, 0);
	glVertex3f(2.79, -13.10, 0);
	glVertex3f(2.86, -13.16, 0);//---
	glVertex3f(2.92, -13.19, 0);
	glVertex3f(2.97, -13.23, 0);
	glVertex3f(3.04, -13.26, 0);
	glVertex3f(3.13, -13.3, 0);
	glVertex3f(3.21, -13.34, 0);//---
	glVertex3f(3.28, -13.35, 0);
	glVertex3f(3.42, -13.39, 0);
	glVertex3f(3.49, -13.41, 0);
	glVertex3f(3.6, -13.44, 0);
	glVertex3f(3.67, -13.46, 0);
	glVertex3f(3.81, -13.48, 0);
	glVertex3f(3.95, -13.52, 0);
	glVertex3f(4.02, -13.53, 0);
	glVertex3f(4.16, -13.54, 0);
	glVertex3f(4.52, -13.54, 0);
	glEnd();
	
	//******************Armadura en el pecho gris
	glBegin(GL_POLYGON);//1
	glColor3f(0.67f, 0.74f, 0.92f);
	glVertex3f(0.0, -15.73, 0);
	glVertex3f(.11, -15.69, 0);
	glVertex3f(.21, -15.61, 0);
	glVertex3f(.32, -15.59, 0);
	glVertex3f(.56, -15.55, 0);
	glVertex3f(.67, -15.54, 0);
	glVertex3f(.78, -15.52, 0);
	glVertex3f(.98, -15.49, 0);
	glVertex3f(1.02, -15.47, 0);
	glVertex3f(1.13, -15.47, 0);
	glVertex3f(1.23, -15.44, 0);
	glVertex3f(1.34, -15.43, 0);
	glVertex3f(1.48, -15.43, 0);
	glVertex3f(1.62, -15.42, 0);
	glVertex3f(1.8, -15.41, 0);
	glVertex3f(2, -15.41, 0);
	glVertex3f(2.12, -15.42, 0);
	glVertex3f(2.3, -15.45, 0);
	glVertex3f(2.4, -15.49, 0);
	glVertex3f(2.52, -15.56, 0);
	glVertex3f(2.61, -15.6, 0);
	glVertex3f(2.71, -15.7, 0);
	glVertex3f(2.78, -15.8, 0);
	glVertex3f(2.84, -15.88, 0);
	glVertex3f(2.9, -15.98, 0);
	glVertex3f(2.96, -16.1, 0);
	glVertex3f(3.02, -16.19, 0);
	glVertex3f(3.10, -16.37, 0);
	glVertex3f(3.21, -16.59, 0);
	glVertex3f(3.35, -16.83, 0);
	glVertex3f(3.42, -16.98, 0);
	glVertex3f(3.47, -17.07, 0);
	glVertex3f(3.56, -17.25, 0);
	glVertex3f(3.6, -17.39, 0);
	glVertex3f(3.67, -17.57, 0);
	glVertex3f(3.73, -17.71, 0);
	glVertex3f(3.81, -17.89, 0);
	glVertex3f(3.87, -18.03, 0);
	glVertex3f(3.92, -18.17, 0);
	glVertex3f(3.76, -18.49, 0);
	glVertex3f(3.61, -18.98, 0);
	glVertex3f(3.45, -19.47, 0);
	glVertex3f(3.31, -20.0, 0);
	glVertex3f(3.24, -20.20, 0);
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.16, -20.36, 0);
	glVertex3f(3.17, -20.39, 0);
	glVertex3f(3.1, -20.43, 0);
	glVertex3f(3.06, -20.45, 0);
	glVertex3f(2.98, -20.46, 0);
	glVertex3f(2.85, -20.49, 0);
	glVertex3f(2.71, -20.50, 0);
	glVertex3f(2.5, -20.53, 0);
	glVertex3f(2.36, -20.56, 0);
	glVertex3f(2.22, -20.58, 0);
	glVertex3f(2.09, -20.6, 0);
	glVertex3f(1.93, -20.63, 0);
	glVertex3f(1.79, -20.65, 0);
	glVertex3f(1.62, -20.69, 0);
	glVertex3f(1.51, -20.71, 0);
	glVertex3f(1.37, -20.76, 0);
	glVertex3f(1.26, -20.78, 0);
	glVertex3f(1.16, -20.81, 0);
	glVertex3f(1.02, -20.86, 0);
	glVertex3f(0.88, -20.93, 0);
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(0.0, -20.99, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(.9, -21.36, 0);
	glVertex3f(.95, -21.51, 0);
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.77, -21.67, 0);//delineado externo
	glVertex3f(0.65, -21.65, 0);
	glVertex3f(.56, -21.62, 0);
	glVertex3f(.45, -21.58, 0);
	glVertex3f(.36, -21.55, 0);
	glVertex3f(.28, -21.5, 0);
	glVertex3f(.17, -21.46, 0);
	glVertex3f(.09, -21.41, 0);
	glVertex3f(0.02, -21.34, 0);
	glVertex3f(0.0, -21.28, 0);//fin delineado
	glVertex3f(0.0, -20.99, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//1
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.92, -18.17, 0);
	glVertex3f(3.76, -18.49, 0);
	glVertex3f(3.61, -18.98, 0);
	glVertex3f(3.45, -19.47, 0);
	glVertex3f(3.31, -20.0, 0);
	glVertex3f(3.24, -20.20, 0);
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.20 - a, -20.31 + b, 0);
	glVertex3f(3.24 - a, -20.20 + b, 0);
	glVertex3f(3.31 - a, -20.0 + b, 0);
	glVertex3f(3.45 - a, -19.47 + b, 0);
	glVertex3f(3.61 - a, -18.98 + b, 0);
	glVertex3f(3.76 - a, -18.49 + b, 0);
	glVertex3f(3.92 - a, -18.17 + b, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//2
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.16, -20.36, 0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(3.16 - a, -20.36 + b, 0);
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.20 - a, -20.31 + b, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(3.16 - a, -20.36 + b, 0);
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.17 - a, -20.39 + b, 0);
	glVertex3f(3.17, -20.39, 0);
	glVertex3f(3.16, -20.36, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//4
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.17 - a, -20.39 + b, 0);
	glVertex3f(3.1 - a, -20.43 + b, 0);
	glVertex3f(3.06 - a, -20.45 + b, 0);
	glVertex3f(2.98 - a, -20.46 + b, 0);
	glVertex3f(2.85 - a, -20.49 + b, 0);
	glVertex3f(2.71 - a, -20.50 + b, 0);
	glVertex3f(2.5 - a, -20.53 + b, 0);
	glVertex3f(2.36 - a, -20.56 + b, 0);
	glVertex3f(2.22 - a, -20.58 + b, 0);
	glVertex3f(2.09 - a, -20.6 + b, 0);
	glVertex3f(1.93 - a, -20.63 + b, 0);
	glVertex3f(1.79 - a, -20.65 + b, 0);
	glVertex3f(1.62 - a, -20.69 + b, 0);
	glVertex3f(1.51 - a, -20.71 + b, 0);
	glVertex3f(1.37 - a, -20.76 + b, 0);
	glVertex3f(1.26 - a, -20.78 + b, 0);
	glVertex3f(1.16 - a, -20.81 + b, 0);
	glVertex3f(1.02 - a, -20.86 + b, 0);
	glVertex3f(0.88 - a, -20.93 + b, 0);
	glVertex3f(0.76 - a, -20.99 + b, 0);
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(0.88, -20.93, 0);
	glVertex3f(1.02, -20.86, 0);
	glVertex3f(1.16, -20.81, 0);
	glVertex3f(1.26, -20.78, 0);
	glVertex3f(1.37, -20.76, 0);
	glVertex3f(1.51, -20.71, 0);
	glVertex3f(1.62, -20.69, 0);
	glVertex3f(1.79, -20.65, 0);
	glVertex3f(1.93, -20.63, 0);
	glVertex3f(2.09, -20.6, 0);
	glVertex3f(2.22, -20.58, 0);
	glVertex3f(2.36, -20.56, 0);
	glVertex3f(2.5, -20.53, 0);
	glVertex3f(2.71, -20.50, 0);
	glVertex3f(2.85, -20.49, 0);
	glVertex3f(2.98, -20.46, 0);
	glVertex3f(3.06, -20.45, 0);
	glVertex3f(3.1, -20.43, 0);
	glVertex3f(3.17, -20.39, 0);
	glEnd();
	glBegin(GL_POLYGON);//5
	glVertex3f(0.76 - a, -20.99 + b, 0);
	glVertex3f(0.28, -20.67, 0);
	glVertex3f(.2, -20.72, 0);
	glVertex3f(.13, -20.78, 0);
	glVertex3f(.06, -20.87, 0);
	glVertex3f(0.0, -20.92, 0);
	glVertex3f(0.0, -21.28, 0);
	glVertex3f(0.02, -21.34, 0);
	glVertex3f(.09, -21.41, 0);
	glVertex3f(.17, -21.46, 0);
	glVertex3f(.28, -21.5, 0);
	glVertex3f(.36, -21.55, 0);
	glVertex3f(.45, -21.58, 0);
	glVertex3f(.56, -21.62, 0);
	glVertex3f(0.65, -21.65, 0);
	glVertex3f(0.77, -21.67, 0);
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.95, -21.52, 0);
	glVertex3f(0.9, -21.36, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.76, -20.99, 0);
	glEnd();
	glColor3f(0.2f, 0.47f, 0.63f);//sombra pecho/abdomen
	glBegin(GL_POLYGON);
	glColor3f(0.25f, 0.38f, 0.55f);
	glVertex3f(3.92, -18.17, 0);
	glVertex3f(3.76, -18.49, 0);
	glVertex3f(3.61, -18.98, 0);
	glVertex3f(3.45, -19.47, 0);
	glVertex3f(3.31, -20.0, 0);
	glVertex3f(3.24, -20.20, 0);
	glVertex3f(3.20, -20.31, 0);
	glEnd();
	////////////***********
	glColor3f(0.2f, 0.47f, 0.63f);
	glBegin(GL_POLYGON);//sombreado//1
	glVertex3f(3.92, -18.17, 0);
	glVertex3f(3.76, -18.49, 0);
	glVertex3f(3.61, -18.98, 0);
	glVertex3f(3.45, -19.47, 0);
	glVertex3f(3.31, -20.0, 0);
	glVertex3f(3.24, -20.20, 0);
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.20 + a, -20.31 - b, 0);
	glVertex3f(3.24 + a, -20.20 - b, 0);
	glVertex3f(3.31 + a, -20.0 - b, 0);
	glVertex3f(3.45 + a, -19.47 - b, 0);
	glVertex3f(3.61 + a, -18.98 - b, 0);
	glVertex3f(3.76 + a, -18.49 - b, 0);
	glVertex3f(3.92 + a, -18.17 - b, 0);
	glVertex3f(4.4, -18.2, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//2
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.16, -20.36, 0);
	glVertex3f(3.16 + a, -20.36 - b, 0);
	glVertex3f(3.20 + a, -20.31 - b, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//3
	glVertex3f(3.16 + a, -20.36 - b, 0);
	glVertex3f(3.17 + a, -20.39 - b, 0);
	glVertex3f(3.17, -20.39, 0);
	glVertex3f(3.16, -20.36, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombreado//4
	glVertex3f(3.17 + a, -20.39 - b, 0);
	glVertex3f(3.1 + a, -20.43 - b, 0);
	glVertex3f(3.06 + a, -20.45 - b, 0);
	glVertex3f(2.98 + a, -20.46 - b, 0);
	glVertex3f(2.85 + a, -20.49 - b, 0);
	glVertex3f(2.71 + a, -20.50 - b, 0);
	glVertex3f(2.5 + a, -20.53 -b, 0);
	glVertex3f(2.36 + a, -20.56 - b, 0);
	glVertex3f(2.22 + a, -20.58 - b, 0);
	glVertex3f(2.09 + a, -20.6 - b, 0);
	glVertex3f(1.93 + a, -20.63 - b, 0);
	glVertex3f(1.79 + a, -20.65 - b, 0);
	glVertex3f(1.62 + a, -20.69 - b, 0);
	glVertex3f(1.51 + a, -20.71 - b, 0);
	glVertex3f(1.37 + a, -20.76 - b, 0);
	glVertex3f(1.26 + a, -20.78 - b, 0);
	glVertex3f(1.16 + a, -20.81 - b, 0);
	glVertex3f(1.02 + a, -20.86 - b, 0);
	glVertex3f(0.88 + a, -20.93 - b, 0);
	glVertex3f(0.76 + a, -20.99 - b, 0);
	glVertex3f(0.95, -21.52, 0);
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(0.88, -20.93, 0);
	glVertex3f(1.02, -20.86, 0);
	glVertex3f(1.16, -20.81, 0);
	glVertex3f(1.26, -20.78, 0);
	glVertex3f(1.37, -20.76, 0);
	glVertex3f(1.51, -20.71, 0);
	glVertex3f(1.62, -20.69, 0);
	glVertex3f(1.79, -20.65, 0);
	glVertex3f(1.93, -20.63, 0);
	glVertex3f(2.09, -20.6, 0);
	glVertex3f(2.22, -20.58, 0);
	glVertex3f(2.36, -20.56, 0);
	glVertex3f(2.5, -20.53, 0);
	glVertex3f(2.71, -20.50, 0);
	glVertex3f(2.85, -20.49, 0);
	glVertex3f(2.98, -20.46, 0);
	glVertex3f(3.06, -20.45, 0);
	glVertex3f(3.1, -20.43, 0);
	glVertex3f(3.17, -20.39, 0);
	glEnd();

	glColor3f(0.89f, 0.92f, 1.0f);//brillo
	glBegin(GL_POLYGON);
	glVertex3f(0.0, -15.73, 0);
	glVertex3f(.11, -15.69, 0);
	glVertex3f(.21, -15.61, 0);
	glVertex3f(.32, -15.59, 0);
	glVertex3f(.56, -15.55, 0);
	glVertex3f(.67, -15.54, 0);
	glVertex3f(.78, -15.52, 0);
	glVertex3f(.98, -15.49, 0);
	glVertex3f(1.02, -15.47, 0);
	glVertex3f(1.13, -15.47, 0);
	glVertex3f(1.23, -15.44, 0);
	glVertex3f(1.34, -15.43, 0);
	glVertex3f(1.48, -15.43, 0);
	glVertex3f(1.62, -15.42, 0);
	glVertex3f(1.8, -15.41, 0);
	glVertex3f(2, -15.41, 0);
	glVertex3f(2.12, -15.42, 0);
	glVertex3f(2.3, -15.45, 0);
	glVertex3f(2.4, -15.49, 0);
	glVertex3f(2.52, -15.56, 0);
	glVertex3f(2.61, -15.6, 0);
	glVertex3f(2.71, -15.7, 0);
	glVertex3f(2.78, -15.8, 0);
	glVertex3f(2.84, -15.88, 0);
	glVertex3f(2.43, -15.62, 0);
	glVertex3f(2.36, -15.6, 0);
	glVertex3f(2.25, -15.59, 0);
	glVertex3f(1.48, -15.6, 0);
	glVertex3f(1.34, -15.61, 0);
	glVertex3f(1.15, -15.63, 0);
	glVertex3f(.95, -15.66, 0);
	glVertex3f(.81, -15.68, 0);
	glVertex3f(.67, -15.72, 0);
	glVertex3f(.49, -15.76, 0);
	glVertex3f(.35, -15.82, 0);
	glVertex3f(0.0, -16.64, 0);
	glEnd();
	glColor3f(0.37f, 0.38f, 0.55f);
	glLineWidth(1);//linea en armadura
	glBegin(GL_LINE_STRIP);
	glVertex3f(2.3, -15.45, 0);
	glVertex3f(3.54, -17.81, 0);
	glEnd();

	glLineWidth(1.3);//delineado armadura
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0, -15.73, 0);
	glVertex3f(.11, -15.69, 0);
	glVertex3f(.21, -15.61, 0);
	glVertex3f(.32, -15.59, 0);
	glVertex3f(.56, -15.55, 0);
	glVertex3f(.67, -15.54, 0);
	glVertex3f(.78, -15.52, 0);
	glVertex3f(.98, -15.49, 0);
	glVertex3f(1.02, -15.47, 0);
	glVertex3f(1.13, -15.47, 0);
	glVertex3f(1.23, -15.44, 0);
	glVertex3f(1.34, -15.43, 0);
	glVertex3f(1.48, -15.43, 0);
	glVertex3f(1.62, -15.42, 0);
	glVertex3f(1.8, -15.41, 0);
	glVertex3f(2, -15.41, 0);
	glVertex3f(2.12, -15.42, 0);
	glVertex3f(2.3, -15.45, 0);
	glVertex3f(2.4, -15.49, 0);
	glVertex3f(2.52, -15.56, 0);
	glVertex3f(2.61, -15.6, 0);
	glVertex3f(2.71, -15.7, 0);
	glVertex3f(2.78, -15.8, 0);
	glVertex3f(2.84, -15.88, 0);
	glVertex3f(2.9, -15.98, 0);
	glVertex3f(2.96, -16.1, 0);
	glVertex3f(3.02, -16.19, 0);
	glVertex3f(3.10, -16.37, 0);
	glVertex3f(3.21, -16.59, 0);
	glVertex3f(3.35, -16.83, 0);
	glVertex3f(3.42, -16.98, 0);
	glVertex3f(3.47, -17.07, 0);
	glVertex3f(3.56, -17.25, 0);
	glVertex3f(3.6, -17.39, 0);
	glVertex3f(3.67, -17.57, 0);
	glVertex3f(3.73, -17.71, 0);
	glVertex3f(3.81, -17.89, 0);
	glVertex3f(3.87, -18.03, 0);
	glVertex3f(3.92, -18.17, 0);
	glVertex3f(3.76, -18.49, 0);
	glVertex3f(3.61, -18.98, 0);
	glVertex3f(3.45, -19.47, 0);
	glVertex3f(3.31, -20.0, 0);
	glVertex3f(3.24, -20.20, 0);
	glVertex3f(3.20, -20.31, 0);
	glVertex3f(3.16, -20.36, 0);
	glVertex3f(3.17, -20.39, 0);
	glVertex3f(3.1, -20.43, 0);
	glVertex3f(3.06, -20.45, 0);
	glVertex3f(2.98, -20.46, 0);
	glVertex3f(2.85, -20.49, 0);
	glVertex3f(2.71, -20.50, 0);
	glVertex3f(2.5, -20.53, 0);
	glVertex3f(2.36, -20.56, 0);
	glVertex3f(2.22, -20.58, 0);
	glVertex3f(2.09, -20.6, 0);
	glVertex3f(1.93, -20.63, 0);
	glVertex3f(1.79, -20.65, 0);
	glVertex3f(1.62, -20.69, 0);
	glVertex3f(1.51, -20.71, 0);
	glVertex3f(1.37, -20.76, 0);
	glVertex3f(1.26, -20.78, 0);
	glVertex3f(1.16, -20.81, 0);
	glVertex3f(1.02, -20.86, 0);
	glVertex3f(0.88, -20.93, 0);
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(.7, -21.01, 0);
	glVertex3f(.63, -21.04, 0);
	glVertex3f(.59, -21.06, 0);
	glVertex3f(.56, -21.1, 0);
	glVertex3f(.49, -21.16, 0);
	glVertex3f(.47, -21.2, 0);
	glVertex3f(.47, -21.24, 0);
	glVertex3f(.45, -21.27, 0);
	glVertex3f(.47, -21.31, 0);
	glVertex3f(.5, -21.34, 0);
	glVertex3f(.53, -21.39, 0);
	glVertex3f(.6, -21.44, 0);
	glVertex3f(.66, -21.44, 0);
	glVertex3f(.71, -21.41, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo Abdomen
	glBegin(GL_LINE_STRIP);
	glVertex3f(1.03, -21.8, 0);//**
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.95, -21.52, 0);
	glVertex3f(0.9, -21.36, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.76, -20.99, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(0.76, -20.99, 0);
	glVertex3f(0.84, -21.12, 0);
	glVertex3f(0.87, -21.23, 0);
	glVertex3f(.9, -21.36, 0);
	glVertex3f(.95, -21.51, 0);
	glVertex3f(0.98, -21.65, 0);
	glVertex3f(0.77, -21.67, 0);//delineado externo
	glVertex3f(0.65, -21.65, 0);
	glVertex3f(.56, -21.62, 0);
	glVertex3f(.45, -21.58, 0);
	glVertex3f(.36, -21.55, 0);
	glVertex3f(.28, -21.5, 0);
	glVertex3f(.17, -21.46, 0);
	glVertex3f(.09, -21.41, 0);
	glVertex3f(0.02, -21.34, 0);
	glVertex3f(0.0, -21.28, 0);
	glEnd();


	//********************** ZEROOO ************
	glColor3f(0.1f, 0.26f, 0.38f);
	glBegin(GL_POLYGON);
	glVertex3f(8.91, -21.8, 0);
	glVertex3f(8.93, -21.73, 0);
	glVertex3f(8.96, -21.66, 0);
	glVertex3f(8.97, -21.0, 0);
	glVertex3f(4.52, -21.0, 0);
	glVertex3f(4.52, -21.8, 0);
	glEnd();

	glColor3f(0.0f, 0.11f, 0.33f);
	glBegin(GL_POLYGON);//parte azul a un costado del cuello
	glVertex3f(7.54, -11.49, 0);
	glVertex3f(6.62, -12.06, 0);
	glVertex3f(6.62, -13.09, 0);
	glVertex3f(8.38, -13.09, 0);
	glVertex3f(8.38, -12.66, 0);
	glVertex3f(8.34, -12.59, 0);
	glVertex3f(8.25, -12.5, 0);
	glVertex3f(8, -12.24, 0);
	glVertex3f(7.86, -12.01, 0);
	glVertex3f(7.6, -11.59, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo
	glBegin(GL_LINE_LOOP);
	glVertex3f(7.54, -11.49, 0);
	glVertex3f(6.62, -12.06, 0);
	glVertex3f(6.62, -13.09, 0);
	glVertex3f(8.38, -13.09, 0);
	glVertex3f(8.38, -12.66, 0);
	glVertex3f(8.34, -12.59, 0);
	glVertex3f(8.25, -12.5, 0);
	glVertex3f(8, -12.24, 0);
	glVertex3f(7.86, -12.01, 0);
	glVertex3f(7.6, -11.59, 0);
	glEnd();

	glColor3f(0.6f, 0.45f, 0.09f);
	glBegin(GL_POLYGON);//ala amarilla
	glVertex3f(9.94, -9.85, 0);
	glVertex3f(8.08, -13.02, 0);
	glVertex3f(9.94, -13.02, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.94, -9.85, 0);
	glVertex3f(8.08, -13.02, 0);
	glEnd();
	glColor3f(0.92f, 1.0f, 0.45f);
	glBegin(GL_POLYGON);//rombo interno amarillo
	glVertex3f(9.94, -10.19, 0);
	glVertex3f(9.52, -10.81, 0);
	glVertex3f(9.73, -11.72, 0);
	glVertex3f(9.94, -11.4, 0);
	glEnd();
	
	glColor3f(0.41f, 0.15f, 0.03f);// hombro rojo
	glBegin(GL_POLYGON);
	glVertex3f(9.94, -12.45, 0);
	glVertex3f(7.41, -13.11, 0);
	glVertex3f(9.94, -14.52, 0);
	glEnd();
	glColor3f(0.38f, 0.58f, 0.66f);//triangulo azul
	glBegin(GL_POLYGON);
	glVertex3f(9.94, -12.45, 0);
	glVertex3f(8.78, -12.72, 0);
	glVertex3f(9.94, -12.89, 0);
	glEnd();
	glColor3f(0.84f, 0.27f, 0.06f);
	glBegin(GL_POLYGON);
	glVertex3f(9.94, -12.97, 0);
	glVertex3f(9.79, -12.99, 0);
	glVertex3f(9.68, -13.02, 0);
	glVertex3f(9.59, -13.07, 0);
	glVertex3f(9.45, -13.11, 0);
	glVertex3f(9.34, -13.16, 0);
	glVertex3f(9.28, -13.24, 0);
	glVertex3f(9.49, -13.3, 0);
	glVertex3f(9.94, -13.36, 0);
	glEnd();
	glColor3f(0.84f, 0.27f, 0.06f);
	glBegin(GL_POLYGON);
	glVertex3f(9.34, -13.16, 0);
	glVertex3f(9.28, -13.24, 0);
	glColor3f(1.0f, 0.8f, 0.8f);
	glVertex3f(8.67, -13.11, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado externo triangulo rojo
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.94, -12.45, 0);
	glVertex3f(7.41, -13.11, 0);
	glEnd();
	glLineWidth(1.2);//delineado interno triangulo azul
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.78, -12.72, 0);
	glVertex3f(9.94, -12.89, 0);
	glEnd();
	
	glColor3f(0.22f, 0.37f, 0.54f);
	glBegin(GL_POLYGON);//------------ parte debajo del cuello zero
	glVertex3f(4.52, -12.44, 0);
	glVertex3f(5.01, -12.46, 0);
	glVertex3f(5.47, -12.47, 0);
	glVertex3f(5.99, -12.49, 0);
	glVertex3f(6.49, -12.51, 0);
	glVertex3f(6.76, -12.52, 0);//*
	glVertex3f(6.88, -12.54, 0);
	glVertex3f(7.02, -12.57, 0);
	glVertex3f(7.09, -12.6, 0);
	glVertex3f(7.23, -12.64, 0);
	glVertex3f(7.34, -12.66, 0);
	glVertex3f(7.48, -12.74, 0);
	glVertex3f(7.58, -12.77, 0);
	glVertex3f(7.69, -12.85, 0);
	glVertex3f(7.8, -12.91, 0);
	glVertex3f(7.88, -12.98, 0);
	glVertex3f(7.94, -13.06, 0);
	glVertex3f(7.94, -13.14, 0);//*
	glVertex3f(4.52, -13.14, 0);
	glEnd();
	glColor3f(0.3f, 0.47f, 0.65f);
	glBegin(GL_POLYGON);//brillo de la parte debajo del cuello
	glVertex3f(6.76, -12.52, 0);//*
	glVertex3f(6.88, -12.54, 0);
	glVertex3f(7.02, -12.57, 0);
	glVertex3f(7.09, -12.6, 0);
	glVertex3f(7.23, -12.64, 0);
	glVertex3f(7.34, -12.66, 0);
	glVertex3f(7.48, -12.74, 0);
	glVertex3f(7.58, -12.77, 0);
	glVertex3f(7.69, -12.85, 0);
	glVertex3f(7.8, -12.91, 0);
	glVertex3f(7.88, -12.98, 0);
	glVertex3f(7.94, -13.06, 0);
	glVertex3f(7.94, -13.14, 0);
	glVertex3f(7.29, -13.14, 0);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_POLYGON);//BRILLO 2
	glVertex3f(4.52, -12.44, 0);
	glVertex3f(5.01, -12.46, 0);
	glVertex3f(5.47, -12.47, 0);
	glColor3f(0.22f, 0.37f, 0.54f);
	glVertex3f(5.47, -12.62, 0);
	glVertex3f(5.01, -12.61, 0);
	glVertex3f(4.52, -12.59, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.3);//delineado interno
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -12.44, 0);
	glVertex3f(5.01, -12.46, 0);
	glVertex3f(5.47, -12.47, 0);
	glVertex3f(5.99, -12.49, 0);
	glVertex3f(6.49, -12.51, 0);
	glVertex3f(6.76, -12.52, 0);//*
	glVertex3f(6.88, -12.54, 0);
	glVertex3f(7.02, -12.57, 0);
	glVertex3f(7.09, -12.6, 0);
	glVertex3f(7.23, -12.64, 0);
	glVertex3f(7.34, -12.66, 0);
	glVertex3f(7.48, -12.74, 0);
	glVertex3f(7.58, -12.77, 0);
	glVertex3f(7.69, -12.85, 0);
	glVertex3f(7.8, -12.91, 0);
	glVertex3f(7.88, -12.98, 0);
	glVertex3f(7.94, -13.06, 0);
	glVertex3f(7.94, -13.14, 0);
	glEnd();

	glColor3f(0.9f, 0.3f, 0.05f);// pecho de ZERO 1
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -13.5, 0);
	glVertex3f(8, -13.5, 0);
	glVertex3f(9.17, -13.99, 0);
	glVertex3f(9.17, -20.25, 0);
	glVertex3f(4.52, -20.25, 0);
	glEnd();

	glColor3f(0.92f, 1.0f, 0.45f);//estrella amarilla del pecho
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -12.7, 0);
	glVertex3f(6, -12.7, 0);
	glVertex3f(6.24, -12.75, 0);
	glVertex3f(6.49, -12.77, 0);
	glVertex3f(6.74, -12.79, 0);
	glVertex3f(6.99, -12.81, 0);
	glVertex3f(7.23, -12.85, 0);
	glVertex3f(7.41, -12.9, 0);
	glVertex3f(7.59, -12.95, 0);
	glVertex3f(7.76, -13, 0);
	glVertex3f(7.9, -13.04, 0);//*
	glVertex3f(8.01, -13.04, 0);
	glVertex3f(8.09, -13.09, 0);
	glVertex3f(8.22, -13.14, 0);
	glVertex3f(8.37, -13.2, 0);
	glVertex3f(8.5, -13.26, 0);
	glVertex3f(8.65, -13.34, 0);//*
	glVertex3f(8.77, -13.41, 0);
	glVertex3f(8.89, -13.48, 0);
	glVertex3f(9.00, -13.56, 0);
	glVertex3f(9.14, -13.63, 0);
	glVertex3f(9.31, -13.76, 0);
	glVertex3f(9.49, -13.93, 0);
	glVertex3f(9.66, -14.08, 0);
	glVertex3f(9.81, -14.23, 0);
	glVertex3f(9.94, -14.39, 0);
	glVertex3f(9.94, -14.7, 0);//**
	glVertex3f(9.74, -14.58, 0);
	glVertex3f(9.52, -14.49, 0);
	glVertex3f(9.19, -14.35, 0);
	glVertex3f(8.88, -14.24, 0);
	glVertex3f(8.74, -14.19, 0);//**
	glVertex3f(8, -13.97, 0);
	glVertex3f(7.49, -13.86, 0);
	glVertex3f(7, -13.79, 0);
	glVertex3f(6.5, -13.74, 0);
	glVertex3f(4.93, -16.57, 0);
	glVertex3f(4.52, -15.86, 0);
	glEnd();
	glColor3f(0.6f, 0.45f, 0.09f);
	glBegin(GL_POLYGON);//sombra 1
	glVertex3f(4.52, -12.7, 0);
	glVertex3f(6, -12.7, 0);
	glVertex3f(6.24, -12.75, 0);
	glVertex3f(6.49, -12.77, 0);
	glVertex3f(6.74, -12.79, 0);
	glVertex3f(5.07, -13.43, 0);
	glVertex3f(5, -13.45, 0);
	glVertex3f(4.93, -13.43, 0);
	glVertex3f(4.52, -13.26, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombra 2
	glVertex3f(7.9, -13.04, 0);//*
	glVertex3f(8.01, -13.04, 0);
	glVertex3f(8.09, -13.09, 0);
	glVertex3f(8.22, -13.14, 0);
	glVertex3f(8.37, -13.2, 0);
	glVertex3f(8.5, -13.26, 0);
	glVertex3f(8.65, -13.34, 0);//*
	glVertex3f(9.94, -14.7, 0);//**
	glVertex3f(9.74, -14.58, 0);
	glVertex3f(9.52, -14.49, 0);
	glVertex3f(9.19, -14.35, 0);
	glVertex3f(8.88, -14.24, 0);
	glVertex3f(8.74, -14.19, 0);//**
	glVertex3f(8.74, -14.02, 0);
	glVertex3f(8.64, -13.85, 0);
	glVertex3f(8.52, -13.65, 0);
	glVertex3f(8.36, -13.43, 0);
	glVertex3f(8.21, -13.29, 0);
	glVertex3f(8.07, -13.15, 0);
	glEnd();

	glColor3f(0.41f, 0.15f, 0.03f);
	glBegin(GL_POLYGON);//sombra 1
	glVertex3f(9.94, -14.7, 0);//**
	glVertex3f(9.74, -14.58, 0);
	glVertex3f(9.52, -14.49, 0);
	glVertex3f(9.19, -14.35, 0);
	glVertex3f(8.88, -14.24, 0);
	glVertex3f(8.74, -14.19, 0);
	glVertex3f(8.81, -14.29, 0);
	glVertex3f(8.87, -14.43, 0);
	glVertex3f(8.88, -14.53, 0);
	glVertex3f(8.88, -14.62, 0);
	glVertex3f(8.88, -14.68, 0);
	glVertex3f(8.85, -14.83, 0);
	glVertex3f(8.82, -14.93, 0);
	glVertex3f(8.78, -15.05, 0);
	glVertex3f(8.74, -15.1, 0);
	glVertex3f(9.94, -15.2, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.25);//delineado estrella amarilla del pecho
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -12.7, 0);
	glVertex3f(6, -12.7, 0);
	glVertex3f(6.24, -12.75, 0);
	glVertex3f(6.49, -12.77, 0);
	glVertex3f(6.74, -12.79, 0);
	glVertex3f(6.99, -12.81, 0);
	glVertex3f(7.23, -12.85, 0);
	glVertex3f(7.41, -12.9, 0);
	glVertex3f(7.59, -12.95, 0);
	glVertex3f(7.76, -13, 0);
	glVertex3f(7.9, -13.04, 0);//*
	glVertex3f(8.01, -13.04, 0);
	glVertex3f(8.09, -13.09, 0);
	glVertex3f(8.22, -13.14, 0);
	glVertex3f(8.37, -13.2, 0);
	glVertex3f(8.5, -13.26, 0);
	glVertex3f(8.65, -13.34, 0);//*
	glVertex3f(8.77, -13.41, 0);
	glVertex3f(8.89, -13.48, 0);
	glVertex3f(9.00, -13.56, 0);
	glVertex3f(9.14, -13.63, 0);
	glVertex3f(9.31, -13.76, 0);
	glVertex3f(9.49, -13.93, 0);
	glVertex3f(9.66, -14.08, 0);
	glVertex3f(9.81, -14.23, 0);
	glVertex3f(9.94, -14.39, 0);
	glVertex3f(9.94, -14.7, 0);//**
	glVertex3f(9.74, -14.58, 0);
	glVertex3f(9.52, -14.49, 0);
	glVertex3f(9.19, -14.35, 0);
	glVertex3f(8.88, -14.24, 0);
	glVertex3f(8.74, -14.19, 0);//**
	glVertex3f(8, -13.97, 0);
	glVertex3f(7.49, -13.86, 0);
	glVertex3f(7, -13.79, 0);
	glVertex3f(6.5, -13.74, 0);
	glVertex3f(4.93, -16.57, 0);
	glVertex3f(4.52, -15.86, 0);
	glEnd();

	glColor3f(0.92f, 1.0f, 0.45f);//boca del estomago
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -21.51, 0);
	glVertex3f(6.33, -21.51, 0);
	glVertex3f(6.01, -20.37, 0);
	glVertex3f(5.68, -19.72, 0);
	glVertex3f(4.52, -19.72, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//lineas boca del estomago
	glBegin(GL_LINE_STRIP);//1
	glVertex3f(4.52, -21.51, 0);
	glVertex3f(6.01, -21.51, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);//2
	glVertex3f(6.33, -20.37, 0);
	glVertex3f(4.52, -20.37, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);//3
	glVertex3f(4.52, -20.9, 0);
	glVertex3f(6.06, -20.9, 0);
	glEnd();

	glColor3f(0.41f, 0.15f, 0.03f);
	glBegin(GL_POLYGON);//sombra 2
	glVertex3f(9.94, -18.0, 0);
	glVertex3f(7.26, -18.0, 0);
	glVertex3f(6.77, -18.41, 0);
	glVertex3f(6.56, -18.49, 0);
	glVertex3f(6.94, -19.49, 0);
	glVertex3f(6.94, -19.49, 0);//punto
	glVertex3f(7.08, -21.2, 0);
	glVertex3f(7.3, -21.23, 0);
	glVertex3f(7.51, -21.27, 0);
	glVertex3f(7.76, -21.33, 0);
	glVertex3f(7.97, -21.37, 0);
	glVertex3f(8.19, -21.41, 0);
	glVertex3f(8.43, -21.47, 0);
	glVertex3f(8.62, -21.53, 0);
	glVertex3f(8.82, -21.54, 0);
	glVertex3f(8.95, -21.66, 0);
	glVertex3f(9.07, -21.74, 0);
	glVertex3f(9.13, -21.8, 0);
	glVertex3f(9.94, -21.8, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//sdelineado sombra 2
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.08, -21.2, 0);
	glVertex3f(7.3, -21.23, 0);
	glVertex3f(7.51, -21.27, 0);
	glVertex3f(7.76, -21.33, 0);
	glVertex3f(7.97, -21.37, 0);
	glVertex3f(8.19, -21.41, 0);
	glVertex3f(8.43, -21.47, 0);
	glVertex3f(8.62, -21.53, 0);
	glVertex3f(8.82, -21.54, 0);
	glVertex3f(8.95, -21.66, 0);
	glVertex3f(9.07, -21.74, 0);
	glVertex3f(9.13, -21.8, 0);
	glVertex3f(9.94, -21.8, 0);
	glEnd();
	glColor3f(0.41f, 0.15f, 0.03f);
	glBegin(GL_POLYGON);//sombra 3
	glVertex3f(6.10, -20.03, 0);//punto clave 1
	glVertex3f(6.94, -19.49, 0);//punto 2
	glVertex3f(7.08, -21.2, 0);//*
	glColor3f(0.9f, 0.3f, 0.05f);
	glVertex3f(6.69, -21.63, 0);//*
	glEnd();
	glColor3f(0.9f, 0.3f, 0.05f);
	glBegin(GL_POLYGON);//sombra 4
	glVertex3f(6.69, -21.63, 0);
	glColor3f(0.41f, 0.15f, 0.03f);
	glVertex3f(6.27, -21.63, 0);
	glVertex3f(5.61, -19.92, 0);
	glVertex3f(5.8, -19.38, 0);
	glVertex3f(6.10, -20.03, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombra 5
	glVertex3f(5.61, -19.92, 0);
	glVertex3f(4.52, -19.92, 0);
	glVertex3f(4.52, -19.38, 0);
	glVertex3f(5.8, -19.38, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombra 6
	glVertex3f(6.10, -20.03, 0);//punto clave 1
	glVertex3f(5.90, -19.26, 0);
	glVertex3f(6.26, -18.87, 0);//punto clave 3
	glVertex3f(6.94, -19.49, 0);//punto 2
	glEnd();
	glBegin(GL_POLYGON);//sombra 7
	glVertex3f(4.52, -18.87, 0);
	glVertex3f(4.52, -18.54, 0);
	glVertex3f(6.44, -18.54, 0);
	glVertex3f(6.26, -18.87, 0);
	glEnd();
	glBegin(GL_POLYGON);//sombra 8
	glVertex3f(6.44, -18.54, 0);
	glVertex3f(6.94, -19.49, 0);
	glVertex3f(6.59, -19.58, 0);
	glVertex3f(6.26, -18.87, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(2.2);//delineado sombra 4 externo
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.08, -21.2, 0);
	glVertex3f(6.69, -21.63, 0);
	glVertex3f(6.27, -21.63, 0);
	glEnd();
	glLineWidth(1.2);//delineado sombra 4
	glBegin(GL_LINE_STRIP);
	glVertex3f(6.27, -21.63, 0);
	glVertex3f(5.61, -19.92, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(6.69, -21.63, 0);
	glVertex3f(6.10, -20.03, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(6.94, -19.49, 0);
	glVertex3f(7.35, -20.81, 0);
	glVertex3f(7.4, -20.92, 0);
	glVertex3f(7.58, -20.89, 0);
	glVertex3f(8.18, -21.06, 0);
	glVertex3f(8.43, -21.1, 0);
	glVertex3f(8.69, -21.17, 0);
	glVertex3f(8.89, -21.24, 0);
	glVertex3f(9.11, -21.31, 0);
	glVertex3f(9.33, -21.45, 0);
	glVertex3f(9.53, -21.55, 0);
	glVertex3f(9.65, -21.65, 0);
	glVertex3f(9.73, -21.73, 0);
	glVertex3f(9.74, -21.8, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.08, -21.2, 0);
	glVertex3f(6.93, -20.59, 0);
	glVertex3f(6.85, -20.31, 0);
	glVertex3f(6.76, -20.06, 0);
	glVertex3f(6.66, -19.82, 0);
	glVertex3f(6.55, -19.49, 0);
	glVertex3f(6.39, -19.12, 0);
	glVertex3f(6.26, -18.87, 0);
	glEnd();

	//******************circulos 
	glBegin(GL_TRIANGLE_FAN);//azul grande
	glColor3f(0.46f, 0.64f, 0.73f);
	glVertex3f(9.94, -17.18, 0);
	glVertex3f(9.94, -15.03, 0);
	glVertex3f(9.97, -14.99, 0);
	glVertex3f(9.62, -14.96, 0);
	glVertex3f(9.48, -14.95, 0);
	glVertex3f(9.34, -14.94, 0);
	glVertex3f(9.13, -14.92, 0);
	glVertex3f(9, -14.93, 0);
	glVertex3f(8.84, -14.95, 0);
	glVertex3f(8.7, -15, 0);
	glVertex3f(8.57, -15.03, 0);
	glVertex3f(8.4, -15.09, 0);
	glVertex3f(8.28, -15.16, 0);//*
	glVertex3f(8.14, -15.22, 0);
	glVertex3f(8, -15.33, 0);
	glVertex3f(7.9, -15.46, 0);
	glVertex3f(7.76, -15.52, 0);
	glVertex3f(7.64, -15.62, 0);
	glVertex3f(7.54, -15.74, 0);
	glVertex3f(7.46, -15.84, 0);
	glVertex3f(7.37, -15.98, 0);//*
	glVertex3f(7.28, -16.16, 0);
	glVertex3f(7.21, -16.27, 0);
	glVertex3f(7.16, -16.41, 0);
	glVertex3f(7.11, -16.51, 0);
	glVertex3f(7.06, -16.69, 0);
	glVertex3f(7.01, -16.86, 0);
	glVertex3f(7, -16.98, 0);
	glVertex3f(7, -17.1, 0);
	glVertex3f(7.01, -17.25, 0);
	glVertex3f(7.03, -17.39, 0);
	glVertex3f(7.04, -17.57, 0);
	glVertex3f(7.09, -17.75, 0);
	glVertex3f(7.15, -17.92, 0);
	glVertex3f(7.17, -18.03, 0);
	glVertex3f(7.23, -18.2, 0);
	glVertex3f(7.32, -18.31, 0);
	glVertex3f(7.38, -18.41, 0);
	glVertex3f(7.48, -18.56, 0);
	glVertex3f(7.58, -18.66, 0);
	glVertex3f(7.62, -18.73, 0);
	glVertex3f(7.76, -18.87, 0);
	glVertex3f(7.84, -18.95, 0);
	glVertex3f(7.97, -19.06, 0);
	glVertex3f(8.07, -19.12, 0);
	glVertex3f(8.18, -19.2, 0);
	glVertex3f(8.29, -19.24, 0);
	glVertex3f(8.41, -19.3, 0);
	glVertex3f(8.55, -19.37, 0);
	glVertex3f(8.68, -19.4, 0);
	glVertex3f(8.81, -19.44, 0);
	glVertex3f(8.93, -19.47, 0);
	glVertex3f(9.07, -19.47, 0);
	glVertex3f(9.24, -19.48, 0);
	glVertex3f(9.38, -19.49, 0);
	glVertex3f(9.55, -19.47, 0);
	glVertex3f(9.7, -19.42, 0);
	glVertex3f(9.81, -19.4, 0);
	glVertex3f(9.94, -19.33, 0);
	glEnd();
	glColor3f(0.8f, 0.91f, 0.94f);
	glBegin(GL_POLYGON);//brillo
	glVertex3f(8.28, -15.16, 0);//*
	glVertex3f(8.14, -15.22, 0);
	glVertex3f(8, -15.33, 0);
	glVertex3f(7.9, -15.46, 0);
	glVertex3f(7.76, -15.52, 0);
	glVertex3f(7.64, -15.62, 0);
	glVertex3f(7.54, -15.74, 0);
	glVertex3f(7.46, -15.84, 0);
	glVertex3f(7.37, -15.98, 0);
	glVertex3f(8.08, -16.11, 0);
	glVertex3f(8.44, -15.66, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.25);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.94, -15.03, 0);
	glVertex3f(9.97, -14.99, 0);
	glVertex3f(9.62, -14.96, 0);
	glVertex3f(9.48, -14.95, 0);
	glVertex3f(9.34, -14.94, 0);
	glVertex3f(9.13, -14.92, 0);
	glVertex3f(9, -14.93, 0);
	glVertex3f(8.84, -14.95, 0);
	glVertex3f(8.7, -15, 0);
	glVertex3f(8.57, -15.03, 0);
	glVertex3f(8.4, -15.09, 0);
	glVertex3f(8.28, -15.16, 0);//*
	glVertex3f(8.14, -15.22, 0);
	glVertex3f(8, -15.33, 0);
	glVertex3f(7.9, -15.46, 0);
	glVertex3f(7.76, -15.52, 0);
	glVertex3f(7.64, -15.62, 0);
	glVertex3f(7.54, -15.74, 0);
	glVertex3f(7.46, -15.84, 0);
	glVertex3f(7.37, -15.98, 0);//*
	glVertex3f(7.28, -16.16, 0);
	glVertex3f(7.21, -16.27, 0);
	glVertex3f(7.16, -16.41, 0);
	glVertex3f(7.11, -16.51, 0);
	glVertex3f(7.06, -16.69, 0);
	glVertex3f(7.01, -16.86, 0);
	glVertex3f(7, -16.98, 0);
	glVertex3f(7, -17.1, 0);
	glVertex3f(7.01, -17.25, 0);
	glVertex3f(7.03, -17.39, 0);
	glVertex3f(7.04, -17.57, 0);
	glVertex3f(7.09, -17.75, 0);
	glVertex3f(7.15, -17.92, 0);
	glVertex3f(7.17, -18.03, 0);
	glVertex3f(7.23, -18.2, 0);
	glVertex3f(7.32, -18.31, 0);
	glVertex3f(7.38, -18.41, 0);
	glVertex3f(7.48, -18.56, 0);
	glVertex3f(7.58, -18.66, 0);
	glVertex3f(7.62, -18.73, 0);
	glVertex3f(7.76, -18.87, 0);
	glVertex3f(7.84, -18.95, 0);
	glVertex3f(7.97, -19.06, 0);
	glVertex3f(8.07, -19.12, 0);
	glVertex3f(8.18, -19.2, 0);
	glVertex3f(8.29, -19.24, 0);
	glVertex3f(8.41, -19.3, 0);
	glVertex3f(8.55, -19.37, 0);
	glVertex3f(8.68, -19.4, 0);
	glVertex3f(8.81, -19.44, 0);
	glVertex3f(8.93, -19.47, 0);
	glVertex3f(9.07, -19.47, 0);
	glVertex3f(9.24, -19.48, 0);
	glVertex3f(9.38, -19.49, 0);
	glVertex3f(9.55, -19.47, 0);
	glVertex3f(9.7, -19.42, 0);
	glVertex3f(9.81, -19.4, 0);
	glVertex3f(9.94, -19.33, 0);
	glEnd();
	glBegin(GL_TRIANGLE_FAN);//verde grande
	glColor3f(0.15f, 0.41f, 0.29f);
	glVertex3f(9.94, -17.18, 0);
	glColor3f(0.20f, 0.7f, 0.43f);
	glVertex3f(9.94, -15.17, 0);
	glVertex3f(9.8, -15.16, 0);
	glVertex3f(9.67, -15.15, 0);
	glVertex3f(9.55, -15.15, 0);
	glVertex3f(9.36, -15.16, 0);
	glVertex3f(9.2, -15.18, 0);
	glVertex3f(9.06, -15.21, 0);
	glVertex3f(8.95, -15.24, 0);
	glVertex3f(8.81, -15.29, 0);
	glVertex3f(8.71, -15.33, 0);
	glVertex3f(8.6, -15.39, 0);
	glVertex3f(8.5, -15.45, 0);
	glVertex3f(8.38, -15.52, 0);
	glVertex3f(8.32, -15.56, 0);
	glVertex3f(8.20, -15.66, 0);
	glVertex3f(8.11, -15.75, 0);
	glVertex3f(8.06, -15.8, 0);
	glVertex3f(8, -15.88, 0);
	glVertex3f(7.93, -15.98, 0);
	glVertex3f(7.85, -16.09, 0);
	glVertex3f(7.78, -16.19, 0);
	glVertex3f(7.73, -16.33, 0);
	glVertex3f(7.67, -16.47, 0);
	glVertex3f(7.61, -16.63, 0);
	glVertex3f(7.59, -16.72, 0);
	glVertex3f(7.57, -16.86, 0);
	glVertex3f(7.54, -16.97, 0);
	glVertex3f(7.53, -17.18, 0);
	glVertex3f(7.58, -17.44, 0);
	glVertex3f(7.61, -17.57, 0);
	glVertex3f(7.66, -17.72, 0);
	glVertex3f(7.71, -17.86, 0);
	glVertex3f(7.77, -18, 0);
	glVertex3f(7.85, -18.13, 0);
	glVertex3f(7.92, -18.27, 0);
	glVertex3f(8.01, -18.38, 0);
	glVertex3f(8.11, -18.5, 0);
	glVertex3f(8.22, -18.65, 0);
	glVertex3f(8.33, -18.7, 0);
	glVertex3f(8.43, -18.78, 0);
	glVertex3f(8.54, -18.85, 0);
	glVertex3f(8.68, -18.93, 0);
	glVertex3f(8.82, -18.99, 0);
	glVertex3f(8.96, -19.05, 0);
	glVertex3f(9.1, -19.09, 0);
	glVertex3f(9.24, -19.13, 0);
	glVertex3f(9.48, -19.13, 0);
	glVertex3f(9.68, -19.11, 0);
	glVertex3f(9.81, -19.11, 0);
	glVertex3f(9.94, -19.07, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.25);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.94, -15.17, 0);
	glVertex3f(9.8, -15.16, 0);
	glVertex3f(9.67, -15.15, 0);
	glVertex3f(9.55, -15.15, 0);
	glVertex3f(9.36, -15.16, 0);
	glVertex3f(9.2, -15.18, 0);
	glVertex3f(9.06, -15.21, 0);
	glVertex3f(8.95, -15.24, 0);
	glVertex3f(8.81, -15.29, 0);
	glVertex3f(8.71, -15.33, 0);
	glVertex3f(8.6, -15.39, 0);
	glVertex3f(8.5, -15.45, 0);
	glVertex3f(8.38, -15.52, 0);
	glVertex3f(8.32, -15.56, 0);
	glVertex3f(8.20, -15.66, 0);
	glVertex3f(8.11, -15.75, 0);
	glVertex3f(8.06, -15.8, 0);
	glVertex3f(8, -15.88, 0);
	glVertex3f(7.93, -15.98, 0);
	glVertex3f(7.85, -16.09, 0);
	glVertex3f(7.78, -16.19, 0);
	glVertex3f(7.73, -16.33, 0);
	glVertex3f(7.67, -16.47, 0);
	glVertex3f(7.61, -16.63, 0);
	glVertex3f(7.59, -16.72, 0);
	glVertex3f(7.57, -16.86, 0);
	glVertex3f(7.54, -16.97, 0);
	glVertex3f(7.53, -17.18, 0);
	glVertex3f(7.58, -17.44, 0);
	glVertex3f(7.61, -17.57, 0);
	glVertex3f(7.66, -17.72, 0);
	glVertex3f(7.71, -17.86, 0);
	glVertex3f(7.77, -18, 0);
	glVertex3f(7.85, -18.13, 0);
	glVertex3f(7.92, -18.27, 0);
	glVertex3f(8.01, -18.38, 0);
	glVertex3f(8.11, -18.5, 0);
	glVertex3f(8.22, -18.65, 0);
	glVertex3f(8.33, -18.7, 0);
	glVertex3f(8.43, -18.78, 0);
	glVertex3f(8.54, -18.85, 0);
	glVertex3f(8.68, -18.93, 0);
	glVertex3f(8.82, -18.99, 0);
	glVertex3f(8.96, -19.05, 0);
	glVertex3f(9.1, -19.09, 0);
	glVertex3f(9.24, -19.13, 0);
	glVertex3f(9.48, -19.13, 0);
	glVertex3f(9.68, -19.11, 0);
	glVertex3f(9.81, -19.11, 0);
	glVertex3f(9.94, -19.07, 0);
	glEnd();
	glBegin(GL_TRIANGLE_FAN);//verde chico
	glColor3f(1.0f, 1.0f, 0.95f);
	glVertex3f(8.71, -16.09, 0);
	glColor3f(0.55f, 0.92f, 0.53f);
	glVertex3f(9.17, -16, 0);
	glVertex3f(9.16, -15.94, 0);
	glVertex3f(9.12, -15.87, 0);
	glVertex3f(9.06, -15.8, 0);
	glVertex3f(9.03, -15.76, 0);
	glVertex3f(8.95, -15.69, 0);
	glVertex3f(8.89, -15.67, 0);
	glVertex3f(8.78, -15.65, 0);
	glVertex3f(8.71, -15.65, 0);
	glVertex3f(8.64, -15.67, 0);
	glVertex3f(8.55, -15.69, 0);
	glVertex3f(8.48, -15.73, 0);
	glVertex3f(8.43, -15.77, 0);
	glVertex3f(8.36, -15.84, 0);
	glVertex3f(8.33, -15.91, 0);
	glVertex3f(8.31, -15.95, 0);
	glVertex3f(8.28, -16.02, 0);
	glVertex3f(8.26, -16.09, 0);
	glVertex3f(8.27, -16.16, 0);
	glVertex3f(8.27, -16.26, 0);
	glVertex3f(8.29, -16.3, 0);
	glVertex3f(8.34, -16.37, 0);
	glVertex3f(8.4, -16.46, 0);
	glVertex3f(8.44, -16.51, 0);
	glVertex3f(8.5, -16.55, 0);
	glVertex3f(8.57, -16.58, 0);
	glVertex3f(8.67, -16.61, 0);
	glVertex3f(8.75, -16.6, 0);
	glVertex3f(8.82, -16.58, 0);
	glVertex3f(8.9, -16.54, 0);
	glVertex3f(9, -16.49, 0);
	glVertex3f(9.06, -16.45, 0);
	glVertex3f(9.1, -16.4, 0);
	glVertex3f(9.15, -16.33, 0);
	glVertex3f(9.17, -16.26, 0);
	glVertex3f(9.19, -16.19, 0);
	glVertex3f(9.19, -16.12, 0);
	glVertex3f(9.18, -16.08, 0);
	glVertex3f(9.17, -16, 0);
	glEnd();

	//************************* CASCO ZERO ************
	//glVertex3f(4.94, -9.42, 0);//------------- PICO DEL CASCO ----------
	// glColor3f(0.9f, 0.3f, 0.05f); // ------ color del casco
	

	glColor3f(0.75f, 0.823f, 0.827f);// sombra del casco en la parte blanca
	glBegin(GL_POLYGON);
	glVertex3f(4.52, -4.76, 0);
	glVertex3f(6.79, -4.76, 0);// punto gema azzul
	glVertex3f(7.03, -5.54, 0);// punto del pico
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(4.52, -8.62, 0);
	glEnd();
	glBegin(GL_POLYGON);// sombra del casco en la parte blanca 2
	glVertex3f(7.03, -5.54, 0);
	glVertex3f(6.79, -4.76, 0);// punto gema azzul
	glVertex3f(6.93, -4.51, 0);
	glVertex3f(7.02, -4.3, 0);
	glVertex3f(7.1, -4.11, 0);
	glVertex3f(7.18, -3.85, 0);
	glVertex3f(7.19, -2.52, 0);
	glVertex3f(7.99, -2.52, 0);
	glVertex3f(7.99, -5.44, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glVertex3f(7.19, -2.52, 0);
	glVertex3f(7.14, -2.21, 0);
	glVertex3f(7.08, -2, 0);
	glVertex3f(7.06, -1.83, 0);
	glVertex3f(7, -1.63, 0);
	glVertex3f(6.91, -1.4, 0);
	glVertex3f(6.79, -1.23, 0);
	glVertex3f(6.69, -1.08, 0);
	glVertex3f(6.6, -0.98, 0);
	glVertex3f(6.55, -0.91, 0);//**
	glVertex3f(6.77, -0.96, 0);
	glVertex3f(6.95, -1.03, 0);
	glVertex3f(7.13, -1.12, 0);
	glVertex3f(7.24, -1.17, 0);//**// punto clave union blanco y rojo
	glVertex3f(7.99, -1.31, 0);
	glVertex3f(7.99, -2.52, 0);
	glEnd();
	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.2);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(4.52, -8.62, 0);
	glEnd();
	glLineWidth(2.3);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -.68, 0);
	glVertex3f(4.66, -.65, 0);
	glVertex3f(4.9, -.64, 0);
	glVertex3f(5.12, -.66, 0);
	glVertex3f(5.29, -.67, 0);
	glVertex3f(5.5, -.7, 0);
	glVertex3f(5.59, -.71, 0);
	glVertex3f(5.86, -.75, 0);
	glVertex3f(6.03, -.78, 0);
	glVertex3f(6.22, -.84, 0);
	glVertex3f(6.42, -.86, 0);
	glVertex3f(6.55, -0.91, 0);
	glVertex3f(6.77, -0.96, 0);
	glVertex3f(6.95, -1.03, 0);
	glVertex3f(7.13, -1.12, 0);
	glVertex3f(7.24, -1.17, 0);
	glEnd();
	glLineWidth(1.4);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.01, -1.08, 0);
	glVertex3f(7.06, -1.31, 0);
	glVertex3f(7.09, -1.48, 0);
	glVertex3f(7.14, -1.66, 0);
	glVertex3f(7.18, -1.83, 0);
	glVertex3f(7.21, -2.05, 0);
	glVertex3f(7.27, -2.38, 0);
	glVertex3f(7.26, -3.9, 0);
	glVertex3f(7.23, -4.13, 0);
	glVertex3f(7.22, -4.34, 0);
	glVertex3f(7.19, -4.56, 0);
	glVertex3f(7.16, -4.76, 0);
	glVertex3f(7.13, -4.97, 0);
	glVertex3f(7.09, -5.22, 0);
	glVertex3f(7.03, -5.54, 0);
	glEnd();
	glLineWidth(3.2);//delineado
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -3.20, 0);
	glVertex3f(4.98, -3.2, 0);
	glVertex3f(5.49, -3.21, 0);
	glVertex3f(5.72, -3.22, 0);
	glVertex3f(5.88, -3.25, 0);
	glVertex3f(5.98, -3.28, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -3.20 - c, 0);
	glVertex3f(4.98, -3.2 - c, 0);
	glVertex3f(5.49, -3.21 - c, 0);
	glVertex3f(5.72, -3.22 - c, 0);
	glVertex3f(5.88, -3.25 - c, 0);
	glVertex3f(5.98, -3.28 - c, 0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.14f, 0.33f, 0.66f);// gema color AZUL 1
	glVertex3f(4.93, -5.95, 0);// pivote
	glColor3f(0.34f, 0.84f, 1.0f);
	glVertex3f(4.93, -8.11, 0);
	glVertex3f(4.52, -7.58, 0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(4.52, -5.72, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.14f, 0.33f, 0.66f);// gema color AZUL 2
	glVertex3f(4.93, -5.95, 0);// pivote
	glColor3f(0.34f, 0.84f, 1.0f);
	glVertex3f(4.93, -8.11, 0);//*
	glVertex3f(5.45, -7.51, 0);
	glVertex3f(6.09, -6.52, 0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(6.73, -5.01, 0);
	glVertex3f(6.79, -4.76, 0);//*
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0.34f, 0.84f, 1.0f);// gema color AZUL 1
	glVertex3f(4.93, -5.95, 0);// pivote
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(4.52, -5.72, 0);
	glVertex3f(4.52, -4.51, 0);
	glVertex3f(5.5, -4.51, 0);
	glVertex3f(5.97, -4.52, 0);
	glVertex3f(5.97, -4.52, 0);
	glVertex3f(6.46, -4.52, 0);
	glVertex3f(6.79, -4.76, 0);
	glEnd();

	glColor3f(0.19f, 0.34f, 0.64f);
	glLineWidth(1.2);//delineado-------------------
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.93, -8.11, 0);
	glVertex3f(4.52, -7.58, 0);
	glEnd();
	glLineWidth(1.2);//delineado-------------------
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.93, -8.11, 0);//*
	glVertex3f(5.45, -7.51, 0);
	glVertex3f(6.09, -6.52, 0);
	glVertex3f(6.73, -5.01, 0);
	glVertex3f(6.79, -4.76, 0);//*
	glEnd();
	glLineWidth(1.2);//delineado-------------------
	glBegin(GL_LINE_STRIP);
	glVertex3f(4.52, -4.51, 0);
	glVertex3f(5.5, -4.51, 0);
	glVertex3f(5.97, -4.52, 0);
	glVertex3f(5.97, -4.52, 0);
	glVertex3f(6.46, -4.52, 0);
	glVertex3f(6.79, -4.76, 0);
	glEnd();
	//glVertex3f(4.94, -9.42, 0);//------------- PICO DEL CASCO ----------
	glColor3f(0.9f, 0.3f, 0.05f);// casco parte clara
	glBegin(GL_POLYGON);
	glVertex3f(8.66, -.98, 0);
	glVertex3f(8.77, -.49, 0);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(8.87, -0.0, 0);
	glColor3f(0.9f, 0.3f, 0.05f);
	glVertex3f(8.34, -0.0, 0);//**
	glVertex3f(7.89, -.53, 0);
	glVertex3f(7.61, -.8, 0);
	glVertex3f(7.2, -1.14, 0);//**
	glVertex3f(7.37, -1.27, 0);
	glVertex3f(7.48, -1.34, 0);
	glVertex3f(7.64, -1.48, 0);
	glVertex3f(7.73, -1.66, 0);
	glVertex3f(7.79, -1.83, 0);
	glVertex3f(7.83, -2.05, 0);
	glVertex3f(7.86, -2.35, 0);
	glVertex3f(7.85, -2.72, 0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex3f(8.66, -.98, 0);
	glVertex3f(8.53, -1.51, 0);
	glVertex3f(7.03, -5.54, 0);
	glVertex3f(7.85, -2.72, 0);
	glEnd();

	glColor3f(0.0f, 0.0f, 0.0f);// triangulo ojo
	glBegin(GL_POLYGON);
	glVertex3f(7.78, -7.99, 0);
	glVertex3f(8.95, -6.38, 0);
	glVertex3f(8.18, -5.92, 0);
	glEnd();

	glColor3f(0.7f, 0.2f, 0.05f);// casco 1
	glBegin(GL_POLYGON);
	glVertex3f(8.63, -5.88, 0);//*
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(7.03, -5.54, 0);
	glVertex3f(8.53, -1.51, 0);
	glVertex3f(8.66, -.98, 0);
	glVertex3f(8.77, -.49, 0);
	glVertex3f(8.87, -0.0, 0);//*
	glVertex3f(9.41, -0.0, 0);//**
	glVertex3f(9.59, -.49, 0);
	glVertex3f(9.73, -.97, 0);
	glVertex3f(9.94, -2.12, 0);
	glVertex3f(9.94, -5.88, 0);
	glEnd();
	glBegin(GL_POLYGON);//2
	glVertex3f(9.94, -5.88, 0);
	glVertex3f(8.63, -5.88, 0);
	glVertex3f(8.19, -6.31, 0);//*
	glVertex3f(8.25, -6.59, 0);
	glVertex3f(8.27, -6.8, 0);
	glVertex3f(8.24, -7.08, 0);
	glVertex3f(8.77, -6.59, 0);
	glVertex3f(9.94, -9.35, 0);
	glEnd();
	glBegin(GL_POLYGON);//3
	glVertex3f(9.94, -9.35, 0);//**
	glVertex3f(9.8, -9.64, 0);
	glVertex3f(9.67, -9.84, 0);
	glVertex3f(9.54, -10.02, 0);
	glVertex3f(9.37, -10.23, 0);
	glVertex3f(9.2, -10.42, 0);
	glVertex3f(8.74, -10.8, 0);
	glVertex3f(8.53, -10.97, 0);
	glVertex3f(8.28, -11.16, 0);
	glVertex3f(8.03, -11.35, 0);
	glVertex3f(7.62, -11.62, 0);//**
	glVertex3f(6.84, -12.06, 0);//*
	glVertex3f(6.31, -11.92, 0);
	glVertex3f(7.07, -9.62, 0);
	glEnd();
	glBegin(GL_POLYGON);//4
	glVertex3f(7.67, -9.8, 0);
	glVertex3f(8.77, -6.59, 0);
	glVertex3f(9.94, -9.35, 0);
	glEnd();

	glBegin(GL_POLYGON);//5
	glColor3f(0.9f, 0.3f, 0.05f);
	glVertex3f(7.67, -9.8, 0);
	glVertex3f(7.87, -9.62, 0);
	glVertex3f(8.01, -9.43, 0);
	glVertex3f(8.16, -9.24, 0);
	glVertex3f(8.26, -9.06, 0);
	glVertex3f(8.33, -8.92, 0);
	glVertex3f(8.41, -8.78, 0);
	glVertex3f(8.5, -8.54, 0);
	glVertex3f(8.6, -8.25, 0);
	glVertex3f(8.65, -8.07, 0);
	glVertex3f(8.71, -7.8, 0);
	glVertex3f(8.73, -7.64, 0);
	glVertex3f(8.76, -7.44, 0);
	glVertex3f(8.81, -7.19, 0);
	glVertex3f(8.77, -6.59, 0);
	glVertex3f(8.24, -7.08, 0);
	glVertex3f(8.25, -7.39, 0);
	glVertex3f(8.23, -7.61, 0);
	glVertex3f(8.19, -7.8, 0);
	glVertex3f(8.14, -8.05, 0);
	glVertex3f(8.07, -8.27, 0);
	glVertex3f(7.98, -8.5, 0);
	glVertex3f(7.89, -8.68, 0);
	glVertex3f(7.78, -8.89, 0);
	glVertex3f(7.67, -9.03, 0);
	glVertex3f(7.58, -9.18, 0);
	glVertex3f(7.47, -9.3, 0);
	glVertex3f(7.26, -9.49, 0);
	glVertex3f(7.07, -9.62, 0);
	glEnd();

	
	glVertex3f(8.63, -5.88, 0);


	glColor3f(0.0f, 0.0f, 0.0f);
	glLineWidth(1.2);//delineado-------------------
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.63, -5.88, 0);//*
	glVertex3f(4.94, -9.42, 0);
	glVertex3f(7.03, -5.54, 0);
	glVertex3f(8.53, -1.51, 0);
	glVertex3f(8.66, -.98, 0);
	glVertex3f(8.77, -.49, 0);
	glVertex3f(8.87, -0.0, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.2, -1.14, 0);//**
	glVertex3f(7.37, -1.27, 0);
	glVertex3f(7.48, -1.34, 0);
	glVertex3f(7.64, -1.48, 0);
	glVertex3f(7.73, -1.66, 0);
	glVertex3f(7.79, -1.83, 0);
	glVertex3f(7.83, -2.05, 0);
	glVertex3f(7.86, -2.35, 0);
	glVertex3f(7.85, -2.72, 0);
	glVertex3f(7.03, -5.54, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.62, -11.62, 0);//**
	glVertex3f(6.84, -12.06, 0);//*
	glVertex3f(6.31, -11.92, 0);
	glVertex3f(7.07, -9.62, 0);//*
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(6.84, -12.06, 0);//*
	glVertex3f(7.67, -9.8, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.67, -9.8, 0);
	glVertex3f(7.87, -9.62, 0);
	glVertex3f(8.01, -9.43, 0);
	glVertex3f(8.16, -9.24, 0);
	glVertex3f(8.26, -9.06, 0);
	glVertex3f(8.33, -8.92, 0);
	glVertex3f(8.41, -8.78, 0);
	glVertex3f(8.5, -8.54, 0);
	glVertex3f(8.6, -8.25, 0);
	glVertex3f(8.65, -8.07, 0);
	glVertex3f(8.71, -7.8, 0);
	glVertex3f(8.73, -7.64, 0);
	glVertex3f(8.76, -7.44, 0);
	glVertex3f(8.81, -7.19, 0);
	glVertex3f(8.77, -6.59, 0);
	glVertex3f(8.77, -6.41, 0);
	glVertex3f(8.74, -6.26, 0);
	glVertex3f(8.71, -6.1, 0);
	glVertex3f(8.63, -5.88, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.24, -7.08, 0);
	glVertex3f(8.25, -7.39, 0);
	glVertex3f(8.23, -7.61, 0);
	glVertex3f(8.2, -7.8, 0);
	glVertex3f(8.14, -8.05, 0);
	glVertex3f(8.07, -8.27, 0);
	glVertex3f(7.98, -8.5, 0);
	glVertex3f(7.89, -8.68, 0);
	glVertex3f(7.78, -8.89, 0);
	glVertex3f(7.67, -9.03, 0);
	glVertex3f(7.58, -9.18, 0);
	glVertex3f(7.47, -9.3, 0);
	glVertex3f(7.26, -9.49, 0);
	glVertex3f(7.07, -9.62, 0);
	glEnd();
	glLineWidth(1.0);
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.78, -10.12, 0);
	glVertex3f(9.94, -10.11, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.27, -10.98, 0);
	glVertex3f(9.44, -10.9, 0);
	glVertex3f(9.53, -10.89, 0);
	glVertex3f(9.84, -10.88, 0);
	glVertex3f(9.94, -10.93, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.72, -11.89, 0);
	glVertex3f(8.85, -11.85, 0);
	glVertex3f(9, -11.81, 0);
	glVertex3f(9.17, -11.78, 0);
	glVertex3f(9.36, -11.78, 0);
	glVertex3f(9.57, -11.85, 0);
	glVertex3f(9.74, -11.94, 0);
	glVertex3f(9.84, -12.01, 0);
	glVertex3f(9.94, -12.1, 0);
	glEnd();


	glLineWidth(2.4);//delineado-------------------
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.41, -0.0, 0);//**
	glVertex3f(9.59, -.49, 0);
	glVertex3f(9.73, -.97, 0);
	glVertex3f(9.94, -2.12, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.34, -0.0, 0);//**
	glVertex3f(7.89, -.53, 0);
	glVertex3f(7.61, -.8, 0);
	glVertex3f(7.2, -1.14, 0);
	glEnd();
	glLineWidth(2.5);
	glBegin(GL_LINE_STRIP);
	glVertex3f(9.94, -9.35, 0);//**
	glVertex3f(9.8, -9.64, 0);
	glVertex3f(9.67, -9.84, 0);
	glVertex3f(9.54, -10.02, 0);
	glVertex3f(9.37, -10.23, 0);
	glVertex3f(9.2, -10.42, 0);
	glVertex3f(8.74, -10.8, 0);
	glVertex3f(8.53, -10.97, 0);
	glVertex3f(8.28, -11.16, 0);
	glVertex3f(8.03, -11.35, 0);
	glVertex3f(7.62, -11.62, 0);//**
	glEnd();

	glLineWidth(3);//lineas en el casco
	glBegin(GL_LINE_STRIP);
	glVertex3f(8.3, -9.77, 0);
	glVertex3f(8.23, -10.19, 0);
	glVertex3f(8.14, -10.48, 0);
	glVertex3f(8.07, -10.8, 0);
	glVertex3f(7.89, -10.95, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex3f(7.98, -9.94, 0);
	glVertex3f(7.92, -10.34, 0);
	glVertex3f(7.83, -10.69, 0);
	glVertex3f(7.74, -10.97, 0);
	glVertex3f(7.64, -11.14, 0);
	glEnd();

	glFlush();
	glPopMatrix();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
	if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}
	glViewport(0,0,width,height);

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	glOrtho(0, 9.94, 0, 21.8, 0, -20);						// Dimensiones de mi Viewport

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (317.1359223, 695);	// Tamaño de la Ventana
  glutInitWindowPosition (300, 0);	//Posicion de la Ventana
  glutCreateWindow    ("TAREA 2 [MEGAMAN/ZERO]"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

