#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_WRPOKAKOIvWmNJaln0barH_cclib_INIT_FILE(unsigned int decCovId);

#define __MW_INSTRUM_TRUTH_TABLE_OFFSET_20 0U
#define __MW_INSTRUM_RECORD_COMBINATION_HIT_20() \
  (++__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables[__MW_INSTRUM_TRUTH_TABLE_OFFSET_20 + __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20])

#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(22U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 = 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(23U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 = 0), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_22(expr) \
  ((expr) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(22U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 = 1), 1) : 1) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(23U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 = 0), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 += 1), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) \
  ((expr) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(27U), (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 += 1), 1) : 1) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(28U), 0) : 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_20(...) \
  ((__VA_ARGS__) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(20U), __MW_INSTRUM_RECORD_COMBINATION_HIT_20(), (1 == 1)) : (1 == 1)) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(21U), __MW_INSTRUM_RECORD_COMBINATION_HIT_20(), (0 == 1)) : (0 == 1)))
#else
#define __MW_INSTRUM_NODE_20(expr) \
  ((expr) ? \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(20U), __MW_INSTRUM_RECORD_COMBINATION_HIT_20(), 1) : 1) : \
   ((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables != (unsigned int *) 0xFFFFFFFFFFFFFFFFU) ? (__MW_INSTRUM_RECORD_HIT_NO_TEST(21U), __MW_INSTRUM_RECORD_COMBINATION_HIT_20(), 0) : 0))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() \
  unsigned int __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_curr_combination_idx_20 = 0; 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_abs_tol, __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled || __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables = __MW_INSTRUM_WRPOKAKOIvWmNJaln0barH_cclib_INIT_FILE(20)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (((!__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled || __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables = __MW_INSTRUM_WRPOKAKOIvWmNJaln0barH_cclib_INIT_FILE(20)))), \
   __MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() \
  (((!__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled || __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables = __MW_INSTRUM_WRPOKAKOIvWmNJaln0barH_cclib_INIT_FILE(20)))), \
   __MW_INSTRUM_RECORD_HIT(5U))
#define __MW_INSTRUM_NODE_6() \
  (__MW_INSTRUM_RECORD_HIT(6U))
#define __MW_INSTRUM_NODE_7() \
  (__MW_INSTRUM_RECORD_HIT(7U))
#define __MW_INSTRUM_NODE_8() \
  (__MW_INSTRUM_RECORD_HIT(8U))
#define __MW_INSTRUM_NODE_9() \
  (__MW_INSTRUM_RECORD_HIT(9U))
#define __MW_INSTRUM_NODE_10() \
  (__MW_INSTRUM_RECORD_HIT(10U))
#define __MW_INSTRUM_NODE_11() \
  (__MW_INSTRUM_RECORD_HIT(11U))
#define __MW_INSTRUM_NODE_12() \
  (__MW_INSTRUM_RECORD_HIT(12U))
#define __MW_INSTRUM_NODE_13() \
  (__MW_INSTRUM_RECORD_HIT(13U))
