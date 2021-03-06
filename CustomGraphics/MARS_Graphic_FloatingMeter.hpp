#ifndef MARS_Graphic_FloatingMeter_H_
#define MARS_Graphic_FloatingMeter_H_

#include <stdio.h>
#include <string.h>

#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <algorithm>

//OpenGL libraries
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glext.h>
#include <GL/glut.h>
#include <opencv/highgui.h>
#include <opencv/cv.h>


#include "../MARS_Math.hpp"
#include "../MARS_Graphic.hpp"

class MARS_Graphic_FloatingMeter : public MARS_Graphic{
	private:
 		float resource; 
		float resource_max;

		vector3<GLfloat> displacement;
		GLfloat rh, gh, bh, rm, gm, bm, rl, gl, bl;
		GLfloat radius;
		GLfloat height;
		void updateMisc(void* miscdata);
	public:
		void render(void* vicondata, void* miscdata);
		MARS_Graphic_FloatingMeter(const char* name, GLubyte rc, GLubyte gc, GLubyte bc,
													GLubyte rh, GLubyte gh, GLubyte bh, 
													GLubyte rm, GLubyte gm, GLubyte bm,
													GLubyte rl, GLubyte gl, GLubyte bl, GLubyte a, 
							float resource, float resource_max, 
							vector3<GLfloat> displacement, GLfloat radius, 
							GLfloat height);
			
		void setResourceValue(float resource);
		float getResourceValue();
		float getResourceMax();
};
#endif
