/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2020 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/

#if defined(_WIN32)
 #include "stdio.h"
 #define IKI_DLLESPEC __declspec(dllimport)
#else
 #define IKI_DLLESPEC
#endif
#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
IKI_DLLESPEC extern void execute_51(char*, char *);
IKI_DLLESPEC extern void execute_52(char*, char *);
IKI_DLLESPEC extern void execute_366(char*, char *);
IKI_DLLESPEC extern void execute_367(char*, char *);
IKI_DLLESPEC extern void execute_3(char*, char *);
IKI_DLLESPEC extern void vlog_const_rhs_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_335(char*, char *);
IKI_DLLESPEC extern void execute_336(char*, char *);
IKI_DLLESPEC extern void execute_337(char*, char *);
IKI_DLLESPEC extern void execute_338(char*, char *);
IKI_DLLESPEC extern void execute_339(char*, char *);
IKI_DLLESPEC extern void execute_340(char*, char *);
IKI_DLLESPEC extern void execute_341(char*, char *);
IKI_DLLESPEC extern void execute_342(char*, char *);
IKI_DLLESPEC extern void execute_343(char*, char *);
IKI_DLLESPEC extern void execute_344(char*, char *);
IKI_DLLESPEC extern void execute_345(char*, char *);
IKI_DLLESPEC extern void execute_346(char*, char *);
IKI_DLLESPEC extern void execute_347(char*, char *);
IKI_DLLESPEC extern void execute_348(char*, char *);
IKI_DLLESPEC extern void execute_349(char*, char *);
IKI_DLLESPEC extern void execute_350(char*, char *);
IKI_DLLESPEC extern void execute_351(char*, char *);
IKI_DLLESPEC extern void execute_352(char*, char *);
IKI_DLLESPEC extern void execute_353(char*, char *);
IKI_DLLESPEC extern void execute_354(char*, char *);
IKI_DLLESPEC extern void execute_355(char*, char *);
IKI_DLLESPEC extern void execute_356(char*, char *);
IKI_DLLESPEC extern void execute_357(char*, char *);
IKI_DLLESPEC extern void execute_358(char*, char *);
IKI_DLLESPEC extern void execute_359(char*, char *);
IKI_DLLESPEC extern void execute_360(char*, char *);
IKI_DLLESPEC extern void execute_361(char*, char *);
IKI_DLLESPEC extern void execute_362(char*, char *);
IKI_DLLESPEC extern void execute_363(char*, char *);
IKI_DLLESPEC extern void execute_364(char*, char *);
IKI_DLLESPEC extern void execute_365(char*, char *);
IKI_DLLESPEC extern void execute_58(char*, char *);
IKI_DLLESPEC extern void execute_62(char*, char *);
IKI_DLLESPEC extern void execute_63(char*, char *);
IKI_DLLESPEC extern void execute_64(char*, char *);
IKI_DLLESPEC extern void execute_13(char*, char *);
IKI_DLLESPEC extern void execute_15(char*, char *);
IKI_DLLESPEC extern void execute_16(char*, char *);
IKI_DLLESPEC extern void execute_74(char*, char *);
IKI_DLLESPEC extern void execute_77(char*, char *);
IKI_DLLESPEC extern void vlog_simple_process_execute_0_fast_no_reg_no_agg(char*, char*, char*);
IKI_DLLESPEC extern void execute_79(char*, char *);
IKI_DLLESPEC extern void execute_80(char*, char *);
IKI_DLLESPEC extern void execute_81(char*, char *);
IKI_DLLESPEC extern void execute_82(char*, char *);
IKI_DLLESPEC extern void execute_83(char*, char *);
IKI_DLLESPEC extern void execute_84(char*, char *);
IKI_DLLESPEC extern void execute_85(char*, char *);
IKI_DLLESPEC extern void execute_86(char*, char *);
IKI_DLLESPEC extern void execute_87(char*, char *);
IKI_DLLESPEC extern void execute_89(char*, char *);
IKI_DLLESPEC extern void execute_90(char*, char *);
IKI_DLLESPEC extern void execute_91(char*, char *);
IKI_DLLESPEC extern void execute_92(char*, char *);
IKI_DLLESPEC extern void execute_93(char*, char *);
IKI_DLLESPEC extern void execute_94(char*, char *);
IKI_DLLESPEC extern void execute_95(char*, char *);
IKI_DLLESPEC extern void execute_96(char*, char *);
IKI_DLLESPEC extern void vlog_timingcheck_execute_0(char*, char*, char*);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_109(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_110(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_111(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_112(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_113(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_114(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_115(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_116(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_117(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_118(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_119(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_120(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_121(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_122(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_123(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_124(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_125(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_126(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_127(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_128(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_129(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_130(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_131(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_132(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_133(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_134(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_135(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_136(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_137(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_138(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_139(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_140(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_141(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_142(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_143(char*, char *);
IKI_DLLESPEC extern void timing_checker_condition_m_99662441_f4d1fc17_144(char*, char *);
IKI_DLLESPEC extern void execute_123(char*, char *);
IKI_DLLESPEC extern void execute_131(char*, char *);
IKI_DLLESPEC extern void execute_132(char*, char *);
IKI_DLLESPEC extern void execute_133(char*, char *);
IKI_DLLESPEC extern void execute_97(char*, char *);
IKI_DLLESPEC extern void execute_19(char*, char *);
IKI_DLLESPEC extern void execute_20(char*, char *);
IKI_DLLESPEC extern void execute_134(char*, char *);
IKI_DLLESPEC extern void execute_50(char*, char *);
IKI_DLLESPEC extern void execute_319(char*, char *);
IKI_DLLESPEC extern void execute_320(char*, char *);
IKI_DLLESPEC extern void execute_321(char*, char *);
IKI_DLLESPEC extern void execute_322(char*, char *);
IKI_DLLESPEC extern void execute_323(char*, char *);
IKI_DLLESPEC extern void execute_324(char*, char *);
IKI_DLLESPEC extern void execute_325(char*, char *);
IKI_DLLESPEC extern void execute_326(char*, char *);
IKI_DLLESPEC extern void execute_318(char*, char *);
IKI_DLLESPEC extern void execute_54(char*, char *);
IKI_DLLESPEC extern void execute_55(char*, char *);
IKI_DLLESPEC extern void execute_56(char*, char *);
IKI_DLLESPEC extern void execute_57(char*, char *);
IKI_DLLESPEC extern void execute_368(char*, char *);
IKI_DLLESPEC extern void execute_369(char*, char *);
IKI_DLLESPEC extern void execute_370(char*, char *);
IKI_DLLESPEC extern void execute_371(char*, char *);
IKI_DLLESPEC extern void execute_372(char*, char *);
IKI_DLLESPEC extern void execute_373(char*, char *);
IKI_DLLESPEC extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_2(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_9(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_13(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_14(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_20(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_21(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_26(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_28(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_29(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_30(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_31(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_32(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_33(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_34(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_35(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_36(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_37(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_38(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_39(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_40(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_41(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_42(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_43(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_44(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_45(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_46(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_47(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void transaction_48(char*, char*, unsigned, unsigned, unsigned);
IKI_DLLESPEC extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
funcp funcTab[178] = {(funcp)execute_51, (funcp)execute_52, (funcp)execute_366, (funcp)execute_367, (funcp)execute_3, (funcp)vlog_const_rhs_process_execute_0_fast_no_reg_no_agg, (funcp)execute_335, (funcp)execute_336, (funcp)execute_337, (funcp)execute_338, (funcp)execute_339, (funcp)execute_340, (funcp)execute_341, (funcp)execute_342, (funcp)execute_343, (funcp)execute_344, (funcp)execute_345, (funcp)execute_346, (funcp)execute_347, (funcp)execute_348, (funcp)execute_349, (funcp)execute_350, (funcp)execute_351, (funcp)execute_352, (funcp)execute_353, (funcp)execute_354, (funcp)execute_355, (funcp)execute_356, (funcp)execute_357, (funcp)execute_358, (funcp)execute_359, (funcp)execute_360, (funcp)execute_361, (funcp)execute_362, (funcp)execute_363, (funcp)execute_364, (funcp)execute_365, (funcp)execute_58, (funcp)execute_62, (funcp)execute_63, (funcp)execute_64, (funcp)execute_13, (funcp)execute_15, (funcp)execute_16, (funcp)execute_74, (funcp)execute_77, (funcp)vlog_simple_process_execute_0_fast_no_reg_no_agg, (funcp)execute_79, (funcp)execute_80, (funcp)execute_81, (funcp)execute_82, (funcp)execute_83, (funcp)execute_84, (funcp)execute_85, (funcp)execute_86, (funcp)execute_87, (funcp)execute_89, (funcp)execute_90, (funcp)execute_91, (funcp)execute_92, (funcp)execute_93, (funcp)execute_94, (funcp)execute_95, (funcp)execute_96, (funcp)vlog_timingcheck_execute_0, (funcp)timing_checker_condition_m_99662441_f4d1fc17_109, (funcp)timing_checker_condition_m_99662441_f4d1fc17_110, (funcp)timing_checker_condition_m_99662441_f4d1fc17_111, (funcp)timing_checker_condition_m_99662441_f4d1fc17_112, (funcp)timing_checker_condition_m_99662441_f4d1fc17_113, (funcp)timing_checker_condition_m_99662441_f4d1fc17_114, (funcp)timing_checker_condition_m_99662441_f4d1fc17_115, (funcp)timing_checker_condition_m_99662441_f4d1fc17_116, (funcp)timing_checker_condition_m_99662441_f4d1fc17_117, (funcp)timing_checker_condition_m_99662441_f4d1fc17_118, (funcp)timing_checker_condition_m_99662441_f4d1fc17_119, (funcp)timing_checker_condition_m_99662441_f4d1fc17_120, (funcp)timing_checker_condition_m_99662441_f4d1fc17_121, (funcp)timing_checker_condition_m_99662441_f4d1fc17_122, (funcp)timing_checker_condition_m_99662441_f4d1fc17_123, (funcp)timing_checker_condition_m_99662441_f4d1fc17_124, (funcp)timing_checker_condition_m_99662441_f4d1fc17_125, (funcp)timing_checker_condition_m_99662441_f4d1fc17_126, (funcp)timing_checker_condition_m_99662441_f4d1fc17_127, (funcp)timing_checker_condition_m_99662441_f4d1fc17_128, (funcp)timing_checker_condition_m_99662441_f4d1fc17_129, (funcp)timing_checker_condition_m_99662441_f4d1fc17_130, (funcp)timing_checker_condition_m_99662441_f4d1fc17_131, (funcp)timing_checker_condition_m_99662441_f4d1fc17_132, (funcp)timing_checker_condition_m_99662441_f4d1fc17_133, (funcp)timing_checker_condition_m_99662441_f4d1fc17_134, (funcp)timing_checker_condition_m_99662441_f4d1fc17_135, (funcp)timing_checker_condition_m_99662441_f4d1fc17_136, (funcp)timing_checker_condition_m_99662441_f4d1fc17_137, (funcp)timing_checker_condition_m_99662441_f4d1fc17_138, (funcp)timing_checker_condition_m_99662441_f4d1fc17_139, (funcp)timing_checker_condition_m_99662441_f4d1fc17_140, (funcp)timing_checker_condition_m_99662441_f4d1fc17_141, (funcp)timing_checker_condition_m_99662441_f4d1fc17_142, (funcp)timing_checker_condition_m_99662441_f4d1fc17_143, (funcp)timing_checker_condition_m_99662441_f4d1fc17_144, (funcp)execute_123, (funcp)execute_131, (funcp)execute_132, (funcp)execute_133, (funcp)execute_97, (funcp)execute_19, (funcp)execute_20, (funcp)execute_134, (funcp)execute_50, (funcp)execute_319, (funcp)execute_320, (funcp)execute_321, (funcp)execute_322, (funcp)execute_323, (funcp)execute_324, (funcp)execute_325, (funcp)execute_326, (funcp)execute_318, (funcp)execute_54, (funcp)execute_55, (funcp)execute_56, (funcp)execute_57, (funcp)execute_368, (funcp)execute_369, (funcp)execute_370, (funcp)execute_371, (funcp)execute_372, (funcp)execute_373, (funcp)transaction_1, (funcp)transaction_2, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8, (funcp)transaction_9, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)transaction_13, (funcp)transaction_14, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_20, (funcp)transaction_21, (funcp)transaction_22, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_26, (funcp)transaction_27, (funcp)transaction_28, (funcp)transaction_29, (funcp)transaction_30, (funcp)transaction_31, (funcp)transaction_32, (funcp)transaction_33, (funcp)transaction_34, (funcp)transaction_35, (funcp)transaction_36, (funcp)transaction_37, (funcp)transaction_38, (funcp)transaction_39, (funcp)transaction_40, (funcp)transaction_41, (funcp)transaction_42, (funcp)transaction_43, (funcp)transaction_44, (funcp)transaction_45, (funcp)transaction_46, (funcp)transaction_47, (funcp)transaction_48, (funcp)vlog_transfunc_eventcallback};
const int NumRelocateId= 178;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/BCD_tb_time_impl/xsim.reloc",  (void **)funcTab, 178);

	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/BCD_tb_time_impl/xsim.reloc");
}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/BCD_tb_time_impl/xsim.reloc");
	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net
	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/BCD_tb_time_impl/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/BCD_tb_time_impl/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/BCD_tb_time_impl/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, (void*)0, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
