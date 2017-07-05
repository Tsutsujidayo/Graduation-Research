#ifndef _FLAG_
#define _FLAG_

#include<math.h>

#endif

/*構造体宣言領域*/
typedef struct 
{
	double x;
	double y;
	double z;
	double size;
}vector_type;

typedef struct
{
	double x;
	double y;
	double z;
}coordinate_type;


typedef struct 
{
	double magnitude_of_vector;
	vector_type vector;
}package_type;

/*マクロ定義*/
#define element 100
#define false 0
#define true 1
#define unit_length 0.01 //[m]


/*関数*/
int generation_round_coil(int division_number/*分割数*/,double r, vector_type *coil_node,
					 double a,double b)
{
	double 	division_rad = 0.0;
	double	rad = 0.0;
	int	 	flag = 0;
	int i;

	division_rad = deg2rad(360.0 / division_number);

	for(i=0;i<division_number;i++){
		coil[i].x 	= a + r * cos(rad);
		coil[i].y 	= b + r * sin(rad);
		coil[i].z 	= 0.0;
		coil[i].size 	= 114514.0; 
		rad += division_rad;
		flag = 1
	}
	return flag;
}

double  calc_size(double x0, double y0, double z0, double x1, double y1 double z1)
{
	double x,y,z;

	x = pow(x1 - x0);
	y = pow(y1 - y0);
	z = pow(z1 - z0);

	return ( sqrt(x + y + z) );
}

double calc_angle(package_type input)
{
	vector_type n;		//nはxy平面に対する法線ベクトル
	double angle;		//angleはxy平面と入力ベクトルのなす角

	n.x 		= 0.0;
	n.y 		= 0.0;
	n.z 		= 1.0;
	n.size 	= calc_size( 0.0, 0.0, 0.0, n.x, n.y, n.z);
	input.vector.size = calc_size(0.0,0.0,0.0,input.vector.x,input.vector.y,input.vector.z);

	angle 	= (M_PI / 2) - acos( input.vector.z/input.vector.size );

	return angle;
}


double deg2rad(double deg)
{
	return ( deg * M_PI / 180.0 );
}

double rad2deg(double rad)
{
	return ( rad * 180.0 / M_PI );
}