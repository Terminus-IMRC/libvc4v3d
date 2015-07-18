#ifndef _V3D_H_INCLUDED_
#define _V3D_H_INCLUDED_

#include <stdint.h>
#include <stddef.h>

/* Sufficient for now */
#define V3D_NFNAME 0xffff

	typedef enum {
		/* 0x00000 */ V3D_TVER, V3D_IDSTR_V, V3D_IDSTR_3, V3D_IDSTR_D,
		/* 0x00004 */ V3D_VPMSZ, V3D_HDRT, V3D_NSEM, V3D_TUPS, V3D_QUPS, V3D_NSLC, V3D_REV,
		/* 0x00008 */ V3D_TLBDB, V3D_TLBSZ, V3D_VRISZ,
		/* 0x00010 */ V3D_SCRATCH,
		/* 0x00020 */ V3D_L2CCLR, V3D_L2CDIS, V3D_L2CENA,
		/* 0x00024 */ V3D_T1CCS0, V3D_T1CCS1, V3D_T1CCS2, V3D_T1CCS3, V3D_T0CCS0, V3D_T0CCS1, V3D_T0CCS2, V3D_T0CCS3, V3D_UCCS0, V3D_UCCS1, V3D_UCCS2, V3D_UCCS3, V3D_ICCS0, V3D_ICCS1, V3D_ICCS2, V3D_ICCS3,
		/* 0x00030 */ V3D_INT_SPILLUSE, V3D_INT_OUTTOMEM, V3D_INT_FLDONE, V3D_INT_FRDONE,
		/* 0x00034 */ V3D_EI_SPILLUSE, V3D_EI_OUTTOMEM, V3D_EI_FLDONE, V3D_EI_FRDONE,
		/* 0x00038 */ V3D_DI_SPILLUSE, V3D_DI_OUTTOMEM, V3D_DI_FLDONE, V3D_DI_FRDONE,
		/* 0x00100 */ V3D_CT0CS_CTRSTA, V3D_CT0CS_CTSEMA, V3D_CT0CS_CTRTSD, V3D_CT0CS_CTRUN, V3D_CT0CS_CTSUBS, V3D_CT0CS_CTERR, V3D_CT0CS_CTMODE,
		/* 0x00104 */ V3D_CT1CS_CTRSTA, V3D_CT1CS_CTSEMA, V3D_CT1CS_CTRTSD, V3D_CT1CS_CTRUN, V3D_CT1CS_CTSUBS, V3D_CT1CS_CTERR, V3D_CT1CS_CTMODE,
		/* 0x00108 */ V3D_CT0EA_CTLEA,
		/* 0x0010c */ V3D_CT1EA_CTLEA,
		/* 0x00110 */ V3D_CT0CA_CTLCA,
		/* 0x00114 */ V3D_CT1CA_CTLCA,
		/* 0x00118 */ V3D_CT00RA0_CTLRA,
		/* 0x0011c */ V3D_CT01RA0_CTLRA,
		/* 0x00120 */ V3D_CT0LC_CTLLCM, V3D_CT0LC_CTLSLCS,
		/* 0x00124 */ V3D_CT1LC_CTLLCM, V3D_CT1LC_CTLSLCS,
		/* 0x00128 */ V3D_CT0PC_CTLPC,
		/* 0x0012c */ V3D_CT1PC_CTLPC,
		/* 0x00130 */ V3D_BMOOM, V3D_RMBUSY, V3D_RMACTIVE, V3D_BMBUSY, V3D_BMACTIVE,
		/* 0x00134 */ V3D_BMFCT,
		/* 0x00138 */ V3D_RMFCT,
		/* 0x00300 */ V3D_BMPCA,
		/* 0x00304 */ V3D_BMPRS,
		/* 0x00308 */ V3D_BMPOA,
		/* 0x0030c */ V3D_BMPOS,
		/* 0x00310 */ V3D_CLIPDISA, V3D_FWDDISA,
		/* 0x00410 */ V3D_QPURSV0, V3D_QPURSV1, V3D_QPURSV2, V3D_QPURSV3, V3D_QPURSV4, V3D_QPURSV5, V3D_QPURSV6, V3D_QPURSV7,
		/* 0x00414 */ V3D_QPURSV8, V3D_QPURSV9, V3D_QPURSV10, V3D_QPURSV11, V3D_QPURSV12, V3D_QPURSV13, V3D_QPURSV14, V3D_QPURSV15,
		/* 0x00418 */ V3D_CSRBL, V3D_VSRBL,
		/* 0x00430 */ V3D_QPURQPC,
		/* 0x00434 */ V3D_QPURQUA,
		/* 0x00438 */ V3D_QPURQUL,
		/* 0x0043c */ V3D_QPURQCC, V3D_QPURQCM, V3D_QPURQERR, V3D_QPURQL,
		/* 0x00500 */ V3D_VPATOEN, V3D_VPALIMEN, V3D_VPABATO, V3D_VPARATO, V3D_VPABALIM, V3D_VPARALIM,
		/* 0x00504 */ V3D_VPMURSV,
		/* 0x00670 */ V3D_CTCLR,
		/* 0x00674 */ V3D_CTEN,
		/* 0x00680 */ V3D_PCTR0,
		/* 0x00684 */ V3D_PCTRS0,
		/* 0x00688 */ V3D_PCTR1,
		/* 0x0068c */ V3D_PCTRS1,
		/* 0x00690 */ V3D_PCTR2,
		/* 0x00694 */ V3D_PCTRS2,
		/* 0x00698 */ V3D_PCTR3,
		/* 0x0069c */ V3D_PCTRS3,
		/* 0x006a0 */ V3D_PCTR4,
		/* 0x006a4 */ V3D_PCTRS4,
		/* 0x006a8 */ V3D_PCTR5,
		/* 0x006ac */ V3D_PCTRS5,
		/* 0x006b0 */ V3D_PCTR6,
		/* 0x006b4 */ V3D_PCTRS6,
		/* 0x006b8 */ V3D_PCTR7,
		/* 0x006bc */ V3D_PCTRS7,
		/* 0x006c0 */ V3D_PCTR8,
		/* 0x006c4 */ V3D_PCTRS8,
		/* 0x006c8 */ V3D_PCTR9,
		/* 0x006cc */ V3D_PCTRS9,
		/* 0x006d0 */ V3D_PCTR10,
		/* 0x006d4 */ V3D_PCTRS10,
		/* 0x006d8 */ V3D_PCTR11,
		/* 0x006dc */ V3D_PCTRS11,
		/* 0x006e0 */ V3D_PCTR12,
		/* 0x006e4 */ V3D_PCTRS12,
		/* 0x006e8 */ V3D_PCTR13,
		/* 0x006ec */ V3D_PCTRS13,
		/* 0x006f0 */ V3D_PCTR14,
		/* 0x006f4 */ V3D_PCTRS14,
		/* 0x006f8 */ V3D_PCTR15,
		/* 0x006fc */ V3D_PCTRS15,
		/* 0x00f00 */ V3D_IPD2_FPDUSED, V3D_IPD2_VALID, V3D_MULIP2, V3D_MULIP1, V3D_MULIP0, V3D_VR1_B, V3D_VR1_A,
		/* 0x00f04 */ V3D_EZREQ_FIFO_ORUN, V3D_EZVAL_FIFO_ORUN, V3D_DEPTHO_ORUN, V3D_DEPTHO_FIFO_ORUN, V3D_REFXY_FIFO_ORUN, V3D_ZCOEFF_FIFO_FULL, V3D_XYRELW_FIFO_ORUN, V3D_XYRELO_FIFO_ORUN, V3D_FIXZ_ORUN, V3D_XYFO_FIFO_ORUN, V3D_QBSZ_FIFO_ORUN, V3D_QBFR_FIFO_ORUN, V3D_XYRELZ_FIFO_FULL, V3D_WCOEFF_FIFO_FULL,
		/* 0x00f08 */ V3D_XYFO_FIFO_OP_READY, V3D_QXYF_FIFO_OP_READY, V3D_RAST_BUSY, V3D_EZ_XY_READY, V3D_EZ_DATA_READY, V3D_ZRWPE_READY, V3D_ZRWPE_STALL, V3D_EDGES_CTRLID, V3D_EDGES_ISCTRL, V3D_EDGES_READY, V3D_EDGES_STALL,
		/* 0x00f0c */ V3D_FIXZ_READY, V3D_RECIPW_READY, V3D_INTERPRW_READY, V3D_INTERPZ_READY, V3D_XYRELZ_FIFO_LAST, V3D_XYRELZ_FIFO_READY, V3D_XYNRM_LAST, V3D_XYNRM_READY, V3D_EZLIM_READY, V3D_DEPTHO_READY, V3D_RAST_LAST, V3D_RAST_READY, V3D_XYFO_FIFO_READY, V3D_ZO_FIFO_READY, V3D_XYRELO_FIFO_READY, V3D_WCOEFF_FIFO_READY, V3D_XYRELW_FIFO_READY, V3D_ZCOEFF_FIFO_READY, V3D_REFXY_FIFO_READY, V3D_DEPTHO_FIFO_READY, V3D_EZVAL_FIFO_READY, V3D_EZREQ_FIFO_READY, V3D_QXYF_FIFO_READY,
		/* 0x00f10 */ V3D_ZO_FIFO_IP_STALL, V3D_RECIPW_IP_STALL, V3D_INTERPW_IP_STALL, V3D_XYRELZ_FIFO_IP_STALL, V3D_INTERPZ_IP_STALL, V3D_DEPTHO_FIFO_IP_STALL, V3D_EZLIM_IP_STALL, V3D_XYNRM_IP_STALL, V3D_EZREQ_FIFO_OP_VALID, V3D_QXYF_FIFO_OP_VALID, V3D_QXYF_FIFO_OP_LAST, V3D_QXYF_FIFO_OP1_DUMMY, V3D_QXYF_FIFO_OP1_LAST, V3D_QXYF_FIFO_OP1_VALID, V3D_EZTEST_ANYQVALID, V3D_EZTEST_ANYQF, V3D_EZTEST_QREADY, V3D_EZTEST_VLF_OKNOVALID, V3D_EZTEST_STALL, V3D_EZTEST_IP_VLFSTALL, V3D_EZTEST_IP_PRSTALL, V3D_EZTEST_IP_QSTALL,
		/* 0x00f20 */ V3D_L2CARE, V3D_VCMBE, V3D_VCMRE, V3D_VCDI, V3D_VCDE, V3D_VDWE, V3D_VPMEAS, V3D_VPMEFNA, V3D_VPMEWNA, V3D_VPMERNA, V3D_VPMERR, V3D_VPMEWR, V3D_VPAERRGL, V3D_VPAEBRGL, V3D_VPAERGS, V3D_VPAEABB,
	} v3d_field_name_t;

	uint32_t v3d_read(uint32_t *p, v3d_field_name_t fname);
	void v3d_write_raw(uint32_t *p, v3d_field_name_t fname, uint32_t value);
	void v3d_write(uint32_t *p, v3d_field_name_t fname, uint32_t value);
	v3d_field_name_t v3d_str_to_reg(const char *name);

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

	extern const size_t V3D_LENGTH;

	_Bool is_qpu_enabled(uint32_t *p);
	unsigned v3d_peripheral_addr();

	void v3d_init();
	void v3d_finalize();

#endif /* _V3D_H_INCLUDED_ */
