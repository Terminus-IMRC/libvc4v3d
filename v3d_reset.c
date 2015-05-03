#include <stdint.h>
#include "v3d.h"

void v3d_reset_init()
{
	static _Bool is_called = 0;

	if (is_called)
		return;
	is_called = !0;

	v3d_rw_init();
}

void v3d_reset_finalize()
{
	static _Bool is_called = 0;

	if (is_called)
		return;
	is_called = !0;

	v3d_rw_finalize();
}

void v3d_reset_all(uint32_t *p)
{
	v3d_reset_SCRATCH(p);
	v3d_reset_INTCTL(p);
	v3d_reset_INTENA(p);
	v3d_reset_INTDIS(p);
	v3d_reset_CTnCS(p);
	v3d_reset_CTnCA(p);
	v3d_reset_CTnEA(p);
	v3d_reset_CTnLC(p);
	v3d_reset_BFC(p);
	v3d_reset_RFC(p);
	v3d_reset_BPOA(p);
	v3d_reset_BPOS(p);
	v3d_reset_BXCF(p);
	v3d_reset_SQRSVn(p);
	v3d_reset_SQCNTL(p);
	v3d_reset_SRQPC(p);
	v3d_reset_SRQUA(p);
	v3d_reset_SRQUL(p);
	v3d_reset_SRQCS(p);
	v3d_reset_VPACNTL(p);
	v3d_reset_VPMBASE(p);
	v3d_reset_PCTRC(p);
	v3d_reset_PCTRE(p);
	v3d_reset_PCTRn(p);
	v3d_reset_PCTRSn(p);
}

void v3d_reset_SCRATCH(uint32_t *p)
{
	v3d_write(p, V3D_SCRATCH, 0);
}

void v3d_reset_L2CACTL(uint32_t *p)
{
	v3d_write(p, V3D_L2CCLR, 1);
	v3d_write(p, V3D_L2CDIS, 1);
	v3d_write(p, V3D_L2CENA, 1);
}

void v3d_reset_INTCTL(uint32_t *p)
{
	v3d_write(p, V3D_INT_SPILLUSE, 1);
	v3d_write(p, V3D_INT_OUTTOMEM, 1);
	v3d_write(p, V3D_INT_FLDONE, 1);
	v3d_write(p, V3D_INT_FRDONE, 1);
}

void v3d_reset_INTENA(uint32_t *p)
{
	v3d_write(p, V3D_EI_SPILLUSE, 1);
	v3d_write(p, V3D_EI_OUTTOMEM, 1);
	v3d_write(p, V3D_EI_FLDONE, 1);
	v3d_write(p, V3D_EI_FRDONE, 1);
}

void v3d_reset_INTDIS(uint32_t *p)
{
	v3d_write(p, V3D_DI_SPILLUSE, 1);
	v3d_write(p, V3D_DI_OUTTOMEM, 1);
	v3d_write(p, V3D_DI_FLDONE, 1);
	v3d_write(p, V3D_DI_FRDONE, 1);
}

void v3d_reset_CTnCS(uint32_t *p)
{
	v3d_reset_CT0CS(p);
	v3d_reset_CT1CS(p);
}

void v3d_reset_CT0CS(uint32_t *p)
{
	v3d_write(p, V3D_CT0CS_CTRSTA, 1);
	v3d_write(p, V3D_CT0CS_CTRUN, 1);
	v3d_write(p, V3D_CT0CS_CTSUBS, 1);
}

void v3d_reset_CT1CS(uint32_t *p)
{
	v3d_write(p, V3D_CT1CS_CTRSTA, 1);
	v3d_write(p, V3D_CT1CS_CTRUN, 1);
	v3d_write(p, V3D_CT1CS_CTSUBS, 1);
}

void v3d_reset_CTnEA(uint32_t *p)
{
	v3d_reset_CT0EA(p);
	v3d_reset_CT1EA(p);
}

void v3d_reset_CT0EA(uint32_t *p)
{
	v3d_write(p, V3D_CT0EA_CTLEA, 0);
}

void v3d_reset_CT1EA(uint32_t *p)
{
	v3d_write(p, V3D_CT1EA_CTLEA, 0);
}

void v3d_reset_CTnCA(uint32_t *p)
{
	v3d_reset_CT0CA(p);
	v3d_reset_CT1CA(p);
}

void v3d_reset_CT0CA(uint32_t *p)
{
	v3d_write(p, V3D_CT0CA_CTLCA, 0);
}

void v3d_reset_CT1CA(uint32_t *p)
{
	v3d_write(p, V3D_CT1CA_CTLCA, 0);
}

void v3d_reset_CTnLC(uint32_t *p)
{
	v3d_reset_CT0LC(p);
	v3d_reset_CT1LC(p);
}

void v3d_reset_CT0LC(uint32_t *p)
{
	v3d_write(p, V3D_CT0LC_CTLLCM, 1);
	v3d_write(p, V3D_CT0LC_CTLSLCS, 1);
}
void v3d_reset_CT1LC(uint32_t *p)
{
	v3d_write(p, V3D_CT1LC_CTLLCM, 1);
	v3d_write(p, V3D_CT1LC_CTLSLCS, 1);
}