#define __MW_INSTRUM_NODE_14() \
  (((!__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled || __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_ptruth_tables = __MW_INSTRUM_WRPOKAKOIvWmNJaln0barH_cclib_INIT_FILE(20)))), \
   __MW_INSTRUM_RECORD_HIT(14U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_15(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(15U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(16U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_15(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(15U), 1) : (__MW_INSTRUM_RECORD_HIT(16U), 0))
#endif
#define __MW_INSTRUM_NODE_17(lhs, rhs) (((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(17U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(18U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(19U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_24(lhs, rhs) (((__mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_enabled && __mw_instrum_WRPOKAKOIvWmNJaln0barH_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(24U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(25U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(26U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_21() \
  (__MW_INSTRUM_RECORD_HIT(21U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(29U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(30U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_29(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(29U), 1) : (__MW_INSTRUM_RECORD_HIT(30U), 0))
#endif
#define __MW_INSTRUM_NODE_30() \
  (__MW_INSTRUM_RECORD_HIT(30U))
#define __MW_INSTRUM_NODE_31() \
  (__MW_INSTRUM_RECORD_HIT(31U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_22CZ_WRPOKAKOIvWmNJaln0barH(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_22(...) (__MW_INSTRUM_RECORD_HIT_22CZ_WRPOKAKOIvWmNJaln0barH(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_22(exp) (__MW_INSTRUM_RECORD_HIT_22CZ_WRPOKAKOIvWmNJaln0barH(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27CZ_WRPOKAKOIvWmNJaln0barH(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27CZ_WRPOKAKOIvWmNJaln0barH(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27CZ_WRPOKAKOIvWmNJaln0barH(exp))
#endif
#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_20DA_22_27Z_WRPOKAKOIvWmNJaln0barH(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_20(...) (__MW_INSTRUM_RECORD_HIT_20DA_22_27Z_WRPOKAKOIvWmNJaln0barH(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_20(exp) (__MW_INSTRUM_RECORD_HIT_20DA_22_27Z_WRPOKAKOIvWmNJaln0barH(exp))
#endif


#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_2XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_2() __MW_INSTRUM_RECORD_HIT_2XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_3EZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_3() __MW_INSTRUM_RECORD_HIT_3EZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_4XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_4() __MW_INSTRUM_RECORD_HIT_4XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_5EZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_5() __MW_INSTRUM_RECORD_HIT_5EZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_6DZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_6() __MW_INSTRUM_RECORD_HIT_6DZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_7XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_7() __MW_INSTRUM_RECORD_HIT_7XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_8DZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_8() __MW_INSTRUM_RECORD_HIT_8DZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_9XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_9() __MW_INSTRUM_RECORD_HIT_9XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_10DZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_10() __MW_INSTRUM_RECORD_HIT_10DZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_11XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_11() __MW_INSTRUM_RECORD_HIT_11XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_12DZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_12() __MW_INSTRUM_RECORD_HIT_12DZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_13XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_13() __MW_INSTRUM_RECORD_HIT_13XZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_14EZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_14() __MW_INSTRUM_RECORD_HIT_14EZ_WRPOKAKOIvWmNJaln0barH()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_15CZ_WRPOKAKOIvWmNJaln0barH(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_15(...) (__MW_INSTRUM_RECORD_HIT_15CZ_WRPOKAKOIvWmNJaln0barH(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_15(exp) (__MW_INSTRUM_RECORD_HIT_15CZ_WRPOKAKOIvWmNJaln0barH(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_17IZ_WRPOKAKOIvWmNJaln0barH(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_17(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_17IZ_WRPOKAKOIvWmNJaln0barH((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_24IZ_WRPOKAKOIvWmNJaln0barH(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_24(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_24IZ_WRPOKAKOIvWmNJaln0barH((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_21() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_29DZ_WRPOKAKOIvWmNJaln0barH(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_29(...) (__MW_INSTRUM_RECORD_HIT_29DZ_WRPOKAKOIvWmNJaln0barH(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_29(exp) (__MW_INSTRUM_RECORD_HIT_29DZ_WRPOKAKOIvWmNJaln0barH(exp))
#endif

#define __MW_INSTRUM_NODE_30() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_31XZ_WRPOKAKOIvWmNJaln0barH(void) { }
#define __MW_INSTRUM_NODE_31() __MW_INSTRUM_RECORD_HIT_31XZ_WRPOKAKOIvWmNJaln0barH()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "/Applications/MATLAB_R2018b.app/toolbox/simulink/simdemos/simfeatures/src/my_func.c"
# 2 "/Applications/MATLAB_R2018b.app/toolbox/simulink/simdemos/simfeatures/include/my_func.h"
#ifndef _MY_FUNC_H_
#define _MY_FUNC_H_
# 12
typedef 
# 7
enum { 
RED, 
YELLOW, 
GREEN, 
UNKNOWN
} TrafficLightColor; 



typedef 
# 14
struct { 
int input; 
} SIGNALBUS; 




typedef 
# 18
struct { 
int upper_saturation_limit; 
int lower_saturation_limit; 
} LIMITBUS; 




typedef 
# 23
struct { 
SIGNALBUS inputsignal; 
LIMITBUS limits; 
} COUNTERBUS; 


extern double add(double u1, double u2); 
extern double timesK(double u, double K); 
extern TrafficLightColor getNextTrafficLight(TrafficLightColor current); 
extern void counterbusFcn(const COUNTERBUS * u1, int u2, COUNTERBUS * y1, int * y2); 

#endif /* _MY_FUNC_H_ */
# 12 "/Applications/MATLAB_R2018b.app/extern/include/tmwtypes.h"
#ifndef tmwtypes_h
#define tmwtypes_h

#ifndef __TMWTYPES__
#define __TMWTYPES__
# 25 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/limits.h" 3
#ifndef __CLANG_LIMITS_H
#define __CLANG_LIMITS_H
# 60 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/limits.h" 3
#ifndef _LIMITS_H_
#define _LIMITS_H_
# 67 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/cdefs.h" 3
#ifndef _CDEFS_H_
#define _CDEFS_H_
# 210
#ifndef __dead
#define __dead

#endif /* __dead */
# 298
#ifndef __abortlike
#define __abortlike __dead2 __cold __not_tail_called
#endif /* __abortlike */
# 381
#ifndef __COPYRIGHT
#define __COPYRIGHT(s) __IDSTRING(copyright,s)
#endif /* __COPYRIGHT */

#ifndef __RCSID
#define __RCSID(s) __IDSTRING(rcsid,s)
#endif /* __RCSID */

#ifndef __SCCSID
#define __SCCSID(s) __IDSTRING(sccsid,s)
#endif /* __SCCSID */

#ifndef __PROJECT_VERSION
#define __PROJECT_VERSION(s) __IDSTRING(project_version,s)
#endif /* __PROJECT_VERSION */


#ifndef __FBSDID
#define __FBSDID(s) 
#endif /* __FBSDID */

#ifndef __DECONST
#define __DECONST(type,var) __CAST_AWAY_QUALIFIER(var, const, type)
#endif /* __DECONST */

#ifndef __DEVOLATILE
#define __DEVOLATILE(type,var) __CAST_AWAY_QUALIFIER(var, volatile, type)
#endif /* __DEVOLATILE */

#ifndef __DEQUALIFY
#define __DEQUALIFY(type,var) __CAST_AWAY_QUALIFIER(var, const volatile, type)
#endif /* __DEQUALIFY */
# 560
#ifndef __DARWIN_NON_CANCELABLE
#define __DARWIN_NON_CANCELABLE 0
#endif /* __DARWIN_NON_CANCELABLE */
# 789
#ifndef __CAST_AWAY_QUALIFIER
#define __CAST_AWAY_QUALIFIER(variable,qualifier,type) (type) (long)(variable)
#endif /* __CAST_AWAY_QUALIFIER */





#ifndef __XNU_PRIVATE_EXTERN
#define __XNU_PRIVATE_EXTERN __attribute__((visibility("hidden")))
#endif /* __XNU_PRIVATE_EXTERN */
# 855
#endif /* _CDEFS_H_ */
# 36 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 3
#ifndef _I386_LIMITS_H_
#define _I386_LIMITS_H_
# 22 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_limits.h" 3
#ifndef _I386__LIMITS_H_
#define _I386__LIMITS_H_



#endif /* _I386__LIMITS_H_ */
# 107 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/limits.h" 3
#endif /* _I386_LIMITS_H_ */
# 65 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/syslimits.h" 3
#ifndef _SYS_SYSLIMITS_H_
#define _SYS_SYSLIMITS_H_
# 117
#endif /* _SYS_SYSLIMITS_H_ */
# 167 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/limits.h" 3
#endif /* _LIMITS_H_ */
# 118 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/limits.h" 3
#endif /* __CLANG_LIMITS_H */
# 26 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/stdbool.h" 3
#ifndef __STDBOOL_H
#define __STDBOOL_H
# 47
#endif /* __STDBOOL_H */
# 24 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/float.h" 3
#ifndef __CLANG_FLOAT_H
#define __CLANG_FLOAT_H
# 22 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/float.h" 3
#ifndef __FLOAT_H
#define __FLOAT_H
# 140
#endif /* __FLOAT_H */
# 166 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/float.h" 3
#endif /* __CLANG_FLOAT_H */
# 71 "/Applications/MATLAB_R2018b.app/extern/include/tmwtypes.h"
typedef unsigned char uchar_T; 
typedef unsigned short ushort_T; 
typedef unsigned long ulong_T; 
# 79
typedef unsigned long long ulonglong_T; 
# 202
typedef signed char int8_T; 
# 217
typedef unsigned char uint8_T; 
# 233
typedef short int16_T; 
# 249
typedef unsigned short uint16_T; 
# 265
typedef int int32_T; 
# 281
typedef unsigned uint32_T; 
# 342
typedef float real32_T; 
# 356
typedef double real64_T; 
# 400
__extension__ typedef long long int64_T; 
# 440
__extension__ typedef unsigned long long uint64_T; 
# 496
typedef real64_T real_T; 
# 505
typedef real_T time_T; 
# 517
typedef unsigned char boolean_T; 


#ifndef CHARACTER_T
#define CHARACTER_T char
#endif /* CHARACTER_T */
typedef char char_T; 


#ifndef INTEGER_T
#define INTEGER_T int
#endif /* INTEGER_T */
typedef int int_T; 


#ifndef UINTEGER_T
#define UINTEGER_T unsigned
#endif /* UINTEGER_T */
typedef unsigned uint_T; 


#ifndef BYTE_T
#define BYTE_T unsigned char
#endif /* BYTE_T */
typedef unsigned char byte_T; 
# 553
typedef 
# 551
struct { 
real32_T re, im; 
} creal32_T; 
# 562
typedef 
# 560
struct { 
real64_T re, im; 
} creal64_T; 
# 571
typedef 
# 569
struct { 
real_T re, im; 
} creal_T; 
# 582
typedef 
# 580
struct { 
int8_T re, im; 
} cint8_T; 
# 591
typedef 
# 589
struct { 
uint8_T re, im; 
} cuint8_T; 
# 600
typedef 
# 598
struct { 
int16_T re, im; 
} cint16_T; 
# 609
typedef 
# 607
struct { 
uint16_T re, im; 
} cuint16_T; 
# 618
typedef 
# 616
struct { 
int32_T re, im; 
} cint32_T; 
# 627
typedef 
# 625
struct { 
uint32_T re, im; 
} cuint32_T; 
# 636
typedef 
# 634
struct { 
int64_T re, im; 
} cint64_T; 
# 645
typedef 
# 643
struct { 
uint64_T re, im; 
} cuint64_T; 
# 45 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/stddef.h" 3
#ifdef __need_ptrdiff_t
#undef __need_ptrdiff_t
#endif /* __need_ptrdiff_t */



typedef long ptrdiff_t; 




#ifdef __need_size_t
#undef __need_size_t
#endif /* __need_size_t */



typedef unsigned long size_t; 
# 76
typedef unsigned long rsize_t; 



#ifdef __need_wchar_t
#undef __need_wchar_t
#endif /* __need_wchar_t */
# 90
typedef int wchar_t; 





#ifdef __need_NULL
#undef __need_NULL
#endif /* __need_NULL */
# 26 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/__stddef_max_align_t.h" 3
#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED




typedef long double max_align_t; 
# 43
#endif /* __CLANG_MAX_ALIGN_T_DEFINED */
# 794 "/Applications/MATLAB_R2018b.app/extern/include/tmwtypes.h"
typedef size_t mwSize; 
typedef size_t mwIndex; 
typedef ptrdiff_t mwSignedIndex; 


typedef int SLIndex; 
typedef int SLSize; 
# 826
typedef unsigned short CHAR16_T; 


#endif /* __TMWTYPES__ */

#endif /* tmwtypes_h */
# 5 "/Applications/MATLAB_R2018b.app/toolbox/simulink/simdemos/simfeatures/src/my_func.c"
double add(double u1, double u2) 
{ __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); 
{ double __mw_tmp_for_return = u1 + u2; __MW_INSTRUM_NODE_2(); return __mw_tmp_for_return; } 
} 

double timesK(double u, double K) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_3(); 
{ double __mw_tmp_for_return = u * K; __MW_INSTRUM_NODE_4(); return __mw_tmp_for_return; } 
} 

TrafficLightColor getNextTrafficLight(TrafficLightColor current) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_5(); { 
switch (current) { 
case RED:  __MW_INSTRUM_NODE_6(); __MW_INSTRUM_NODE_7(); 
return GREEN; 
case YELLOW:  __MW_INSTRUM_NODE_8(); __MW_INSTRUM_NODE_9(); 
return RED; 
case GREEN:  __MW_INSTRUM_NODE_10(); __MW_INSTRUM_NODE_11(); 
return YELLOW; 
default:  __MW_INSTRUM_NODE_12(); __MW_INSTRUM_NODE_13(); 
return UNKNOWN; 
}  } 
} 

void counterbusFcn(const COUNTERBUS *u1, int32_T u2, COUNTERBUS *y1, int32_T *y2) 
{ int __mw_tmp_for_expr_2; int __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_14(); { 
int32_T limit; 
boolean_T inputGElower; 
limit = (u1->inputsignal).input + u2; 
inputGElower = __MW_INSTRUM_NODE_15(((__mw_tmp_for_expr_1 = (u1->limits).lower_saturation_limit), (__MW_INSTRUM_NODE_17(limit, __mw_tmp_for_expr_1), (limit >= __mw_tmp_for_expr_1)))); { 
if (__MW_INSTRUM_NODE_20(__MW_INSTRUM_NODE_22(((__mw_tmp_for_expr_2 = (u1->limits).upper_saturation_limit), (__MW_INSTRUM_NODE_24(__mw_tmp_for_expr_2, limit), (__mw_tmp_for_expr_2 >= limit)))) && (__MW_INSTRUM_NODE_27(inputGElower)))) { 
*y2 = limit; 
} else { { 
if (__MW_INSTRUM_NODE_29(inputGElower)) { 
limit = (u1->limits).upper_saturation_limit; 
} else { 
limit = (u1->limits).lower_saturation_limit; 
}  } 
*y2 = limit; 
}  } 
(y1->inputsignal).input = *y2; 
y1->limits = u1->limits; } __MW_INSTRUM_NODE_31(); 
} 
