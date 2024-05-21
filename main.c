#include <windows.h>
#include <gl/gl.h>
#include <math.h>

float vert[] = {1,1,0, 1,-1,0, -1,-1,0, -1,1,0};
float xAlfa = 20;
float zAlfa = 0;
POINTFLOAT pos ={0,0};
float pyramid[] = {0,0,2,  1,1,0,  1,-1,0,  -1,-1,0,  -1,1,0, 1,1,0};
float cord[]= {0,0,0, 3,0,0, 0,0,0, 0,3,0, 0,0,0, 0,0,3};
float vertex[]={-0.2,-0.2,0, 0.2,-0.2,0, 0.2,0.2,0, -0.2,0.2,0};

float kub[]={
-1,-1,0, 1,-1,0, 1,1,0, -1,1,0,
-1,-1,0, -1,1,0, -1,1,1, -1,-1,1
-1,1,0, -1,1,1, 1,1,1, 1,1,0,
-1,1,0, -1,1,1, 1,1,1, 1,1,0,
-1,-1,0, -1,-1,1, -1,1,1, -1,1,0
-1,-1,1, 1,-1,1, 1,1,1, -1,1,1
};

void Drow()
{
    glNormal3f(0,0,1);
    glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3,GL_FLOAT,0,vertex);
        glDrawArrays(GL_TRIANGLE_FAN,0,4);
    glDisableClientState(GL_VERTEX_ARRAY);
}

void Draw_Cube(){
GLfloat vertices[] = {
 -0.5f, -0.5f, -0.5f,
 0.5f, -0.5f, -0.5f,
 0.5f, 0.5f, -0.5f,
 -0.5f, 0.5f, -0.5f,
 -0.5f, -0.5f, 0.5f,
 0.5f, -0.5f, 0.5f,
 0.5f, 0.5f, 0.5f,
 -0.5f, 0.5f, 0.5f
};
GLuint indices[] = {
 0, 1, 2,
 2, 3, 0,
 1, 5, 6,
 6, 2, 1,
 7, 6, 5,
 5, 4, 7,
 4, 0, 3,
 3, 7, 4,
 4, 5, 1,
 1, 0, 4,
 3, 2, 6,
 6, 7, 3
};

glEnableClientState(GL_VERTEX_ARRAY);
glVertexPointer(3, GL_FLOAT, 0, vertices);
glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, indices);
glDisableClientState(GL_VERTEX_ARRAY);
}