void v3d_reset_BFC(uint32_t *p)
{
	v3d_write(p, V3D_BMFCT, 1);
}

void v3d_reset_RFC(uint32_t *p)
{
	v3d_write(p, V3D_RMFCT, 1);
}

void v3d_reset_BPOA(uint32_t *p)
{
	v3d_write(p, V3D_BMPOA, 0);
}

void v3d_reset_BPOS(uint32_t *p)
{
	v3d_write(p, V3D_BMPOS, 0);
}

void v3d_reset_BXCF(uint32_t *p)
{
	v3d_write(p, V3D_CLIPDISA, 0);
	v3d_write(p, V3D_FWDDISA, 0);
}

void v3d_reset_SQRSVn(uint32_t *p)
{
	v3d_reset_SQRSV0(p);
	v3d_reset_SQRSV1(p);
}

void v3d_reset_SQRSV0(uint32_t *p)
{
	v3d_write(p, V3D_QPURSV7, 0);
	v3d_write(p, V3D_QPURSV6, 0);
	v3d_write(p, V3D_QPURSV5, 0);
	v3d_write(p, V3D_QPURSV4, 0);
	v3d_write(p, V3D_QPURSV3, 0);
	v3d_write(p, V3D_QPURSV2, 0);
	v3d_write(p, V3D_QPURSV1, 0);
	v3d_write(p, V3D_QPURSV0, 0);
}

void v3d_reset_SQRSV1(uint32_t *p)
{
	v3d_write(p, V3D_QPURSV15, 0);
	v3d_write(p, V3D_QPURSV14, 0);
	v3d_write(p, V3D_QPURSV13, 0);
	v3d_write(p, V3D_QPURSV12, 0);
	v3d_write(p, V3D_QPURSV11, 0);
	v3d_write(p, V3D_QPURSV10, 0);
	v3d_write(p, V3D_QPURSV9, 0);
	v3d_write(p, V3D_QPURSV8, 0);
}

void v3d_reset_SQCNTL(uint32_t *p)
{
	v3d_write(p, V3D_CSRBL, 0);
	v3d_write(p, V3D_VSRBL, 0);
}

void v3d_reset_SRQPC(uint32_t *p)
{
	v3d_write(p, V3D_QPURQPC, 0);
}

void v3d_reset_SRQUA(uint32_t *p)
{
	v3d_write(p, V3D_QPURQUA, 0);
}

void v3d_reset_SRQUL(uint32_t *p)
{
	v3d_write(p, V3D_QPURQUL, 0);
}

void v3d_reset_SRQCS(uint32_t *p)
{
	v3d_write(p, V3D_QPURQCC, 1);
	v3d_write(p, V3D_QPURQCM, 1);
	v3d_write(p, V3D_QPURQERR, 1);
	v3d_write(p, V3D_QPURQL, 1);
}

void v3d_reset_VPACNTL(uint32_t *p)
{
	v3d_write(p, V3D_VPATOEN, 0);
	v3d_write(p, V3D_VPALIMEN, 0);
	v3d_write(p, V3D_VPABATO, 0);
	v3d_write(p, V3D_VPARATO, 0);
	v3d_write(p, V3D_VPABALIM, 0);
	v3d_write(p, V3D_VPARALIM, 0);
}

void v3d_reset_VPMBASE(uint32_t *p)
{
	v3d_write(p, V3D_VPMURSV, 16);
}

void v3d_reset_PCTRC(uint32_t *p)
{
	v3d_write(p, V3D_CTCLR15, 0);
	v3d_write(p, V3D_CTCLR14, 0);
	v3d_write(p, V3D_CTCLR13, 0);
	v3d_write(p, V3D_CTCLR12, 0);
	v3d_write(p, V3D_CTCLR11, 0);
	v3d_write(p, V3D_CTCLR10, 0);
	v3d_write(p, V3D_CTCLR9, 0);
	v3d_write(p, V3D_CTCLR8, 0);
	v3d_write(p, V3D_CTCLR7, 0);
	v3d_write(p, V3D_CTCLR6, 0);
	v3d_write(p, V3D_CTCLR5, 0);
	v3d_write(p, V3D_CTCLR4, 0);
	v3d_write(p, V3D_CTCLR3, 0);
	v3d_write(p, V3D_CTCLR2, 0);
	v3d_write(p, V3D_CTCLR1, 0);
	v3d_write(p, V3D_CTCLR0, 0);
}

void v3d_reset_PCTRE(uint32_t *p)
{
	v3d_write(p, V3D_CTEN15, 0);
	v3d_write(p, V3D_CTEN14, 0);
	v3d_write(p, V3D_CTEN13, 0);
	v3d_write(p, V3D_CTEN12, 0);
	v3d_write(p, V3D_CTEN11, 0);
	v3d_write(p, V3D_CTEN10, 0);
	v3d_write(p, V3D_CTEN9, 0);
	v3d_write(p, V3D_CTEN8, 0);
	v3d_write(p, V3D_CTEN7, 0);
	v3d_write(p, V3D_CTEN6, 0);
	v3d_write(p, V3D_CTEN5, 0);
	v3d_write(p, V3D_CTEN4, 0);
	v3d_write(p, V3D_CTEN3, 0);
	v3d_write(p, V3D_CTEN2, 0);
	v3d_write(p, V3D_CTEN1, 0);
	v3d_write(p, V3D_CTEN0, 0);
}

