#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

void init(void) {
    glClearColor(0.0, 0.0, 0.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}
void lineSegment(void) {
//Ground

glColor3f(0.9,0.5,0.4 );
    glBegin(GL_POLYGON);
    glVertex3f(0,0,0);
    glVertex3f(800,0,0);
    glVertex3f(800,100,0);
    glVertex3f(0,100,0);
    glEnd();

//ground left stair

glColor3f(1,1,1 );
    glBegin(GL_POLYGON);
    glVertex3f(50,0,0);
    glVertex3f(80,0,0);
    glVertex3f(140,100,0);
    glVertex3f(120,100,0);
    glEnd();


//ground middle stair

glColor3f(1,1,1 );
    glBegin(GL_POLYGON);
    glVertex3f(385,0,0);
    glVertex3f(415,0,0);
    glVertex3f(405,100,0);
    glVertex3f(395,100,0);
    glEnd();

//ground right stair

glColor3f(1,1,1 );
    glBegin(GL_POLYGON);
    glVertex3f(720,0,0);
    glVertex3f(750,0,0);
    glVertex3f(690,100,0);
    glVertex3f(670,100,0);
    glEnd();
//sky
glColor3f(0.4,0.5,0.8  );
    glBegin(GL_POLYGON);
    glVertex3f(0,100,0);
    glVertex3f(800,100,0);
    glVertex3f(800,800,0);
    glVertex3f(0,800,0);
    glEnd();

//Minar floor

glColor3f( 1,0.2,0.3    );
    glBegin(GL_POLYGON);
    glVertex3f(30,100,0);
    glVertex3f(770,100,0);
    glVertex3f(710,130,0);
    glVertex3f(90,130,0);
    glEnd();

//red circle

    float theta;
    int posX = 400;
    int posY = 300;
    int radio = 120;

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        theta = i*3.1416/180;
        glVertex2f(posX + radio*cos(theta), posY + radio*sin(theta));
    }
    glEnd();



    //Main pillar
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(300,130,0);
        glVertex3f(500,130,0);
        glVertex3f(500,145,0);
        glVertex3f(300,145,0);
        glEnd();
//right
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(485,145,0);
        glVertex3f(500,145,0);
        glVertex3f(500,450,0);
        glVertex3f(485,450,0);
        glEnd();
//right uo
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(485,450,0);
        glVertex3f(500,450,0);
        glVertex3f(520,600,0);
        glVertex3f(505,600,0);

        glEnd();
//left
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(300,145,0);
        glVertex3f(315,145,0);
        glVertex3f(315,450,0);
        glVertex3f(300,450,0);
        glEnd();


glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(300,450,0);
        glVertex3f(315,450,0);
        glVertex3f(295,600,0);
         glVertex3f(280,600,0);

        glEnd();
//middle
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(392.5,145,0);
        glVertex3f(407.5,145,0);
        glVertex3f(407.5,450,0);
        glVertex3f(392.5,450,0);
        glEnd();

 //middle up
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(392.5,450,0);
        glVertex3f(407.5,450,0);
        glVertex3f(404,600,0);
        glVertex3f(396,600,0);

        glEnd();

//up
glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex3f(280,600,0);
        glVertex3f(520,600,0);
        glVertex3f(520,615,0);
        glVertex3f(280,615,0);

        glEnd();
//shik
glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(325,145,0);
        glVertex3f(325,600,0);
        glEnd();
glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(350,145,0);
        glVertex3f(350,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(375,145,0);
        glVertex3f(375,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(425,145,0);
        glVertex3f(425,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(450,145,0);
        glVertex3f(450,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(475,145,0);
        glVertex3f(475,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(315,450,0);
        glVertex3f(485,450,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(310,500,0);
        glVertex3f(310,600,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(490,500,0);
        glVertex3f(490,600,0);
        glEnd();







//right first
glColor3f(1,1,1);//left
        glBegin(GL_POLYGON);
        glVertex3f(530,140,0);
        glVertex3f(545,145,0);
        glVertex3f(545,460,0);
        glVertex3f(530,455,0);
        glEnd();

glColor3f(1,1,1);//bottom
        glBegin(GL_POLYGON);
        glVertex3f(530,130,0);
        glVertex3f(600,130,0);
        glVertex3f(600,145,0);
        glVertex3f(530,145,0);
        glEnd();


glColor3f(1,1,1);//right
        glBegin(GL_POLYGON);
        glVertex3f(585,145,0);
        glVertex3f(600,145,0);
        glVertex3f(600,470,0);
        glVertex3f(585,470,0);
        glEnd();

glColor3f(1,1,1);//up
        glBegin(GL_POLYGON);
        glVertex3f(530,450,0);
        glVertex3f(600,470,0);
        glVertex3f(600,485,0);
        glVertex3f(530,470,0);

        glEnd();


glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(555,145,0);
        glVertex3f(555,458,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(565,145,0);
        glVertex3f(565,460,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(575,145,0);
        glVertex3f(575,460,0);
        glEnd();





//blackshade
//glColor3f(0,0,0);
//        glBegin(GL_POLYGON);
//        glVertex3f(545,145,0);
//        glVertex3f(585,145,0);
//        glVertex3f(585,465,0);
//        glVertex3f(545,460,0);
//
//        glEnd();
// right piller end

//right most pillar
glColor3f(1,1,1);//bottom
        glBegin(GL_POLYGON);
        glVertex3f(630,130,0);
        glVertex3f(700,130,0);
        glVertex3f(700,145,0);
        glVertex3f(630,145,0);
        glEnd();

 glColor3f(1,1,1);//left
        glBegin(GL_POLYGON);
        glVertex3f(630,145,0);
        glVertex3f(645,145,0);
        glVertex3f(645,400,0);
        glVertex3f(630,390,0);
        glEnd();


 glColor3f(1,1,1);//right
        glBegin(GL_POLYGON);
        glVertex3f(685,145,0);
        glVertex3f(700,145,0);
        glVertex3f(700,410,0);
        glVertex3f(685,410,0);
        glEnd();


glColor3f(1,1,1);//up
        glBegin(GL_POLYGON);
        glVertex3f(630,390,0);
        glVertex3f(700,410,0);
        glVertex3f(700,425,0);
        glVertex3f(630,410,0);
        glEnd();



glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(655,145,0);
        glVertex3f(655,398,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(665,145,0);
        glVertex3f(665,400,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(675,145,0);
        glVertex3f(675,402,0);
        glEnd();

//


//redshade
//glColor3f(1,0,0);//up
//        glBegin(GL_POLYGON);
//        glVertex3f(645,145,0);
//        glVertex3f(685,145,0);
//        glVertex3f(685,410,0);
//        glVertex3f(645,400,0);
//        glEnd();

//left pillar
glColor3f(1,1,1);//bottom
        glBegin(GL_POLYGON);
        glVertex3f(200,130,0);
        glVertex3f(270,130,0);
        glVertex3f(270,145,0);
        glVertex3f(200,145,0);
        glEnd();
glColor3f(1,1,1);//left
        glBegin(GL_POLYGON);
        glVertex3f(200,145,0);
        glVertex3f(215,145,0);
        glVertex3f(215,470,0);
        glVertex3f(200,470,0);
        glEnd();

glColor3f(1,1,1);//right
        glBegin(GL_POLYGON);
        glVertex3f(255,145,0);
        glVertex3f(270,145,0);
        glVertex3f(270,460,0);
        glVertex3f(255,460,0);
        glEnd();

glColor3f(1,1,1);//up
        glBegin(GL_POLYGON);
        glVertex3f(200,470,0);
        glVertex3f(270,455,0);
        glVertex3f(270,470,0);
        glVertex3f(200,485,0);
        glEnd();


glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(225,145,0);
        glVertex3f(225,463,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(225,145,0);
        glVertex3f(225,463,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(235,145,0);
        glVertex3f(235,463,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(245,145,0);
        glVertex3f(245,461,0);
        glEnd();


//glColor3f(0,0,0);//blackshade
//        glBegin(GL_POLYGON);
//        glVertex3f(215,145,0);
//        glVertex3f(255,145,0);
//        glVertex3f(255,460,0);
//        glVertex3f(215,470,0);
//        glEnd();











//left most pillar
glColor3f(1,1,1);//bottom
        glBegin(GL_POLYGON);
        glVertex3f(100,130,0);
        glVertex3f(170,130,0);
        glVertex3f(170,145,0);
        glVertex3f(100,145,0);
        glEnd();

glColor3f(1,1,1);//left
        glBegin(GL_POLYGON);
        glVertex3f(100,130,0);
        glVertex3f(115,130,0);
        glVertex3f(115,410,0);
        glVertex3f(100,410,0);
        glEnd();

glColor3f(1,1,1);//right
        glBegin(GL_POLYGON);
        glVertex3f(155,145,0);
        glVertex3f(170,145,0);
        glVertex3f(170,390,0);
        glVertex3f(155,400,0);
        glEnd();
glColor3f(1,1,1);//up
        glBegin(GL_POLYGON);
        glVertex3f(100,410,0);
        glVertex3f(170,390,0);
        glVertex3f(170,410,0);
        glVertex3f(100,425,0);
        glEnd();


glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(125,145,0);
        glVertex3f(125,405,0);
        glEnd();


glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(135,145,0);
        glVertex3f(135,401,0);
        glEnd();

glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(145,145,0);
        glVertex3f(145,395,0);
        glEnd();










//glColor3f(1,0,0);//red shade
//        glBegin(GL_POLYGON);
//        glVertex3f(115,145,0);
//        glVertex3f(155,145,0);
//        glVertex3f(155,400,0);
//        glVertex3f(115,410,0);
//        glEnd();


    glFlush();
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(650,600);
    glutCreateWindow("National Monument Shohid Minar: Ashikul Aziz Siddique");
    init();
    glutDisplayFunc(lineSegment);
    glutMainLoop();
}
