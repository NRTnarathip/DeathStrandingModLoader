#include "GameTypes.h"
#include "utils.h"

double Entity::GetLinearSpeed()
{
	typedef double (*GetLinearSpeed_t)(Entity* ent);
	static GetLinearSpeed_t g_GetLinearSpeed = (GetLinearSpeed_t)GetFuncRva(0x234b940);
	return g_GetLinearSpeed(this);

}


