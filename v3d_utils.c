#include <stdint.h>
#include <stddef.h>
#include <bcm_host.h>
#include "v3d.h"
#include "v3d_local.h"

static const size_t V3D_OFFSET_FROM_PERI = 0x00c00000;
const size_t V3D_LENGTH = 0x00f20 - 0x00000 + 32 / 8;

void v3d_utils_init()
{
	static _Bool is_called = 0;

	if (is_called)
		return;
	is_called = !0;

	bcm_host_init();
}

void v3d_utils_finalize()
{
	static _Bool is_called = 0;

	if (is_called)
		return;
	is_called = !0;

	bcm_host_deinit();
}

_Bool is_qpu_enabled(uint32_t *p)
{
	if (v3d_read(p, V3D_IDSTR_V) == 'V' && v3d_read(p, V3D_IDSTR_3) == '3' && v3d_read(p, V3D_IDSTR_D) == 'D')
		return !0;
	else
		return 0;
}

unsigned v3d_peripheral_addr()
{
	return bcm_host_get_peripheral_address() + V3D_OFFSET_FROM_PERI;
}
