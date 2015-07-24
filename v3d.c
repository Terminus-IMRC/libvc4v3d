#include "v3d.h"
#include "v3d_local.h"

void v3d_init()
{
	v3d_rw_init();
	v3d_reset_init();
	v3d_utils_init();
}

void v3d_finalize()
{
	v3d_rw_finalize();
	v3d_reset_finalize();
	v3d_utils_finalize();
}
