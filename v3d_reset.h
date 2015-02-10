#ifndef _V3D_RESET_H_INCLUDED_
#define _V3D_RESET_H_INCLUDED_

#include <stdint.h>
#include "v3d_rw.h"

	void v3d_reset_init();

	void v3d_reset_all(uint32_t *p);

	void v3d_reset_SCRATCH(uint32_t *p);

	void v3d_reset_L2CACTL(uint32_t *p);

	void v3d_reset_INTCTL(uint32_t *p);

	void v3d_reset_INTENA(uint32_t *p);

	void v3d_reset_INTDIS(uint32_t *p);

	void v3d_reset_CTnCS(uint32_t *p);
	void v3d_reset_CT0CS(uint32_t *p);
	void v3d_reset_CT1CS(uint32_t *p);

	void v3d_reset_CTnEA(uint32_t *p);
	void v3d_reset_CT0EA(uint32_t *p);
	void v3d_reset_CT1EA(uint32_t *p);

	void v3d_reset_CTnCA(uint32_t *p);
	void v3d_reset_CT0CA(uint32_t *p);
	void v3d_reset_CT1CA(uint32_t *p);

	void v3d_reset_CTnLC(uint32_t *p);
	void v3d_reset_CT0LC(uint32_t *p);
	void v3d_reset_CT1LC(uint32_t *p);

	void v3d_reset_BFC(uint32_t *p);
	void v3d_reset_RFC(uint32_t *p);
	void v3d_reset_BPOA(uint32_t *p);
	void v3d_reset_BPOS(uint32_t *p);
	void v3d_reset_BXCF(uint32_t *p);

	void v3d_reset_SQRSVn(uint32_t *p);
	void v3d_reset_SQRSV0(uint32_t *p);
	void v3d_reset_SQRSV1(uint32_t *p);

	void v3d_reset_SQCNTL(uint32_t *p);
	void v3d_reset_SRQPC(uint32_t *p);
	void v3d_reset_SRQUA(uint32_t *p);
	void v3d_reset_SRQUL(uint32_t *p);
	void v3d_reset_SRQCS(uint32_t *p);
	void v3d_reset_VPACNTL(uint32_t *p);
	void v3d_reset_VPMBASE(uint32_t *p);
	void v3d_reset_PCTRC(uint32_t *p);
	void v3d_reset_PCTRE(uint32_t *p);

	void v3d_reset_PCTRn(uint32_t *p);
	void v3d_reset_PCTRSn(uint32_t *p);
	void v3d_reset_PCTR0(uint32_t *p);
	void v3d_reset_PCTRS0(uint32_t *p);
	void v3d_reset_PCTR1(uint32_t *p);
	void v3d_reset_PCTRS1(uint32_t *p);
	void v3d_reset_PCTR2(uint32_t *p);
	void v3d_reset_PCTRS2(uint32_t *p);
	void v3d_reset_PCTR3(uint32_t *p);
	void v3d_reset_PCTRS3(uint32_t *p);
	void v3d_reset_PCTR4(uint32_t *p);
	void v3d_reset_PCTRS4(uint32_t *p);
	void v3d_reset_PCTR5(uint32_t *p);
	void v3d_reset_PCTRS5(uint32_t *p);
	void v3d_reset_PCTR6(uint32_t *p);
	void v3d_reset_PCTRS6(uint32_t *p);
	void v3d_reset_PCTR7(uint32_t *p);
	void v3d_reset_PCTRS7(uint32_t *p);
	void v3d_reset_PCTR8(uint32_t *p);
	void v3d_reset_PCTRS8(uint32_t *p);
	void v3d_reset_PCTR9(uint32_t *p);
	void v3d_reset_PCTRS9(uint32_t *p);
	void v3d_reset_PCTR10(uint32_t *p);
	void v3d_reset_PCTRS10(uint32_t *p);
	void v3d_reset_PCTR11(uint32_t *p);
	void v3d_reset_PCTRS11(uint32_t *p);
	void v3d_reset_PCTR12(uint32_t *p);
	void v3d_reset_PCTRS12(uint32_t *p);
	void v3d_reset_PCTR13(uint32_t *p);
	void v3d_reset_PCTRS13(uint32_t *p);
	void v3d_reset_PCTR14(uint32_t *p);
	void v3d_reset_PCTRS14(uint32_t *p);
	void v3d_reset_PCTR15(uint32_t *p);
	void v3d_reset_PCTRS15(uint32_t *p);

#endif /* _V3D_RESET_H_INCLUDED_ */