void v3d_reset_PCTRn(uint32_t *p)
{
	v3d_reset_PCTR0(p);
	v3d_reset_PCTR1(p);
	v3d_reset_PCTR2(p);
	v3d_reset_PCTR3(p);
	v3d_reset_PCTR4(p);
	v3d_reset_PCTR5(p);
	v3d_reset_PCTR6(p);
	v3d_reset_PCTR7(p);
	v3d_reset_PCTR8(p);
	v3d_reset_PCTR9(p);
	v3d_reset_PCTR10(p);
	v3d_reset_PCTR11(p);
	v3d_reset_PCTR12(p);
	v3d_reset_PCTR13(p);
	v3d_reset_PCTR14(p);
	v3d_reset_PCTR15(p);
}

void v3d_reset_PCTRSn(uint32_t *p)
{
	v3d_reset_PCTRS0(p);
	v3d_reset_PCTRS1(p);
	v3d_reset_PCTRS2(p);
	v3d_reset_PCTRS3(p);
	v3d_reset_PCTRS4(p);
	v3d_reset_PCTRS5(p);
	v3d_reset_PCTRS6(p);
	v3d_reset_PCTRS7(p);
	v3d_reset_PCTRS8(p);
	v3d_reset_PCTRS9(p);
	v3d_reset_PCTRS10(p);
	v3d_reset_PCTRS11(p);
	v3d_reset_PCTRS12(p);
	v3d_reset_PCTRS13(p);
	v3d_reset_PCTRS14(p);
	v3d_reset_PCTRS15(p);
}

void v3d_reset_PCTR0(uint32_t *p)
{
	v3d_write(p, V3D_PCTR0, 0);
}

void v3d_reset_PCTRS0(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS0, 0);
}

void v3d_reset_PCTR1(uint32_t *p)
{
	v3d_write(p, V3D_PCTR1, 0);
}

void v3d_reset_PCTRS1(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS1, 0);
}

void v3d_reset_PCTR2(uint32_t *p)
{
	v3d_write(p, V3D_PCTR2, 0);
}

void v3d_reset_PCTRS2(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS2, 0);
}

void v3d_reset_PCTR3(uint32_t *p)
{
	v3d_write(p, V3D_PCTR3, 0);
}

void v3d_reset_PCTRS3(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS3, 0);
}

void v3d_reset_PCTR4(uint32_t *p)
{
	v3d_write(p, V3D_PCTR4, 0);
}

void v3d_reset_PCTRS4(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS4, 0);
}

void v3d_reset_PCTR5(uint32_t *p)
{
	v3d_write(p, V3D_PCTR5, 0);
}

void v3d_reset_PCTRS5(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS5, 0);
}

void v3d_reset_PCTR6(uint32_t *p)
{
	v3d_write(p, V3D_PCTR6, 0);
}

void v3d_reset_PCTRS6(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS6, 0);
}

void v3d_reset_PCTR7(uint32_t *p)
{
	v3d_write(p, V3D_PCTR7, 0);
}

void v3d_reset_PCTRS7(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS7, 0);
}

void v3d_reset_PCTR8(uint32_t *p)
{
	v3d_write(p, V3D_PCTR8, 0);
}

void v3d_reset_PCTRS8(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS8, 0);
}

void v3d_reset_PCTR9(uint32_t *p)
{
	v3d_write(p, V3D_PCTR9, 0);
}

void v3d_reset_PCTRS9(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS9, 0);
}

void v3d_reset_PCTR10(uint32_t *p)
{
	v3d_write(p, V3D_PCTR10, 0);
}

void v3d_reset_PCTRS10(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS10, 0);
}

void v3d_reset_PCTR11(uint32_t *p)
{
	v3d_write(p, V3D_PCTR11, 0);
}

void v3d_reset_PCTRS11(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS11, 0);
}

void v3d_reset_PCTR12(uint32_t *p)
{
	v3d_write(p, V3D_PCTR12, 0);
}

void v3d_reset_PCTRS12(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS12, 0);
}

void v3d_reset_PCTR13(uint32_t *p)
{
	v3d_write(p, V3D_PCTR13, 0);
}

void v3d_reset_PCTRS13(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS13, 0);
}

void v3d_reset_PCTR14(uint32_t *p)
{
	v3d_write(p, V3D_PCTR14, 0);
}

void v3d_reset_PCTRS14(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS14, 0);
}

void v3d_reset_PCTR15(uint32_t *p)
{
	v3d_write(p, V3D_PCTR15, 0);
}

void v3d_reset_PCTRS15(uint32_t *p)
{
	v3d_write(p, V3D_PCTRS15, 0);
}