void Draw_Figure(){

GLfloat vertices2[] = {
0.5, 0, 0,              //0
0.456773, -0.203368, 0, //1
0.334565, -0.371572, 0, //2
0.154508, -0.475528, 0, //3
-0.052264, -0.497261, 0,//4
-0.25, -0.433013, 0,    //5
-0.404508, -0.293893, 0,//6
-0.489074, -0.103956, 0,//7
-0.489074, 0.103956, 0, //8
-0.404508, 0.293893, 0, //9
-0.25, 0.433013, 0,     //10
-0.052264, 0.497261, 0, //11
0.154508, 0.475528, 0,  //12
0.334565, 0.371572, 0,  //13
0.456773, 0.203368, 0,  //14

0.25, 0, 1,             //15
0.228386, -0.101684, 1, //16
0.167283, -0.185786, 1, //17
0.077254, -0.237764, 1, //18
-0.026132, -0.24863, 1, //19
-0.125, -0.216506, 1,   //20
-0.202254, -0.146946, 1,//21
-0.244537, -0.051978, 1,//22
-0.244537, 0.051978, 1, //23
-0.202254, 0.146946, 1, //24
-0.125, 0.216506, 1,    //25
-0.026132, 0.24863, 1,  //26
0.077254, 0.237764, 1,  //27
0.167283, 0.185786, 1,  //28
0.228386, 0.101684, 1,  //29

0.5, 0, 2,              //30
0.456773, -0.203368, 2, //31
0.334565, -0.371572, 2, //32
0.154508, -0.475528, 2, //33
-0.052264, -0.497261, 2,//34
-0.25, -0.433013, 2,    //35
-0.404508, -0.293893, 2,//36
-0.489074, -0.103956, 2,//37
-0.489074, 0.103956, 2, //38
-0.404508, 0.293893, 2, //39
-0.25, 0.433013, 2,     //40
-0.052264, 0.497261, 2, //41
0.154508, 0.475528, 2,  //42
0.334565, 0.371572, 2,  //43
0.456773, 0.203368, 2   //44
};

GLuint indices2chet[] = {
// НИЖНИЙ
0, 1, 16, 15,
1, 2, 17, 16,
2, 3, 18, 17,
3, 4, 19, 18,
4, 5, 20, 19,
5, 6, 21, 20,
6, 7, 22, 21,
7, 8, 23, 22,
8, 9, 24, 23,
9, 10, 25, 24,
10, 11, 26, 25,
11, 12, 27, 26,
12, 13, 28, 27,
13, 14, 29, 28,
14, 0, 15, 29,
//НИЖНИЙ

//ВЕРХНИЙ
15, 16, 31, 30,
16, 17, 32, 31,
17, 18, 33, 32,
18, 19, 34, 33,
19, 20, 35, 34,
20, 21, 36, 35,
21, 22, 37, 36,
22, 23, 38, 37,
23, 24, 39, 38,
24, 25, 40, 39,
25, 26, 41, 40,
26, 27, 42, 41,
27, 28, 43, 42,
28, 29, 44, 43,
29, 15, 30, 44
//ВЕРХНИЙ
};

GLuint indices2nechet1[] = {
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
};
GLuint indices2nechet2[] = {
15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29
};
GLuint indices2nechet3[] = {
30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44
};


glEnableClientState(GL_VERTEX_ARRAY);
glVertexPointer(3, GL_FLOAT, 0, vertices2);

glEnableClientState(GL_NORMAL_ARRAY);
glNormalPointer(GL_FLOAT, 0, vertices2);

glDrawElements(GL_POLYGON, 15, GL_UNSIGNED_INT, indices2nechet1);
glDrawElements(GL_POLYGON, 15, GL_UNSIGNED_INT, indices2nechet2);
glDrawElements(GL_POLYGON, 15, GL_UNSIGNED_INT, indices2nechet3);

glDrawElements(GL_QUADS, 120, GL_UNSIGNED_INT, indices2chet);

glDisableClientState(GL_VERTEX_ARRAY);
glDisableClientState(GL_NORMAL_ARRAY);
}

float i=0;

void Init_Material()
{
glEnable(GL_COLOR_MATERIAL); //разрешения использования
//материала
 glShadeModel(GL_SMOOTH); // сглаживает границы
 GLfloat material_ambient[] = { 0.2f, 0.2f, 0.2f, 0.5f };
 GLfloat material_diffuse[] = { 1.0f, 1.0f, 1.0f, 0.5f };
 GLfloat material_specular[] = { 1.0f, 1.0f, 1.0f, 32.0f };
 GLfloat material_shininess[] = { 50.0f }; //блеск материала
 glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT, material_ambient);
 glMaterialfv(GL_FRONT_AND_BACK, GL_DIFFUSE, material_diffuse);
 glMaterialfv(GL_FRONT_AND_BACK, GL_SPECULAR, material_specular);
 glMaterialfv(GL_FRONT_AND_BACK, GL_SHININESS, material_shininess);
}

void ShowWorld()
{
    glEnableClientState(GL_VERTEX_ARRAY);
    glVertexPointer(3, GL_FLOAT, 0, &vert);
    glNormal3f(0,0,1);
    for (int i = -10; i<5; i++)
    for (int j = -10; j<5; j++)
        {
        glPushMatrix();
            if ((i+j)%2==0) glColor4f(0, 0.5, 0, 1);
            else glColor4f(1,1,1,1);
            glTranslatef(i*2, j*2, 0);
            glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
            glPopMatrix();
        }
    glDisableClientState(GL_VERTEX_ARRAY);

    glPushMatrix();
        glTranslatef(4, 6 ,0.5);
        Init_Material();
        glColor4f(0.2,0,1, 0.1);
        Draw_Cube();
    glPopMatrix();

    glPushMatrix();
        glRotatef(i,0,1,0);
        i=i+0.5;
        float position[]={0,0,30,0};
        glLightfv(GL_LIGHT0,GL_POSITION, position);
        glTranslatef(0,0,30);
        glColor3f(1,1,1);
        Draw_Cube();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7,-9,0.2);
    glScalef(2, 2, 1);
    float a=1;
    for (int c = 0; c < 270; c+=45)
        {
            glColor4f(1,0.5,0, a);
            a-=0.15;
            glTranslatef(4*cos(c), 4*sin(c), 0);
            Init_Material();
            Draw_Figure();
        }
    glPopMatrix();
}

