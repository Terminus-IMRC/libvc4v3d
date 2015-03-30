#ifndef _V3D_UTILS_H_INCLUDED_
#define _V3D_UTILS_H_INCLUDED_

#include <stdint.h>
#include <stddef.h>

	extern const size_t V3D_LENGTH;

	void v3d_utils_init();
	void v3d_utils_finalize();
	_Bool is_qpu_enabled(uint32_t *p);
	unsigned v3d_peripheral_addr();

#endif /* _V3D_UTILS_H_INCLUDED_ */
