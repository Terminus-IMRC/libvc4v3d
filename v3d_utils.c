#include <stdint.h>
#include "v3d_rw.h"
#include "v3d_utils.h"

_Bool is_qpu_enabled(uint32_t *p)
{
	if (v3d_read(p, V3D_IDSTR_V) == 'V' && v3d_read(p, V3D_IDSTR_3) == '3' && v3d_read(p, V3D_IDSTR_D) == 'D')
		return !0;
	else
		return 0;
}