void MoveCamera()
{
    if (GetKeyState(VK_UP) < 0) xAlfa = ++xAlfa > 180 ? 180 : xAlfa;
    if (GetKeyState(VK_DOWN) < 0) xAlfa = --xAlfa < 0 ? 0 :xAlfa;
    if (GetKeyState(VK_LEFT)<0) zAlfa++;
    if (GetKeyState(VK_RIGHT)<0) zAlfa--;
    float ugol = -zAlfa / 180 * M_PI;
    float speed = 0;
    if (GetKeyState('W')<0) speed = 0.1;
    if (GetKeyState('S')<0) speed = -0.1;
    if (GetKeyState('A')<0) { speed = 0.1; ugol -= M_PI*0.5; }
    if (GetKeyState('D')<0) { speed = 0.1; ugol += M_PI*0.5; }
    if(speed != 0)
    {
        pos.x +=sin(ugol)*speed;
        pos.y +=cos(ugol)*speed;
    }
    glRotatef(-xAlfa, 1,0,0);
    glRotatef(-zAlfa, 0,0,1);
    glTranslatef(-pos.x,-pos.y,-3);
}

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);
void EnableOpenGL(HWND hwnd, HDC*, HGLRC*);
void DisableOpenGL(HWND, HDC, HGLRC);


int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpCmdLine,
                   int nCmdShow)
{
    WNDCLASSEX wcex;
    HWND hwnd;
    HDC hDC;
    HGLRC hRC;
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;

    /* register window class */
    wcex.cbSize = sizeof(WNDCLASSEX);
    wcex.style = CS_OWNDC;
    wcex.lpfnWndProc = WindowProc;
    wcex.cbClsExtra = 0;
    wcex.cbWndExtra = 0;
    wcex.hInstance = hInstance;
    wcex.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
    wcex.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
    wcex.lpszMenuName = NULL;
    wcex.lpszClassName = "GLSample";
    wcex.hIconSm = LoadIcon(NULL, IDI_APPLICATION);;


    if (!RegisterClassEx(&wcex))
        return 0;

    /* create main window */
    hwnd = CreateWindowEx(0,
                          "GLSample",
                          "OpenGL Sample",
                          WS_OVERLAPPEDWINDOW,
                          CW_USEDEFAULT,
                          CW_USEDEFAULT,
                          800,
                          800,
                          NULL,
                          NULL,
                          hInstance,
                          NULL);

    ShowWindow(hwnd, nCmdShow);

    /* enable OpenGL for the window */
    EnableOpenGL(hwnd, &hDC, &hRC);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-0.1,0.1, -0.1,0.1, 0.2, 1000);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_NORMALIZE);
    glShadeModel(GL_SMOOTH);



    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    //Init_Material();
    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage(&msg);
                DispatchMessage(&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

            glPushMatrix();
                MoveCamera();
                ShowWorld();
            glPopMatrix();

            SwapBuffers(hDC);

            Sleep (1);
        }
    }

    /* shutdown OpenGL */
    DisableOpenGL(hwnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow(hwnd);

    return msg.wParam;
}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
        case WM_CLOSE:
            PostQuitMessage(0);
        break;

        case WM_DESTROY:
            return 0;

        case WM_KEYDOWN:
        {
            switch (wParam)
            {
                case VK_ESCAPE:
                    PostQuitMessage(0);
                break;
            }
        }
        break;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }

    return 0;
}

void EnableOpenGL(HWND hwnd, HDC* hDC, HGLRC* hRC)
{
    PIXELFORMATDESCRIPTOR pfd;

    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC(hwnd);

    /* set the pixel format for the DC */
    ZeroMemory(&pfd, sizeof(pfd));

    pfd.nSize = sizeof(pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW |
                  PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;

    iFormat = ChoosePixelFormat(*hDC, &pfd);

    SetPixelFormat(*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext(*hDC);

    wglMakeCurrent(*hDC, *hRC);
}

void DisableOpenGL (HWND hwnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent(NULL, NULL);
    wglDeleteContext(hRC);
    ReleaseDC(hwnd, hDC);
}

