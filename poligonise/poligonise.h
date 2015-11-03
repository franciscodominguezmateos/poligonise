/*
	Simple test of the Marching Cubes code found in paulslib found here
	Very poorly written with lots of assumptions, designed to give the
   basic idea of how to call PolygoniseCube().
	ps: code formateed for tab stops of 3 characters.
	pps: One would normally want to calculate normals as well.
*/

typedef struct {
   double x,y,z;
} XYZ;

typedef struct {
   XYZ p[8];
   XYZ n[8];
   double val[8];
} GRIDCELL;

typedef struct {
   XYZ p[3];         /* Vertices */
   XYZ c;            /* Centroid */
   XYZ n[3];         /* Normal   */
} TRIANGLE;

#define ABS(x) (x < 0 ? -(x) : (x))

// Prototypes
int PolygoniseCube(GRIDCELL,double,TRIANGLE *);
XYZ VertexInterp(double,XYZ,XYZ,double,double);
