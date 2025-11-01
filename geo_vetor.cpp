#include <GL/glut.h>  // Biblioteca GLUT

void display() {
    glClear(GL_COLOR_BUFFER_BIT);      // Limpa a tela
    glBegin(GL_TRIANGLES);             // Começa a desenhar um triângulo
        glColor3f(1.0, 0.0, 0.0);     // Vermelho
        glVertex2f(-0.5, -0.5);
        glColor3f(0.0, 1.0, 0.0);     // Verde
        glVertex2f(0.5, -0.5);
        glColor3f(0.0, 0.0, 1.0);     // Azul
        glVertex2f(0.0, 0.5);
    glEnd();
    glFlush();                         // Renderiza o que foi desenhado
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);             // Inicializa o GLUT
    glutCreateWindow("Primeiro OpenGL");
    glutDisplayFunc(display);          // Função de renderização
    glutMainLoop();                    // Loop principal
    return 0;
}

