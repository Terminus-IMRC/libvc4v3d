#include "v3d.h"

void v3d_init()
{
	v3d_rw_init();
	v3d_reset_init();
}

void v3d_finalize()
{
	v3d_rw_finalize();
	v3d_reset_finalize();
}
