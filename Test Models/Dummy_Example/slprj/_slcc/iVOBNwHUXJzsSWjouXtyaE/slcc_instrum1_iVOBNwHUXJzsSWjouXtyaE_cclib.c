#ifndef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int* __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled;

#define __MW_INSTRUM_RECORD_HIT_NO_TEST(id) ((void) ++__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits[id - 1U])
#define __MW_INSTRUM_RECORD_HIT(id) ((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(id) : (void) 0)

static unsigned int *__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables;

#ifdef __cplusplus
extern "C"
#else
extern
#endif
unsigned int *__MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(unsigned int decCovId);


#define __MW_INSTRUM_FCN_ENTER_1() 
#define __MW_INSTRUM_FCN_ENTER_2() 
#define __MW_INSTRUM_FCN_ENTER_3() 
#define __MW_INSTRUM_FCN_ENTER_4() 
#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_abs_tol;
#ifdef __cplusplus
extern "C"
#else
extern
#endif
double __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_rel_tol;

#define __MW_INSTRUM_ABS(a) ((a) < 0 ? -(a) : (a))
#define __MW_INSTRUM_MAX(lhs, rhs) ((lhs) < (rhs) ? (rhs) : (lhs))
#define __MW_INSTRUM_TOL(lhs, rhs) __MW_INSTRUM_MAX(__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_abs_tol, __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_rel_tol * __MW_INSTRUM_MAX(__MW_INSTRUM_ABS(lhs), __MW_INSTRUM_ABS(rhs)))

#define __MW_INSTRUM_NODE_1() \
  (((!__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled || __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables = __MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(1U))
#define __MW_INSTRUM_NODE_2() \
  (__MW_INSTRUM_RECORD_HIT(2U))
#define __MW_INSTRUM_NODE_3() \
  (__MW_INSTRUM_RECORD_HIT(3U))
#define __MW_INSTRUM_NODE_4() \
  (__MW_INSTRUM_RECORD_HIT(4U))
#define __MW_INSTRUM_NODE_5() \
  (__MW_INSTRUM_RECORD_HIT(5U))
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
  (__MW_INSTRUM_RECORD_HIT(14U))
#define __MW_INSTRUM_NODE_15() \
  (__MW_INSTRUM_RECORD_HIT(15U))
#define __MW_INSTRUM_NODE_16() \
  (__MW_INSTRUM_RECORD_HIT(16U))
#define __MW_INSTRUM_NODE_17() \
  (__MW_INSTRUM_RECORD_HIT(17U))
#define __MW_INSTRUM_NODE_18() \
  (__MW_INSTRUM_RECORD_HIT(18U))
#define __MW_INSTRUM_NODE_19() \
  (__MW_INSTRUM_RECORD_HIT(19U))
#define __MW_INSTRUM_NODE_20() \
  (__MW_INSTRUM_RECORD_HIT(20U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_21(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(21U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(22U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_21(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(21U), 1) : (__MW_INSTRUM_RECORD_HIT(22U), 0))
#endif
#define __MW_INSTRUM_NODE_22() \
  (__MW_INSTRUM_RECORD_HIT(22U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_23(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(23U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(24U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_23(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(23U), 1) : (__MW_INSTRUM_RECORD_HIT(24U), 0))
#endif
#define __MW_INSTRUM_NODE_24() \
  (__MW_INSTRUM_RECORD_HIT(24U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_25(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(25U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(26U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_25(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(25U), 1) : (__MW_INSTRUM_RECORD_HIT(26U), 0))
#endif
#define __MW_INSTRUM_NODE_26() \
  (__MW_INSTRUM_RECORD_HIT(26U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(27U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(28U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_27(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(27U), 1) : (__MW_INSTRUM_RECORD_HIT(28U), 0))
#endif
#define __MW_INSTRUM_NODE_29(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(29U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(30U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(31U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_32() \
  (__MW_INSTRUM_RECORD_HIT(32U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_33(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(33U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(34U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_33(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(33U), 1) : (__MW_INSTRUM_RECORD_HIT(34U), 0))
#endif
#define __MW_INSTRUM_NODE_35() \
  (__MW_INSTRUM_RECORD_HIT(35U))
#define __MW_INSTRUM_NODE_36() \
  (__MW_INSTRUM_RECORD_HIT(36U))
#define __MW_INSTRUM_NODE_37() \
  (__MW_INSTRUM_RECORD_HIT(37U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_38(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(38U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(39U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_38(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(38U), 1) : (__MW_INSTRUM_RECORD_HIT(39U), 0))
#endif
#define __MW_INSTRUM_NODE_40(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? (((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) < (rhs)) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(40U) : (((lhs) >= (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(41U) : (void) 0)) : (void) 0))
#define __MW_INSTRUM_NODE_42() \
  (__MW_INSTRUM_RECORD_HIT(42U))
#define __MW_INSTRUM_NODE_43() \
  (__MW_INSTRUM_RECORD_HIT(43U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_44(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(44U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(45U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_44(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(44U), 1) : (__MW_INSTRUM_RECORD_HIT(45U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_46(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(46U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(47U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_46(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(46U), 1) : (__MW_INSTRUM_RECORD_HIT(47U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(48U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(49U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_48(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(48U), 1) : (__MW_INSTRUM_RECORD_HIT(49U), 0))
#endif
#define __MW_INSTRUM_NODE_50(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? (((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) < (rhs)) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(50U) : (((lhs) >= (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(51U) : (void) 0)) : (void) 0))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_52(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(52U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(53U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_52(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(52U), 1) : (__MW_INSTRUM_RECORD_HIT(53U), 0))
#endif
#define __MW_INSTRUM_NODE_54(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? (((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) <= (rhs)) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(54U) : (((lhs) > (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(55U) : (void) 0)) : (void) 0))
#define __MW_INSTRUM_NODE_47() \
  (__MW_INSTRUM_RECORD_HIT(47U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_56(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(56U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(57U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_56(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(56U), 1) : (__MW_INSTRUM_RECORD_HIT(57U), 0))
#endif
#define __MW_INSTRUM_NODE_58(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(58U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(59U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(60U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_57() \
  (__MW_INSTRUM_RECORD_HIT(57U))
#define __MW_INSTRUM_NODE_61() \
  (__MW_INSTRUM_RECORD_HIT(61U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_62(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(62U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(63U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_62(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(62U), 1) : (__MW_INSTRUM_RECORD_HIT(63U), 0))
#endif
#define __MW_INSTRUM_NODE_63() \
  (__MW_INSTRUM_RECORD_HIT(63U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_64(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(64U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(65U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_64(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(64U), 1) : (__MW_INSTRUM_RECORD_HIT(65U), 0))
#endif
#define __MW_INSTRUM_NODE_65() \
  (__MW_INSTRUM_RECORD_HIT(65U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_66(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(66U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(67U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_66(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(66U), 1) : (__MW_INSTRUM_RECORD_HIT(67U), 0))
#endif
#define __MW_INSTRUM_NODE_68() \
  (__MW_INSTRUM_RECORD_HIT(68U))
#define __MW_INSTRUM_NODE_69() \
  (__MW_INSTRUM_RECORD_HIT(69U))
#define __MW_INSTRUM_NODE_70() \
  (__MW_INSTRUM_RECORD_HIT(70U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_71(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(71U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(72U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_71(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(71U), 1) : (__MW_INSTRUM_RECORD_HIT(72U), 0))
#endif
#define __MW_INSTRUM_NODE_73(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? (((lhs) >= (rhs) - __MW_INSTRUM_TOL((lhs), (rhs)) && (lhs) <= (rhs)) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(73U) : (((lhs) > (rhs) && (lhs) <= (rhs) + __MW_INSTRUM_TOL((lhs), (rhs))) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(74U) : (void) 0)) : (void) 0))
#define __MW_INSTRUM_NODE_75() \
  (__MW_INSTRUM_RECORD_HIT(75U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_76(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(76U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(77U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_76(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(76U), 1) : (__MW_INSTRUM_RECORD_HIT(77U), 0))
#endif
#define __MW_INSTRUM_NODE_77() \
  (__MW_INSTRUM_RECORD_HIT(77U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_78(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(78U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(79U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_78(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(78U), 1) : (__MW_INSTRUM_RECORD_HIT(79U), 0))
#endif
#define __MW_INSTRUM_NODE_80() \
  (__MW_INSTRUM_RECORD_HIT(80U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(81U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(82U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_81(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(81U), 1) : (__MW_INSTRUM_RECORD_HIT(82U), 0))
#endif
#define __MW_INSTRUM_NODE_82() \
  (__MW_INSTRUM_RECORD_HIT(82U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(83U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(84U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_83(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(83U), 1) : (__MW_INSTRUM_RECORD_HIT(84U), 0))
#endif
#define __MW_INSTRUM_NODE_84() \
  (__MW_INSTRUM_RECORD_HIT(84U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_85(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(85U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(86U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_85(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(85U), 1) : (__MW_INSTRUM_RECORD_HIT(86U), 0))
#endif
#define __MW_INSTRUM_NODE_87(lhs, rhs) (((__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled && __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_phits) ? ((lhs) == (rhs) - 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(87U) : ((lhs) == (rhs) ? __MW_INSTRUM_RECORD_HIT_NO_TEST(88U) : ((lhs) == (rhs) + 1 ? __MW_INSTRUM_RECORD_HIT_NO_TEST(89U) : (void) 0))) : (void) 0))
#define __MW_INSTRUM_NODE_90() \
  (__MW_INSTRUM_RECORD_HIT(90U))
#define __MW_INSTRUM_NODE_91() \
  (__MW_INSTRUM_RECORD_HIT(91U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_92(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(92U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(93U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_92(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(92U), 1) : (__MW_INSTRUM_RECORD_HIT(93U), 0))
#endif
#define __MW_INSTRUM_NODE_93() \
  (__MW_INSTRUM_RECORD_HIT(93U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_94(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(94U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(95U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_94(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(94U), 1) : (__MW_INSTRUM_RECORD_HIT(95U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_96(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(96U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(97U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_96(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(96U), 1) : (__MW_INSTRUM_RECORD_HIT(97U), 0))
#endif
#define __MW_INSTRUM_NODE_97() \
  (__MW_INSTRUM_RECORD_HIT(97U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_98(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(98U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(99U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_98(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(98U), 1) : (__MW_INSTRUM_RECORD_HIT(99U), 0))
#endif
#define __MW_INSTRUM_NODE_95() \
  (__MW_INSTRUM_RECORD_HIT(95U))
#define __MW_INSTRUM_NODE_100() \
  (__MW_INSTRUM_RECORD_HIT(100U))
#define __MW_INSTRUM_NODE_101() \
  (__MW_INSTRUM_RECORD_HIT(101U))
#define __MW_INSTRUM_NODE_102() \
  (__MW_INSTRUM_RECORD_HIT(102U))
#define __MW_INSTRUM_NODE_103() \
  (__MW_INSTRUM_RECORD_HIT(103U))
#define __MW_INSTRUM_NODE_104() \
  (__MW_INSTRUM_RECORD_HIT(104U))
#define __MW_INSTRUM_NODE_105() \
  (__MW_INSTRUM_RECORD_HIT(105U))
#define __MW_INSTRUM_NODE_106() \
  (__MW_INSTRUM_RECORD_HIT(106U))
#define __MW_INSTRUM_NODE_107() \
  (__MW_INSTRUM_RECORD_HIT(107U))
#define __MW_INSTRUM_NODE_108() \
  (__MW_INSTRUM_RECORD_HIT(108U))
#define __MW_INSTRUM_NODE_109() \
  (__MW_INSTRUM_RECORD_HIT(109U))
#define __MW_INSTRUM_NODE_110() \
  (__MW_INSTRUM_RECORD_HIT(110U))
#define __MW_INSTRUM_NODE_111() \
  (__MW_INSTRUM_RECORD_HIT(111U))
#define __MW_INSTRUM_NODE_112() \
  (__MW_INSTRUM_RECORD_HIT(112U))
#define __MW_INSTRUM_NODE_113() \
  (__MW_INSTRUM_RECORD_HIT(113U))
#define __MW_INSTRUM_NODE_114() \
  (__MW_INSTRUM_RECORD_HIT(114U))
#define __MW_INSTRUM_NODE_115() \
  (__MW_INSTRUM_RECORD_HIT(115U))
#define __MW_INSTRUM_NODE_116() \
  (__MW_INSTRUM_RECORD_HIT(116U))
#define __MW_INSTRUM_NODE_117() \
  (__MW_INSTRUM_RECORD_HIT(117U))
#define __MW_INSTRUM_NODE_118() \
  (__MW_INSTRUM_RECORD_HIT(118U))
#define __MW_INSTRUM_NODE_119() \
  (__MW_INSTRUM_RECORD_HIT(119U))
#define __MW_INSTRUM_NODE_120() \
  (((!__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled || __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables = __MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(120U))
#define __MW_INSTRUM_NODE_121() \
  (__MW_INSTRUM_RECORD_HIT(121U))
#define __MW_INSTRUM_NODE_122() \
  (__MW_INSTRUM_RECORD_HIT(122U))
#define __MW_INSTRUM_NODE_123() \
  (__MW_INSTRUM_RECORD_HIT(123U))
#define __MW_INSTRUM_NODE_124() \
  (__MW_INSTRUM_RECORD_HIT(124U))
#define __MW_INSTRUM_NODE_125() \
  (__MW_INSTRUM_RECORD_HIT(125U))
#define __MW_INSTRUM_NODE_126() \
  (__MW_INSTRUM_RECORD_HIT(126U))
#define __MW_INSTRUM_NODE_127() \
  (__MW_INSTRUM_RECORD_HIT(127U))
#define __MW_INSTRUM_NODE_128() \
  (__MW_INSTRUM_RECORD_HIT(128U))
#define __MW_INSTRUM_NODE_129() \
  (__MW_INSTRUM_RECORD_HIT(129U))
#define __MW_INSTRUM_NODE_130() \
  (__MW_INSTRUM_RECORD_HIT(130U))
#define __MW_INSTRUM_NODE_131() \
  (__MW_INSTRUM_RECORD_HIT(131U))
#define __MW_INSTRUM_NODE_132() \
  (__MW_INSTRUM_RECORD_HIT(132U))
#define __MW_INSTRUM_NODE_133() \
  (__MW_INSTRUM_RECORD_HIT(133U))
#define __MW_INSTRUM_NODE_134() \
  (__MW_INSTRUM_RECORD_HIT(134U))
#define __MW_INSTRUM_NODE_135() \
  (__MW_INSTRUM_RECORD_HIT(135U))
#define __MW_INSTRUM_NODE_136() \
  (__MW_INSTRUM_RECORD_HIT(136U))
#define __MW_INSTRUM_NODE_137() \
  (__MW_INSTRUM_RECORD_HIT(137U))
#define __MW_INSTRUM_NODE_138() \
  (__MW_INSTRUM_RECORD_HIT(138U))
#define __MW_INSTRUM_NODE_139() \
  (__MW_INSTRUM_RECORD_HIT(139U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_140(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(140U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(141U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_140(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(140U), 1) : (__MW_INSTRUM_RECORD_HIT(141U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_142(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(142U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(143U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_142(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(142U), 1) : (__MW_INSTRUM_RECORD_HIT(143U), 0))
#endif
#define __MW_INSTRUM_NODE_143() \
  (__MW_INSTRUM_RECORD_HIT(143U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_144(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(144U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(145U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_144(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(144U), 1) : (__MW_INSTRUM_RECORD_HIT(145U), 0))
#endif
#define __MW_INSTRUM_NODE_145() \
  (__MW_INSTRUM_RECORD_HIT(145U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_146(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(146U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(147U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_146(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(146U), 1) : (__MW_INSTRUM_RECORD_HIT(147U), 0))
#endif
#define __MW_INSTRUM_NODE_147() \
  (__MW_INSTRUM_RECORD_HIT(147U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_148(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(148U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(149U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_148(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(148U), 1) : (__MW_INSTRUM_RECORD_HIT(149U), 0))
#endif
#define __MW_INSTRUM_NODE_141() \
  (__MW_INSTRUM_RECORD_HIT(141U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_150(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(150U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(151U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_150(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(150U), 1) : (__MW_INSTRUM_RECORD_HIT(151U), 0))
#endif
#define __MW_INSTRUM_NODE_151() \
  (__MW_INSTRUM_RECORD_HIT(151U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_152(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(152U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(153U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_152(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(152U), 1) : (__MW_INSTRUM_RECORD_HIT(153U), 0))
#endif
#define __MW_INSTRUM_NODE_153() \
  (__MW_INSTRUM_RECORD_HIT(153U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(154U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(155U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_154(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(154U), 1) : (__MW_INSTRUM_RECORD_HIT(155U), 0))
#endif
#define __MW_INSTRUM_NODE_155() \
  (__MW_INSTRUM_RECORD_HIT(155U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(156U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(157U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_156(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(156U), 1) : (__MW_INSTRUM_RECORD_HIT(157U), 0))
#endif
#define __MW_INSTRUM_NODE_157() \
  (__MW_INSTRUM_RECORD_HIT(157U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_158(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(158U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(159U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_158(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(158U), 1) : (__MW_INSTRUM_RECORD_HIT(159U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_160(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(160U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(161U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_160(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(160U), 1) : (__MW_INSTRUM_RECORD_HIT(161U), 0))
#endif
#define __MW_INSTRUM_NODE_161() \
  (__MW_INSTRUM_RECORD_HIT(161U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_162(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(162U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(163U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_162(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(162U), 1) : (__MW_INSTRUM_RECORD_HIT(163U), 0))
#endif
#define __MW_INSTRUM_NODE_163() \
  (__MW_INSTRUM_RECORD_HIT(163U))
#define __MW_INSTRUM_NODE_159() \
  (__MW_INSTRUM_RECORD_HIT(159U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_164(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(164U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(165U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_164(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(164U), 1) : (__MW_INSTRUM_RECORD_HIT(165U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_166(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(166U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(167U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_166(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(166U), 1) : (__MW_INSTRUM_RECORD_HIT(167U), 0))
#endif
#define __MW_INSTRUM_NODE_167() \
  (__MW_INSTRUM_RECORD_HIT(167U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_168(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(168U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(169U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_168(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(168U), 1) : (__MW_INSTRUM_RECORD_HIT(169U), 0))
#endif
#define __MW_INSTRUM_NODE_169() \
  (__MW_INSTRUM_RECORD_HIT(169U))
#define __MW_INSTRUM_NODE_165() \
  (__MW_INSTRUM_RECORD_HIT(165U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_170(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(170U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(171U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_170(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(170U), 1) : (__MW_INSTRUM_RECORD_HIT(171U), 0))
#endif
#define __MW_INSTRUM_NODE_171() \
  (__MW_INSTRUM_RECORD_HIT(171U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_172(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(172U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(173U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_172(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(172U), 1) : (__MW_INSTRUM_RECORD_HIT(173U), 0))
#endif
#define __MW_INSTRUM_NODE_173() \
  (__MW_INSTRUM_RECORD_HIT(173U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_174(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(174U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(175U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_174(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(174U), 1) : (__MW_INSTRUM_RECORD_HIT(175U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_176(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(176U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(177U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_176(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(176U), 1) : (__MW_INSTRUM_RECORD_HIT(177U), 0))
#endif
#define __MW_INSTRUM_NODE_177() \
  (__MW_INSTRUM_RECORD_HIT(177U))
#define __MW_INSTRUM_NODE_175() \
  (__MW_INSTRUM_RECORD_HIT(175U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_178(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(178U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(179U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_178(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(178U), 1) : (__MW_INSTRUM_RECORD_HIT(179U), 0))
#endif
#define __MW_INSTRUM_NODE_179() \
  (__MW_INSTRUM_RECORD_HIT(179U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_180(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(180U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(181U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_180(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(180U), 1) : (__MW_INSTRUM_RECORD_HIT(181U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_182(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(182U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(183U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_182(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(182U), 1) : (__MW_INSTRUM_RECORD_HIT(183U), 0))
#endif
#define __MW_INSTRUM_NODE_183() \
  (__MW_INSTRUM_RECORD_HIT(183U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_184(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(184U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(185U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_184(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(184U), 1) : (__MW_INSTRUM_RECORD_HIT(185U), 0))
#endif
#define __MW_INSTRUM_NODE_185() \
  (__MW_INSTRUM_RECORD_HIT(185U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_186(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(186U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(187U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_186(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(186U), 1) : (__MW_INSTRUM_RECORD_HIT(187U), 0))
#endif
#define __MW_INSTRUM_NODE_187() \
  (__MW_INSTRUM_RECORD_HIT(187U))
#define __MW_INSTRUM_NODE_181() \
  (__MW_INSTRUM_RECORD_HIT(181U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_188(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(188U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(189U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_188(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(188U), 1) : (__MW_INSTRUM_RECORD_HIT(189U), 0))
#endif
#define __MW_INSTRUM_NODE_189() \
  (__MW_INSTRUM_RECORD_HIT(189U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_190(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(190U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(191U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_190(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(190U), 1) : (__MW_INSTRUM_RECORD_HIT(191U), 0))
#endif
#define __MW_INSTRUM_NODE_191() \
  (__MW_INSTRUM_RECORD_HIT(191U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_192(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(192U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(193U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_192(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(192U), 1) : (__MW_INSTRUM_RECORD_HIT(193U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_194(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(194U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(195U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_194(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(194U), 1) : (__MW_INSTRUM_RECORD_HIT(195U), 0))
#endif
#define __MW_INSTRUM_NODE_195() \
  (__MW_INSTRUM_RECORD_HIT(195U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_196(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(196U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(197U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_196(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(196U), 1) : (__MW_INSTRUM_RECORD_HIT(197U), 0))
#endif
#define __MW_INSTRUM_NODE_197() \
  (__MW_INSTRUM_RECORD_HIT(197U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_198(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(198U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(199U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_198(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(198U), 1) : (__MW_INSTRUM_RECORD_HIT(199U), 0))
#endif
#define __MW_INSTRUM_NODE_199() \
  (__MW_INSTRUM_RECORD_HIT(199U))
#define __MW_INSTRUM_NODE_193() \
  (__MW_INSTRUM_RECORD_HIT(193U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_200(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(200U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(201U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_200(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(200U), 1) : (__MW_INSTRUM_RECORD_HIT(201U), 0))
#endif
#define __MW_INSTRUM_NODE_201() \
  (__MW_INSTRUM_RECORD_HIT(201U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_202(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(202U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(203U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_202(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(202U), 1) : (__MW_INSTRUM_RECORD_HIT(203U), 0))
#endif
#define __MW_INSTRUM_NODE_203() \
  (__MW_INSTRUM_RECORD_HIT(203U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_204(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(204U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(205U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_204(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(204U), 1) : (__MW_INSTRUM_RECORD_HIT(205U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_206(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(206U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(207U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_206(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(206U), 1) : (__MW_INSTRUM_RECORD_HIT(207U), 0))
#endif
#define __MW_INSTRUM_NODE_207() \
  (__MW_INSTRUM_RECORD_HIT(207U))
#define __MW_INSTRUM_NODE_205() \
  (__MW_INSTRUM_RECORD_HIT(205U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_208(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(208U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(209U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_208(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(208U), 1) : (__MW_INSTRUM_RECORD_HIT(209U), 0))
#endif
#define __MW_INSTRUM_NODE_209() \
  (__MW_INSTRUM_RECORD_HIT(209U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_210(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(210U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(211U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_210(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(210U), 1) : (__MW_INSTRUM_RECORD_HIT(211U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_212(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(212U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(213U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_212(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(212U), 1) : (__MW_INSTRUM_RECORD_HIT(213U), 0))
#endif
#define __MW_INSTRUM_NODE_213() \
  (__MW_INSTRUM_RECORD_HIT(213U))
#define __MW_INSTRUM_NODE_211() \
  (__MW_INSTRUM_RECORD_HIT(211U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_214(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(214U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(215U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_214(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(214U), 1) : (__MW_INSTRUM_RECORD_HIT(215U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_216(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(216U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(217U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_216(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(216U), 1) : (__MW_INSTRUM_RECORD_HIT(217U), 0))
#endif
#define __MW_INSTRUM_NODE_217() \
  (__MW_INSTRUM_RECORD_HIT(217U))
#define __MW_INSTRUM_NODE_215() \
  (__MW_INSTRUM_RECORD_HIT(215U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_218(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(218U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(219U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_218(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(218U), 1) : (__MW_INSTRUM_RECORD_HIT(219U), 0))
#endif
#define __MW_INSTRUM_NODE_219() \
  (__MW_INSTRUM_RECORD_HIT(219U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_220(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(220U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(221U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_220(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(220U), 1) : (__MW_INSTRUM_RECORD_HIT(221U), 0))
#endif
#define __MW_INSTRUM_NODE_221() \
  (__MW_INSTRUM_RECORD_HIT(221U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_222(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(222U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(223U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_222(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(222U), 1) : (__MW_INSTRUM_RECORD_HIT(223U), 0))
#endif
#define __MW_INSTRUM_NODE_223() \
  (__MW_INSTRUM_RECORD_HIT(223U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_224(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(224U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(225U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_224(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(224U), 1) : (__MW_INSTRUM_RECORD_HIT(225U), 0))
#endif
#define __MW_INSTRUM_NODE_225() \
  (__MW_INSTRUM_RECORD_HIT(225U))
#define __MW_INSTRUM_NODE_226() \
  (__MW_INSTRUM_RECORD_HIT(226U))
#define __MW_INSTRUM_NODE_227() \
  (__MW_INSTRUM_RECORD_HIT(227U))
#define __MW_INSTRUM_NODE_228() \
  (__MW_INSTRUM_RECORD_HIT(228U))
#define __MW_INSTRUM_NODE_229() \
  (__MW_INSTRUM_RECORD_HIT(229U))
#define __MW_INSTRUM_NODE_230() \
  (__MW_INSTRUM_RECORD_HIT(230U))
#define __MW_INSTRUM_NODE_231() \
  (__MW_INSTRUM_RECORD_HIT(231U))
#define __MW_INSTRUM_NODE_232() \
  (__MW_INSTRUM_RECORD_HIT(232U))
#define __MW_INSTRUM_NODE_233() \
  (__MW_INSTRUM_RECORD_HIT(233U))
#define __MW_INSTRUM_NODE_234() \
  (__MW_INSTRUM_RECORD_HIT(234U))
#define __MW_INSTRUM_NODE_235() \
  (__MW_INSTRUM_RECORD_HIT(235U))
#define __MW_INSTRUM_NODE_236() \
  (__MW_INSTRUM_RECORD_HIT(236U))
#define __MW_INSTRUM_NODE_237() \
  (__MW_INSTRUM_RECORD_HIT(237U))
#define __MW_INSTRUM_NODE_238() \
  (__MW_INSTRUM_RECORD_HIT(238U))
#define __MW_INSTRUM_NODE_239() \
  (__MW_INSTRUM_RECORD_HIT(239U))
#define __MW_INSTRUM_NODE_240() \
  (__MW_INSTRUM_RECORD_HIT(240U))
#define __MW_INSTRUM_NODE_241() \
  (__MW_INSTRUM_RECORD_HIT(241U))
#define __MW_INSTRUM_NODE_242() \
  (__MW_INSTRUM_RECORD_HIT(242U))
#define __MW_INSTRUM_NODE_243() \
  (__MW_INSTRUM_RECORD_HIT(243U))
#define __MW_INSTRUM_NODE_244() \
  (__MW_INSTRUM_RECORD_HIT(244U))
#define __MW_INSTRUM_NODE_245() \
  (__MW_INSTRUM_RECORD_HIT(245U))
#define __MW_INSTRUM_NODE_246() \
  (((!__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled || __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables = __MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(246U))
#define __MW_INSTRUM_NODE_247() \
  (__MW_INSTRUM_RECORD_HIT(247U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_248(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(248U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(249U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_248(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(248U), 1) : (__MW_INSTRUM_RECORD_HIT(249U), 0))
#endif
#define __MW_INSTRUM_NODE_249() \
  (__MW_INSTRUM_RECORD_HIT(249U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_250(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(250U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(251U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_250(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(250U), 1) : (__MW_INSTRUM_RECORD_HIT(251U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(252U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(253U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_252(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(252U), 1) : (__MW_INSTRUM_RECORD_HIT(253U), 0))
#endif
#define __MW_INSTRUM_NODE_253() \
  (__MW_INSTRUM_RECORD_HIT(253U))
#define __MW_INSTRUM_NODE_251() \
  (__MW_INSTRUM_RECORD_HIT(251U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_254(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(254U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(255U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_254(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(254U), 1) : (__MW_INSTRUM_RECORD_HIT(255U), 0))
#endif
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_256(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(256U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(257U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_256(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(256U), 1) : (__MW_INSTRUM_RECORD_HIT(257U), 0))
#endif
#define __MW_INSTRUM_NODE_257() \
  (__MW_INSTRUM_RECORD_HIT(257U))
#define __MW_INSTRUM_NODE_255() \
  (__MW_INSTRUM_RECORD_HIT(255U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_258(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(258U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(259U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_258(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(258U), 1) : (__MW_INSTRUM_RECORD_HIT(259U), 0))
#endif
#define __MW_INSTRUM_NODE_259() \
  (__MW_INSTRUM_RECORD_HIT(259U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_260(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(260U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(261U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_260(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(260U), 1) : (__MW_INSTRUM_RECORD_HIT(261U), 0))
#endif
#define __MW_INSTRUM_NODE_261() \
  (__MW_INSTRUM_RECORD_HIT(261U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_262(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(262U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(263U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_262(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(262U), 1) : (__MW_INSTRUM_RECORD_HIT(263U), 0))
#endif
#define __MW_INSTRUM_NODE_263() \
  (__MW_INSTRUM_RECORD_HIT(263U))
#define __MW_INSTRUM_NODE_264() \
  (__MW_INSTRUM_RECORD_HIT(264U))
#define __MW_INSTRUM_NODE_265() \
  (__MW_INSTRUM_RECORD_HIT(265U))
#define __MW_INSTRUM_NODE_266() \
  (((!__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled || __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables = __MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(266U))
#define __MW_INSTRUM_NODE_267() \
  (__MW_INSTRUM_RECORD_HIT(267U))
#define __MW_INSTRUM_NODE_268() \
  (__MW_INSTRUM_RECORD_HIT(268U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_269(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(269U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(270U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_269(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(269U), 1) : (__MW_INSTRUM_RECORD_HIT(270U), 0))
#endif
#define __MW_INSTRUM_NODE_270() \
  (__MW_INSTRUM_RECORD_HIT(270U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_271(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(271U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(272U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_271(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(271U), 1) : (__MW_INSTRUM_RECORD_HIT(272U), 0))
#endif
#define __MW_INSTRUM_NODE_272() \
  (__MW_INSTRUM_RECORD_HIT(272U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_273(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(273U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(274U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_273(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(273U), 1) : (__MW_INSTRUM_RECORD_HIT(274U), 0))
#endif
#define __MW_INSTRUM_NODE_274() \
  (__MW_INSTRUM_RECORD_HIT(274U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_275(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(275U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(276U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_275(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(275U), 1) : (__MW_INSTRUM_RECORD_HIT(276U), 0))
#endif
#define __MW_INSTRUM_NODE_276() \
  (__MW_INSTRUM_RECORD_HIT(276U))
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_277(...) ((__VA_ARGS__) ? (__MW_INSTRUM_RECORD_HIT(277U), (1 == 1)) : (__MW_INSTRUM_RECORD_HIT(278U), (0 == 1)))
#else
#define __MW_INSTRUM_NODE_277(expr) ((expr) ? (__MW_INSTRUM_RECORD_HIT(277U), 1) : (__MW_INSTRUM_RECORD_HIT(278U), 0))
#endif
#define __MW_INSTRUM_NODE_278() \
  (__MW_INSTRUM_RECORD_HIT(278U))
#define __MW_INSTRUM_NODE_279() \
  (__MW_INSTRUM_RECORD_HIT(279U))
#define __MW_INSTRUM_NODE_280() \
  (__MW_INSTRUM_RECORD_HIT(280U))
#define __MW_INSTRUM_NODE_281() \
  (__MW_INSTRUM_RECORD_HIT(281U))
#define __MW_INSTRUM_NODE_282() \
  (((!__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_enabled || __mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables) ? \
    ((void) 0) : \
    ((void) (__mw_instrum_iVOBNwHUXJzsSWjouXtyaE_cclib_ptruth_tables = __MW_INSTRUM_iVOBNwHUXJzsSWjouXtyaE_cclib_INIT_FILE(0)))), \
   __MW_INSTRUM_RECORD_HIT(282U))
#define __MW_INSTRUM_NODE_283() \
  (__MW_INSTRUM_RECORD_HIT(283U))
#define __MW_INSTRUM_NODE_284() \
  (__MW_INSTRUM_RECORD_HIT(284U))
#define __MW_INSTRUM_NODE_285() \
  (__MW_INSTRUM_RECORD_HIT(285U))
#define __MW_INSTRUM_NODE_286() \
  (__MW_INSTRUM_RECORD_HIT(286U))

#else /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

#define __MW_INSTRUM_FCN_ENTER_1() 

#define __MW_INSTRUM_FCN_ENTER_2() 

#define __MW_INSTRUM_FCN_ENTER_3() 

#define __MW_INSTRUM_FCN_ENTER_4() 

#define __MW_INSTRUM_FCN_ENTER_5() 

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_1EZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_1() __MW_INSTRUM_RECORD_HIT_1EZ_iVOBNwHUXJzsSWjouXtyaE()

#define __MW_INSTRUM_NODE_2() ((void)0)


#define __MW_INSTRUM_NODE_3() ((void)0)


#define __MW_INSTRUM_NODE_4() ((void)0)


#define __MW_INSTRUM_NODE_5() ((void)0)


#define __MW_INSTRUM_NODE_6() ((void)0)


#define __MW_INSTRUM_NODE_7() ((void)0)


#define __MW_INSTRUM_NODE_8() ((void)0)


#define __MW_INSTRUM_NODE_9() ((void)0)


#define __MW_INSTRUM_NODE_10() ((void)0)


#define __MW_INSTRUM_NODE_11() ((void)0)


#define __MW_INSTRUM_NODE_12() ((void)0)


#define __MW_INSTRUM_NODE_13() ((void)0)


#define __MW_INSTRUM_NODE_14() ((void)0)


#define __MW_INSTRUM_NODE_15() ((void)0)


#define __MW_INSTRUM_NODE_16() ((void)0)


#define __MW_INSTRUM_NODE_17() ((void)0)


#define __MW_INSTRUM_NODE_18() ((void)0)


#define __MW_INSTRUM_NODE_19() ((void)0)


#define __MW_INSTRUM_NODE_20() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_21DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_21(...) (__MW_INSTRUM_RECORD_HIT_21DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_21(exp) (__MW_INSTRUM_RECORD_HIT_21DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_22() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_23DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_23(...) (__MW_INSTRUM_RECORD_HIT_23DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_23(exp) (__MW_INSTRUM_RECORD_HIT_23DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_24() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_25DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_25(...) (__MW_INSTRUM_RECORD_HIT_25DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_25(exp) (__MW_INSTRUM_RECORD_HIT_25DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_26() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_27DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_27(...) (__MW_INSTRUM_RECORD_HIT_27DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_27(exp) (__MW_INSTRUM_RECORD_HIT_27DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_29IZ_iVOBNwHUXJzsSWjouXtyaE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_29(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_29IZ_iVOBNwHUXJzsSWjouXtyaE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_32() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_33DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_33(...) (__MW_INSTRUM_RECORD_HIT_33DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_33(exp) (__MW_INSTRUM_RECORD_HIT_33DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_35() ((void)0)


#define __MW_INSTRUM_NODE_36() ((void)0)


#define __MW_INSTRUM_NODE_37() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_38DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_38(...) (__MW_INSTRUM_RECORD_HIT_38DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_38(exp) (__MW_INSTRUM_RECORD_HIT_38DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_40FLTZ_iVOBNwHUXJzsSWjouXtyaE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_40(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_40FLTZ_iVOBNwHUXJzsSWjouXtyaE(lhs, rhs))

#define __MW_INSTRUM_NODE_42() ((void)0)


#define __MW_INSTRUM_NODE_43() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_44DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_44(...) (__MW_INSTRUM_RECORD_HIT_44DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_44(exp) (__MW_INSTRUM_RECORD_HIT_44DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_46DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_46(...) (__MW_INSTRUM_RECORD_HIT_46DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_46(exp) (__MW_INSTRUM_RECORD_HIT_46DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_48DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_48(...) (__MW_INSTRUM_RECORD_HIT_48DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_48(exp) (__MW_INSTRUM_RECORD_HIT_48DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_50FGEZ_iVOBNwHUXJzsSWjouXtyaE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_50(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_50FGEZ_iVOBNwHUXJzsSWjouXtyaE(lhs, rhs))

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_52DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_52(...) (__MW_INSTRUM_RECORD_HIT_52DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_52(exp) (__MW_INSTRUM_RECORD_HIT_52DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_54FLEZ_iVOBNwHUXJzsSWjouXtyaE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_54(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_54FLEZ_iVOBNwHUXJzsSWjouXtyaE(lhs, rhs))

#define __MW_INSTRUM_NODE_47() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_56DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_56(...) (__MW_INSTRUM_RECORD_HIT_56DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_56(exp) (__MW_INSTRUM_RECORD_HIT_56DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_58IZ_iVOBNwHUXJzsSWjouXtyaE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_58(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_58IZ_iVOBNwHUXJzsSWjouXtyaE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_57() ((void)0)


#define __MW_INSTRUM_NODE_61() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_62DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_62(...) (__MW_INSTRUM_RECORD_HIT_62DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_62(exp) (__MW_INSTRUM_RECORD_HIT_62DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_63() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_64DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_64(...) (__MW_INSTRUM_RECORD_HIT_64DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_64(exp) (__MW_INSTRUM_RECORD_HIT_64DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_65() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_66DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_66(...) (__MW_INSTRUM_RECORD_HIT_66DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_66(exp) (__MW_INSTRUM_RECORD_HIT_66DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_68() ((void)0)


#define __MW_INSTRUM_NODE_69() ((void)0)


#define __MW_INSTRUM_NODE_70() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_71DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_71(...) (__MW_INSTRUM_RECORD_HIT_71DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_71(exp) (__MW_INSTRUM_RECORD_HIT_71DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_73FLEZ_iVOBNwHUXJzsSWjouXtyaE(double lhs, double rhs) { }
#define __MW_INSTRUM_NODE_73(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_73FLEZ_iVOBNwHUXJzsSWjouXtyaE(lhs, rhs))

#define __MW_INSTRUM_NODE_75() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_76DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_76(...) (__MW_INSTRUM_RECORD_HIT_76DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_76(exp) (__MW_INSTRUM_RECORD_HIT_76DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_77() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_78DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_78(...) (__MW_INSTRUM_RECORD_HIT_78DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_78(exp) (__MW_INSTRUM_RECORD_HIT_78DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_80() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_81DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_81(...) (__MW_INSTRUM_RECORD_HIT_81DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_81(exp) (__MW_INSTRUM_RECORD_HIT_81DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_82() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_83DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_83(...) (__MW_INSTRUM_RECORD_HIT_83DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_83(exp) (__MW_INSTRUM_RECORD_HIT_83DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_84() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_85DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_85(...) (__MW_INSTRUM_RECORD_HIT_85DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_85(exp) (__MW_INSTRUM_RECORD_HIT_85DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_87IZ_iVOBNwHUXJzsSWjouXtyaE(int out1, int out2, int out3) { }
#define __MW_INSTRUM_NODE_87(lhs, rhs) (__MW_INSTRUM_RECORD_HIT_87IZ_iVOBNwHUXJzsSWjouXtyaE((lhs) == (rhs) - 1, (lhs) == (rhs), (lhs) == (rhs) + 1))

#define __MW_INSTRUM_NODE_90() ((void)0)


#define __MW_INSTRUM_NODE_91() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_92DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_92(...) (__MW_INSTRUM_RECORD_HIT_92DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_92(exp) (__MW_INSTRUM_RECORD_HIT_92DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_93() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_94DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_94(...) (__MW_INSTRUM_RECORD_HIT_94DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_94(exp) (__MW_INSTRUM_RECORD_HIT_94DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_96DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_96(...) (__MW_INSTRUM_RECORD_HIT_96DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_96(exp) (__MW_INSTRUM_RECORD_HIT_96DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_97() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_98DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_98(...) (__MW_INSTRUM_RECORD_HIT_98DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_98(exp) (__MW_INSTRUM_RECORD_HIT_98DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_95() ((void)0)


#define __MW_INSTRUM_NODE_100() ((void)0)


#define __MW_INSTRUM_NODE_101() ((void)0)


#define __MW_INSTRUM_NODE_102() ((void)0)


#define __MW_INSTRUM_NODE_103() ((void)0)


#define __MW_INSTRUM_NODE_104() ((void)0)


#define __MW_INSTRUM_NODE_105() ((void)0)


#define __MW_INSTRUM_NODE_106() ((void)0)


#define __MW_INSTRUM_NODE_107() ((void)0)


#define __MW_INSTRUM_NODE_108() ((void)0)


#define __MW_INSTRUM_NODE_109() ((void)0)


#define __MW_INSTRUM_NODE_110() ((void)0)


#define __MW_INSTRUM_NODE_111() ((void)0)


#define __MW_INSTRUM_NODE_112() ((void)0)


#define __MW_INSTRUM_NODE_113() ((void)0)


#define __MW_INSTRUM_NODE_114() ((void)0)


#define __MW_INSTRUM_NODE_115() ((void)0)


#define __MW_INSTRUM_NODE_116() ((void)0)


#define __MW_INSTRUM_NODE_117() ((void)0)


#define __MW_INSTRUM_NODE_118() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_119XZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_119() __MW_INSTRUM_RECORD_HIT_119XZ_iVOBNwHUXJzsSWjouXtyaE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_120EZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_120() __MW_INSTRUM_RECORD_HIT_120EZ_iVOBNwHUXJzsSWjouXtyaE()

#define __MW_INSTRUM_NODE_121() ((void)0)


#define __MW_INSTRUM_NODE_122() ((void)0)


#define __MW_INSTRUM_NODE_123() ((void)0)


#define __MW_INSTRUM_NODE_124() ((void)0)


#define __MW_INSTRUM_NODE_125() ((void)0)


#define __MW_INSTRUM_NODE_126() ((void)0)


#define __MW_INSTRUM_NODE_127() ((void)0)


#define __MW_INSTRUM_NODE_128() ((void)0)


#define __MW_INSTRUM_NODE_129() ((void)0)


#define __MW_INSTRUM_NODE_130() ((void)0)


#define __MW_INSTRUM_NODE_131() ((void)0)


#define __MW_INSTRUM_NODE_132() ((void)0)


#define __MW_INSTRUM_NODE_133() ((void)0)


#define __MW_INSTRUM_NODE_134() ((void)0)


#define __MW_INSTRUM_NODE_135() ((void)0)


#define __MW_INSTRUM_NODE_136() ((void)0)


#define __MW_INSTRUM_NODE_137() ((void)0)


#define __MW_INSTRUM_NODE_138() ((void)0)


#define __MW_INSTRUM_NODE_139() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_140DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_140(...) (__MW_INSTRUM_RECORD_HIT_140DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_140(exp) (__MW_INSTRUM_RECORD_HIT_140DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_142DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_142(...) (__MW_INSTRUM_RECORD_HIT_142DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_142(exp) (__MW_INSTRUM_RECORD_HIT_142DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_143() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_144DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_144(...) (__MW_INSTRUM_RECORD_HIT_144DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_144(exp) (__MW_INSTRUM_RECORD_HIT_144DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_145() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_146DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_146(...) (__MW_INSTRUM_RECORD_HIT_146DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_146(exp) (__MW_INSTRUM_RECORD_HIT_146DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_147() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_148DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_148(...) (__MW_INSTRUM_RECORD_HIT_148DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_148(exp) (__MW_INSTRUM_RECORD_HIT_148DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_141() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_150DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_150(...) (__MW_INSTRUM_RECORD_HIT_150DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_150(exp) (__MW_INSTRUM_RECORD_HIT_150DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_151() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_152DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_152(...) (__MW_INSTRUM_RECORD_HIT_152DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_152(exp) (__MW_INSTRUM_RECORD_HIT_152DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_153() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_154DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_154(...) (__MW_INSTRUM_RECORD_HIT_154DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_154(exp) (__MW_INSTRUM_RECORD_HIT_154DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_155() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_156DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_156(...) (__MW_INSTRUM_RECORD_HIT_156DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_156(exp) (__MW_INSTRUM_RECORD_HIT_156DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_157() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_158DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_158(...) (__MW_INSTRUM_RECORD_HIT_158DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_158(exp) (__MW_INSTRUM_RECORD_HIT_158DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_160DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_160(...) (__MW_INSTRUM_RECORD_HIT_160DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_160(exp) (__MW_INSTRUM_RECORD_HIT_160DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_161() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_162DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_162(...) (__MW_INSTRUM_RECORD_HIT_162DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_162(exp) (__MW_INSTRUM_RECORD_HIT_162DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_163() ((void)0)


#define __MW_INSTRUM_NODE_159() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_164DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_164(...) (__MW_INSTRUM_RECORD_HIT_164DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_164(exp) (__MW_INSTRUM_RECORD_HIT_164DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_166DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_166(...) (__MW_INSTRUM_RECORD_HIT_166DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_166(exp) (__MW_INSTRUM_RECORD_HIT_166DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_167() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_168DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_168(...) (__MW_INSTRUM_RECORD_HIT_168DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_168(exp) (__MW_INSTRUM_RECORD_HIT_168DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_169() ((void)0)


#define __MW_INSTRUM_NODE_165() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_170DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_170(...) (__MW_INSTRUM_RECORD_HIT_170DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_170(exp) (__MW_INSTRUM_RECORD_HIT_170DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_171() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_172DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_172(...) (__MW_INSTRUM_RECORD_HIT_172DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_172(exp) (__MW_INSTRUM_RECORD_HIT_172DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_173() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_174DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_174(...) (__MW_INSTRUM_RECORD_HIT_174DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_174(exp) (__MW_INSTRUM_RECORD_HIT_174DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_176DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_176(...) (__MW_INSTRUM_RECORD_HIT_176DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_176(exp) (__MW_INSTRUM_RECORD_HIT_176DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_177() ((void)0)


#define __MW_INSTRUM_NODE_175() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_178DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_178(...) (__MW_INSTRUM_RECORD_HIT_178DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_178(exp) (__MW_INSTRUM_RECORD_HIT_178DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_179() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_180DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_180(...) (__MW_INSTRUM_RECORD_HIT_180DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_180(exp) (__MW_INSTRUM_RECORD_HIT_180DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_182DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_182(...) (__MW_INSTRUM_RECORD_HIT_182DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_182(exp) (__MW_INSTRUM_RECORD_HIT_182DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_183() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_184DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_184(...) (__MW_INSTRUM_RECORD_HIT_184DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_184(exp) (__MW_INSTRUM_RECORD_HIT_184DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_185() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_186DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_186(...) (__MW_INSTRUM_RECORD_HIT_186DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_186(exp) (__MW_INSTRUM_RECORD_HIT_186DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_187() ((void)0)


#define __MW_INSTRUM_NODE_181() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_188DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_188(...) (__MW_INSTRUM_RECORD_HIT_188DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_188(exp) (__MW_INSTRUM_RECORD_HIT_188DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_189() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_190DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_190(...) (__MW_INSTRUM_RECORD_HIT_190DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_190(exp) (__MW_INSTRUM_RECORD_HIT_190DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_191() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_192DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_192(...) (__MW_INSTRUM_RECORD_HIT_192DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_192(exp) (__MW_INSTRUM_RECORD_HIT_192DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_194DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_194(...) (__MW_INSTRUM_RECORD_HIT_194DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_194(exp) (__MW_INSTRUM_RECORD_HIT_194DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_195() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_196DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_196(...) (__MW_INSTRUM_RECORD_HIT_196DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_196(exp) (__MW_INSTRUM_RECORD_HIT_196DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_197() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_198DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_198(...) (__MW_INSTRUM_RECORD_HIT_198DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_198(exp) (__MW_INSTRUM_RECORD_HIT_198DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_199() ((void)0)


#define __MW_INSTRUM_NODE_193() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_200DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_200(...) (__MW_INSTRUM_RECORD_HIT_200DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_200(exp) (__MW_INSTRUM_RECORD_HIT_200DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_201() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_202DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_202(...) (__MW_INSTRUM_RECORD_HIT_202DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_202(exp) (__MW_INSTRUM_RECORD_HIT_202DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_203() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_204DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_204(...) (__MW_INSTRUM_RECORD_HIT_204DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_204(exp) (__MW_INSTRUM_RECORD_HIT_204DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_206DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_206(...) (__MW_INSTRUM_RECORD_HIT_206DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_206(exp) (__MW_INSTRUM_RECORD_HIT_206DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_207() ((void)0)


#define __MW_INSTRUM_NODE_205() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_208DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_208(...) (__MW_INSTRUM_RECORD_HIT_208DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_208(exp) (__MW_INSTRUM_RECORD_HIT_208DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_209() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_210DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_210(...) (__MW_INSTRUM_RECORD_HIT_210DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_210(exp) (__MW_INSTRUM_RECORD_HIT_210DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_212DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_212(...) (__MW_INSTRUM_RECORD_HIT_212DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_212(exp) (__MW_INSTRUM_RECORD_HIT_212DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_213() ((void)0)


#define __MW_INSTRUM_NODE_211() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_214DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_214(...) (__MW_INSTRUM_RECORD_HIT_214DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_214(exp) (__MW_INSTRUM_RECORD_HIT_214DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_216DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_216(...) (__MW_INSTRUM_RECORD_HIT_216DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_216(exp) (__MW_INSTRUM_RECORD_HIT_216DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_217() ((void)0)


#define __MW_INSTRUM_NODE_215() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_218DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_218(...) (__MW_INSTRUM_RECORD_HIT_218DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_218(exp) (__MW_INSTRUM_RECORD_HIT_218DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_219() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_220DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_220(...) (__MW_INSTRUM_RECORD_HIT_220DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_220(exp) (__MW_INSTRUM_RECORD_HIT_220DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_221() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_222DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_222(...) (__MW_INSTRUM_RECORD_HIT_222DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_222(exp) (__MW_INSTRUM_RECORD_HIT_222DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_223() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_224DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_224(...) (__MW_INSTRUM_RECORD_HIT_224DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_224(exp) (__MW_INSTRUM_RECORD_HIT_224DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_225() ((void)0)


#define __MW_INSTRUM_NODE_226() ((void)0)


#define __MW_INSTRUM_NODE_227() ((void)0)


#define __MW_INSTRUM_NODE_228() ((void)0)


#define __MW_INSTRUM_NODE_229() ((void)0)


#define __MW_INSTRUM_NODE_230() ((void)0)


#define __MW_INSTRUM_NODE_231() ((void)0)


#define __MW_INSTRUM_NODE_232() ((void)0)


#define __MW_INSTRUM_NODE_233() ((void)0)


#define __MW_INSTRUM_NODE_234() ((void)0)


#define __MW_INSTRUM_NODE_235() ((void)0)


#define __MW_INSTRUM_NODE_236() ((void)0)


#define __MW_INSTRUM_NODE_237() ((void)0)


#define __MW_INSTRUM_NODE_238() ((void)0)


#define __MW_INSTRUM_NODE_239() ((void)0)


#define __MW_INSTRUM_NODE_240() ((void)0)


#define __MW_INSTRUM_NODE_241() ((void)0)


#define __MW_INSTRUM_NODE_242() ((void)0)


#define __MW_INSTRUM_NODE_243() ((void)0)


#define __MW_INSTRUM_NODE_244() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_245XZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_245() __MW_INSTRUM_RECORD_HIT_245XZ_iVOBNwHUXJzsSWjouXtyaE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_246EZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_246() __MW_INSTRUM_RECORD_HIT_246EZ_iVOBNwHUXJzsSWjouXtyaE()

#define __MW_INSTRUM_NODE_247() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_248DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_248(...) (__MW_INSTRUM_RECORD_HIT_248DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_248(exp) (__MW_INSTRUM_RECORD_HIT_248DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_249() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_250DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_250(...) (__MW_INSTRUM_RECORD_HIT_250DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_250(exp) (__MW_INSTRUM_RECORD_HIT_250DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_252DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_252(...) (__MW_INSTRUM_RECORD_HIT_252DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_252(exp) (__MW_INSTRUM_RECORD_HIT_252DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_253() ((void)0)


#define __MW_INSTRUM_NODE_251() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_254DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_254(...) (__MW_INSTRUM_RECORD_HIT_254DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_254(exp) (__MW_INSTRUM_RECORD_HIT_254DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_256DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_256(...) (__MW_INSTRUM_RECORD_HIT_256DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_256(exp) (__MW_INSTRUM_RECORD_HIT_256DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_257() ((void)0)


#define __MW_INSTRUM_NODE_255() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_258DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_258(...) (__MW_INSTRUM_RECORD_HIT_258DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_258(exp) (__MW_INSTRUM_RECORD_HIT_258DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_259() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_260DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_260(...) (__MW_INSTRUM_RECORD_HIT_260DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_260(exp) (__MW_INSTRUM_RECORD_HIT_260DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_261() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_262DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_262(...) (__MW_INSTRUM_RECORD_HIT_262DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_262(exp) (__MW_INSTRUM_RECORD_HIT_262DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_263() ((void)0)


#define __MW_INSTRUM_NODE_264() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_265XZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_265() __MW_INSTRUM_RECORD_HIT_265XZ_iVOBNwHUXJzsSWjouXtyaE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_266EZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_266() __MW_INSTRUM_RECORD_HIT_266EZ_iVOBNwHUXJzsSWjouXtyaE()

#define __MW_INSTRUM_NODE_267() ((void)0)


#define __MW_INSTRUM_NODE_268() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_269DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_269(...) (__MW_INSTRUM_RECORD_HIT_269DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_269(exp) (__MW_INSTRUM_RECORD_HIT_269DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_270() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_271DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_271(...) (__MW_INSTRUM_RECORD_HIT_271DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_271(exp) (__MW_INSTRUM_RECORD_HIT_271DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_272() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_273DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_273(...) (__MW_INSTRUM_RECORD_HIT_273DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_273(exp) (__MW_INSTRUM_RECORD_HIT_273DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_274() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_275DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_275(...) (__MW_INSTRUM_RECORD_HIT_275DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_275(exp) (__MW_INSTRUM_RECORD_HIT_275DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_276() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
int __MW_INSTRUM_RECORD_HIT_277DZ_iVOBNwHUXJzsSWjouXtyaE(int condValue) { return condValue; }
#ifdef __cplusplus
#define __MW_INSTRUM_NODE_277(...) (__MW_INSTRUM_RECORD_HIT_277DZ_iVOBNwHUXJzsSWjouXtyaE(__VA_ARGS__))
#else
#define __MW_INSTRUM_NODE_277(exp) (__MW_INSTRUM_RECORD_HIT_277DZ_iVOBNwHUXJzsSWjouXtyaE(exp))
#endif

#define __MW_INSTRUM_NODE_278() ((void)0)


#define __MW_INSTRUM_NODE_279() ((void)0)


#define __MW_INSTRUM_NODE_280() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_281XZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_281() __MW_INSTRUM_RECORD_HIT_281XZ_iVOBNwHUXJzsSWjouXtyaE()

#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_282EZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_282() __MW_INSTRUM_RECORD_HIT_282EZ_iVOBNwHUXJzsSWjouXtyaE()

#define __MW_INSTRUM_NODE_283() ((void)0)


#define __MW_INSTRUM_NODE_284() ((void)0)


#define __MW_INSTRUM_NODE_285() ((void)0)


#ifdef __cplusplus
extern "C"
#else
extern
#endif
void __MW_INSTRUM_RECORD_HIT_286XZ_iVOBNwHUXJzsSWjouXtyaE(void) { }
#define __MW_INSTRUM_NODE_286() __MW_INSTRUM_RECORD_HIT_286XZ_iVOBNwHUXJzsSWjouXtyaE()

#endif /* __MW_INTERNAL_SLDV_PS_ANALYSIS__ */

# 1 "/Users/bradyplanden/Documents/Git Repos/SimulinkMPC/fMPC/src/f_mpc.c"
# 61 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
#ifndef _STDIO_H_
#define _STDIO_H_
# 65 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3
#ifndef __STDIO_H_
#define __STDIO_H_
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
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 3
#ifndef __AVAILABILITY__
#define __AVAILABILITY__
# 131
#ifndef __API_TO_BE_DEPRECATED
#define __API_TO_BE_DEPRECATED 100000
#endif /* __API_TO_BE_DEPRECATED */

#ifndef __MAC_10_0
#define __MAC_10_0 1000
# 249
#endif /* __MAC_10_0 */
# 30 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/AvailabilityInternal.h" 3
#ifndef __AVAILABILITY_INTERNAL__
#define __AVAILABILITY_INTERNAL__
# 89
#ifndef __MAC_OS_X_VERSION_MAX_ALLOWED
#define __MAC_OS_X_VERSION_MAX_ALLOWED __MAC_10_15
#endif /* __MAC_OS_X_VERSION_MAX_ALLOWED */
# 4668
#ifndef __SPI_AVAILABLE
#define __SPI_AVAILABLE(__VA_ARGS__...) 
#endif /* __SPI_AVAILABLE */

#endif /* __AVAILABILITY_INTERNAL__ */
# 355 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/Availability.h" 3
#ifndef __OSX_UNAVAILABLE
#define __OSX_UNAVAILABLE
#endif /* __OSX_UNAVAILABLE */

#ifndef __OSX_AVAILABLE
#define __OSX_AVAILABLE(_vers) 
#endif /* __OSX_AVAILABLE */

#ifndef __OSX_DEPRECATED
#define __OSX_DEPRECATED(_start,_dep,_msg) 
#endif /* __OSX_DEPRECATED */
# 378
#ifndef __IOS_UNAVAILABLE
#define __IOS_UNAVAILABLE
#endif /* __IOS_UNAVAILABLE */

#ifndef __IOS_PROHIBITED
#define __IOS_PROHIBITED
#endif /* __IOS_PROHIBITED */

#ifndef __IOS_AVAILABLE
#define __IOS_AVAILABLE(_vers) 
#endif /* __IOS_AVAILABLE */

#ifndef __IOS_DEPRECATED
#define __IOS_DEPRECATED(_start,_dep,_msg) 
#endif /* __IOS_DEPRECATED */
# 405
#ifndef __TVOS_UNAVAILABLE
#define __TVOS_UNAVAILABLE
#endif /* __TVOS_UNAVAILABLE */

#ifndef __TVOS_PROHIBITED
#define __TVOS_PROHIBITED
#endif /* __TVOS_PROHIBITED */

#ifndef __TVOS_AVAILABLE
#define __TVOS_AVAILABLE(_vers) 
#endif /* __TVOS_AVAILABLE */

#ifndef __TVOS_DEPRECATED
#define __TVOS_DEPRECATED(_start,_dep,_msg) 
#endif /* __TVOS_DEPRECATED */
# 432
#ifndef __WATCHOS_UNAVAILABLE
#define __WATCHOS_UNAVAILABLE
#endif /* __WATCHOS_UNAVAILABLE */

#ifndef __WATCHOS_PROHIBITED
#define __WATCHOS_PROHIBITED
#endif /* __WATCHOS_PROHIBITED */

#ifndef __WATCHOS_AVAILABLE
#define __WATCHOS_AVAILABLE(_vers) 
#endif /* __WATCHOS_AVAILABLE */

#ifndef __WATCHOS_DEPRECATED
#define __WATCHOS_DEPRECATED(_start,_dep,_msg) 
#endif /* __WATCHOS_DEPRECATED */
# 457
#ifndef __SWIFT_UNAVAILABLE
#define __SWIFT_UNAVAILABLE
#endif /* __SWIFT_UNAVAILABLE */

#ifndef __SWIFT_UNAVAILABLE_MSG
#define __SWIFT_UNAVAILABLE_MSG(_msg) 
#endif /* __SWIFT_UNAVAILABLE_MSG */
# 589
#ifndef __SPI_DEPRECATED
#define __SPI_DEPRECATED(__VA_ARGS__...) 
#endif /* __SPI_DEPRECATED */

#ifndef __SPI_DEPRECATED_WITH_REPLACEMENT
#define __SPI_DEPRECATED_WITH_REPLACEMENT(__VA_ARGS__...) 
#endif /* __SPI_DEPRECATED_WITH_REPLACEMENT */

#endif /* __AVAILABILITY__ */
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 3
#ifndef __TYPES_H_
#define __TYPES_H_
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3
#ifndef _SYS__TYPES_H_
#define _SYS__TYPES_H_
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3
#ifndef _BSD_MACHINE__TYPES_H_
#define _BSD_MACHINE__TYPES_H_
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_types.h" 3
#ifndef _BSD_I386__TYPES_H_
#define _BSD_I386__TYPES_H_
# 37
typedef signed char __int8_t; 



typedef unsigned char __uint8_t; 
typedef short __int16_t; 
typedef unsigned short __uint16_t; 
typedef int __int32_t; 
typedef unsigned __uint32_t; 
typedef long long __int64_t; 
typedef unsigned long long __uint64_t; 

typedef long __darwin_intptr_t; 
typedef unsigned __darwin_natural_t; 
# 70
typedef int __darwin_ct_rune_t; 
# 79
typedef 
# 76
union { 
char __mbstate8[128]; 
long long _mbstateL; 
} __mbstate_t; 

typedef __mbstate_t __darwin_mbstate_t; 


typedef long __darwin_ptrdiff_t; 
# 92
typedef unsigned long __darwin_size_t; 
# 98
typedef __builtin_va_list __darwin_va_list; 
# 104
typedef int __darwin_wchar_t; 




typedef __darwin_wchar_t __darwin_rune_t; 


typedef unsigned __darwin_wint_t; 




typedef unsigned long __darwin_clock_t; 
typedef __uint32_t __darwin_socklen_t; 
typedef long __darwin_ssize_t; 
typedef long __darwin_time_t; 

#endif /* _BSD_I386__TYPES_H_ */
# 37 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/_types.h" 3
#endif /* _BSD_MACHINE__TYPES_H_ */
# 55 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3
typedef __int64_t __darwin_blkcnt_t; 
typedef __int32_t __darwin_blksize_t; 
typedef __int32_t __darwin_dev_t; 
typedef unsigned __darwin_fsblkcnt_t; 
typedef unsigned __darwin_fsfilcnt_t; 
typedef __uint32_t __darwin_gid_t; 
typedef __uint32_t __darwin_id_t; 
typedef __uint64_t __darwin_ino64_t; 

typedef __darwin_ino64_t __darwin_ino_t; 



typedef __darwin_natural_t __darwin_mach_port_name_t; 
typedef __darwin_mach_port_name_t __darwin_mach_port_t; 
typedef __uint16_t __darwin_mode_t; 
typedef __int64_t __darwin_off_t; 
typedef __int32_t __darwin_pid_t; 
typedef __uint32_t __darwin_sigset_t; 
typedef __int32_t __darwin_suseconds_t; 
typedef __uint32_t __darwin_uid_t; 
typedef __uint32_t __darwin_useconds_t; 
typedef unsigned char __darwin_uuid_t[16]; 
typedef char __darwin_uuid_string_t[37]; 
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_types.h" 3
#ifndef _SYS__PTHREAD_TYPES_H_
#define _SYS__PTHREAD_TYPES_H_
# 57
struct __darwin_pthread_handler_rec { 
void (*__routine)(void *); 
void *__arg; 
struct __darwin_pthread_handler_rec *__next; 
}; 

struct _opaque_pthread_attr_t { 
long __sig; 
char __opaque[56]; 
}; 

struct _opaque_pthread_cond_t { 
long __sig; 
char __opaque[40]; 
}; 

struct _opaque_pthread_condattr_t { 
long __sig; 
char __opaque[8]; 
}; 

struct _opaque_pthread_mutex_t { 
long __sig; 
char __opaque[56]; 
}; 

struct _opaque_pthread_mutexattr_t { 
long __sig; 
char __opaque[8]; 
}; 

struct _opaque_pthread_once_t { 
long __sig; 
char __opaque[8]; 
}; 

struct _opaque_pthread_rwlock_t { 
long __sig; 
char __opaque[192]; 
}; 

struct _opaque_pthread_rwlockattr_t { 
long __sig; 
char __opaque[16]; 
}; 

struct _opaque_pthread_t { 
long __sig; 
struct __darwin_pthread_handler_rec *__cleanup_stack; 
char __opaque[8176]; 
}; 

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t; 
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t; 
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t; 
typedef unsigned long __darwin_pthread_key_t; 
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t; 
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t; 
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t; 
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t; 
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t; 
typedef struct _opaque_pthread_t *__darwin_pthread_t; 

#endif /* _SYS__PTHREAD_TYPES_H_ */
# 89 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types.h" 3
#endif /* _SYS__TYPES_H_ */
# 40 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types.h" 3
typedef int __darwin_nl_item; 
typedef int __darwin_wctrans_t; 

typedef __uint32_t __darwin_wctype_t; 
# 69
#endif /* __TYPES_H_ */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 3
#ifndef _VA_LIST_T
#define _VA_LIST_T
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3
#ifndef _BSD_MACHINE_TYPES_H_
#define _BSD_MACHINE_TYPES_H_
# 66 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3
#ifndef _MACHTYPES_H_
#define _MACHTYPES_H_
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int8_t.h" 3
#ifndef _INT8_T
#define _INT8_T
typedef signed char int8_t; 
#endif /* _INT8_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int16_t.h" 3
#ifndef _INT16_T
#define _INT16_T
typedef short int16_t; 
#endif /* _INT16_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int32_t.h" 3
#ifndef _INT32_T
#define _INT32_T
typedef int int32_t; 
#endif /* _INT32_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_int64_t.h" 3
#ifndef _INT64_T
#define _INT64_T
typedef long long int64_t; 
#endif /* _INT64_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int8_t.h" 3
#ifndef _U_INT8_T
#define _U_INT8_T
typedef unsigned char u_int8_t; 
#endif /* _U_INT8_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int16_t.h" 3
#ifndef _U_INT16_T
#define _U_INT16_T
typedef unsigned short u_int16_t; 
#endif /* _U_INT16_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int32_t.h" 3
#ifndef _U_INT32_T
#define _U_INT32_T
typedef unsigned u_int32_t; 
#endif /* _U_INT32_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_u_int64_t.h" 3
#ifndef _U_INT64_T
#define _U_INT64_T
typedef unsigned long long u_int64_t; 
#endif /* _U_INT64_T */
# 87 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3
typedef int64_t register_t; 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_intptr_t.h" 3
#ifndef _INTPTR_T
#define _INTPTR_T


typedef __darwin_intptr_t intptr_t; 
#endif /* _INTPTR_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uintptr_t.h" 3
#ifndef _UINTPTR_T
#define _UINTPTR_T
typedef unsigned long uintptr_t; 
#endif /* _UINTPTR_T */
# 97 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/types.h" 3
typedef u_int64_t user_addr_t; 
typedef u_int64_t user_size_t; 
typedef int64_t user_ssize_t; 
typedef int64_t user_long_t; 
typedef u_int64_t user_ulong_t; 
typedef int64_t user_time_t; 
typedef int64_t user_off_t; 
# 111
typedef u_int64_t syscall_arg_t; 


#endif /* _MACHTYPES_H_ */
# 40 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/types.h" 3
#endif /* _BSD_MACHINE_TYPES_H_ */
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_va_list.h" 3
typedef __darwin_va_list va_list; 
#endif /* _VA_LIST_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_size_t.h" 3
#ifndef _SIZE_T
#define _SIZE_T

typedef __darwin_size_t size_t; 
#endif /* _SIZE_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_null.h" 3
#ifndef NULL
#define NULL __DARWIN_NULL

#endif /* NULL */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/stdio.h" 3
#ifndef _SYS_STDIO_H_
#define _SYS_STDIO_H_
# 39
int renameat(int, const char *, int, const char *); 
# 46
int renamex_np(const char *, const char *, unsigned); 
int renameatx_np(int, const char *, int, const char *, unsigned); 
# 55
#endif /* _SYS_STDIO_H_ */
# 81 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_stdio.h" 3
typedef __darwin_off_t fpos_t; 
# 92
struct __sbuf { 
unsigned char *_base; 
int _size; 
}; 


struct __sFILEX; 
# 157
typedef 
# 126
struct __sFILE { 
unsigned char *_p; 
int _r; 
int _w; 
short _flags; 
short _file; 
struct __sbuf _bf; 
int _lbfsize; 


void *_cookie; 
int (*_Nullable _close)(void *); 
int (*_Nullable _read)(void *, char *, int); 
fpos_t (*_Nullable _seek)(void *, fpos_t, int); 
int (*_Nullable _write)(void *, const char *, int); 


struct __sbuf _ub; 
struct __sFILEX *_extra; 
int _ur; 


unsigned char _ubuf[3]; 
unsigned char _nbuf[1]; 


struct __sbuf _lb; 


int _blksize; 
fpos_t _offset; 
} FILE; 

#endif /* __STDIO_H_ */
# 67 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
extern FILE *__stdinp; 
extern FILE *__stdoutp; 
extern FILE *__stderrp; 
# 117
#ifndef SEEK_SET
#define SEEK_SET 0
#endif /* SEEK_SET */
#ifndef SEEK_CUR
#define SEEK_CUR 1
#endif /* SEEK_CUR */
#ifndef SEEK_END
#define SEEK_END 2
#endif /* SEEK_END */
# 142
void clearerr(FILE *); 
int fclose(FILE *); 
int feof(FILE *); 
int ferror(FILE *); 
int fflush(FILE *); 
int fgetc(FILE *); 
int fgetpos(FILE *, fpos_t *); 
char *fgets(char *, int, FILE *); 



FILE *fopen(const char * __filename, const char * __mode) __asm__("_fopen"); 

int fprintf(FILE *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 
int fputc(int, FILE *); 
int fputs(const char *, FILE *) __asm__("_fputs"); 
size_t fread(void * __ptr, size_t __size, size_t __nitems, FILE * __stream); 
FILE *freopen(const char *, const char *, FILE *) __asm__("_freopen"); 

int fscanf(FILE *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 
int fseek(FILE *, long, int); 
int fsetpos(FILE *, const fpos_t *); 
long ftell(FILE *); 
size_t fwrite(const void * __ptr, size_t __size, size_t __nitems, FILE * __stream) __asm__("_fwrite"); 
int getc(FILE *); 
int getchar(void); 
char *gets(char *); 
void perror(const char *) __attribute((__cold__)); 
int printf(const char *, ...) __attribute((__format__(__printf__, 1, 2))); 
int putc(int, FILE *); 
int putchar(int); 
int puts(const char *); 
int remove(const char *); 
int rename(const char * __old, const char * __new); 
void rewind(FILE *); 
int scanf(const char *, ...) __attribute((__format__(__scanf__, 1, 2))); 
void setbuf(FILE *, char *); 
int setvbuf(FILE *, char *, int, size_t); 
int sprintf(char *, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 
int sscanf(const char *, const char *, ...) __attribute((__format__(__scanf__, 2, 3))); 
FILE *tmpfile(void); 



__attribute((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is h" "ighly recommended that you use mkstemp(3) instead."))) char *

tmpnam(char *); 
int ungetc(int, FILE *); 
int vfprintf(FILE *, const char *, va_list) __attribute((__format__(__printf__, 2, 0))); 
int vprintf(const char *, va_list) __attribute((__format__(__printf__, 1, 0))); 
int vsprintf(char *, const char *, va_list) __attribute((__format__(__printf__, 2, 0))); 
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_ctermid.h" 3
#ifndef _CTERMID_H_
#define _CTERMID_H_
char *ctermid(char *); 
#endif /* _CTERMID_H_ */
# 210 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
FILE *fdopen(int, const char *) __asm__("_fdopen"); 

int fileno(FILE *); 
# 228
int pclose(FILE *); 



FILE *popen(const char *, const char *) __asm__("_popen"); 
# 249
int __srget(FILE *); 
int __svfscanf(FILE *, const char *, va_list) __attribute((__format__(__scanf__, 2, 0))); 
int __swbuf(int, FILE *); 
# 260
__attribute((__always_inline__)) __inline__ int __sputc(int _c, FILE *_p) { { 
if ((--_p->_w >= 0) || ((_p->_w >= _p->_lbfsize) && ((char)_c != 10))) { 
return *((_p->_p)++) = _c; } else { 

return __swbuf(_c, _p); }  } 
} 
# 286
void flockfile(FILE *); 
int ftrylockfile(FILE *); 
void funlockfile(FILE *); 
int getc_unlocked(FILE *); 
int getchar_unlocked(void); 
int putc_unlocked(int, FILE *); 
int putchar_unlocked(int); 



int getw(FILE *); 
int putw(int, FILE *); 




__attribute((__deprecated__("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is " "highly recommended that you use mkstemp(3) instead."))) char *

tempnam(const char * __dir, const char * __prefix) __asm__("_tempnam"); 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_off_t.h" 3
#ifndef _OFF_T
#define _OFF_T

typedef __darwin_off_t off_t; 
#endif /* _OFF_T */
# 327 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
int fseeko(FILE * __stream, off_t __offset, int __whence); 
off_t ftello(FILE * __stream); 
# 334
int snprintf(char * __str, size_t __size, const char * __format, ...) __attribute((__format__(__printf__, 3, 4))); 
int vfscanf(FILE * __stream, const char * __format, va_list) __attribute((__format__(__scanf__, 2, 0))); 
int vscanf(const char * __format, va_list) __attribute((__format__(__scanf__, 1, 0))); 
int vsnprintf(char * __str, size_t __size, const char * __format, va_list) __attribute((__format__(__printf__, 3, 0))); 
int vsscanf(const char * __str, const char * __format, va_list) __attribute((__format__(__scanf__, 2, 0))); 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_ssize_t.h" 3
#ifndef _SSIZE_T
#define _SSIZE_T

typedef __darwin_ssize_t ssize_t; 
#endif /* _SSIZE_T */
# 352 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
int dprintf(int, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 
int vdprintf(int, const char *, va_list) __attribute((__format__(__printf__, 2, 0))); 
ssize_t getdelim(char ** __linep, size_t * __linecapp, int __delimiter, FILE * __stream); 
ssize_t getline(char ** __linep, size_t * __linecapp, FILE * __stream); 
FILE *fmemopen(void * __buf, size_t __size, const char * __mode); 
FILE *open_memstream(char ** __bufp, size_t * __sizep); 
# 367
extern const int sys_nerr; 
extern const char *const sys_errlist[]; 

int asprintf(char **, const char *, ...) __attribute((__format__(__printf__, 2, 3))); 
char *ctermid_r(char *); 
char *fgetln(FILE *, size_t *); 
const char *fmtcheck(const char *, const char *); 
int fpurge(FILE *); 
void setbuffer(FILE *, char *, int); 
int setlinebuf(FILE *); 
int vasprintf(char **, const char *, va_list) __attribute((__format__(__printf__, 2, 0))); 
FILE *zopen(const char *, const char *, int); 
# 384
FILE *funopen(const void *, int (*_Nullable)(void *, char *, int), int (*_Nullable)(void *, const char *, int), fpos_t (*_Nullable)(void *, fpos_t, int), int (*_Nullable)(void *)); 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3
#ifndef _SECURE__STDIO_H_
#define _SECURE__STDIO_H_
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/secure/_common.h" 3
#ifndef _SECURE__COMMON_H_
#define _SECURE__COMMON_H_
# 41
#endif /* _SECURE__COMMON_H_ */
# 42 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/secure/_stdio.h" 3
extern int __sprintf_chk(char *, int, size_t, const char *, ...); 
# 52
extern int __snprintf_chk(char *, size_t, int, size_t, const char *, ...); 
# 61
extern int __vsprintf_chk(char *, int, size_t, const char *, va_list); 
# 70
extern int __vsnprintf_chk(char *, size_t, int, size_t, const char *, va_list); 
# 86
#endif /* _SECURE__STDIO_H_ */
# 410 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h" 3
#endif /* _STDIO_H_ */
# 45 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/stddef.h" 3
#ifdef __need_ptrdiff_t
#undef __need_ptrdiff_t
#endif /* __need_ptrdiff_t */



typedef long ptrdiff_t; 




#ifdef __need_size_t
#undef __need_size_t
#endif /* __need_size_t */
# 76
typedef unsigned long rsize_t; 



#ifdef __need_wchar_t
#undef __need_wchar_t
#endif /* __need_wchar_t */
# 90
typedef int wchar_t; 
# 26 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/__stddef_max_align_t.h" 3
#ifndef __CLANG_MAX_ALIGN_T_DEFINED
#define __CLANG_MAX_ALIGN_T_DEFINED




typedef long double max_align_t; 
# 43
#endif /* __CLANG_MAX_ALIGN_T_DEFINED */
# 58 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdlib.h" 3
#ifndef _STDLIB_H_
#define _STDLIB_H_
# 64 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 3
#ifndef _SYS_WAIT_H_
#define _SYS_WAIT_H_
# 83
typedef 
# 79
enum { 
P_ALL, 
P_PID, 
P_PGID
} idtype_t; 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_pid_t.h" 3
#ifndef _PID_T
#define _PID_T

typedef __darwin_pid_t pid_t; 
#endif /* _PID_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_id_t.h" 3
#ifndef _ID_T
#define _ID_T

typedef __darwin_id_t id_t; 
#endif /* _ID_T */
# 69 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3
#ifndef _SYS_SIGNAL_H_
#define _SYS_SIGNAL_H_
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/appleapiopts.h" 3
#ifndef __SYS_APPLEAPIOPTS_H__
#define __SYS_APPLEAPIOPTS_H__


#ifndef __APPLE_API_STANDARD
#define __APPLE_API_STANDARD
#endif /* __APPLE_API_STANDARD */

#ifndef __APPLE_API_STABLE
#define __APPLE_API_STABLE
#endif /* __APPLE_API_STABLE */



#ifndef __APPLE_API_EVOLVING
#define __APPLE_API_EVOLVING
#endif /* __APPLE_API_EVOLVING */

#ifndef __APPLE_API_UNSTABLE
#define __APPLE_API_UNSTABLE
#endif /* __APPLE_API_UNSTABLE */

#ifndef __APPLE_API_PRIVATE
#define __APPLE_API_PRIVATE
#endif /* __APPLE_API_PRIVATE */

#ifndef __APPLE_API_OBSOLETE
#define __APPLE_API_OBSOLETE
#endif /* __APPLE_API_OBSOLETE */



#endif /* __SYS_APPLEAPIOPTS_H__ */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/signal.h" 3
#ifndef _BSD_MACHINE_SIGNAL_H_
#define _BSD_MACHINE_SIGNAL_H_
# 33 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/signal.h" 3
#ifndef _I386_SIGNAL_H_
#define _I386_SIGNAL_H_ 1




typedef int sig_atomic_t; 



#endif /* _I386_SIGNAL_H_ */
# 37 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/signal.h" 3
#endif /* _BSD_MACHINE_SIGNAL_H_ */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_mcontext.h" 3
#ifndef __I386_MCONTEXT_H_
#define __I386_MCONTEXT_H_
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h" 3
#ifndef _MACH_MACHINE__STRUCTS_H_
#define _MACH_MACHINE__STRUCTS_H_
# 32 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/mach/i386/_structs.h" 3
#ifndef _MACH_I386__STRUCTS_H_
#define _MACH_I386__STRUCTS_H_
# 46
struct __darwin_i386_thread_state { 

unsigned __eax; 
unsigned __ebx; 
unsigned __ecx; 
unsigned __edx; 
unsigned __edi; 
unsigned __esi; 
unsigned __ebp; 
unsigned __esp; 
unsigned __ss; 
unsigned __eflags; 
unsigned __eip; 
unsigned __cs; 
unsigned __ds; 
unsigned __es; 
unsigned __fs; 
unsigned __gs; 
}; 
# 92
struct __darwin_fp_control { 

unsigned short __invalid:1, 
__denorm:1, 
__zdiv:1, 
__ovrfl:1, 
__undfl:1, 
__precis:1; 
unsigned short:2, 
__pc:2, 
# 107
__rc:2; 
# 114
unsigned short:1; 
unsigned short:3; 
}; 
typedef struct __darwin_fp_control __darwin_fp_control_t; 
# 150
struct __darwin_fp_status { 

unsigned short __invalid:1, 
__denorm:1, 
__zdiv:1, 
__ovrfl:1, 
__undfl:1, 
__precis:1, 
__stkflt:1, 
__errsumm:1, 
__c0:1, 
__c1:1, 
__c2:1, 
__tos:3, 
__c3:1, 
__busy:1; 
}; 
typedef struct __darwin_fp_status __darwin_fp_status_t; 
# 194
struct __darwin_mmst_reg { 

char __mmst_reg[10]; 
char __mmst_rsrv[6]; 
}; 
# 213
struct __darwin_xmm_reg { 

char __xmm_reg[16]; 
}; 
# 229
struct __darwin_ymm_reg { 

char __ymm_reg[32]; 
}; 
# 245
struct __darwin_zmm_reg { 

char __zmm_reg[64]; 
}; 
# 259
struct __darwin_opmask_reg { 

char __opmask_reg[8]; 
}; 
# 281
struct __darwin_i386_float_state { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 
__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 
__uint16_t __fpu_rsrv2; 
__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 
__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
char __fpu_rsrv4[14 * 16]; 
int __fpu_reserved1; 
}; 


struct __darwin_i386_avx_state { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 
__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 
__uint16_t __fpu_rsrv2; 
__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 
__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
char __fpu_rsrv4[14 * 16]; 
int __fpu_reserved1; 
char __avx_reserved1[64]; 
struct __darwin_xmm_reg __fpu_ymmh0; 
struct __darwin_xmm_reg __fpu_ymmh1; 
struct __darwin_xmm_reg __fpu_ymmh2; 
struct __darwin_xmm_reg __fpu_ymmh3; 
struct __darwin_xmm_reg __fpu_ymmh4; 
struct __darwin_xmm_reg __fpu_ymmh5; 
struct __darwin_xmm_reg __fpu_ymmh6; 
struct __darwin_xmm_reg __fpu_ymmh7; 
}; 


struct __darwin_i386_avx512_state { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 
__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 
__uint16_t __fpu_rsrv2; 
__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 
__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
char __fpu_rsrv4[14 * 16]; 
int __fpu_reserved1; 
char __avx_reserved1[64]; 
struct __darwin_xmm_reg __fpu_ymmh0; 
struct __darwin_xmm_reg __fpu_ymmh1; 
struct __darwin_xmm_reg __fpu_ymmh2; 
struct __darwin_xmm_reg __fpu_ymmh3; 
struct __darwin_xmm_reg __fpu_ymmh4; 
struct __darwin_xmm_reg __fpu_ymmh5; 
struct __darwin_xmm_reg __fpu_ymmh6; 
struct __darwin_xmm_reg __fpu_ymmh7; 
struct __darwin_opmask_reg __fpu_k0; 
struct __darwin_opmask_reg __fpu_k1; 
struct __darwin_opmask_reg __fpu_k2; 
struct __darwin_opmask_reg __fpu_k3; 
struct __darwin_opmask_reg __fpu_k4; 
struct __darwin_opmask_reg __fpu_k5; 
struct __darwin_opmask_reg __fpu_k6; 
struct __darwin_opmask_reg __fpu_k7; 
struct __darwin_ymm_reg __fpu_zmmh0; 
struct __darwin_ymm_reg __fpu_zmmh1; 
struct __darwin_ymm_reg __fpu_zmmh2; 
struct __darwin_ymm_reg __fpu_zmmh3; 
struct __darwin_ymm_reg __fpu_zmmh4; 
struct __darwin_ymm_reg __fpu_zmmh5; 
struct __darwin_ymm_reg __fpu_zmmh6; 
struct __darwin_ymm_reg __fpu_zmmh7; 
}; 
# 575
struct __darwin_i386_exception_state { 

__uint16_t __trapno; 
__uint16_t __cpu; 
__uint32_t __err; 
__uint32_t __faultvaddr; 
}; 
# 595
struct __darwin_x86_debug_state32 { 

unsigned __dr0; 
unsigned __dr1; 
unsigned __dr2; 
unsigned __dr3; 
unsigned __dr4; 
unsigned __dr5; 
unsigned __dr6; 
unsigned __dr7; 
}; 
# 622
struct __x86_pagein_state { 

int __pagein_error; 
}; 
# 633
struct __darwin_x86_thread_state64 { 

__uint64_t __rax; 
__uint64_t __rbx; 
__uint64_t __rcx; 
__uint64_t __rdx; 
__uint64_t __rdi; 
__uint64_t __rsi; 
__uint64_t __rbp; 
__uint64_t __rsp; 
__uint64_t __r8; 
__uint64_t __r9; 
__uint64_t __r10; 
__uint64_t __r11; 
__uint64_t __r12; 
__uint64_t __r13; 
__uint64_t __r14; 
__uint64_t __r15; 
__uint64_t __rip; 
__uint64_t __rflags; 
__uint64_t __cs; 
__uint64_t __fs; 
__uint64_t __gs; 
}; 
# 691
struct __darwin_x86_thread_full_state64 { 

struct __darwin_x86_thread_state64 __ss64; 
__uint64_t __ds; 
__uint64_t __es; 
__uint64_t __ss; 
__uint64_t __gsbase; 
}; 
# 714
struct __darwin_x86_float_state64 { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 


__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 

__uint16_t __fpu_rsrv2; 


__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 

__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
struct __darwin_xmm_reg __fpu_xmm8; 
struct __darwin_xmm_reg __fpu_xmm9; 
struct __darwin_xmm_reg __fpu_xmm10; 
struct __darwin_xmm_reg __fpu_xmm11; 
struct __darwin_xmm_reg __fpu_xmm12; 
struct __darwin_xmm_reg __fpu_xmm13; 
struct __darwin_xmm_reg __fpu_xmm14; 
struct __darwin_xmm_reg __fpu_xmm15; 
char __fpu_rsrv4[6 * 16]; 
int __fpu_reserved1; 
}; 


struct __darwin_x86_avx_state64 { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 


__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 

__uint16_t __fpu_rsrv2; 


__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 

__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
struct __darwin_xmm_reg __fpu_xmm8; 
struct __darwin_xmm_reg __fpu_xmm9; 
struct __darwin_xmm_reg __fpu_xmm10; 
struct __darwin_xmm_reg __fpu_xmm11; 
struct __darwin_xmm_reg __fpu_xmm12; 
struct __darwin_xmm_reg __fpu_xmm13; 
struct __darwin_xmm_reg __fpu_xmm14; 
struct __darwin_xmm_reg __fpu_xmm15; 
char __fpu_rsrv4[6 * 16]; 
int __fpu_reserved1; 
char __avx_reserved1[64]; 
struct __darwin_xmm_reg __fpu_ymmh0; 
struct __darwin_xmm_reg __fpu_ymmh1; 
struct __darwin_xmm_reg __fpu_ymmh2; 
struct __darwin_xmm_reg __fpu_ymmh3; 
struct __darwin_xmm_reg __fpu_ymmh4; 
struct __darwin_xmm_reg __fpu_ymmh5; 
struct __darwin_xmm_reg __fpu_ymmh6; 
struct __darwin_xmm_reg __fpu_ymmh7; 
struct __darwin_xmm_reg __fpu_ymmh8; 
struct __darwin_xmm_reg __fpu_ymmh9; 
struct __darwin_xmm_reg __fpu_ymmh10; 
struct __darwin_xmm_reg __fpu_ymmh11; 
struct __darwin_xmm_reg __fpu_ymmh12; 
struct __darwin_xmm_reg __fpu_ymmh13; 
struct __darwin_xmm_reg __fpu_ymmh14; 
struct __darwin_xmm_reg __fpu_ymmh15; 
}; 


struct __darwin_x86_avx512_state64 { 

int __fpu_reserved[2]; 
struct __darwin_fp_control __fpu_fcw; 
struct __darwin_fp_status __fpu_fsw; 
__uint8_t __fpu_ftw; 
__uint8_t __fpu_rsrv1; 
__uint16_t __fpu_fop; 


__uint32_t __fpu_ip; 
__uint16_t __fpu_cs; 

__uint16_t __fpu_rsrv2; 


__uint32_t __fpu_dp; 
__uint16_t __fpu_ds; 

__uint16_t __fpu_rsrv3; 
__uint32_t __fpu_mxcsr; 
__uint32_t __fpu_mxcsrmask; 
struct __darwin_mmst_reg __fpu_stmm0; 
struct __darwin_mmst_reg __fpu_stmm1; 
struct __darwin_mmst_reg __fpu_stmm2; 
struct __darwin_mmst_reg __fpu_stmm3; 
struct __darwin_mmst_reg __fpu_stmm4; 
struct __darwin_mmst_reg __fpu_stmm5; 
struct __darwin_mmst_reg __fpu_stmm6; 
struct __darwin_mmst_reg __fpu_stmm7; 
struct __darwin_xmm_reg __fpu_xmm0; 
struct __darwin_xmm_reg __fpu_xmm1; 
struct __darwin_xmm_reg __fpu_xmm2; 
struct __darwin_xmm_reg __fpu_xmm3; 
struct __darwin_xmm_reg __fpu_xmm4; 
struct __darwin_xmm_reg __fpu_xmm5; 
struct __darwin_xmm_reg __fpu_xmm6; 
struct __darwin_xmm_reg __fpu_xmm7; 
struct __darwin_xmm_reg __fpu_xmm8; 
struct __darwin_xmm_reg __fpu_xmm9; 
struct __darwin_xmm_reg __fpu_xmm10; 
struct __darwin_xmm_reg __fpu_xmm11; 
struct __darwin_xmm_reg __fpu_xmm12; 
struct __darwin_xmm_reg __fpu_xmm13; 
struct __darwin_xmm_reg __fpu_xmm14; 
struct __darwin_xmm_reg __fpu_xmm15; 
char __fpu_rsrv4[6 * 16]; 
int __fpu_reserved1; 
char __avx_reserved1[64]; 
struct __darwin_xmm_reg __fpu_ymmh0; 
struct __darwin_xmm_reg __fpu_ymmh1; 
struct __darwin_xmm_reg __fpu_ymmh2; 
struct __darwin_xmm_reg __fpu_ymmh3; 
struct __darwin_xmm_reg __fpu_ymmh4; 
struct __darwin_xmm_reg __fpu_ymmh5; 
struct __darwin_xmm_reg __fpu_ymmh6; 
struct __darwin_xmm_reg __fpu_ymmh7; 
struct __darwin_xmm_reg __fpu_ymmh8; 
struct __darwin_xmm_reg __fpu_ymmh9; 
struct __darwin_xmm_reg __fpu_ymmh10; 
struct __darwin_xmm_reg __fpu_ymmh11; 
struct __darwin_xmm_reg __fpu_ymmh12; 
struct __darwin_xmm_reg __fpu_ymmh13; 
struct __darwin_xmm_reg __fpu_ymmh14; 
struct __darwin_xmm_reg __fpu_ymmh15; 
struct __darwin_opmask_reg __fpu_k0; 
struct __darwin_opmask_reg __fpu_k1; 
struct __darwin_opmask_reg __fpu_k2; 
struct __darwin_opmask_reg __fpu_k3; 
struct __darwin_opmask_reg __fpu_k4; 
struct __darwin_opmask_reg __fpu_k5; 
struct __darwin_opmask_reg __fpu_k6; 
struct __darwin_opmask_reg __fpu_k7; 
struct __darwin_ymm_reg __fpu_zmmh0; 
struct __darwin_ymm_reg __fpu_zmmh1; 
struct __darwin_ymm_reg __fpu_zmmh2; 
struct __darwin_ymm_reg __fpu_zmmh3; 
struct __darwin_ymm_reg __fpu_zmmh4; 
struct __darwin_ymm_reg __fpu_zmmh5; 
struct __darwin_ymm_reg __fpu_zmmh6; 
struct __darwin_ymm_reg __fpu_zmmh7; 
struct __darwin_ymm_reg __fpu_zmmh8; 
struct __darwin_ymm_reg __fpu_zmmh9; 
struct __darwin_ymm_reg __fpu_zmmh10; 
struct __darwin_ymm_reg __fpu_zmmh11; 
struct __darwin_ymm_reg __fpu_zmmh12; 
struct __darwin_ymm_reg __fpu_zmmh13; 
struct __darwin_ymm_reg __fpu_zmmh14; 
struct __darwin_ymm_reg __fpu_zmmh15; 
struct __darwin_zmm_reg __fpu_zmm16; 
struct __darwin_zmm_reg __fpu_zmm17; 
struct __darwin_zmm_reg __fpu_zmm18; 
struct __darwin_zmm_reg __fpu_zmm19; 
struct __darwin_zmm_reg __fpu_zmm20; 
struct __darwin_zmm_reg __fpu_zmm21; 
struct __darwin_zmm_reg __fpu_zmm22; 
struct __darwin_zmm_reg __fpu_zmm23; 
struct __darwin_zmm_reg __fpu_zmm24; 
struct __darwin_zmm_reg __fpu_zmm25; 
struct __darwin_zmm_reg __fpu_zmm26; 
struct __darwin_zmm_reg __fpu_zmm27; 
struct __darwin_zmm_reg __fpu_zmm28; 
struct __darwin_zmm_reg __fpu_zmm29; 
struct __darwin_zmm_reg __fpu_zmm30; 
struct __darwin_zmm_reg __fpu_zmm31; 
}; 
# 1172
struct __darwin_x86_exception_state64 { 

__uint16_t __trapno; 
__uint16_t __cpu; 
__uint32_t __err; 
__uint64_t __faultvaddr; 
}; 
# 1192
struct __darwin_x86_debug_state64 { 

__uint64_t __dr0; 
__uint64_t __dr1; 
__uint64_t __dr2; 
__uint64_t __dr3; 
__uint64_t __dr4; 
__uint64_t __dr5; 
__uint64_t __dr6; 
__uint64_t __dr7; 
}; 
# 1220
struct __darwin_x86_cpmu_state64 { 

__uint64_t __ctrs[16]; 
}; 
# 1232
#endif /* _MACH_I386__STRUCTS_H_ */
# 38 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/mach/machine/_structs.h" 3
#endif /* _MACH_MACHINE__STRUCTS_H_ */
# 39 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/_mcontext.h" 3
struct __darwin_mcontext32 { 

struct __darwin_i386_exception_state __es; 
struct __darwin_i386_thread_state __ss; 
struct __darwin_i386_float_state __fs; 
}; 


struct __darwin_mcontext_avx32 { 

struct __darwin_i386_exception_state __es; 
struct __darwin_i386_thread_state __ss; 
struct __darwin_i386_avx_state __fs; 
}; 



struct __darwin_mcontext_avx512_32 { 

struct __darwin_i386_exception_state __es; 
struct __darwin_i386_thread_state __ss; 
struct __darwin_i386_avx512_state __fs; 
}; 
# 97
struct __darwin_mcontext64 { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_state64 __ss; 
struct __darwin_x86_float_state64 __fs; 
}; 


struct __darwin_mcontext64_full { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_full_state64 __ss; 
struct __darwin_x86_float_state64 __fs; 
}; 


struct __darwin_mcontext_avx64 { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_state64 __ss; 
struct __darwin_x86_avx_state64 __fs; 
}; 


struct __darwin_mcontext_avx64_full { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_full_state64 __ss; 
struct __darwin_x86_avx_state64 __fs; 
}; 



struct __darwin_mcontext_avx512_64 { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_state64 __ss; 
struct __darwin_x86_avx512_state64 __fs; 
}; 


struct __darwin_mcontext_avx512_64_full { 

struct __darwin_x86_exception_state64 __es; 
struct __darwin_x86_thread_full_state64 __ss; 
struct __darwin_x86_avx512_state64 __fs; 
}; 
# 201
#ifndef _MCONTEXT_T
#define _MCONTEXT_T

typedef struct __darwin_mcontext64 *mcontext_t; 





#endif /* _MCONTEXT_T */

#endif /* __I386_MCONTEXT_H_ */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_pthread/_pthread_attr_t.h" 3
#ifndef _PTHREAD_ATTR_T
#define _PTHREAD_ATTR_T

typedef __darwin_pthread_attr_t pthread_attr_t; 
#endif /* _PTHREAD_ATTR_T */
# 42 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigaltstack.h" 3
struct __darwin_sigaltstack { 

void *ss_sp; 
__darwin_size_t ss_size; 
int ss_flags; 
}; 
typedef struct __darwin_sigaltstack stack_t; 
# 42 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_ucontext.h" 3
struct __darwin_ucontext { 

int uc_onstack; 
__darwin_sigset_t uc_sigmask; 
struct __darwin_sigaltstack uc_stack; 
struct __darwin_ucontext *uc_link; 
__darwin_size_t uc_mcsize; 
struct __darwin_mcontext64 *uc_mcontext; 



}; 


typedef struct __darwin_ucontext ucontext_t; 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_sigset_t.h" 3
#ifndef _SIGSET_T
#define _SIGSET_T

typedef __darwin_sigset_t sigset_t; 
#endif /* _SIGSET_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_uid_t.h" 3
#ifndef _UID_T
#define _UID_T

typedef __darwin_uid_t uid_t; 
#endif /* _UID_T */
# 158 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/signal.h" 3
union sigval { 

int sival_int; 
void *sival_ptr; 
}; 
# 168
struct sigevent { 
int sigev_notify; 
int sigev_signo; 
union sigval sigev_value; 
void (*sigev_notify_function)(union sigval); 
pthread_attr_t *sigev_notify_attributes; 
}; 
# 188
typedef 
# 177
struct __siginfo { 
int si_signo; 
int si_errno; 
int si_code; 
pid_t si_pid; 
uid_t si_uid; 
int si_status; 
void *si_addr; 
union sigval si_value; 
long si_band; 
unsigned long __pad[7]; 
} siginfo_t; 
# 269
union __sigaction_u { 
void (*__sa_handler)(int); 
void (*__sa_sigaction)(int, struct __siginfo *, void *); 

}; 


struct __sigaction { 
union __sigaction_u __sigaction_u; 
void (*sa_tramp)(void *, int, int, siginfo_t *, void *); 
sigset_t sa_mask; 
int sa_flags; 
}; 




struct sigaction { 
union __sigaction_u __sigaction_u; 
sigset_t sa_mask; 
int sa_flags; 
}; 
# 331
typedef void (*sig_t)(int); 
# 348
struct sigvec { 
void (*sv_handler)(int); 
int sv_mask; 
int sv_flags; 
}; 
# 367
struct sigstack { 
char *ss_sp; 
int ss_onstack; 
}; 
# 390
void (*signal(int, void (*)(int)))(int); 

#endif /* _SYS_SIGNAL_H_ */
# 64 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3
#ifndef _SYS_RESOURCE_H_
#define _SYS_RESOURCE_H_
# 25 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/stdint.h" 3
#ifndef __CLANG_STDINT_H
#define __CLANG_STDINT_H
# 6 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdint.h" 3
#ifndef _STDINT_H_
#define _STDINT_H_
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_uint8_t.h" 3
#ifndef _UINT8_T
#define _UINT8_T
typedef unsigned char uint8_t; 
#endif /* _UINT8_T */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_uint16_t.h" 3
#ifndef _UINT16_T
#define _UINT16_T
typedef unsigned short uint16_t; 
#endif /* _UINT16_T */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_uint32_t.h" 3
#ifndef _UINT32_T
#define _UINT32_T
typedef unsigned uint32_t; 
#endif /* _UINT32_T */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_uint64_t.h" 3
#ifndef _UINT64_T
#define _UINT64_T
typedef unsigned long long uint64_t; 
#endif /* _UINT64_T */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdint.h" 3
typedef int8_t int_least8_t; 
typedef int16_t int_least16_t; 
typedef int32_t int_least32_t; 
typedef int64_t int_least64_t; 
typedef uint8_t uint_least8_t; 
typedef uint16_t uint_least16_t; 
typedef uint32_t uint_least32_t; 
typedef uint64_t uint_least64_t; 



typedef int8_t int_fast8_t; 
typedef int16_t int_fast16_t; 
typedef int32_t int_fast32_t; 
typedef int64_t int_fast64_t; 
typedef uint8_t uint_fast8_t; 
typedef uint16_t uint_fast16_t; 
typedef uint32_t uint_fast32_t; 
typedef uint64_t uint_fast64_t; 
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_intmax_t.h" 3
#ifndef _INTMAX_T
#define _INTMAX_T

typedef long intmax_t; 
# 40
#endif /* _INTMAX_T */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/_types/_uintmax_t.h" 3
#ifndef _UINTMAX_T
#define _UINTMAX_T

typedef unsigned long uintmax_t; 
# 40
#endif /* _UINTMAX_T */
# 205 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdint.h" 3
#endif /* _STDINT_H_ */
# 704 "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/lib/clang/11.0.0/include/stdint.h" 3
#endif /* __CLANG_STDINT_H */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timeval.h" 3
#ifndef _STRUCT_TIMEVAL
#define _STRUCT_TIMEVAL struct timeval




struct timeval { 

__darwin_time_t tv_sec; 
__darwin_suseconds_t tv_usec; 
}; 
#endif /* _STRUCT_TIMEVAL */
# 89 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/resource.h" 3
typedef __uint64_t rlim_t; 
# 152
struct rusage { 
struct timeval ru_utime; 
struct timeval ru_stime; 
# 163
long ru_maxrss; 

long ru_ixrss; 
long ru_idrss; 
long ru_isrss; 
long ru_minflt; 
long ru_majflt; 
long ru_nswap; 
long ru_inblock; 
long ru_oublock; 
long ru_msgsnd; 
long ru_msgrcv; 
long ru_nsignals; 
long ru_nvcsw; 
long ru_nivcsw; 


}; 
# 193
typedef void *rusage_info_t; 

struct rusage_info_v0 { 
uint8_t ri_uuid[16]; 
uint64_t ri_user_time; 
uint64_t ri_system_time; 
uint64_t ri_pkg_idle_wkups; 
uint64_t ri_interrupt_wkups; 
uint64_t ri_pageins; 
uint64_t ri_wired_size; 
uint64_t ri_resident_size; 
uint64_t ri_phys_footprint; 
uint64_t ri_proc_start_abstime; 
uint64_t ri_proc_exit_abstime; 
}; 

struct rusage_info_v1 { 
uint8_t ri_uuid[16]; 
uint64_t ri_user_time; 
uint64_t ri_system_time; 
uint64_t ri_pkg_idle_wkups; 
uint64_t ri_interrupt_wkups; 
uint64_t ri_pageins; 
uint64_t ri_wired_size; 
uint64_t ri_resident_size; 
uint64_t ri_phys_footprint; 
uint64_t ri_proc_start_abstime; 
uint64_t ri_proc_exit_abstime; 
uint64_t ri_child_user_time; 
uint64_t ri_child_system_time; 
uint64_t ri_child_pkg_idle_wkups; 
uint64_t ri_child_interrupt_wkups; 
uint64_t ri_child_pageins; 
uint64_t ri_child_elapsed_abstime; 
}; 

struct rusage_info_v2 { 
uint8_t ri_uuid[16]; 
uint64_t ri_user_time; 
uint64_t ri_system_time; 
uint64_t ri_pkg_idle_wkups; 
uint64_t ri_interrupt_wkups; 
uint64_t ri_pageins; 
uint64_t ri_wired_size; 
uint64_t ri_resident_size; 
uint64_t ri_phys_footprint; 
uint64_t ri_proc_start_abstime; 
uint64_t ri_proc_exit_abstime; 
uint64_t ri_child_user_time; 
uint64_t ri_child_system_time; 
uint64_t ri_child_pkg_idle_wkups; 
uint64_t ri_child_interrupt_wkups; 
uint64_t ri_child_pageins; 
uint64_t ri_child_elapsed_abstime; 
uint64_t ri_diskio_bytesread; 
uint64_t ri_diskio_byteswritten; 
}; 

struct rusage_info_v3 { 
uint8_t ri_uuid[16]; 
uint64_t ri_user_time; 
uint64_t ri_system_time; 
uint64_t ri_pkg_idle_wkups; 
uint64_t ri_interrupt_wkups; 
uint64_t ri_pageins; 
uint64_t ri_wired_size; 
uint64_t ri_resident_size; 
uint64_t ri_phys_footprint; 
uint64_t ri_proc_start_abstime; 
uint64_t ri_proc_exit_abstime; 
uint64_t ri_child_user_time; 
uint64_t ri_child_system_time; 
uint64_t ri_child_pkg_idle_wkups; 
uint64_t ri_child_interrupt_wkups; 
uint64_t ri_child_pageins; 
uint64_t ri_child_elapsed_abstime; 
uint64_t ri_diskio_bytesread; 
uint64_t ri_diskio_byteswritten; 
uint64_t ri_cpu_time_qos_default; 
uint64_t ri_cpu_time_qos_maintenance; 
uint64_t ri_cpu_time_qos_background; 
uint64_t ri_cpu_time_qos_utility; 
uint64_t ri_cpu_time_qos_legacy; 
uint64_t ri_cpu_time_qos_user_initiated; 
uint64_t ri_cpu_time_qos_user_interactive; 
uint64_t ri_billed_system_time; 
uint64_t ri_serviced_system_time; 
}; 

struct rusage_info_v4 { 
uint8_t ri_uuid[16]; 
uint64_t ri_user_time; 
uint64_t ri_system_time; 
uint64_t ri_pkg_idle_wkups; 
uint64_t ri_interrupt_wkups; 
uint64_t ri_pageins; 
uint64_t ri_wired_size; 
uint64_t ri_resident_size; 
uint64_t ri_phys_footprint; 
uint64_t ri_proc_start_abstime; 
uint64_t ri_proc_exit_abstime; 
uint64_t ri_child_user_time; 
uint64_t ri_child_system_time; 
uint64_t ri_child_pkg_idle_wkups; 
uint64_t ri_child_interrupt_wkups; 
uint64_t ri_child_pageins; 
uint64_t ri_child_elapsed_abstime; 
uint64_t ri_diskio_bytesread; 
uint64_t ri_diskio_byteswritten; 
uint64_t ri_cpu_time_qos_default; 
uint64_t ri_cpu_time_qos_maintenance; 
uint64_t ri_cpu_time_qos_background; 
uint64_t ri_cpu_time_qos_utility; 
uint64_t ri_cpu_time_qos_legacy; 
uint64_t ri_cpu_time_qos_user_initiated; 
uint64_t ri_cpu_time_qos_user_interactive; 
uint64_t ri_billed_system_time; 
uint64_t ri_serviced_system_time; 
uint64_t ri_logical_writes; 
uint64_t ri_lifetime_max_phys_footprint; 
uint64_t ri_instructions; 
uint64_t ri_cycles; 
uint64_t ri_billed_energy; 
uint64_t ri_serviced_energy; 
uint64_t ri_interval_max_phys_footprint; 
uint64_t ri_runnable_time; 
}; 

typedef struct rusage_info_v4 rusage_info_current; 
# 365
struct rlimit { 
rlim_t rlim_cur; 
rlim_t rlim_max; 
}; 
# 400
struct proc_rlimit_control_wakeupmon { 
uint32_t wm_flags; 
int32_t wm_rate; 
}; 
# 445
int getpriority(int, id_t); 

int getiopolicy_np(int, int); 

int getrlimit(int, struct rlimit *) __asm__("_getrlimit"); 
int getrusage(int, struct rusage *); 
int setpriority(int, id_t, int); 

int setiopolicy_np(int, int, int); 

int setrlimit(int, const struct rlimit *) __asm__("_setrlimit"); 


#endif /* _SYS_RESOURCE_H_ */
# 31 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/endian.h" 3
#ifndef _BSD_MACHINE_ENDIAN_H_
#define _BSD_MACHINE_ENDIAN_H_
# 66 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/endian.h" 3
#ifndef _I386__ENDIAN_H_
#define _I386__ENDIAN_H_
# 90 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 3
#ifndef _SYS__ENDIAN_H_
#define _SYS__ENDIAN_H_
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h" 3
#ifndef _OS__OSBYTEORDER_H
#define _OS__OSBYTEORDER_H
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/libkern/i386/_OSByteOrder.h" 3
#ifndef _OS__OSBYTEORDERI386_H
#define _OS__OSBYTEORDERI386_H
# 46
static __inline__ __uint16_t _OSSwapInt16(__uint16_t 
_data) 

{ 
return (__uint16_t)((_data << 8) | (_data >> 8)); 
} 



static __inline__ __uint32_t _OSSwapInt32(__uint32_t 
_data) 

{ 

return __builtin_bswap32(_data); 




} 




static __inline__ __uint64_t _OSSwapInt64(__uint64_t 
_data) 

{ 
return __builtin_bswap64(_data); 
} 
# 104
#endif /* _OS__OSBYTEORDERI386_H */
# 130 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/libkern/_OSByteOrder.h" 3
#endif /* _OS__OSBYTEORDER_H */
# 151 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_endian.h" 3
#endif /* _SYS__ENDIAN_H_ */
# 102 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/i386/endian.h" 3
#endif /* _I386__ENDIAN_H_ */
# 40 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/machine/endian.h" 3
#endif /* _BSD_MACHINE_ENDIAN_H_ */
# 194 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/wait.h" 3
union wait { 
int w_status; 



struct { 

unsigned w_Termsig:7, 
w_Coredump:1, 
w_Retcode:8, 
w_Filler:16; 
# 212
} w_T; 
# 218
struct { 

unsigned w_Stopval:8, 
w_Stopsig:8, 
w_Filler:16; 
# 229
} w_S; 
}; 
# 248
pid_t wait(int *) __asm__("_wait"); 
pid_t waitpid(pid_t, int *, int) __asm__("_waitpid"); 

int waitid(idtype_t, id_t, siginfo_t *, int) __asm__("_waitid"); 


pid_t wait3(int *, int, struct rusage *); 
pid_t wait4(pid_t, int *, int, struct rusage *); 


#endif /* _SYS_WAIT_H_ */
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/alloca.h" 3
#ifndef _ALLOCA_H_
#define _ALLOCA_H_
# 32
void *alloca(size_t); 
# 43
#endif /* _ALLOCA_H_ */
# 29 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_ct_rune_t.h" 3
#ifndef _CT_RUNE_T
#define _CT_RUNE_T

typedef __darwin_ct_rune_t ct_rune_t; 
#endif /* _CT_RUNE_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_rune_t.h" 3
#ifndef _RUNE_T
#define _RUNE_T

typedef __darwin_rune_t rune_t; 
#endif /* _RUNE_T */
# 86 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdlib.h" 3
typedef 
# 83
struct { 
int quot; 
int rem; 
} div_t; 




typedef 
# 88
struct { 
long quot; 
long rem; 
} ldiv_t; 
# 97
typedef 
# 94
struct { 
long long quot; 
long long rem; 
} lldiv_t; 
# 118
extern int __mb_cur_max; 
# 24 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/malloc/_malloc.h" 3
#ifndef _MALLOC_UNDERSCORE_MALLOC_H_
#define _MALLOC_UNDERSCORE_MALLOC_H_
# 40
void *malloc(size_t __size) __attribute((__warn_unused_result__)) __attribute((alloc_size(1))); 
void *calloc(size_t __count, size_t __size) __attribute((__warn_unused_result__)) __attribute((alloc_size(1, 2))); 
void free(void *); 
void *realloc(void * __ptr, size_t __size) __attribute((__warn_unused_result__)) __attribute((alloc_size(2))); 

void *valloc(size_t) __attribute((alloc_size(1))); 




void *aligned_alloc(size_t __alignment, size_t __size) __attribute((__warn_unused_result__)) __attribute((alloc_size(2))); 

int posix_memalign(void ** __memptr, size_t __alignment, size_t __size); 



#endif /* _MALLOC_UNDERSCORE_MALLOC_H_ */
# 131 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdlib.h" 3
void abort(void) __attribute((__cold__)) __attribute((__noreturn__)); 
int abs(int) __attribute((const)); 
int atexit(void (*_Nonnull)(void)); 
double atof(const char *); 
int atoi(const char *); 
long atol(const char *); 


long long atoll(const char *); 

void *bsearch(const void * __key, const void * __base, size_t __nel, size_t __width, int (*_Nonnull __compar)(const void *, const void *)); 


div_t div(int, int) __attribute((const)); 
void exit(int) __attribute((__noreturn__)); 

char *getenv(const char *); 
long labs(long) __attribute((const)); 
ldiv_t ldiv(long, long) __attribute((const)); 


long long llabs(long long); 
lldiv_t lldiv(long long, long long); 


int mblen(const char * __s, size_t __n); 
size_t mbstowcs(wchar_t *, const char *, size_t); 
int mbtowc(wchar_t *, const char *, size_t); 

void qsort(void * __base, size_t __nel, size_t __width, int (*_Nonnull __compar)(const void *, const void *)); 

int rand(void); 

void srand(unsigned); 
double strtod(const char *, char **) __asm__("_strtod"); 
float strtof(const char *, char **) __asm__("_strtof"); 
long strtol(const char * __str, char ** __endptr, int __base); 

long double strtold(const char *, char **); 


long long strtoll(const char * __str, char ** __endptr, int __base); 


unsigned long strtoul(const char * __str, char ** __endptr, int __base); 


unsigned long long strtoull(const char * __str, char ** __endptr, int __base); 
# 190
int system(const char *) __asm__("_system"); 



size_t wcstombs(char *, const wchar_t *, size_t); 
int wctomb(char *, wchar_t); 


void _Exit(int) __attribute((__noreturn__)); 
long a64l(const char *); 
double drand48(void); 
char *ecvt(double, int, int *, int *); 
double erand48(unsigned short [3]); 
char *fcvt(double, int, int *, int *); 
char *gcvt(double, int, char *); 
int getsubopt(char **, char *const *, char **); 
int grantpt(int); 

char *initstate(unsigned, char *, size_t); 



long jrand48(unsigned short [3]); 
char *l64a(long); 
void lcong48(unsigned short [7]); 
long lrand48(void); 
char *mktemp(char *); 
int mkstemp(char *); 
long mrand48(void); 
long nrand48(unsigned short [3]); 
int posix_openpt(int); 
char *ptsname(int); 


int ptsname_r(int fildes, char * buffer, size_t buflen); 


int putenv(char *) __asm__("_putenv"); 
long random(void); 
int rand_r(unsigned *); 

char *realpath(const char *, char *) __asm__("_realpath$DARWIN_EXTSN"); 




unsigned short *seed48(unsigned short [3]); 
int setenv(const char * __name, const char * __value, int __overwrite) __asm__("_setenv"); 

void setkey(const char *) __asm__("_setkey"); 



char *setstate(const char *); 
void srand48(long); 

void srandom(unsigned); 



int unlockpt(int); 

int unsetenv(const char *) __asm__("_unsetenv"); 
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_dev_t.h" 3
#ifndef _DEV_T
#define _DEV_T

typedef __darwin_dev_t dev_t; 
#endif /* _DEV_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_mode_t.h" 3
#ifndef _MODE_T
#define _MODE_T

typedef __darwin_mode_t mode_t; 
#endif /* _MODE_T */
# 264 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdlib.h" 3
uint32_t arc4random(void); 
void arc4random_addrandom(unsigned char *, int); 




void arc4random_buf(void * __buf, size_t __nbytes); 
void arc4random_stir(void); 

uint32_t arc4random_uniform(uint32_t __upper_bound); 
# 281
char *cgetcap(char *, const char *, int); 
int cgetclose(void); 
int cgetent(char **, char **, const char *); 
int cgetfirst(char **, char **); 
int cgetmatch(const char *, const char *); 
int cgetnext(char **, char **); 
int cgetnum(char *, const char *, long *); 
int cgetset(const char *); 
int cgetstr(char *, const char *, char **); 
int cgetustr(char *, const char *, char **); 

int daemon(int, int) __asm__("_daemon$1050"); 
char *devname(dev_t, mode_t); 
char *devname_r(dev_t, mode_t, char * buf, int len); 
char *getbsize(int *, long *); 
int getloadavg(double [], int); 

const char *getprogname(void); 
void setprogname(const char *); 
# 309
int heapsort(void * __base, size_t __nel, size_t __width, int (*_Nonnull __compar)(const void *, const void *)); 
# 316
int mergesort(void * __base, size_t __nel, size_t __width, int (*_Nonnull __compar)(const void *, const void *)); 
# 323
void psort(void * __base, size_t __nel, size_t __width, int (*_Nonnull __compar)(const void *, const void *)); 
# 331
void psort_r(void * __base, size_t __nel, size_t __width, void *, int (*_Nonnull __compar)(void *, const void *, const void *)); 
# 339
void qsort_r(void * __base, size_t __nel, size_t __width, void *, int (*_Nonnull __compar)(void *, const void *, const void *)); 

int radixsort(const unsigned char ** __base, int __nel, const unsigned char * __table, unsigned __endbyte); 

int rpmatch(const char *); 

int sradixsort(const unsigned char ** __base, int __nel, const unsigned char * __table, unsigned __endbyte); 

void sranddev(void); 
void srandomdev(void); 
void *reallocf(void * __ptr, size_t __size) __attribute((alloc_size(2))); 


long long strtoq(const char * __str, char ** __endptr, int __base); 

unsigned long long strtouq(const char * __str, char ** __endptr, int __base); 

extern char *suboptarg; 
# 370
#endif /* _STDLIB_H_ */
# 63 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3
#ifndef _TIME_H_
#define _TIME_H_
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_clock_t.h" 3
#ifndef _CLOCK_T
#define _CLOCK_T

typedef __darwin_clock_t clock_t; 
#endif /* _CLOCK_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_time_t.h" 3
#ifndef _TIME_T
#define _TIME_T

typedef __darwin_time_t time_t; 
#endif /* _TIME_T */
# 28 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/sys/_types/_timespec.h" 3
#ifndef _STRUCT_TIMESPEC
#define _STRUCT_TIMESPEC struct timespec



struct timespec { 

__darwin_time_t tv_sec; 
long tv_nsec; 
}; 
#endif /* _STRUCT_TIMESPEC */
# 75 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/time.h" 3
struct tm { 
int tm_sec; 
int tm_min; 
int tm_hour; 
int tm_mday; 
int tm_mon; 
int tm_year; 
int tm_wday; 
int tm_yday; 
int tm_isdst; 
long tm_gmtoff; 
char *tm_zone; 
}; 
# 98
extern char *tzname[]; 


extern int getdate_err; 

extern long timezone __asm__("_timezone"); 

extern int daylight; 


char *asctime(const struct tm *); 
clock_t clock(void) __asm__("_clock"); 
char *ctime(const time_t *); 
double difftime(time_t, time_t); 
struct tm *getdate(const char *); 
struct tm *gmtime(const time_t *); 
struct tm *localtime(const time_t *); 
time_t mktime(struct tm *) __asm__("_mktime"); 
size_t strftime(char *, size_t, const char *, const struct tm *) __asm__("_strftime"); 
char *strptime(const char *, const char *, struct tm *) __asm__("_strptime"); 
time_t time(time_t *); 


void tzset(void); 



char *asctime_r(const struct tm *, char *); 
char *ctime_r(const time_t *, char *); 
struct tm *gmtime_r(const time_t *, struct tm *); 
struct tm *localtime_r(const time_t *, struct tm *); 


time_t posix2time(time_t); 



void tzsetwall(void); 
time_t time2posix(time_t); 
time_t timelocal(struct tm *const); 
time_t timegm(struct tm *const); 



int nanosleep(const struct timespec * __rqtp, struct timespec * __rmtp) __asm__("_nanosleep"); 
# 172
typedef 
# 153
enum { 
_CLOCK_REALTIME, 

_CLOCK_MONOTONIC = 6, 


_CLOCK_MONOTONIC_RAW = 4, 

_CLOCK_MONOTONIC_RAW_APPROX, 

_CLOCK_UPTIME_RAW = 8, 

_CLOCK_UPTIME_RAW_APPROX, 


_CLOCK_PROCESS_CPUTIME_ID = 12, 

_CLOCK_THREAD_CPUTIME_ID = 16

} clockid_t; 


int clock_getres(clockid_t __clock_id, struct timespec * __res); 


int clock_gettime(clockid_t __clock_id, struct timespec * __tp); 



__uint64_t clock_gettime_nsec_np(clockid_t __clock_id); 




int clock_settime(clockid_t __clock_id, const struct timespec * __tp); 
# 199
int timespec_get(struct timespec * ts, int base); 
# 208
#endif /* _TIME_H_ */
# 23 "/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/math.h" 3
#ifndef __MATH_H__
#define __MATH_H__

#ifndef __MATH__
#define __MATH__
#endif /* __MATH__ */
# 44
typedef float float_t; 
typedef double double_t; 
# 111
extern int __math_errhandling(void); 
# 131
extern int __fpclassifyf(float); 
extern int __fpclassifyd(double); 
extern int __fpclassifyl(long double); 
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnormal(x) __builtin_mw_isnormal(x)
#else
# 149
#define isnormal(x) ( sizeof(x) == sizeof(float) ? __inline_isnormalf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnormald((double)(x)) : __inline_isnormall((long double)(x)))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isfinite(x) __builtin_mw_isfinite(x)
#else
#define isfinite(x) ( sizeof(x) == sizeof(float) ? __inline_isfinitef((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isfinited((double)(x)) : __inline_isfinitel((long double)(x)))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isinf(x) __builtin_mw_isinf(x)
#else
#define isinf(x) ( sizeof(x) == sizeof(float) ? __inline_isinff((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isinfd((double)(x)) : __inline_isinfl((long double)(x)))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define isnan(x) __builtin_mw_isnan(x)
#else
#define isnan(x) ( sizeof(x) == sizeof(float) ? __inline_isnanf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_isnand((double)(x)) : __inline_isnanl((long double)(x)))
#endif
#ifdef __MW_INTERNAL_SLDV_PS_ANALYSIS__
#define signbit(x) __builtin_mw_signbit(x)
#else
#define signbit(x) ( sizeof(x) == sizeof(float) ? __inline_signbitf((float)(x)) : sizeof(x) == sizeof(double) ? __inline_signbitd((double)(x)) : __inline_signbitl((long double)(x)))
#endif



__attribute((__always_inline__)) __inline__ int __inline_isfinitef(float); 
__attribute((__always_inline__)) __inline__ int __inline_isfinited(double); 
__attribute((__always_inline__)) __inline__ int __inline_isfinitel(long double); 
__attribute((__always_inline__)) __inline__ int __inline_isinff(float); 
__attribute((__always_inline__)) __inline__ int __inline_isinfd(double); 
__attribute((__always_inline__)) __inline__ int __inline_isinfl(long double); 
__attribute((__always_inline__)) __inline__ int __inline_isnanf(float); 
__attribute((__always_inline__)) __inline__ int __inline_isnand(double); 
__attribute((__always_inline__)) __inline__ int __inline_isnanl(long double); 
__attribute((__always_inline__)) __inline__ int __inline_isnormalf(float); 
__attribute((__always_inline__)) __inline__ int __inline_isnormald(double); 
__attribute((__always_inline__)) __inline__ int __inline_isnormall(long double); 
__attribute((__always_inline__)) __inline__ int __inline_signbitf(float); 
__attribute((__always_inline__)) __inline__ int __inline_signbitd(double); 
__attribute((__always_inline__)) __inline__ int __inline_signbitl(long double); 

__attribute((__always_inline__)) __inline__ int __inline_isfinitef(float __x) { 
return (__x == __x) && (__builtin_fabsf(__x) != __builtin_inff()); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isfinited(double __x) { 
return (__x == __x) && (__builtin_fabs(__x) != __builtin_inf()); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isfinitel(long double __x) { 
return (__x == __x) && (__builtin_fabsl(__x) != __builtin_infl()); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isinff(float __x) { 
return __builtin_fabsf(__x) == __builtin_inff(); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isinfd(double __x) { 
return __builtin_fabs(__x) == __builtin_inf(); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isinfl(long double __x) { 
return __builtin_fabsl(__x) == __builtin_infl(); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isnanf(float __x) { 
return __x != __x; 
} 
__attribute((__always_inline__)) __inline__ int __inline_isnand(double __x) { 
return __x != __x; 
} 
__attribute((__always_inline__)) __inline__ int __inline_isnanl(long double __x) { 
return __x != __x; 
} 
__attribute((__always_inline__)) __inline__ int __inline_signbitf(float __x) { 
union { float __f; unsigned __u; } __u; 
__u.__f = __x; 
return (int)((__u.__u) >> 31); 
} 
__attribute((__always_inline__)) __inline__ int __inline_signbitd(double __x) { 
union { double __f; unsigned long long __u; } __u; 
__u.__f = __x; 
return (int)((__u.__u) >> 63); 
} 

__attribute((__always_inline__)) __inline__ int __inline_signbitl(long double __x) { 
union { 
long double __ld; 
struct { unsigned long long __m; unsigned short __sexp; } __p; 
} __u; 
__u.__ld = __x; 
return (int)(((__u.__p).__sexp) >> 15); 
} 
# 243
__attribute((__always_inline__)) __inline__ int __inline_isnormalf(float __x) { 
return __inline_isfinitef(__x) && (__builtin_fabsf(__x) >= (1.17549435e-38F)); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isnormald(double __x) { 
return __inline_isfinited(__x) && (__builtin_fabs(__x) >= (2.2250738585072014e-308)); 
} 
__attribute((__always_inline__)) __inline__ int __inline_isnormall(long double __x) { 
return __inline_isfinitel(__x) && (__builtin_fabsl(__x) >= (3.36210314311209350626e-4932L)); 
} 
# 308
extern float acosf(float); 
extern double acos(double); 
extern long double acosl(long double); 

extern float asinf(float); 
extern double asin(double); 
extern long double asinl(long double); 

extern float atanf(float); 
extern double atan(double); 
extern long double atanl(long double); 

extern float atan2f(float, float); 
extern double atan2(double, double); 
extern long double atan2l(long double, long double); 

extern float cosf(float); 
extern double cos(double); 
extern long double cosl(long double); 

extern float sinf(float); 
extern double sin(double); 
extern long double sinl(long double); 

extern float tanf(float); 
extern double tan(double); 
extern long double tanl(long double); 

extern float acoshf(float); 
extern double acosh(double); 
extern long double acoshl(long double); 

extern float asinhf(float); 
extern double asinh(double); 
extern long double asinhl(long double); 

extern float atanhf(float); 
extern double atanh(double); 
extern long double atanhl(long double); 

extern float coshf(float); 
extern double cosh(double); 
extern long double coshl(long double); 

extern float sinhf(float); 
extern double sinh(double); 
extern long double sinhl(long double); 

extern float tanhf(float); 
extern double tanh(double); 
extern long double tanhl(long double); 

extern float expf(float); 
extern double exp(double); 
extern long double expl(long double); 

extern float exp2f(float); 
extern double exp2(double); 
extern long double exp2l(long double); 

extern float expm1f(float); 
extern double expm1(double); 
extern long double expm1l(long double); 

extern float logf(float); 
extern double log(double); 
extern long double logl(long double); 

extern float log10f(float); 
extern double log10(double); 
extern long double log10l(long double); 

extern float log2f(float); 
extern double log2(double); 
extern long double log2l(long double); 

extern float log1pf(float); 
extern double log1p(double); 
extern long double log1pl(long double); 

extern float logbf(float); 
extern double logb(double); 
extern long double logbl(long double); 

extern float modff(float, float *); 
extern double modf(double, double *); 
extern long double modfl(long double, long double *); 

extern float ldexpf(float, int); 
extern double ldexp(double, int); 
extern long double ldexpl(long double, int); 

extern float frexpf(float, int *); 
extern double frexp(double, int *); 
extern long double frexpl(long double, int *); 

extern int ilogbf(float); 
extern int ilogb(double); 
extern int ilogbl(long double); 

extern float scalbnf(float, int); 
extern double scalbn(double, int); 
extern long double scalbnl(long double, int); 

extern float scalblnf(float, long); 
extern double scalbln(double, long); 
extern long double scalblnl(long double, long); 

extern float fabsf(float); 
extern double fabs(double); 
extern long double fabsl(long double); 

extern float cbrtf(float); 
extern double cbrt(double); 
extern long double cbrtl(long double); 

extern float hypotf(float, float); 
extern double hypot(double, double); 
extern long double hypotl(long double, long double); 

extern float powf(float, float); 
extern double pow(double, double); 
extern long double powl(long double, long double); 

extern float sqrtf(float); 
extern double sqrt(double); 
extern long double sqrtl(long double); 

extern float erff(float); 
extern double erf(double); 
extern long double erfl(long double); 

extern float erfcf(float); 
extern double erfc(double); 
extern long double erfcl(long double); 




extern float lgammaf(float); 
extern double lgamma(double); 
extern long double lgammal(long double); 

extern float tgammaf(float); 
extern double tgamma(double); 
extern long double tgammal(long double); 

extern float ceilf(float); 
extern double ceil(double); 
extern long double ceill(long double); 

extern float floorf(float); 
extern double floor(double); 
extern long double floorl(long double); 

extern float nearbyintf(float); 
extern double nearbyint(double); 
extern long double nearbyintl(long double); 

extern float rintf(float); 
extern double rint(double); 
extern long double rintl(long double); 

extern long lrintf(float); 
extern long lrint(double); 
extern long lrintl(long double); 

extern float roundf(float); 
extern double round(double); 
extern long double roundl(long double); 

extern long lroundf(float); 
extern long lround(double); 
extern long lroundl(long double); 




extern long long llrintf(float); 
extern long long llrint(double); 
extern long long llrintl(long double); 

extern long long llroundf(float); 
extern long long llround(double); 
extern long long llroundl(long double); 


extern float truncf(float); 
extern double trunc(double); 
extern long double truncl(long double); 

extern float fmodf(float, float); 
extern double fmod(double, double); 
extern long double fmodl(long double, long double); 

extern float remainderf(float, float); 
extern double remainder(double, double); 
extern long double remainderl(long double, long double); 

extern float remquof(float, float, int *); 
extern double remquo(double, double, int *); 
extern long double remquol(long double, long double, int *); 

extern float copysignf(float, float); 
extern double copysign(double, double); 
extern long double copysignl(long double, long double); 

extern float nanf(const char *); 
extern double nan(const char *); 
extern long double nanl(const char *); 

extern float nextafterf(float, float); 
extern double nextafter(double, double); 
extern long double nextafterl(long double, long double); 

extern double nexttoward(double, long double); 
extern float nexttowardf(float, long double); 
extern long double nexttowardl(long double, long double); 

extern float fdimf(float, float); 
extern double fdim(double, double); 
extern long double fdiml(long double, long double); 

extern float fmaxf(float, float); 
extern double fmax(double, double); 
extern long double fmaxl(long double, long double); 

extern float fminf(float, float); 
extern double fmin(double, double); 
extern long double fminl(long double, long double); 

extern float fmaf(float, float, float); 
extern double fma(double, double, double); 
extern long double fmal(long double, long double, long double); 
# 551
extern float __inff(void); 

extern double __inf(void); 

extern long double __infl(void); 

extern float __nan(void); 
# 586
extern float __exp10f(float); 
extern double __exp10(double); 
# 593
__attribute((__always_inline__)) __inline__ void __sincosf(float __x, float * __sinp, float * __cosp); 
__attribute((__always_inline__)) __inline__ void __sincos(double __x, double * __sinp, double * __cosp); 
# 603
extern float __cospif(float); 
extern double __cospi(double); 
extern float __sinpif(float); 
extern double __sinpi(double); 
extern float __tanpif(float); 
extern double __tanpi(double); 
# 634
__attribute((__always_inline__)) __inline__ void __sincospif(float __x, float * __sinp, float * __cosp); 
__attribute((__always_inline__)) __inline__ void __sincospi(double __x, double * __sinp, double * __cosp); 
# 642
struct __float2 { float __sinval; float __cosval; }; 
struct __double2 { double __sinval; double __cosval; }; 

extern struct __float2 __sincosf_stret(float); 
extern struct __double2 __sincos_stret(double); 
extern struct __float2 __sincospif_stret(float); 
extern struct __double2 __sincospi_stret(double); 

__attribute((__always_inline__)) __inline__ void __sincosf(float __x, float *__sinp, float *__cosp) { 
const struct __float2 __stret = __sincosf_stret(__x); 
*__sinp = __stret.__sinval; *__cosp = __stret.__cosval; 
} 

__attribute((__always_inline__)) __inline__ void __sincos(double __x, double *__sinp, double *__cosp) { 
const struct __double2 __stret = __sincos_stret(__x); 
*__sinp = __stret.__sinval; *__cosp = __stret.__cosval; 
} 

__attribute((__always_inline__)) __inline__ void __sincospif(float __x, float *__sinp, float *__cosp) { 
const struct __float2 __stret = __sincospif_stret(__x); 
*__sinp = __stret.__sinval; *__cosp = __stret.__cosval; 
} 

__attribute((__always_inline__)) __inline__ void __sincospi(double __x, double *__sinp, double *__cosp) { 
const struct __double2 __stret = __sincospi_stret(__x); 
*__sinp = __stret.__sinval; *__cosp = __stret.__cosval; 
} 
# 676
extern double j0(double); 
extern double j1(double); 
extern double jn(int, double); 
extern double y0(double); 
extern double y1(double); 
extern double yn(int, double); 
extern double scalb(double, double); 
extern int signgam; 
# 740
extern long rinttol(double); 


extern long roundtol(double); 


extern double drem(double, double); 


extern int finite(double); 


extern double gamma(double); 


extern double significand(double); 



struct exception { 
int type; 
char *name; 
double arg1; 
double arg2; 
double retval; 
}; 





#endif /* __MATH_H__ */
# 9 "/Users/bradyplanden/Documents/Git Repos/SimulinkMPC/fMPC/src/f_mpc.h"
#ifndef _F_MPC_H
#define _F_MPC_H

extern void fmpcsolve(const double * A, const double * B, const double * At, const double * Bt, const double * eyen, const double * eyem, const double * Q, const double * R, const double * Qf, const double * zmax, const double * zmin, const double * x, const double * z0, const int T, const int n, const int m, const int nz, const int niters, const double kappa, double * z, double * U, double * X); 

extern void gfgphp(double * Q, double * R, double * Qf, double * zmax, double * zmin, double * z, const int T, const int n, const int m, const int nz, double * gf, double * gp, double * hp); 

extern void rdrp(double * A, double * B, double * Q, double * R, double * Qf, double * z, double * nu, double * gf, double * gp, double * b, const int T, const int n, const int m, const int nz, double kappa, double * rd, double * rp, double * Ctnu); 

extern void resdresp(double * rd, double * rp, const int T, const int n, const int nz, double * resd, double * resp, double * res); 

extern void dnudz(double * A, double * B, double * At, double * Bt, double * eyen, double * eyem, double * Q, double * R, double * Qf, double * hp, double * rd, double * rp, const int T, const int n, const int m, const int nz, double kappa, double * dnu, double * dz); 

#endif /* _F_MPC_H */
# 18 "/Applications/MATLAB_R2018b.app/extern/include/blas.h"
#ifndef refblas_h
#define refblas_h
# 29
#ifndef COMPLEX_TYPES
#define COMPLEX_TYPES
typedef struct { float r, i; } complex; 
typedef struct { double r, i; } doublecomplex; 
#endif /* COMPLEX_TYPES */
# 42
extern void caxpy_(const ptrdiff_t * n, const float * ca, const float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy); 
# 53
extern void ccopy_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy); 
# 64
extern complex cdotc_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx, const float * cy, const ptrdiff_t * incy); 
# 79
extern complex cdotu_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx, const float * cy, const ptrdiff_t * incy); 
# 93
extern void cgbmv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 111
extern void cgemm_(const char * transa, const char * transb, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 129
extern void cgemv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 145
extern void cgerc_(const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * a, const ptrdiff_t * lda); 
# 159
extern void cgeru_(const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * a, const ptrdiff_t * lda); 
# 173
extern void chbmv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 189
extern void chemm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 206
extern void chemv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 221
extern void cher_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * a, const ptrdiff_t * lda); 
# 233
extern void cher2_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * a, const ptrdiff_t * lda); 
# 247
extern void cher2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 264
extern void cherk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * beta, float * c, const ptrdiff_t * ldc); 
# 279
extern void chpmv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * ap, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 293
extern void chpr_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * ap); 
# 304
extern void chpr2_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * ap); 
# 317
extern void crotg_(float * ca, const float * cb, float * c, float * s); 
# 326
extern void cscal_(const ptrdiff_t * n, const float * ca, float * cx, const ptrdiff_t * incx); 
# 335
extern void csrot_(const ptrdiff_t * n, float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy, const float * c, const float * s); 
# 347
extern void csscal_(const ptrdiff_t * n, const float * sa, float * cx, const ptrdiff_t * incx); 
# 356
extern void cswap_(const ptrdiff_t * n, float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy); 
# 366
extern void csymm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 383
extern void csyr2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 400
extern void csyrk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * beta, float * c, const ptrdiff_t * ldc); 
# 415
extern void ctbmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 429
extern void ctbsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 443
extern void ctpmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * ap, float * x, const ptrdiff_t * incx); 
# 455
extern void ctpsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * ap, float * x, const ptrdiff_t * incx); 
# 467
extern void ctrmm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 483
extern void ctrmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 496
extern void ctrsm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 512
extern void ctrsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 525
extern double dasum_(const ptrdiff_t * n, const double * dx, const ptrdiff_t * incx); 
# 533
extern void daxpy_(const ptrdiff_t * n, const double * da, const double * dx, const ptrdiff_t * incx, double * dy, const ptrdiff_t * incy); 
# 544
extern double dcabs1_(const double * z); 
# 550
extern void dcopy_(const ptrdiff_t * n, const double * dx, const ptrdiff_t * incx, double * dy, const ptrdiff_t * incy); 
# 560
extern double ddot_(const ptrdiff_t * n, const double * dx, const ptrdiff_t * incx, const double * dy, const ptrdiff_t * incy); 
# 570
extern void dgbmv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 588
extern void dgemm_(const char * transa, const char * transb, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 606
extern void dgemv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 622
extern void dger_(const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * a, const ptrdiff_t * lda); 
# 636
extern double dnrm2_(const ptrdiff_t * n, const double * x, const ptrdiff_t * incx); 
# 644
extern void drot_(const ptrdiff_t * n, double * dx, const ptrdiff_t * incx, double * dy, const ptrdiff_t * incy, const double * c, const double * s); 
# 656
extern void drotg_(double * da, double * db, double * c, double * s); 
# 665
extern void drotm_(const ptrdiff_t * n, double * dx, const ptrdiff_t * incx, double * dy, const ptrdiff_t * incy, const double * dparam); 
# 676
extern void drotmg_(double * dd1, double * dd2, double * dx1, const double * dy1, double * dparam); 
# 686
extern void dsbmv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 702
extern void dscal_(const ptrdiff_t * n, const double * da, double * dx, const ptrdiff_t * incx); 
# 711
extern double dsdot_(const ptrdiff_t * n, const float * sx, const ptrdiff_t * incx, const float * sy, const ptrdiff_t * incy); 
# 721
extern void dspmv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * ap, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 735
extern void dspr_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * ap); 
# 746
extern void dspr2_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * ap); 
# 759
extern void dswap_(const ptrdiff_t * n, double * dx, const ptrdiff_t * incx, double * dy, const ptrdiff_t * incy); 
# 769
extern void dsymm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 786
extern void dsymv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 801
extern void dsyr_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * a, const ptrdiff_t * lda); 
# 813
extern void dsyr2_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * a, const ptrdiff_t * lda); 
# 827
extern void dsyr2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 844
extern void dsyrk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * beta, double * c, const ptrdiff_t * ldc); 
# 859
extern void dtbmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 873
extern void dtbsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 887
extern void dtpmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * ap, double * x, const ptrdiff_t * incx); 
# 899
extern void dtpsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * ap, double * x, const ptrdiff_t * incx); 
# 911
extern void dtrmm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 927
extern void dtrmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 940
extern void dtrsm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 956
extern void dtrsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 969
extern double dzasum_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx); 
# 977
extern double dznrm2_(const ptrdiff_t * n, const double * x, const ptrdiff_t * incx); 
# 985
extern ptrdiff_t icamax_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx); 
# 993
extern ptrdiff_t idamax_(const ptrdiff_t * n, const double * dx, const ptrdiff_t * incx); 
# 1001
extern ptrdiff_t isamax_(const ptrdiff_t * n, const float * sx, const ptrdiff_t * incx); 
# 1009
extern ptrdiff_t izamax_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx); 
# 1017
extern ptrdiff_t lsame_(const char * ca, const char * cb); 
# 1027
extern float sasum_(const ptrdiff_t * n, const float * sx, const ptrdiff_t * incx); 
# 1036
extern void saxpy_(const ptrdiff_t * n, const float * sa, const float * sx, const ptrdiff_t * incx, float * sy, const ptrdiff_t * incy); 
# 1050
extern float scasum_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx); 
# 1062
extern float scnrm2_(const ptrdiff_t * n, const float * x, const ptrdiff_t * incx); 
# 1071
extern void scopy_(const ptrdiff_t * n, const float * sx, const ptrdiff_t * incx, float * sy, const ptrdiff_t * incy); 
# 1084
extern float sdot_(const ptrdiff_t * n, const float * sx, const ptrdiff_t * incx, const float * sy, const ptrdiff_t * incy); 
# 1098
extern float sdsdot_(const ptrdiff_t * n, const float * sb, const float * sx, const ptrdiff_t * incx, const float * sy, const ptrdiff_t * incy); 
# 1110
extern void sgbmv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 1128
extern void sgemm_(const char * transa, const char * transb, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 1146
extern void sgemv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 1162
extern void sger_(const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * a, const ptrdiff_t * lda); 
# 1179
extern float snrm2_(const ptrdiff_t * n, const float * x, const ptrdiff_t * incx); 
# 1188
extern void srot_(const ptrdiff_t * n, float * sx, const ptrdiff_t * incx, float * sy, const ptrdiff_t * incy, const float * c, const float * s); 
# 1200
extern void srotg_(float * sa, float * sb, float * c, float * s); 
# 1209
extern void srotm_(const ptrdiff_t * n, float * sx, const ptrdiff_t * incx, float * sy, const ptrdiff_t * incy, const float * sparam); 
# 1220
extern void srotmg_(float * sd1, float * sd2, float * sx1, const float * sy1, float * sparam); 
# 1230
extern void ssbmv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 1246
extern void sscal_(const ptrdiff_t * n, const float * sa, float * sx, const ptrdiff_t * incx); 
# 1255
extern void sspmv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * ap, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 1269
extern void sspr_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * ap); 
# 1280
extern void sspr2_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * ap); 
# 1293
extern void sswap_(const ptrdiff_t * n, float * sx, const ptrdiff_t * incx, float * sy, const ptrdiff_t * incy); 
# 1303
extern void ssymm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 1320
extern void ssymv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 1335
extern void ssyr_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * a, const ptrdiff_t * lda); 
# 1347
extern void ssyr2_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, const float * y, const ptrdiff_t * incy, float * a, const ptrdiff_t * lda); 
# 1361
extern void ssyr2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * beta, float * c, const ptrdiff_t * ldc); 
# 1378
extern void ssyrk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * beta, float * c, const ptrdiff_t * ldc); 
# 1393
extern void stbmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 1407
extern void stbsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 1421
extern void stpmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * ap, float * x, const ptrdiff_t * incx); 
# 1433
extern void stpsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * ap, float * x, const ptrdiff_t * incx); 
# 1445
extern void strmm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 1461
extern void strmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 1474
extern void strsm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 1490
extern void strsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, const ptrdiff_t * incx); 
# 1503
extern void xerbla_(const char * srname, const ptrdiff_t * info); 
# 1510
extern void zaxpy_(const ptrdiff_t * n, const double * za, const double * zx, const ptrdiff_t * incx, double * zy, const ptrdiff_t * incy); 
# 1521
extern void zcopy_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx, double * zy, const ptrdiff_t * incy); 
# 1532
extern doublecomplex zdotc_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx, const double * zy, const ptrdiff_t * incy); 
# 1547
extern doublecomplex zdotu_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx, const double * zy, const ptrdiff_t * incy); 
# 1561
extern void zdrot_(const ptrdiff_t * n, double * cx, const ptrdiff_t * incx, double * cy, const ptrdiff_t * incy, const double * c, const double * s); 
# 1573
extern void zdscal_(const ptrdiff_t * n, const double * da, double * zx, const ptrdiff_t * incx); 
# 1582
extern void zgbmv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 1600
extern void zgemm_(const char * transa, const char * transb, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1618
extern void zgemv_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 1634
extern void zgerc_(const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * a, const ptrdiff_t * lda); 
# 1648
extern void zgeru_(const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * a, const ptrdiff_t * lda); 
# 1662
extern void zhbmv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 1678
extern void zhemm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1695
extern void zhemv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 1710
extern void zher_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * a, const ptrdiff_t * lda); 
# 1722
extern void zher2_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * a, const ptrdiff_t * lda); 
# 1736
extern void zher2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1753
extern void zherk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1768
extern void zhpmv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * ap, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 1782
extern void zhpr_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * ap); 
# 1793
extern void zhpr2_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, const double * y, const ptrdiff_t * incy, double * ap); 
# 1806
extern void zrotg_(double * ca, const double * cb, double * c, double * s); 
# 1815
extern void zscal_(const ptrdiff_t * n, const double * za, double * zx, const ptrdiff_t * incx); 
# 1824
extern void zswap_(const ptrdiff_t * n, double * zx, const ptrdiff_t * incx, double * zy, const ptrdiff_t * incy); 
# 1834
extern void zsymm_(const char * side, const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1851
extern void zsyr2k_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1868
extern void zsyrk_(const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * beta, double * c, const ptrdiff_t * ldc); 
# 1883
extern void ztbmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 1897
extern void ztbsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 1911
extern void ztpmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * ap, double * x, const ptrdiff_t * incx); 
# 1923
extern void ztpsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * ap, double * x, const ptrdiff_t * incx); 
# 1935
extern void ztrmm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 1951
extern void ztrmv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 1964
extern void ztrsm_(const char * side, const char * uplo, const char * transa, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 1980
extern void ztrsv_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, const ptrdiff_t * incx); 
# 1995
#endif /* refblas_h */
# 18 "/Applications/MATLAB_R2018b.app/extern/include/lapack.h"
#ifndef mllapack_h
#define mllapack_h
# 45
extern double dlamch_(const char * cmach); 
# 51
extern double dlamc3_(const double * a, const double * b); 
# 61
extern float slamch_(const char * cmach); 
# 71
extern float slamc3_(const float * a, const float * b); 
# 79
extern void cbbcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * theta, float * phi, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * v2t, const ptrdiff_t * ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * info); 
# 113
extern void cbdsqr_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, float * d, float * e, float * vt, const ptrdiff_t * ldvt, float * u, const ptrdiff_t * ldu, float * c, const ptrdiff_t * ldc, float * rwork, ptrdiff_t * info); 
# 133
extern void cgbbrd_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ncc, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, float * d, float * e, float * q, const ptrdiff_t * ldq, float * pt, const ptrdiff_t * ldpt, float * c, const ptrdiff_t * ldc, float * work, float * rwork, ptrdiff_t * info); 
# 157
extern void cgbcon_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 174
extern void cgbequ_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 191
extern void cgbequb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 208
extern void cgbrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * afb, const ptrdiff_t * ldafb, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 232
extern void cgbsv_(const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 247
extern void cgbsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * afb, const ptrdiff_t * ldafb, ptrdiff_t * ipiv, char * equed, float * r, float * c, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 276
extern void cgbtf2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 289
extern void cgbtrf_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 302
extern void cgbtrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 318
extern void cgebak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * scale, const ptrdiff_t * m, float * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 333
extern void cgebal_(const char * job, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ilo, ptrdiff_t * ihi, float * scale, ptrdiff_t * info); 
# 346
extern void cgebd2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * work, ptrdiff_t * info); 
# 361
extern void cgebrd_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 377
extern void cgecon_(const char * norm, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * anorm, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 391
extern void cgeequ_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 406
extern void cgeequb_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 421
extern void cgees_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * sdim, float * w, float * vs, const ptrdiff_t * ldvs, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 441
extern void cgeesx_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * sdim, float * w, float * vs, const ptrdiff_t * ldvs, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 464
extern void cgeev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 483
extern void cgeevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 510
extern void cgehd2_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 523
extern void cgehrd_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 537
extern void cgejsv_(const char * joba, const char * jobu, const char * jobv, const char * jobr, const char * jobt, const char * jobp, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * sva, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * cwork, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 563
extern void cgelq_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * tsize, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 577
extern void cgelq2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 589
extern void cgelqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 602
extern void cgelqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 616
extern void cgelqt3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 628
extern void cgels_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 644
extern void cgelsd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * s, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 664
extern void cgelss_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * s, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 683
extern void cgelsy_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 702
extern void cgemlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * tsize, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 721
extern void cgemlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 740
extern void cgemqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * tsize, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 759
extern void cgemqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 778
extern void cgeql2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 790
extern void cgeqlf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 803
extern void cgeqp3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 818
extern void cgeqr_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * tsize, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 832
extern void cgeqr2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 844
extern void cgeqr2p_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 856
extern void cgeqrf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 869
extern void cgeqrfp_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 882
extern void cgeqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 896
extern void cgeqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 908
extern void cgeqrt3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 920
extern void cgerfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 942
extern void cgerq2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 954
extern void cgerqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 967
extern void cgesc2_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * rhs, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv, float * scale); 
# 979
extern void cgesdd_(const char * jobz, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 999
extern void cgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 1012
extern void cgesvd_(const char * jobu, const char * jobvt, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 1032
extern void cgesvdx_(const char * jobu, const char * jobvt, const char * range, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 1059
extern void cgesvj_(const char * joba, const char * jobu, const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, float * cwork, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * info); 
# 1080
extern void cgesvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, char * equed, float * r, float * c, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 1107
extern void cgetc2_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * jpiv, ptrdiff_t * info); 
# 1118
extern void cgetf2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 1129
extern void cgetrf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 1140
extern void cgetrf2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 1151
extern void cgetri_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1163
extern void cgetrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 1177
extern void cgetsls_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1193
extern void cggbak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * lscale, const float * rscale, const ptrdiff_t * m, float * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 1209
extern void cggbal_(const char * job, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * ilo, ptrdiff_t * ihi, float * lscale, float * rscale, float * work, ptrdiff_t * info); 
# 1226
extern void cgges_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alpha, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 1252
extern void cgges3_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alpha, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 1278
extern void cggesx_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alpha, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 1309
extern void cggev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 1331
extern void cggev3_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 1353
extern void cggevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 1387
extern void cggglm_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * d, float * x, float * y, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1405
extern void cgghd3_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1426
extern void cgghrd_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 1445
extern void cgglse_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * c, float * d, float * x, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1463
extern void cggqrf_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * taua, float * b, const ptrdiff_t * ldb, float * taub, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1480
extern void cggrqf_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * taua, float * b, const ptrdiff_t * ldb, float * taub, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1497
extern void cggsvd3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 1527
extern void cggsvp3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, ptrdiff_t * k, ptrdiff_t * l, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, float * rwork, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1558
extern void cgsvj0_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, const float * eps, const float * sfmin, const float * tol, const ptrdiff_t * nsweep, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1580
extern void cgsvj1_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, float * a, const ptrdiff_t * lda, float * d, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, const float * eps, const float * sfmin, const float * tol, const ptrdiff_t * nsweep, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 1603
extern void cgtcon_(const char * norm, const ptrdiff_t * n, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 1619
extern void cgtrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * dlf, const float * df, const float * duf, const float * du2, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 1644
extern void cgtsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * dl, float * d, float * du, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 1657
extern void cgtsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, float * dlf, float * df, float * duf, float * du2, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 1684
extern void cgttrf_(const ptrdiff_t * n, float * dl, float * d, float * du, float * du2, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 1696
extern void cgttrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 1712
extern void cgtts2_(const ptrdiff_t * itrans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb); 
# 1727
extern void chb2st_kernels_(char * uplo, ptrdiff_t * wantz, ptrdiff_t * ttype, ptrdiff_t * st, ptrdiff_t * ed, ptrdiff_t * sweep, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * ib, float * a, ptrdiff_t * lda, float * v, float * tau, ptrdiff_t * ldvt, float * work); 
# 1747
extern void chbev_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * info); 
# 1764
extern void chbev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 1782
extern void chbevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 1803
extern void chbevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 1824
extern void chbevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * q, const ptrdiff_t * ldq, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 1852
extern void chbevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * q, ptrdiff_t * ldq, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 1881
extern void chbgst_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, const float * bb, const ptrdiff_t * ldbb, float * x, const ptrdiff_t * ldx, float * work, float * rwork, ptrdiff_t * info); 
# 1900
extern void chbgv_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * info); 
# 1920
extern void chbgvd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 1944
extern void chbgvx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * q, const ptrdiff_t * ldq, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 1975
extern void chbtrd_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * d, float * e, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * info); 
# 1992
extern void checon_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 2006
extern void checon_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 2021
extern void checon_rook_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 2035
extern void cheequb_(char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, float * work, ptrdiff_t * info); 
# 2049
extern void cheev_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2064
extern void cheev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * w, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2079
extern void cheevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 2097
extern void cheevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * w, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 2115
extern void cheevr_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 2143
extern void cheevr_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 2171
extern void cheevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 2197
extern void cheevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 2223
extern void chegs2_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 2236
extern void chegst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 2249
extern void chegv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * w, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2267
extern void chegv_2stage_(ptrdiff_t * itype, char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * b, ptrdiff_t * ldb, float * w, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2285
extern void chegvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * w, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 2306
extern void chegvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 2335
extern void cherfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 2357
extern void chesv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2373
extern void chesv_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2389
extern void chesv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2406
extern void chesv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2422
extern void chesvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2447
extern void cheswapr_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 2458
extern void chetd2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tau, ptrdiff_t * info); 
# 2471
extern void chetf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 2482
extern void chetf2_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 2494
extern void chetf2_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 2505
extern void chetrd_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2520
extern void chetrd_2stage_(char * vect, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * d, float * e, float * tau, float * hous2, ptrdiff_t * lhous2, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2538
extern void chetrd_hb2st_(char * stage1, char * vect, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * d, float * e, float * hous, ptrdiff_t * lhous, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2557
extern void chetrd_he2hb_(char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * a, ptrdiff_t * lda, float * ab, ptrdiff_t * ldab, float * tau, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2573
extern void chetrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2586
extern void chetrf_aa_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2599
extern void chetrf_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2613
extern void chetrf_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2626
extern void chetri_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 2638
extern void chetri2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2651
extern void chetri2x_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * nb, ptrdiff_t * info); 
# 2664
extern void chetri_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 2678
extern void chetri_3x_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 2692
extern void chetri_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 2704
extern void chetrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 2718
extern void chetrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 2733
extern void chetrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 2748
extern void chetrs_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, const float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 2764
extern void chetrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 2778
extern void chfrk_(const char * transr, const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * beta, float * c); 
# 2793
extern void chgeqz_(const char * job, const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * t, const ptrdiff_t * ldt, float * alpha, float * beta, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 2818
extern char chla_transtype_(const ptrdiff_t * trans); 
# 2824
extern void chpcon_(const char * uplo, const ptrdiff_t * n, const float * ap, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 2837
extern void chpev_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * info); 
# 2852
extern void chpevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 2871
extern void chpevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * ap, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 2895
extern void chpgst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * ap, const float * bp, ptrdiff_t * info); 
# 2906
extern void chpgv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * info); 
# 2923
extern void chpgvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 2944
extern void chpgvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 2970
extern void chprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * afp, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 2990
extern void chpsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 3003
extern void chpsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * afp, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 3025
extern void chptrd_(const char * uplo, const ptrdiff_t * n, float * ap, float * d, float * e, float * tau, ptrdiff_t * info); 
# 3037
extern void chptrf_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 3047
extern void chptri_(const char * uplo, const ptrdiff_t * n, float * ap, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 3058
extern void chptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 3071
extern void chsein_(const char * side, const char * eigsrc, const char * initv, const ptrdiff_t * select, const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, float * w, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, float * rwork, ptrdiff_t * ifaill, ptrdiff_t * ifailr, ptrdiff_t * info); 
# 3095
extern void chseqr_(const char * job, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 3113
extern void clabrd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * x, const ptrdiff_t * ldx, float * y, const ptrdiff_t * ldy); 
# 3131
extern void clacgv_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx); 
# 3139
extern void clacn2_(const ptrdiff_t * n, float * v, float * x, float * est, ptrdiff_t * kase, ptrdiff_t * isave); 
# 3150
extern void clacon_(const ptrdiff_t * n, float * v, float * x, float * est, ptrdiff_t * kase); 
# 3160
extern void clacp2_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 3172
extern void clacpy_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 3184
extern void clacrm_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, float * rwork); 
# 3198
extern void clacrt_(const ptrdiff_t * n, float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy, const float * c, const float * s); 
# 3211
extern complex cladiv_(const float * x, const float * y); 
# 3222
extern void claed0_(const ptrdiff_t * qsiz, const ptrdiff_t * n, float * d, float * e, float * q, const ptrdiff_t * ldq, float * qstore, const ptrdiff_t * ldqs, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 3238
extern void claed7_(const ptrdiff_t * n, const ptrdiff_t * cutpnt, const ptrdiff_t * qsiz, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, float * d, float * q, const ptrdiff_t * ldq, const float * rho, ptrdiff_t * indxq, float * qstore, ptrdiff_t * qptr, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const float * givnum, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 3265
extern void claed8_(ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * qsiz, float * q, const ptrdiff_t * ldq, float * d, float * rho, const ptrdiff_t * cutpnt, const float * z, float * dlamda, float * q2, const ptrdiff_t * ldq2, float * w, ptrdiff_t * indxp, ptrdiff_t * indx, const ptrdiff_t * indxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, float * givnum, ptrdiff_t * info); 
# 3291
extern void claein_(const ptrdiff_t * rightv, const ptrdiff_t * noinit, const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, const float * w, float * v, float * b, const ptrdiff_t * ldb, float * rwork, const float * eps3, const float * smlnum, ptrdiff_t * info); 
# 3309
extern void claesy_(const float * a, const float * b, const float * c, float * rt1, float * rt2, float * evscal, float * cs1, float * sn1); 
# 3322
extern void claev2_(const float * a, const float * b, const float * c, float * rt1, float * rt2, float * cs1, float * sn1); 
# 3334
extern void clag2z_(const ptrdiff_t * m, const ptrdiff_t * n, const float * sa, const ptrdiff_t * ldsa, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 3346
extern void clags2_(const ptrdiff_t * upper, const float * a1, const float * a2, const float * a3, const float * b1, const float * b2, const float * b3, float * csu, float * snu, float * csv, float * snv, float * csq, float * snq); 
# 3364
extern void clagtm_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * alpha, const float * dl, const float * d, const float * du, const float * x, const ptrdiff_t * ldx, const float * beta, float * b, const ptrdiff_t * ldb); 
# 3381
extern void clahef_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 3396
extern void clahef_aa_(const char * uplo, const ptrdiff_t * j1_, const ptrdiff_t * m, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * h, const ptrdiff_t * ldh, float * work, ptrdiff_t * info); 
# 3412
extern void clahef_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 3428
extern void clahef_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 3443
extern void clahqr_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * w, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 3461
extern void clahr2_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * tau, float * t, const ptrdiff_t * ldt, float * y, const ptrdiff_t * ldy); 
# 3476
extern void claic1_(const ptrdiff_t * job, const ptrdiff_t * j, const float * x, const float * sest, const float * w, const float * gamma_, float * sestpr, float * s, float * c); 
# 3490
extern void clals0_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * nrhs, float * b, const ptrdiff_t * ldb, float * bx, const ptrdiff_t * ldbx, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const float * givnum, const ptrdiff_t * ldgnum, const float * poles, const float * difl, const float * difr, const float * z, const ptrdiff_t * k, const float * c, const float * s, float * rwork, ptrdiff_t * info); 
# 3519
extern void clalsa_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * b, const ptrdiff_t * ldb, float * bx, const ptrdiff_t * ldbx, const float * u, const ptrdiff_t * ldu, const float * vt, const ptrdiff_t * k, const float * difl, const float * difr, const float * z, const float * poles, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const ptrdiff_t * perm, const float * givnum, const float * c, const float * s, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 3550
extern void clalsd_(const char * uplo, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * d, float * e, float * b, const ptrdiff_t * ldb, const float * rcond, ptrdiff_t * rank, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 3569
extern void clamswlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 3590
extern void clamtsqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 3614
extern float clangb_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * work); 
# 3630
extern float clange_(const char * norm, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 3645
extern float clangt_(const char * norm, const ptrdiff_t * n, const float * dl, const float * d, const float * du); 
# 3659
extern float clanhb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const float * ab, const ptrdiff_t * ldab, float * work); 
# 3675
extern float clanhe_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 3690
extern float clanhf_(const char * norm, const char * transr, const char * uplo, const ptrdiff_t * n, const float * a, float * work); 
# 3705
extern float clanhp_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * ap, float * work); 
# 3719
extern float clanhs_(const char * norm, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 3733
extern float clanht_(const char * norm, const ptrdiff_t * n, const float * d, const float * e); 
# 3746
extern float clansb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const float * ab, const ptrdiff_t * ldab, float * work); 
# 3762
extern float clansp_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * ap, float * work); 
# 3776
extern float clansy_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 3791
extern float clantb_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * ab, const ptrdiff_t * ldab, float * work); 
# 3808
extern float clantp_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * ap, float * work); 
# 3823
extern float clantr_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 3837
extern void clapll_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, float * ssmin); 
# 3848
extern void clapmr_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, float * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 3859
extern void clapmt_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, float * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 3870
extern void claqgb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, const float * r, const float * c, const float * rowcnd, const float * colcnd, const float * amax, char * equed); 
# 3887
extern void claqge_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * r, const float * c, const float * rowcnd, const float * colcnd, const float * amax, char * equed); 
# 3902
extern void claqhb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * s, const float * scond, const float * amax, char * equed); 
# 3916
extern void claqhe_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * s, const float * scond, const float * amax, char * equed); 
# 3929
extern void claqhp_(const char * uplo, const ptrdiff_t * n, float * ap, const float * s, const float * scond, const float * amax, char * equed); 
# 3941
extern void claqp2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * vn1, float * vn2, float * work); 
# 3956
extern void claqps_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * vn1, float * vn2, float * auxv, float * f, const ptrdiff_t * ldf); 
# 3975
extern void claqr0_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * w, ptrdiff_t * iloz, ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 3995
extern void claqr1_(const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, const float * s1, float * s2, float * v); 
# 4006
extern void claqr2_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, float * sh, float * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, float * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, float * work, const ptrdiff_t * lwork); 
# 4036
extern void claqr3_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, float * sh, float * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, float * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, float * work, const ptrdiff_t * lwork); 
# 4066
extern void claqr4_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * w, ptrdiff_t * iloz, ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 4086
extern void claqr5_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * kacc22, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nshfts, float * s, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * v, const ptrdiff_t * ldv, float * u, const ptrdiff_t * ldu, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, const ptrdiff_t * nh, float * wh, const ptrdiff_t * ldwh); 
# 4115
extern void claqsb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, const float * s, const float * scond, const float * amax, char * equed); 
# 4129
extern void claqsp_(const char * uplo, const ptrdiff_t * n, float * ap, const float * s, const float * scond, const float * amax, char * equed); 
# 4141
extern void claqsy_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * s, const float * scond, const float * amax, char * equed); 
# 4154
extern void clar1v_(const ptrdiff_t * n, const ptrdiff_t * b1, const ptrdiff_t * bn, const float * lambda, const float * d, const float * l, const float * ld, const float * lld, const float * pivmin, const float * gaptol, float * z, const ptrdiff_t * wantnc, ptrdiff_t * negcnt, float * ztz, float * mingma, ptrdiff_t * r, ptrdiff_t * isuppz, float * nrminv, float * resid, float * rqcorr, float * work); 
# 4180
extern void clar2v_(const ptrdiff_t * n, float * x, float * y, float * z, const ptrdiff_t * incx, const float * c, const float * s, const ptrdiff_t * incc); 
# 4193
extern void clarcm_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, float * rwork); 
# 4207
extern void clarf_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const ptrdiff_t * incv, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 4221
extern void clarfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * ldwork); 
# 4241
extern void clarfg_(const ptrdiff_t * n, float * alpha, float * x, const ptrdiff_t * incx, float * tau); 
# 4251
extern void clarfgp_(const ptrdiff_t * n, float * alpha, float * x, const ptrdiff_t * incx, float * tau); 
# 4261
extern void clarft_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, const float * v, const ptrdiff_t * ldv, const float * tau, float * t, const ptrdiff_t * ldt); 
# 4275
extern void clarfx_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 4288
extern void clarfy_(char * uplo, ptrdiff_t * n, float * v, ptrdiff_t * incv, float * tau, float * c, ptrdiff_t * ldc, float * work); 
# 4301
extern void clargv_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, float * c, const ptrdiff_t * incc); 
# 4313
extern void clarnv_(const ptrdiff_t * idist, ptrdiff_t * iseed, const ptrdiff_t * n, float * x); 
# 4322
extern void clarrv_(const ptrdiff_t * n, const float * vl, const float * vu, float * d, float * l, float * pivmin, const ptrdiff_t * isplit, const ptrdiff_t * m, const ptrdiff_t * dol, const ptrdiff_t * dou, const float * minrgp, const float * rtol1, const float * rtol2, float * w, float * werr, float * wgap, const ptrdiff_t * iblock, const ptrdiff_t * indexw, const float * gers, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 4352
extern void clartg_(const float * f, const float * g, float * cs, float * sn, float * r); 
# 4362
extern void clartv_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, const float * c, const float * s, const ptrdiff_t * incc); 
# 4375
extern void clarz_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const float * v, const ptrdiff_t * incv, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 4390
extern void clarzb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * ldwork); 
# 4411
extern void clarzt_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, float * v, const ptrdiff_t * ldv, const float * tau, float * t, const ptrdiff_t * ldt); 
# 4425
extern void clascl_(const char * type, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * cfrom, const float * cto, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4440
extern void claset_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * beta, float * a, const ptrdiff_t * lda); 
# 4452
extern void clasr_(const char * side, const char * pivot, const char * direct, const ptrdiff_t * m, const ptrdiff_t * n, const float * c, const float * s, float * a, const ptrdiff_t * lda); 
# 4466
extern void classq_(const ptrdiff_t * n, const float * x, const ptrdiff_t * incx, float * scale, float * sumsq); 
# 4476
extern void claswlq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 4492
extern void claswp_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * k1, const ptrdiff_t * k2, const ptrdiff_t * ipiv, const ptrdiff_t * incx); 
# 4504
extern void clasyf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 4519
extern void clasyf_aa_(char * uplo, ptrdiff_t * j1_, ptrdiff_t * m, ptrdiff_t * nb, float * a, ptrdiff_t * lda, ptrdiff_t * ipiv, float * h, ptrdiff_t * ldh, float * work, ptrdiff_t * info); 
# 4535
extern void clasyf_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 4551
extern void clasyf_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 4566
extern void clatbs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 4583
extern void clatdf_(const ptrdiff_t * ijob, const ptrdiff_t * n, const float * z, const ptrdiff_t * ldz, float * rhs, float * rdsum, float * rdscal, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv); 
# 4597
extern void clatps_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const float * ap, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 4612
extern void clatrd_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * e, float * tau, float * w, const ptrdiff_t * ldw); 
# 4626
extern void clatrs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 4642
extern void clatrz_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * tau, float * work); 
# 4654
extern void clatsqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 4670
extern void clauu2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4680
extern void clauum_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4690
extern void cpbcon_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, const float * anorm, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 4705
extern void cpbequ_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 4719
extern void cpbrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * afb, const ptrdiff_t * ldafb, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 4741
extern void cpbstf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 4752
extern void cpbsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 4766
extern void cpbsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * afb, const ptrdiff_t * ldafb, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 4792
extern void cpbtf2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 4803
extern void cpbtrf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 4814
extern void cpbtrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 4828
extern void cpftrf_(const char * transr, const char * uplo, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 4838
extern void cpftri_(const char * transr, const char * uplo, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 4848
extern void cpftrs_(const char * transr, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 4861
extern void cpocon_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * anorm, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 4875
extern void cpoequ_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 4887
extern void cpoequb_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 4899
extern void cporfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 4920
extern void cposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 4933
extern void cposvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 4958
extern void cpotf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4968
extern void cpotrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4978
extern void cpotrf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4988
extern void cpotri_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 4998
extern void cpotrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5011
extern void cppcon_(const char * uplo, const ptrdiff_t * n, const float * ap, const float * anorm, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 5024
extern void cppequ_(const char * uplo, const ptrdiff_t * n, const float * ap, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 5036
extern void cpprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * afp, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5055
extern void cppsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5067
extern void cppsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, float * afp, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5090
extern void cpptrf_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 5099
extern void cpptri_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 5108
extern void cpptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5120
extern void cpstf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const float * tol, float * work, ptrdiff_t * info); 
# 5134
extern void cpstrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const float * tol, float * work, ptrdiff_t * info); 
# 5148
extern void cptcon_(const ptrdiff_t * n, const float * d, const float * e, const float * anorm, float * rcond, float * rwork, ptrdiff_t * info); 
# 5160
extern void cpteqr_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 5173
extern void cptrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, const float * df, const float * ef, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5194
extern void cptsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * d, float * e, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5206
extern void cptsvx_(const char * fact, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * df, float * ef, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5228
extern void cpttrf_(const ptrdiff_t * n, float * d, float * e, ptrdiff_t * info); 
# 5237
extern void cpttrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5250
extern void cptts2_(const ptrdiff_t * iuplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * b, const ptrdiff_t * ldb); 
# 5262
extern void crot_(const ptrdiff_t * n, float * cx, const ptrdiff_t * incx, float * cy, const ptrdiff_t * incy, const float * c, const float * s); 
# 5274
extern void cspcon_(const char * uplo, const ptrdiff_t * n, const float * ap, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 5287
extern void cspmv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * ap, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 5301
extern void cspr_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * ap); 
# 5312
extern void csprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * afp, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5332
extern void cspsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5345
extern void cspsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * afp, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5367
extern void csptrf_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5377
extern void csptri_(const char * uplo, const ptrdiff_t * n, float * ap, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 5388
extern void csptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5401
extern void csrscl_(const ptrdiff_t * n, const float * sa, float * sx, const ptrdiff_t * incx); 
# 5410
extern void cstedc_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 5428
extern void cstegr_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 5453
extern void cstein_(const ptrdiff_t * n, const float * d, const float * e, const ptrdiff_t * m, const float * w, const ptrdiff_t * iblock, const ptrdiff_t * isplit, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 5471
extern void cstemr_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, const ptrdiff_t * nzc, ptrdiff_t * isuppz, ptrdiff_t * tryrac, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 5497
extern void csteqr_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 5510
extern void csycon_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 5524
extern void csycon_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 5539
extern void csycon_rook_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 5553
extern void csyconv_(const char * uplo, const char * way, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * e, ptrdiff_t * info); 
# 5566
extern void csyconvf_(char * uplo, char * way, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5579
extern void csyconvf_rook_(char * uplo, char * way, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5592
extern void csyequb_(char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, float * work, ptrdiff_t * info); 
# 5606
extern void csymv_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * a, const ptrdiff_t * lda, const float * x, const ptrdiff_t * incx, const float * beta, float * y, const ptrdiff_t * incy); 
# 5621
extern void csyr_(const char * uplo, const ptrdiff_t * n, const float * alpha, const float * x, const ptrdiff_t * incx, float * a, const ptrdiff_t * lda); 
# 5633
extern void csyrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 5655
extern void csysv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 5671
extern void csysv_aa_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5687
extern void csysv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5704
extern void csysv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 5720
extern void csysvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 5745
extern void csyswapr_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 5756
extern void csytf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5767
extern void csytf2_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5779
extern void csytf2_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 5790
extern void csytrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 5803
extern void csytrf_aa_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5816
extern void csytrf_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5830
extern void csytrf_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 5843
extern void csytri_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 5855
extern void csytri2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 5868
extern void csytri2x_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 5881
extern void csytri_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5895
extern void csytri_3x_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 5909
extern void csytri_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 5921
extern void csytrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5935
extern void csytrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 5950
extern void csytrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 5965
extern void csytrs_aa_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 5981
extern void csytrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 5995
extern void ctbcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 6011
extern void ctbrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 6033
extern void ctbtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 6049
extern void ctfsm_(const char * transr, const char * side, const char * uplo, const char * trans, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, float * b, const ptrdiff_t * ldb); 
# 6065
extern void ctftri_(const char * transr, const char * uplo, const char * diag, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 6076
extern void ctfttp_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * arf, float * ap, ptrdiff_t * info); 
# 6087
extern void ctfttr_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * arf, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 6099
extern void ctgevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * s, const ptrdiff_t * lds, const float * p, const ptrdiff_t * ldp, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, float * rwork, ptrdiff_t * info); 
# 6121
extern void ctgex2_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, const ptrdiff_t * j1_, ptrdiff_t * info); 
# 6139
extern void ctgexc_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, const ptrdiff_t * ifst, ptrdiff_t * ilst, ptrdiff_t * info); 
# 6158
extern void ctgsen_(const ptrdiff_t * ijob, const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * select, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, ptrdiff_t * m, float * pl, float * pr, float * dif, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 6187
extern void ctgsja_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * ncycle, ptrdiff_t * info); 
# 6217
extern void ctgsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * vl, const ptrdiff_t * ldvl, const float * vr, const ptrdiff_t * ldvr, float * s, float * dif, const ptrdiff_t * mm, ptrdiff_t * m, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 6242
extern void ctgsy2_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, const float * d, const ptrdiff_t * ldd, const float * e, const ptrdiff_t * lde, float * f, const ptrdiff_t * ldf, float * scale, float * rdsum, float * rdscal, ptrdiff_t * info); 
# 6267
extern void ctgsyl_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, const float * d, const ptrdiff_t * ldd, const float * e, const ptrdiff_t * lde, float * f, const ptrdiff_t * ldf, float * scale, float * dif, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 6294
extern void ctpcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * ap, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 6308
extern void ctplqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * mb, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 6325
extern void ctplqt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 6340
extern void ctpmlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * mb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 6362
extern void ctpmqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * nb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 6384
extern void ctpqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 6401
extern void ctpqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 6416
extern void ctprfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * ldwork); 
# 6439
extern void ctprfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 6459
extern void ctptri_(const char * uplo, const char * diag, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 6469
extern void ctptrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 6483
extern void ctpttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * ap, float * arf, ptrdiff_t * info); 
# 6494
extern void ctpttr_(const char * uplo, const ptrdiff_t * n, const float * ap, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 6505
extern void ctrcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * rcond, float * work, float * rwork, ptrdiff_t * info); 
# 6520
extern void ctrevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, float * rwork, ptrdiff_t * info); 
# 6540
extern void ctrevc3_(char * side, char * howmny, ptrdiff_t * select, ptrdiff_t * n, float * t, ptrdiff_t * ldt, float * vl, ptrdiff_t * ldvl, float * vr, ptrdiff_t * ldvr, ptrdiff_t * mm, ptrdiff_t * m, float * work, ptrdiff_t * lwork, float * rwork, ptrdiff_t * lrwork, ptrdiff_t * info); 
# 6562
extern void ctrexc_(const char * compq, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * q, const ptrdiff_t * ldq, const ptrdiff_t * ifst, const ptrdiff_t * ilst, ptrdiff_t * info); 
# 6576
extern void ctrrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, float * rwork, ptrdiff_t * info); 
# 6597
extern void ctrsen_(const char * job, const char * compq, const ptrdiff_t * select, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * q, const ptrdiff_t * ldq, float * w, ptrdiff_t * m, float * s, float * sep, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6617
extern void ctrsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * t, const ptrdiff_t * ldt, const float * vl, const ptrdiff_t * ldvl, const float * vr, const ptrdiff_t * ldvr, float * s, float * sep, const ptrdiff_t * mm, ptrdiff_t * m, float * work, const ptrdiff_t * ldwork, float * rwork, ptrdiff_t * info); 
# 6640
extern void ctrsyl_(const char * trana, const char * tranb, const ptrdiff_t * isgn, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, float * scale, ptrdiff_t * info); 
# 6658
extern void ctrti2_(const char * uplo, const char * diag, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 6669
extern void ctrtri_(const char * uplo, const char * diag, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 6680
extern void ctrtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 6695
extern void ctrttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * arf, ptrdiff_t * info); 
# 6707
extern void ctrttp_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * ap, ptrdiff_t * info); 
# 6718
extern void ctzrzf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6731
extern void cunbdb_(const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x12, const ptrdiff_t * ldx12, float * x21, const ptrdiff_t * ldx21, float * x22, const ptrdiff_t * ldx22, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * tauq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6758
extern void cunbdb1_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6778
extern void cunbdb2_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6798
extern void cunbdb3_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6818
extern void cunbdb4_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * phantom, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6839
extern void cunbdb5_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, float * x1, const ptrdiff_t * incx1, float * x2, const ptrdiff_t * incx2, float * q1, const ptrdiff_t * ldq1, float * q2, const ptrdiff_t * ldq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6858
extern void cunbdb6_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, float * x1, const ptrdiff_t * incx1, float * x2, const ptrdiff_t * incx2, float * q1, const ptrdiff_t * ldq1, float * q2, const ptrdiff_t * ldq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6877
extern void cuncsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x12, const ptrdiff_t * ldx12, float * x21, const ptrdiff_t * ldx21, float * x22, const ptrdiff_t * ldx22, float * theta, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * v2t, const ptrdiff_t * ldv2t, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 6914
extern void cuncsd2by1_(const char * jobu1, const char * jobu2, const char * jobv1t, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * work, const ptrdiff_t * lwork, float * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 6942
extern void cung2l_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 6955
extern void cung2r_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 6968
extern void cungbr_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6983
extern void cunghr_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 6997
extern void cungl2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 7010
extern void cunglq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7024
extern void cungql_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7038
extern void cungqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7052
extern void cungr2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 7065
extern void cungrq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7079
extern void cungtr_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7092
extern void cunm22_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, const ptrdiff_t * n2, const float * q, const ptrdiff_t * ldq, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7110
extern void cunm2l_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7127
extern void cunm2r_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7144
extern void cunmbr_(const char * vect, const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7163
extern void cunmhr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7182
extern void cunml2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7199
extern void cunmlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7217
extern void cunmql_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7235
extern void cunmqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7253
extern void cunmr2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7270
extern void cunmr3_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7288
extern void cunmrq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7306
extern void cunmrz_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7325
extern void cunmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7343
extern void cupgtr_(const char * uplo, const ptrdiff_t * n, const float * ap, const float * tau, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * info); 
# 7356
extern void cupmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * ap, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 7372
extern void dbbcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * theta, double * phi, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * v2t, const ptrdiff_t * ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7406
extern void dbdsdc_(const char * uplo, const char * compq, const ptrdiff_t * n, double * d, double * e, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * q, ptrdiff_t * iq, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 7425
extern void dbdsqr_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, double * d, double * e, double * vt, const ptrdiff_t * ldvt, double * u, const ptrdiff_t * ldu, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 7445
extern void dbdsvdx_(const char * uplo, const char * jobz, const char * range, const ptrdiff_t * n, const double * d, const double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, double * s, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 7467
extern void ddisna_(const char * job, const ptrdiff_t * m, const ptrdiff_t * n, const double * d, double * sep, ptrdiff_t * info); 
# 7478
extern void cgegs_(const char * jobvsl, const char * jobvsr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 7500
extern void cgegv_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, float * rwork, ptrdiff_t * info); 
# 7522
extern void cgelsx_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const float * rcond, ptrdiff_t * rank, float * work, float * rwork, ptrdiff_t * info); 
# 7540
extern void cgeqpf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * work, float * rwork, ptrdiff_t * info); 
# 7554
extern void cggsvd_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, float * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 7583
extern void cggsvp_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, ptrdiff_t * k, ptrdiff_t * l, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, float * rwork, float * tau, float * work, ptrdiff_t * info); 
# 7613
extern void clahrd_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * tau, float * t, const ptrdiff_t * ldt, float * y, const ptrdiff_t * ldy); 
# 7628
extern void clatzm_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const ptrdiff_t * incv, const float * tau, float * c1, float * c2, const ptrdiff_t * ldc, float * work); 
# 7643
extern void ctzrqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, ptrdiff_t * info); 
# 7654
extern void dgegs_(const char * jobvsl, const char * jobvsr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7676
extern void dgegv_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7698
extern void dgelsx_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const double * rcond, ptrdiff_t * rank, double * work, ptrdiff_t * info); 
# 7715
extern void dgeqpf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * work, ptrdiff_t * info); 
# 7728
extern void dggsvd_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 7756
extern void dggsvp_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, ptrdiff_t * k, ptrdiff_t * l, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, double * tau, double * work, ptrdiff_t * info); 
# 7785
extern void dlahrd_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * tau, double * t, const ptrdiff_t * ldt, double * y, const ptrdiff_t * ldy); 
# 7800
extern void dlatzm_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const ptrdiff_t * incv, const double * tau, double * c1, double * c2, const ptrdiff_t * ldc, double * work); 
# 7815
extern void dtzrqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, ptrdiff_t * info); 
# 7826
extern void sgegs_(const char * jobvsl, const char * jobvsr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7848
extern void sgegv_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 7870
extern void sgelsx_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const float * rcond, ptrdiff_t * rank, float * work, ptrdiff_t * info); 
# 7887
extern void sgeqpf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * work, ptrdiff_t * info); 
# 7900
extern void sggsvd_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 7928
extern void sggsvp_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, ptrdiff_t * k, ptrdiff_t * l, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, float * tau, float * work, ptrdiff_t * info); 
# 7957
extern void slahrd_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * tau, float * t, const ptrdiff_t * ldt, float * y, const ptrdiff_t * ldy); 
# 7972
extern void slatzm_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const ptrdiff_t * incv, const float * tau, float * c1, float * c2, const ptrdiff_t * ldc, float * work); 
# 7987
extern void stzrqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, ptrdiff_t * info); 
# 7998
extern void zgegs_(const char * jobvsl, const char * jobvsr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 8020
extern void zgegv_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 8042
extern void zgelsx_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const double * rcond, ptrdiff_t * rank, double * work, double * rwork, ptrdiff_t * info); 
# 8060
extern void zgeqpf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * work, double * rwork, ptrdiff_t * info); 
# 8074
extern void zggsvd_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8103
extern void zggsvp_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, ptrdiff_t * k, ptrdiff_t * l, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, double * rwork, double * tau, double * work, ptrdiff_t * info); 
# 8133
extern void zlahrd_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * tau, double * t, const ptrdiff_t * ldt, double * y, const ptrdiff_t * ldy); 
# 8148
extern void zlatzm_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const ptrdiff_t * incv, const double * tau, double * c1, double * c2, const ptrdiff_t * ldc, double * work); 
# 8163
extern void ztzrqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, ptrdiff_t * info); 
# 8174
extern void dgbbrd_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ncc, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, double * d, double * e, double * q, const ptrdiff_t * ldq, double * pt, const ptrdiff_t * ldpt, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 8197
extern void dgbcon_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8214
extern void dgbequ_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 8231
extern void dgbequb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 8248
extern void dgbrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * afb, const ptrdiff_t * ldafb, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8272
extern void dgbsv_(const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 8287
extern void dgbsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * afb, const ptrdiff_t * ldafb, ptrdiff_t * ipiv, char * equed, double * r, double * c, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8316
extern void dgbtf2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 8329
extern void dgbtrf_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 8342
extern void dgbtrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 8358
extern void dgebak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * scale, const ptrdiff_t * m, double * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 8373
extern void dgebal_(const char * job, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ilo, ptrdiff_t * ihi, double * scale, ptrdiff_t * info); 
# 8386
extern void dgebd2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * work, ptrdiff_t * info); 
# 8401
extern void dgebrd_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8417
extern void dgecon_(const char * norm, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8431
extern void dgeequ_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 8446
extern void dgeequb_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 8461
extern void dgees_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * sdim, double * wr, double * wi, double * vs, const ptrdiff_t * ldvs, double * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 8481
extern void dgeesx_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * sdim, double * wr, double * wi, double * vs, const ptrdiff_t * ldvs, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 8506
extern void dgeev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * wr, double * wi, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8525
extern void dgeevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * wr, double * wi, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8553
extern void dgehd2_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8566
extern void dgehrd_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8580
extern void dgejsv_(const char * joba, const char * jobu, const char * jobv, const char * jobr, const char * jobt, const char * jobp, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * sva, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8604
extern void dgelq_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * tsize, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8618
extern void dgelq2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8630
extern void dgelqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8643
extern void dgelqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 8657
extern void dgelqt3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 8669
extern void dgels_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8685
extern void dgelsd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * s, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8704
extern void dgelss_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * s, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8722
extern void dgelsy_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8740
extern void dgemlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * tsize, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8759
extern void dgemlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 8778
extern void dgemqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * tsize, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8797
extern void dgemqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 8816
extern void dgeql2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8828
extern void dgeqlf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8841
extern void dgeqp3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8855
extern void dgeqr_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * tsize, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8869
extern void dgeqr2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8881
extern void dgeqr2p_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8893
extern void dgeqrf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8906
extern void dgeqrfp_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 8919
extern void dgeqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 8933
extern void dgeqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 8945
extern void dgeqrt3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 8957
extern void dgerfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 8979
extern void dgerq2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 8991
extern void dgerqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9004
extern void dgesc2_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * rhs, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv, double * scale); 
# 9016
extern void dgesdd_(const char * jobz, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9035
extern void dgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 9048
extern void dgesvd_(const char * jobu, const char * jobvt, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9067
extern void dgesvdx_(const char * jobu, const char * jobvt, const char * range, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9093
extern void dgesvj_(const char * joba, const char * jobu, const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9112
extern void dgesvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, char * equed, double * r, double * c, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9139
extern void dgetc2_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * jpiv, ptrdiff_t * info); 
# 9150
extern void dgetf2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 9161
extern void dgetrf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 9172
extern void dgetrf2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 9183
extern void dgetri_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9195
extern void dgetrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 9209
extern void dgetsls_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9225
extern void dggbak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * lscale, const double * rscale, const ptrdiff_t * m, double * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 9241
extern void dggbal_(const char * job, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * ilo, ptrdiff_t * ihi, double * lscale, double * rscale, double * work, ptrdiff_t * info); 
# 9258
extern void dgges_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alphar, double * alphai, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 9284
extern void dgges3_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alphar, double * alphai, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 9310
extern void dggesx_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alphar, double * alphai, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 9341
extern void dggev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9363
extern void dggev3_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9385
extern void dggevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 9419
extern void dggglm_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * d, double * x, double * y, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9437
extern void dgghd3_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9458
extern void dgghrd_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 9477
extern void dgglse_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * c, double * d, double * x, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9495
extern void dggqrf_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * taua, double * b, const ptrdiff_t * ldb, double * taub, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9512
extern void dggrqf_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * taua, double * b, const ptrdiff_t * ldb, double * taub, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9529
extern void dggsvd3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9558
extern void dggsvp3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, ptrdiff_t * k, ptrdiff_t * l, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9588
extern void dgsvj0_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, const double * eps, const double * sfmin, const double * tol, const ptrdiff_t * nsweep, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9610
extern void dgsvj1_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, double * a, const ptrdiff_t * lda, double * d, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, const double * eps, const double * sfmin, const double * tol, const ptrdiff_t * nsweep, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9633
extern void dgtcon_(const char * norm, const ptrdiff_t * n, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9650
extern void dgtrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * dlf, const double * df, const double * duf, const double * du2, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9675
extern void dgtsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * dl, double * d, double * du, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 9688
extern void dgtsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, double * dlf, double * df, double * duf, double * du2, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9715
extern void dgttrf_(const ptrdiff_t * n, double * dl, double * d, double * du, double * du2, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 9727
extern void dgttrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 9743
extern void dgtts2_(const ptrdiff_t * itrans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb); 
# 9758
extern void dhgeqz_(const char * job, const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * t, const ptrdiff_t * ldt, double * alphar, double * alphai, double * beta, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9783
extern void dhsein_(const char * side, const char * eigsrc, const char * initv, ptrdiff_t * select, const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, double * wr, const double * wi, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, ptrdiff_t * ifaill, ptrdiff_t * ifailr, ptrdiff_t * info); 
# 9807
extern void dhseqr_(const char * job, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * wr, double * wi, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 9826
extern ptrdiff_t disnan_(const double * din); 
# 9832
extern void dlabad_(double * small, double * large); 
# 9839
extern void dlabrd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * x, const ptrdiff_t * ldx, double * y, const ptrdiff_t * ldy); 
# 9857
extern void dlacn2_(const ptrdiff_t * n, double * v, double * x, ptrdiff_t * isgn, double * est, ptrdiff_t * kase, ptrdiff_t * isave); 
# 9869
extern void dlacon_(const ptrdiff_t * n, double * v, double * x, ptrdiff_t * isgn, double * est, ptrdiff_t * kase); 
# 9880
extern void dlacpy_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 9892
extern void dladiv_(const double * a, const double * b, const double * c, const double * d, double * p, double * q); 
# 9903
extern void dladiv1_(double * a, double * b, double * c, double * d, double * p, double * q); 
# 9914
extern double dladiv2_(double * a, double * b, double * c, double * d, double * r, double * t); 
# 9925
extern void dlae2_(const double * a, const double * b, const double * c, double * rt1, double * rt2); 
# 9935
extern void dlaebz_(const ptrdiff_t * ijob, const ptrdiff_t * nitmax, const ptrdiff_t * n, const ptrdiff_t * mmax, const ptrdiff_t * minp, const ptrdiff_t * nbmin, const double * abstol, const double * reltol, const double * pivmin, const double * d, const double * e, const double * e2, ptrdiff_t * nval, double * ab, double * c, ptrdiff_t * mout, ptrdiff_t * nab, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9960
extern void dlaed0_(const ptrdiff_t * icompq, const ptrdiff_t * qsiz, const ptrdiff_t * n, double * d, const double * e, double * q, const ptrdiff_t * ldq, double * qstore, const ptrdiff_t * ldqs, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9977
extern void dlaed1_(const ptrdiff_t * n, double * d, double * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, const double * rho, const ptrdiff_t * cutpnt, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 9992
extern void dlaed2_(ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * n1, double * d, double * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, double * rho, const double * z, double * dlamda, double * w, double * q2, ptrdiff_t * indx, ptrdiff_t * indxc, ptrdiff_t * indxp, ptrdiff_t * coltyp, ptrdiff_t * info); 
# 10014
extern void dlaed3_(const ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * n1, double * d, double * q, const ptrdiff_t * ldq, const double * rho, double * dlamda, const double * q2, const ptrdiff_t * indx, const ptrdiff_t * ctot, double * w, double * s, ptrdiff_t * info); 
# 10033
extern void dlaed4_(const ptrdiff_t * n, const ptrdiff_t * i, const double * d, const double * z, double * delta, const double * rho, double * dlam, ptrdiff_t * info); 
# 10046
extern void dlaed5_(const ptrdiff_t * i, const double * d, const double * z, double * delta, const double * rho, double * dlam); 
# 10057
extern void dlaed6_(const ptrdiff_t * kniter, const ptrdiff_t * orgati, const double * rho, const double * d, const double * z, const double * finit, double * tau, ptrdiff_t * info); 
# 10070
extern void dlaed7_(const ptrdiff_t * icompq, const ptrdiff_t * n, const ptrdiff_t * qsiz, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, double * d, double * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, const double * rho, const ptrdiff_t * cutpnt, double * qstore, ptrdiff_t * qptr, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const double * givnum, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 10097
extern void dlaed8_(const ptrdiff_t * icompq, ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * qsiz, double * d, double * q, const ptrdiff_t * ldq, const ptrdiff_t * indxq, double * rho, const ptrdiff_t * cutpnt, const double * z, double * dlamda, double * q2, const ptrdiff_t * ldq2, double * w, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, double * givnum, ptrdiff_t * indxp, ptrdiff_t * indx, ptrdiff_t * info); 
# 10124
extern void dlaed9_(const ptrdiff_t * k, const ptrdiff_t * kstart, const ptrdiff_t * kstop, const ptrdiff_t * n, double * d, double * q, const ptrdiff_t * ldq, const double * rho, const double * dlamda, const double * w, double * s, const ptrdiff_t * lds, ptrdiff_t * info); 
# 10142
extern void dlaeda_(const ptrdiff_t * n, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const double * givnum, const double * q, const ptrdiff_t * qptr, double * z, double * ztemp, ptrdiff_t * info); 
# 10161
extern void dlaein_(const ptrdiff_t * rightv, const ptrdiff_t * noinit, const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, const double * wr, const double * wi, double * vr, double * vi, double * b, const ptrdiff_t * ldb, double * work, const double * eps3, const double * smlnum, const double * bignum, ptrdiff_t * info); 
# 10182
extern void dlaev2_(const double * a, const double * b, const double * c, double * rt1, double * rt2, double * cs1, double * sn1); 
# 10194
extern void dlaexc_(const ptrdiff_t * wantq, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * q, const ptrdiff_t * ldq, const ptrdiff_t * j1_, const ptrdiff_t * n1, const ptrdiff_t * n2, double * work, ptrdiff_t * info); 
# 10210
extern void dlag2_(const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * safmin, double * scale1, double * scale2, double * wr1, double * wr2, double * wi); 
# 10225
extern void dlag2s_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, float * sa, const ptrdiff_t * ldsa, ptrdiff_t * info); 
# 10237
extern void dlags2_(const ptrdiff_t * upper, const double * a1, const double * a2, const double * a3, const double * b1, const double * b2, const double * b3, double * csu, double * snu, double * csv, double * snv, double * csq, double * snq); 
# 10255
extern void dlagtf_(const ptrdiff_t * n, double * a, const double * lambda, double * b, double * c, const double * tol, double * d, ptrdiff_t * in, ptrdiff_t * info); 
# 10269
extern void dlagtm_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * alpha, const double * dl, const double * d, const double * du, const double * x, const ptrdiff_t * ldx, const double * beta, double * b, const ptrdiff_t * ldb); 
# 10286
extern void dlagts_(const ptrdiff_t * job, const ptrdiff_t * n, const double * a, const double * b, const double * c, const double * d, const ptrdiff_t * in, double * y, double * tol, ptrdiff_t * info); 
# 10301
extern void dlagv2_(double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * csl, double * snl, double * csr, double * snr); 
# 10317
extern void dlahqr_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * wr, double * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 10336
extern void dlahr2_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * tau, double * t, const ptrdiff_t * ldt, double * y, const ptrdiff_t * ldy); 
# 10351
extern void dlaic1_(const ptrdiff_t * job, const ptrdiff_t * j, const double * x, const double * sest, const double * w, const double * gamma_, double * sestpr, double * s, double * c); 
# 10365
extern ptrdiff_t dlaisnan_(const double * din1, const double * din2); 
# 10372
extern void dlaln2_(const ptrdiff_t * ltrans, const ptrdiff_t * na, const ptrdiff_t * nw, const double * smin, const double * ca, const double * a, const ptrdiff_t * lda, const double * d1, const double * d2, const double * b, const ptrdiff_t * ldb, const double * wr, const double * wi, double * x, const ptrdiff_t * ldx, double * scale, double * xnorm, ptrdiff_t * info); 
# 10395
extern void dlals0_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * nrhs, double * b, const ptrdiff_t * ldb, double * bx, const ptrdiff_t * ldbx, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const double * givnum, const ptrdiff_t * ldgnum, const double * poles, const double * difl, const double * difr, const double * z, const ptrdiff_t * k, const double * c, const double * s, double * work, ptrdiff_t * info); 
# 10424
extern void dlalsa_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * b, const ptrdiff_t * ldb, double * bx, const ptrdiff_t * ldbx, const double * u, const ptrdiff_t * ldu, const double * vt, const ptrdiff_t * k, const double * difl, const double * difr, const double * z, const double * poles, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const ptrdiff_t * perm, const double * givnum, const double * c, const double * s, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 10455
extern void dlalsd_(const char * uplo, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * d, double * e, double * b, const ptrdiff_t * ldb, const double * rcond, ptrdiff_t * rank, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 10473
extern void dlamrg_(const ptrdiff_t * n1, const ptrdiff_t * n2, const double * a, const ptrdiff_t * dtrd1, const ptrdiff_t * dtrd2, ptrdiff_t * index); 
# 10484
extern void dlamswlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 10505
extern void dlamtsqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 10526
extern ptrdiff_t dlaneg_(const ptrdiff_t * n, const double * d, const double * lld, const double * sigma, const double * pivmin, const ptrdiff_t * r); 
# 10537
extern double dlangb_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * work); 
# 10549
extern double dlange_(const char * norm, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 10560
extern double dlangt_(const char * norm, const ptrdiff_t * n, const double * dl, const double * d, const double * du); 
# 10570
extern double dlanhs_(const char * norm, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 10580
extern double dlansb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const double * ab, const ptrdiff_t * ldab, double * work); 
# 10592
extern double dlansf_(const char * norm, const char * transr, const char * uplo, const ptrdiff_t * n, const double * a, double * work); 
# 10603
extern double dlansp_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * ap, double * work); 
# 10613
extern double dlanst_(const char * norm, const ptrdiff_t * n, const double * d, const double * e); 
# 10622
extern double dlansy_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 10633
extern double dlantb_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * ab, const ptrdiff_t * ldab, double * work); 
# 10646
extern double dlantp_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * ap, double * work); 
# 10657
extern double dlantr_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 10670
extern void dlanv2_(double * a, double * b, double * c, double * d, double * rt1r, double * rt1i, double * rt2r, double * rt2i, double * cs, double * sn); 
# 10685
extern void dlapll_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, double * ssmin); 
# 10696
extern void dlapmr_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, double * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 10707
extern void dlapmt_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, double * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 10718
extern double dlapy2_(const double * x, const double * y); 
# 10725
extern double dlapy3_(const double * x, const double * y, const double * z); 
# 10733
extern void dlaqgb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, const double * r, const double * c, const double * rowcnd, const double * colcnd, const double * amax, char * equed); 
# 10750
extern void dlaqge_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * r, const double * c, const double * rowcnd, const double * colcnd, const double * amax, char * equed); 
# 10765
extern void dlaqp2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * vn1, double * vn2, double * work); 
# 10780
extern void dlaqps_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * vn1, double * vn2, double * auxv, double * f, const ptrdiff_t * ldf); 
# 10799
extern void dlaqr0_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * wr, double * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 10820
extern void dlaqr1_(const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, const double * sr1, double * si1, double * sr2, double * si2, double * v); 
# 10833
extern void dlaqr2_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, double * sr, double * si, double * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, double * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, double * work, const ptrdiff_t * lwork); 
# 10864
extern void dlaqr3_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, double * sr, double * si, double * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, double * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, double * work, const ptrdiff_t * lwork); 
# 10895
extern void dlaqr4_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * wr, double * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 10916
extern void dlaqr5_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * kacc22, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nshfts, double * sr, double * si, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * v, const ptrdiff_t * ldv, double * u, const ptrdiff_t * ldu, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, const ptrdiff_t * nh, double * wh, const ptrdiff_t * ldwh); 
# 10946
extern void dlaqsb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, const double * s, const double * scond, const double * amax, char * equed); 
# 10960
extern void dlaqsp_(const char * uplo, const ptrdiff_t * n, double * ap, const double * s, const double * scond, const double * amax, char * equed); 
# 10972
extern void dlaqsy_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * s, const double * scond, const double * amax, char * equed); 
# 10985
extern void dlaqtr_(const ptrdiff_t * ltran, const ptrdiff_t * lreal, const ptrdiff_t * n, const double * t, const ptrdiff_t * ldt, const double * b, const double * w, double * scale, double * x, double * work, ptrdiff_t * info); 
# 11001
extern void dlar1v_(const ptrdiff_t * n, const ptrdiff_t * b1, const ptrdiff_t * bn, const double * lambda, const double * d, const double * l, const double * ld, const double * lld, const double * pivmin, const double * gaptol, double * z, const ptrdiff_t * wantnc, ptrdiff_t * negcnt, double * ztz, double * mingma, ptrdiff_t * r, ptrdiff_t * isuppz, double * nrminv, double * resid, double * rqcorr, double * work); 
# 11027
extern void dlar2v_(const ptrdiff_t * n, double * x, double * y, double * z, const ptrdiff_t * incx, const double * c, const double * s, const ptrdiff_t * incc); 
# 11040
extern void dlarf_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const ptrdiff_t * incv, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 11054
extern void dlarfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * ldwork); 
# 11074
extern void dlarfg_(const ptrdiff_t * n, double * alpha, double * x, const ptrdiff_t * incx, double * tau); 
# 11084
extern void dlarfgp_(const ptrdiff_t * n, double * alpha, double * x, const ptrdiff_t * incx, double * tau); 
# 11094
extern void dlarft_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, const double * v, const ptrdiff_t * ldv, const double * tau, double * t, const ptrdiff_t * ldt); 
# 11108
extern void dlarfx_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 11121
extern void dlarfy_(char * uplo, ptrdiff_t * n, double * v, ptrdiff_t * incv, double * tau, double * c, ptrdiff_t * ldc, double * work); 
# 11134
extern void dlargv_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, double * c, const ptrdiff_t * incc); 
# 11146
extern void dlarnv_(const ptrdiff_t * idist, ptrdiff_t * iseed, const ptrdiff_t * n, double * x); 
# 11155
extern void dlarra_(const ptrdiff_t * n, const double * d, double * e, double * e2, const double * spltol, const double * tnrm, ptrdiff_t * nsplit, ptrdiff_t * isplit, ptrdiff_t * info); 
# 11169
extern void dlarrb_(const ptrdiff_t * n, const double * d, const double * lld, const ptrdiff_t * ifirst, const ptrdiff_t * ilast, const double * rtol1, const double * rtol2, const ptrdiff_t * offset, double * w, double * wgap, double * werr, double * work, ptrdiff_t * iwork, const double * pivmin, const double * spdiam, const ptrdiff_t * twist, ptrdiff_t * info); 
# 11191
extern void dlarrc_(const char * jobt, const ptrdiff_t * n, const double * vl, const double * vu, const double * d, const double * e, const double * pivmin, ptrdiff_t * eigcnt, ptrdiff_t * lcnt, ptrdiff_t * rcnt, ptrdiff_t * info); 
# 11207
extern void dlarrd_(const char * range, const char * order, const ptrdiff_t * n, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * gers, const double * reltol, const double * d, const double * e, const double * e2, const double * pivmin, const ptrdiff_t * nsplit, const ptrdiff_t * isplit, ptrdiff_t * m, double * w, double * werr, double * wl, double * wu, ptrdiff_t * iblock, ptrdiff_t * indexw, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 11237
extern void dlarre_(const char * range, const ptrdiff_t * n, double * vl, double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, double * d, double * e, double * e2, const double * rtol1, const double * rtol2, const double * spltol, ptrdiff_t * nsplit, ptrdiff_t * isplit, ptrdiff_t * m, double * w, double * werr, double * wgap, ptrdiff_t * iblock, ptrdiff_t * indexw, double * gers, double * pivmin, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 11267
extern void dlarrf_(const ptrdiff_t * n, const double * d, const double * l, const double * ld, const ptrdiff_t * clstrt, const ptrdiff_t * clend, const double * w, double * wgap, const double * werr, const double * spdiam, const double * clgapl, double * clgapr, const double * pivmin, double * sigma, double * dplus, double * lplus, double * work, ptrdiff_t * info); 
# 11290
extern void dlarrj_(const ptrdiff_t * n, const double * d, const double * e2, const ptrdiff_t * ifirst, const ptrdiff_t * ilast, const double * rtol, const ptrdiff_t * offset, double * w, double * werr, double * work, ptrdiff_t * iwork, const double * pivmin, const double * spdiam, ptrdiff_t * info); 
# 11309
extern void dlarrk_(const ptrdiff_t * n, const ptrdiff_t * iw, const double * gl, const double * gu, const double * d, const double * e2, const double * pivmin, const double * reltol, double * w, double * werr, ptrdiff_t * info); 
# 11325
extern void dlarrr_(const ptrdiff_t * n, const double * d, double * e, ptrdiff_t * info); 
# 11334
extern void dlarrv_(const ptrdiff_t * n, const double * vl, const double * vu, double * d, double * l, double * pivmin, const ptrdiff_t * isplit, const ptrdiff_t * m, const ptrdiff_t * dol, const ptrdiff_t * dou, const double * minrgp, const double * rtol1, const double * rtol2, double * w, double * werr, double * wgap, const ptrdiff_t * iblock, const ptrdiff_t * indexw, const double * gers, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 11364
extern void dlartg_(const double * f, const double * g, double * cs, double * sn, double * r); 
# 11374
extern void dlartgp_(double * f, double * g, double * cs, double * sn, double * r); 
# 11384
extern void dlartgs_(const double * x, const double * y, const double * sigma, double * cs, double * sn); 
# 11394
extern void dlartv_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, const double * c, const double * s, const ptrdiff_t * incc); 
# 11407
extern void dlaruv_(ptrdiff_t * iseed, const ptrdiff_t * n, double * x); 
# 11415
extern void dlarz_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const double * v, const ptrdiff_t * incv, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 11430
extern void dlarzb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * ldwork); 
# 11451
extern void dlarzt_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, double * v, const ptrdiff_t * ldv, const double * tau, double * t, const ptrdiff_t * ldt); 
# 11465
extern void dlas2_(const double * f, const double * g, const double * h, double * ssmin, double * ssmax); 
# 11475
extern void dlascl_(const char * type, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * cfrom, const double * cto, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 11490
extern void dlasd0_(const ptrdiff_t * n, const ptrdiff_t * sqre, double * d, const double * e, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, const ptrdiff_t * smlsiz, ptrdiff_t * iwork, double * work, ptrdiff_t * info); 
# 11507
extern void dlasd1_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, double * d, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, ptrdiff_t * idxq, ptrdiff_t * iwork, double * work, ptrdiff_t * info); 
# 11526
extern void dlasd2_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, ptrdiff_t * k, double * d, double * z, const double * alpha, const double * beta, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * dsigma, double * u2, const ptrdiff_t * ldu2, double * vt2, const ptrdiff_t * ldvt2, ptrdiff_t * idxp, ptrdiff_t * idx, ptrdiff_t * idxc, ptrdiff_t * idxq, ptrdiff_t * coltyp, ptrdiff_t * info); 
# 11554
extern void dlasd3_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * k, double * d, double * q, const ptrdiff_t * ldq, const double * dsigma, double * u, const ptrdiff_t * ldu, double * u2, const ptrdiff_t * ldu2, double * vt, const ptrdiff_t * ldvt, double * vt2, const ptrdiff_t * ldvt2, const ptrdiff_t * idxc, const ptrdiff_t * ctot, const double * z, ptrdiff_t * info); 
# 11579
extern void dlasd4_(const ptrdiff_t * n, const ptrdiff_t * i, const double * d, const double * z, double * delta, const double * rho, double * sigma, double * work, ptrdiff_t * info); 
# 11593
extern void dlasd5_(const ptrdiff_t * i, const double * d, const double * z, double * delta, const double * rho, double * dsigma, double * work); 
# 11605
extern void dlasd6_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, double * d, double * vf, double * vl, double * alpha, double * beta, ptrdiff_t * idxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, double * givnum, const ptrdiff_t * ldgnum, double * poles, double * difl, double * difr, double * z, ptrdiff_t * k, double * c, double * s, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 11636
extern void dlasd7_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, ptrdiff_t * k, double * d, double * z, double * zw, double * vf, double * vfw, double * vl, double * vlw, const double * alpha, const double * beta, double * dsigma, ptrdiff_t * idx, ptrdiff_t * idxp, const ptrdiff_t * idxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, double * givnum, const ptrdiff_t * ldgnum, double * c, double * s, ptrdiff_t * info); 
# 11668
extern void dlasd8_(const ptrdiff_t * icompq, const ptrdiff_t * k, double * d, double * z, double * vf, double * vl, double * difl, double * difr, const ptrdiff_t * lddifr, double * dsigma, double * work, ptrdiff_t * info); 
# 11685
extern void dlasda_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * sqre, double * d, const double * e, double * u, const ptrdiff_t * ldu, double * vt, ptrdiff_t * k, double * difl, double * difr, double * z, double * poles, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, ptrdiff_t * perm, double * givnum, double * c, double * s, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 11714
extern void dlasdq_(const char * uplo, const ptrdiff_t * sqre, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, double * d, double * e, double * vt, const ptrdiff_t * ldvt, double * u, const ptrdiff_t * ldu, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 11735
extern void dlasdt_(const ptrdiff_t * n, ptrdiff_t * lvl, ptrdiff_t * nd, ptrdiff_t * inode, ptrdiff_t * ndiml, ptrdiff_t * ndimr, const ptrdiff_t * msub); 
# 11747
extern void dlaset_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * beta, double * a, const ptrdiff_t * lda); 
# 11759
extern void dlasq1_(const ptrdiff_t * n, double * d, double * e, double * work, ptrdiff_t * info); 
# 11769
extern void dlasq2_(const ptrdiff_t * n, double * z, ptrdiff_t * info); 
# 11777
extern void dlasq3_(const ptrdiff_t * i0, const ptrdiff_t * n0, const double * z, ptrdiff_t * pp, double * dmin, double * sigma, double * desig, const double * qmax, ptrdiff_t * nfail, ptrdiff_t * iter, ptrdiff_t * ndiv, const ptrdiff_t * ieee, ptrdiff_t * ttype, double * dmin1, double * dmin2, double * dn, double * dn1, double * dn2, double * g, double * tau); 
# 11802
extern void dlasq4_(const ptrdiff_t * i0, const ptrdiff_t * n0, const double * z, const ptrdiff_t * pp, ptrdiff_t * n0in, const double * dmin, const double * dmin1, const double * dmin2, const double * dn, const double * dn1, const double * dn2, double * tau, ptrdiff_t * ttype, double * g); 
# 11821
extern void dlasq5_(const ptrdiff_t * i0, const ptrdiff_t * n0, const double * z, const ptrdiff_t * pp, const double * tau, const double * sigma, double * dmin, double * dmin1, double * dmin2, double * dn, double * dnm1, double * dnm2, const ptrdiff_t * ieee, const double * eps); 
# 11840
extern void dlasq6_(const ptrdiff_t * i0, const ptrdiff_t * n0, const double * z, const ptrdiff_t * pp, double * dmin, double * dmin1, double * dmin2, double * dn, double * dnm1, double * dnm2); 
# 11855
extern void dlasr_(const char * side, const char * pivot, const char * direct, const ptrdiff_t * m, const ptrdiff_t * n, const double * c, const double * s, double * a, const ptrdiff_t * lda); 
# 11869
extern void dlasrt_(const char * id, const ptrdiff_t * n, double * d, ptrdiff_t * info); 
# 11878
extern void dlassq_(const ptrdiff_t * n, const double * x, const ptrdiff_t * incx, double * scale, double * sumsq); 
# 11888
extern void dlasv2_(const double * f, const double * g, const double * h, double * ssmin, double * ssmax, double * snr, double * csr, double * snl, double * csl); 
# 11902
extern void dlaswlq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 11918
extern void dlaswp_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * k1, const ptrdiff_t * k2, const ptrdiff_t * ipiv, const ptrdiff_t * incx); 
# 11930
extern void dlasy2_(const ptrdiff_t * ltranl, const ptrdiff_t * ltranr, const ptrdiff_t * isgn, const ptrdiff_t * n1, const ptrdiff_t * n2, const double * tl, const ptrdiff_t * ldtl, const double * tr, const ptrdiff_t * ldtr, const double * b, const ptrdiff_t * ldb, double * scale, double * x, const ptrdiff_t * ldx, double * xnorm, ptrdiff_t * info); 
# 11951
extern void dlasyf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 11966
extern void dlasyf_aa_(const char * uplo, const ptrdiff_t * j1_, const ptrdiff_t * m, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * h, const ptrdiff_t * ldh, double * work, ptrdiff_t * info); 
# 11982
extern void dlasyf_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 11998
extern void dlasyf_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 12013
extern void dlat2s_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, float * sa, const ptrdiff_t * ldsa, ptrdiff_t * info); 
# 12025
extern void dlatbs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 12042
extern void dlatdf_(const ptrdiff_t * ijob, const ptrdiff_t * n, const double * z, const ptrdiff_t * ldz, double * rhs, double * rdsum, double * rdscal, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv); 
# 12056
extern void dlatps_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const double * ap, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 12071
extern void dlatrd_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * e, double * tau, double * w, const ptrdiff_t * ldw); 
# 12085
extern void dlatrs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 12101
extern void dlatrz_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * tau, double * work); 
# 12113
extern void dlatsqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12129
extern void dlauu2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 12139
extern void dlauum_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 12149
extern void dopgtr_(const char * uplo, const ptrdiff_t * n, const double * ap, const double * tau, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * info); 
# 12162
extern void dopmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * ap, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12178
extern void dorbdb_(const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x12, const ptrdiff_t * ldx12, double * x21, const ptrdiff_t * ldx21, double * x22, const ptrdiff_t * ldx22, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * tauq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12205
extern void dorbdb1_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12225
extern void dorbdb2_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12245
extern void dorbdb3_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12265
extern void dorbdb4_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * phantom, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12286
extern void dorbdb5_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, double * x1, const ptrdiff_t * incx1, double * x2, const ptrdiff_t * incx2, double * q1, const ptrdiff_t * ldq1, double * q2, const ptrdiff_t * ldq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12305
extern void dorbdb6_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, double * x1, const ptrdiff_t * incx1, double * x2, const ptrdiff_t * incx2, double * q1, const ptrdiff_t * ldq1, double * q2, const ptrdiff_t * ldq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12324
extern void dorcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x12, const ptrdiff_t * ldx12, double * x21, const ptrdiff_t * ldx21, double * x22, const ptrdiff_t * ldx22, double * theta, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * v2t, const ptrdiff_t * ldv2t, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12359
extern void dorcsd2by1_(const char * jobu1, const char * jobu2, const char * jobv1t, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12385
extern void dorg2l_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 12398
extern void dorg2r_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 12411
extern void dorgbr_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12426
extern void dorghr_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12440
extern void dorgl2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 12453
extern void dorglq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12467
extern void dorgql_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12481
extern void dorgqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12495
extern void dorgr2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 12508
extern void dorgrq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12522
extern void dorgtr_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12535
extern void dorm22_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, const ptrdiff_t * n2, const double * q, const ptrdiff_t * ldq, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12553
extern void dorm2l_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12570
extern void dorm2r_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12587
extern void dormbr_(const char * vect, const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12606
extern void dormhr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12625
extern void dorml2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12642
extern void dormlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12660
extern void dormql_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12678
extern void dormqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12696
extern void dormr2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12713
extern void dormr3_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 12731
extern void dormrq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12749
extern void dormrz_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12768
extern void dormtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 12786
extern void dpbcon_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12801
extern void dpbequ_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 12815
extern void dpbrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * afb, const ptrdiff_t * ldafb, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12837
extern void dpbstf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 12848
extern void dpbsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 12862
extern void dpbsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * afb, const ptrdiff_t * ldafb, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12888
extern void dpbtf2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 12899
extern void dpbtrf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 12910
extern void dpbtrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 12924
extern void dpftrf_(const char * transr, const char * uplo, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 12934
extern void dpftri_(const char * transr, const char * uplo, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 12944
extern void dpftrs_(const char * transr, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 12957
extern void dpocon_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 12971
extern void dpoequ_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 12983
extern void dpoequb_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 12995
extern void dporfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13016
extern void dposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13029
extern void dposvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13054
extern void dpotf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 13064
extern void dpotrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 13074
extern void dpotrf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 13084
extern void dpotri_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 13094
extern void dpotrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13107
extern void dppcon_(const char * uplo, const ptrdiff_t * n, const double * ap, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13120
extern void dppequ_(const char * uplo, const ptrdiff_t * n, const double * ap, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 13132
extern void dpprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * afp, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13151
extern void dppsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13163
extern void dppsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, double * afp, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13186
extern void dpptrf_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 13195
extern void dpptri_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 13204
extern void dpptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13216
extern void dpstf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const double * tol, double * work, ptrdiff_t * info); 
# 13230
extern void dpstrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const double * tol, double * work, ptrdiff_t * info); 
# 13244
extern void dptcon_(const ptrdiff_t * n, const double * d, const double * e, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 13256
extern void dpteqr_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 13269
extern void dptrfs_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, const double * df, const double * ef, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * info); 
# 13288
extern void dptsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * d, double * e, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13300
extern void dptsvx_(const char * fact, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * df, double * ef, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * info); 
# 13321
extern void dpttrf_(const ptrdiff_t * n, double * d, double * e, ptrdiff_t * info); 
# 13330
extern void dpttrs_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13342
extern void dptts2_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * b, const ptrdiff_t * ldb); 
# 13353
extern void drscl_(const ptrdiff_t * n, const double * sa, double * sx, const ptrdiff_t * incx); 
# 13362
extern void dsb2st_kernels_(char * uplo, ptrdiff_t * wantz, ptrdiff_t * ttype, ptrdiff_t * st, ptrdiff_t * ed, ptrdiff_t * sweep, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * ib, double * a, ptrdiff_t * lda, double * v, double * tau, ptrdiff_t * ldvt, double * work); 
# 13382
extern void dsbev_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 13398
extern void dsbev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 13415
extern void dsbevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13434
extern void dsbevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 13453
extern void dsbevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * q, const ptrdiff_t * ldq, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13480
extern void dsbevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * q, ptrdiff_t * ldq, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13508
extern void dsbgst_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, const double * bb, const ptrdiff_t * ldbb, double * x, const ptrdiff_t * ldx, double * work, ptrdiff_t * info); 
# 13526
extern void dsbgv_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 13545
extern void dsbgvd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13567
extern void dsbgvx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * q, const ptrdiff_t * ldq, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13597
extern void dsbtrd_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * d, double * e, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * info); 
# 13614
extern void dsfrk_(const char * transr, const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * beta, double * c); 
# 13629
extern void dsgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * work, float * swork, ptrdiff_t * iter, ptrdiff_t * info); 
# 13647
extern void dspcon_(const char * uplo, const ptrdiff_t * n, const double * ap, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13661
extern void dspev_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 13675
extern void dspevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13692
extern void dspevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * ap, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13715
extern void dspgst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * ap, const double * bp, ptrdiff_t * info); 
# 13726
extern void dspgv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 13742
extern void dspgvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13761
extern void dspgvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13786
extern void dsposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * work, float * swork, ptrdiff_t * iter, ptrdiff_t * info); 
# 13804
extern void dsprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * afp, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13824
extern void dspsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13837
extern void dspsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * afp, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13859
extern void dsptrd_(const char * uplo, const ptrdiff_t * n, double * ap, double * d, double * e, double * tau, ptrdiff_t * info); 
# 13871
extern void dsptrf_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 13881
extern void dsptri_(const char * uplo, const ptrdiff_t * n, double * ap, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 13892
extern void dsptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 13905
extern void dstebz_(const char * range, const char * order, const ptrdiff_t * n, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, const double * d, const double * e, ptrdiff_t * m, ptrdiff_t * nsplit, double * w, ptrdiff_t * iblock, ptrdiff_t * isplit, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 13928
extern void dstedc_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13944
extern void dstegr_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 13969
extern void dstein_(const ptrdiff_t * n, const double * d, const double * e, const ptrdiff_t * m, const double * w, const ptrdiff_t * iblock, const ptrdiff_t * isplit, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 13987
extern void dstemr_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, const ptrdiff_t * nzc, ptrdiff_t * isuppz, ptrdiff_t * tryrac, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14013
extern void dsteqr_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 14026
extern void dsterf_(const ptrdiff_t * n, double * d, double * e, ptrdiff_t * info); 
# 14035
extern void dstev_(const char * jobz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 14048
extern void dstevd_(const char * jobz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14064
extern void dstevr_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14089
extern void dstevx_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 14112
extern void dsycon_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14127
extern void dsycon_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14143
extern void dsycon_rook_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14158
extern void dsyconv_(const char * uplo, const char * way, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * e, ptrdiff_t * info); 
# 14171
extern void dsyconvf_(char * uplo, char * way, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 14184
extern void dsyconvf_rook_(char * uplo, char * way, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 14197
extern void dsyequb_(char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, double * work, ptrdiff_t * info); 
# 14211
extern void dsyev_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14225
extern void dsyev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * w, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14239
extern void dsyevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14255
extern void dsyevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * w, double * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 14271
extern void dsyevr_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14297
extern void dsyevr_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 14323
extern void dsyevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 14348
extern void dsyevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 14373
extern void dsygs2_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 14386
extern void dsygst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 14399
extern void dsygv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * w, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14416
extern void dsygv_2stage_(ptrdiff_t * itype, char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * b, ptrdiff_t * ldb, double * w, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14433
extern void dsygvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * w, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 14452
extern void dsygvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 14480
extern void dsyrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14502
extern void dsysv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14518
extern void dsysv_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14534
extern void dsysv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14551
extern void dsysv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14567
extern void dsysvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14592
extern void dsyswapr_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 14603
extern void dsytd2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tau, ptrdiff_t * info); 
# 14616
extern void dsytf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 14627
extern void dsytf2_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 14639
extern void dsytf2_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 14650
extern void dsytrd_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14665
extern void dsytrd_2stage_(char * vect, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * d, double * e, double * tau, double * hous2, ptrdiff_t * lhous2, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14683
extern void dsytrd_sb2st_(char * stage1, char * vect, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * d, double * e, double * hous, ptrdiff_t * lhous, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14702
extern void dsytrd_sy2sb_(char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * a, ptrdiff_t * lda, double * ab, ptrdiff_t * ldab, double * tau, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14718
extern void dsytrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14731
extern void dsytrf_aa_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14744
extern void dsytrf_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14758
extern void dsytrf_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14771
extern void dsytri_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 14783
extern void dsytri2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14796
extern void dsytri2x_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 14809
extern void dsytri_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 14823
extern void dsytri_3x_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 14837
extern void dsytri_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 14849
extern void dsytrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 14863
extern void dsytrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 14878
extern void dsytrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 14893
extern void dsytrs_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, const double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 14909
extern void dsytrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 14923
extern void dtbcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14939
extern void dtbrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 14961
extern void dtbtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 14977
extern void dtfsm_(const char * transr, const char * side, const char * uplo, const char * trans, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, double * b, const ptrdiff_t * ldb); 
# 14993
extern void dtftri_(const char * transr, const char * uplo, const char * diag, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 15004
extern void dtfttp_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * arf, double * ap, ptrdiff_t * info); 
# 15015
extern void dtfttr_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * arf, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 15027
extern void dtgevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * s, const ptrdiff_t * lds, const double * p, const ptrdiff_t * ldp, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, ptrdiff_t * info); 
# 15048
extern void dtgex2_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, const ptrdiff_t * j1_, const ptrdiff_t * n1, const ptrdiff_t * n2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 15070
extern void dtgexc_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, ptrdiff_t * ifst, ptrdiff_t * ilst, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 15091
extern void dtgsen_(const ptrdiff_t * ijob, const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * select, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alphar, double * alphai, double * beta, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, ptrdiff_t * m, double * pl, double * pr, double * dif, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 15121
extern void dtgsja_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * ncycle, ptrdiff_t * info); 
# 15151
extern void dtgsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * vl, const ptrdiff_t * ldvl, const double * vr, const ptrdiff_t * ldvr, double * s, double * dif, const ptrdiff_t * mm, ptrdiff_t * m, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15176
extern void dtgsy2_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, const double * d, const ptrdiff_t * ldd, const double * e, const ptrdiff_t * lde, double * f, const ptrdiff_t * ldf, double * scale, double * rdsum, double * rdscal, ptrdiff_t * iwork, ptrdiff_t * pq, ptrdiff_t * info); 
# 15203
extern void dtgsyl_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, const double * d, const ptrdiff_t * ldd, const double * e, const ptrdiff_t * lde, double * f, const ptrdiff_t * ldf, double * scale, double * dif, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15230
extern void dtpcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * ap, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15244
extern void dtplqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * mb, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 15261
extern void dtplqt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 15276
extern void dtpmlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * mb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 15298
extern void dtpmqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * nb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 15320
extern void dtpqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 15337
extern void dtpqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 15352
extern void dtprfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * ldwork); 
# 15375
extern void dtprfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15395
extern void dtptri_(const char * uplo, const char * diag, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 15405
extern void dtptrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 15419
extern void dtpttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * ap, double * arf, ptrdiff_t * info); 
# 15430
extern void dtpttr_(const char * uplo, const ptrdiff_t * n, const double * ap, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 15441
extern void dtrcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * rcond, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15456
extern void dtrevc_(const char * side, const char * howmny, ptrdiff_t * select, const ptrdiff_t * n, const double * t, const ptrdiff_t * ldt, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, ptrdiff_t * info); 
# 15475
extern void dtrevc3_(char * side, char * howmny, ptrdiff_t * select, ptrdiff_t * n, double * t, ptrdiff_t * ldt, double * vl, ptrdiff_t * ldvl, double * vr, ptrdiff_t * ldvr, ptrdiff_t * mm, ptrdiff_t * m, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 15495
extern void dtrexc_(const char * compq, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * q, const ptrdiff_t * ldq, ptrdiff_t * ifst, ptrdiff_t * ilst, double * work, ptrdiff_t * info); 
# 15510
extern void dtrrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15531
extern void dtrsen_(const char * job, const char * compq, const ptrdiff_t * select, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * q, const ptrdiff_t * ldq, double * wr, double * wi, ptrdiff_t * m, double * s, double * sep, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 15554
extern void dtrsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * t, const ptrdiff_t * ldt, const double * vl, const ptrdiff_t * ldvl, const double * vr, const ptrdiff_t * ldvr, double * s, double * sep, const ptrdiff_t * mm, ptrdiff_t * m, double * work, const ptrdiff_t * ldwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15577
extern void dtrsyl_(const char * trana, const char * tranb, const ptrdiff_t * isgn, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, double * scale, ptrdiff_t * info); 
# 15595
extern void dtrti2_(const char * uplo, const char * diag, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 15606
extern void dtrtri_(const char * uplo, const char * diag, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 15617
extern void dtrtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 15632
extern void dtrttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * arf, ptrdiff_t * info); 
# 15644
extern void dtrttp_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * ap, ptrdiff_t * info); 
# 15655
extern void dtzrzf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 15668
extern double dzsum1_(const ptrdiff_t * n, const double * cx, const ptrdiff_t * incx); 
# 15676
extern ptrdiff_t icmax1_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx); 
# 15684
extern ptrdiff_t ieeeck_(const ptrdiff_t * ispec, const float * zero, const float * one); 
# 15692
extern ptrdiff_t ilaclc_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda); 
# 15701
extern ptrdiff_t ilaclr_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda); 
# 15710
extern ptrdiff_t iladiag_(const char * diag); 
# 15716
extern ptrdiff_t iladlc_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda); 
# 15725
extern ptrdiff_t iladlr_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda); 
# 15734
extern ptrdiff_t ilaenv_(const ptrdiff_t * ispec, const char * name, const char * opts, const ptrdiff_t * n1, const ptrdiff_t * n2, const ptrdiff_t * n3, const ptrdiff_t * n4, ptrdiff_t name_len, ptrdiff_t opts_len); 
# 15748
extern ptrdiff_t ilaprec_(const char * prec); 
# 15754
extern ptrdiff_t ilaslc_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda); 
# 15763
extern ptrdiff_t ilaslr_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda); 
# 15772
extern ptrdiff_t ilatrans_(const char * trans); 
# 15778
extern ptrdiff_t ilauplo_(const char * uplo); 
# 15784
extern void ilaver_(ptrdiff_t * vers_major, ptrdiff_t * vers_minor, ptrdiff_t * vers_patch); 
# 15792
extern ptrdiff_t ilazlc_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda); 
# 15801
extern ptrdiff_t ilazlr_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda); 
# 15810
extern ptrdiff_t iparam2stage_(ptrdiff_t * ispec, char * name, char * opts, ptrdiff_t * ni, ptrdiff_t * nbi, ptrdiff_t * ibi, ptrdiff_t * nxi, ptrdiff_t name_len, ptrdiff_t opts_len); 
# 15824
extern ptrdiff_t iparmq_(const ptrdiff_t * ispec, const char * name, const char * opts, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const ptrdiff_t * lwork); 
# 15836
extern ptrdiff_t izmax1_(const ptrdiff_t * n, const double * zx, const ptrdiff_t * incx); 
# 15844
extern ptrdiff_t lsamen_(const ptrdiff_t * n, const char * ca, const char * cb, ptrdiff_t ca_len, ptrdiff_t cb_len); 
# 15854
extern void sbbcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * theta, float * phi, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * v2t, const ptrdiff_t * ldv2t, float * b11d, float * b11e, float * b12d, float * b12e, float * b21d, float * b21e, float * b22d, float * b22e, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 15888
extern void sbdsdc_(const char * uplo, const char * compq, const ptrdiff_t * n, float * d, float * e, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * q, ptrdiff_t * iq, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15907
extern void sbdsqr_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, float * d, float * e, float * vt, const ptrdiff_t * ldvt, float * u, const ptrdiff_t * ldu, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 15927
extern void sbdsvdx_(const char * uplo, const char * jobz, const char * range, const ptrdiff_t * n, const float * d, const float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, float * s, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 15952
extern float scsum1_(const ptrdiff_t * n, const float * cx, const ptrdiff_t * incx); 
# 15961
extern void sdisna_(const char * job, const ptrdiff_t * m, const ptrdiff_t * n, const float * d, float * sep, ptrdiff_t * info); 
# 15972
extern void sgbbrd_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ncc, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, float * d, float * e, float * q, const ptrdiff_t * ldq, float * pt, const ptrdiff_t * ldpt, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 15995
extern void sgbcon_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16012
extern void sgbequ_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 16029
extern void sgbequb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 16046
extern void sgbrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * afb, const ptrdiff_t * ldafb, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16070
extern void sgbsv_(const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 16085
extern void sgbsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * afb, const ptrdiff_t * ldafb, ptrdiff_t * ipiv, char * equed, float * r, float * c, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16114
extern void sgbtf2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 16127
extern void sgbtrf_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 16140
extern void sgbtrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 16156
extern void sgebak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * scale, const ptrdiff_t * m, float * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 16171
extern void sgebal_(const char * job, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ilo, ptrdiff_t * ihi, float * scale, ptrdiff_t * info); 
# 16184
extern void sgebd2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * work, ptrdiff_t * info); 
# 16199
extern void sgebrd_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16215
extern void sgecon_(const char * norm, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16229
extern void sgeequ_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 16244
extern void sgeequb_(const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * r, float * c, float * rowcnd, float * colcnd, float * amax, ptrdiff_t * info); 
# 16259
extern void sgees_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * sdim, float * wr, float * wi, float * vs, const ptrdiff_t * ldvs, float * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 16279
extern void sgeesx_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * sdim, float * wr, float * wi, float * vs, const ptrdiff_t * ldvs, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 16304
extern void sgeev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * wr, float * wi, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16323
extern void sgeevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * wr, float * wi, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, float * scale, float * abnrm, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16351
extern void sgehd2_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16364
extern void sgehrd_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16378
extern void sgejsv_(const char * joba, const char * jobu, const char * jobv, const char * jobr, const char * jobt, const char * jobp, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * sva, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16402
extern void sgelq_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * tsize, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16416
extern void sgelq2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16428
extern void sgelqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16441
extern void sgelqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 16455
extern void sgelqt3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 16467
extern void sgels_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16483
extern void sgelsd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * s, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16502
extern void sgelss_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * s, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16520
extern void sgelsx_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const float * rcond, ptrdiff_t * rank, float * work, ptrdiff_t * info); 
# 16537
extern void sgelsy_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const float * rcond, ptrdiff_t * rank, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16555
extern void sgemlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * tsize, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16574
extern void sgemlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 16593
extern void sgemqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * tsize, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16612
extern void sgemqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 16631
extern void sgeql2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16643
extern void sgeqlf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16656
extern void sgeqp3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16670
extern void sgeqr_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * tsize, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16684
extern void sgeqr2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16696
extern void sgeqr2p_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16708
extern void sgeqrf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16721
extern void sgeqrfp_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16734
extern void sgeqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 16748
extern void sgeqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 16760
extern void sgeqrt3_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 16772
extern void sgerfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16794
extern void sgerq2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, ptrdiff_t * info); 
# 16806
extern void sgerqf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16819
extern void sgesc2_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * rhs, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv, float * scale); 
# 16831
extern void sgesdd_(const char * jobz, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16850
extern void sgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 16863
extern void sgesvd_(const char * jobu, const char * jobvt, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16882
extern void sgesvdx_(const char * jobu, const char * jobvt, const char * range, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, float * s, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16908
extern void sgesvj_(const char * joba, const char * jobu, const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 16927
extern void sgesvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, char * equed, float * r, float * c, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 16954
extern void sgetc2_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * jpiv, ptrdiff_t * info); 
# 16965
extern void sgetf2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 16976
extern void sgetrf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 16987
extern void sgetrf2_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 16998
extern void sgetri_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17010
extern void sgetrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 17024
extern void sgetsls_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17040
extern void sggbak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * lscale, const float * rscale, const ptrdiff_t * m, float * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 17056
extern void sggbal_(const char * job, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * ilo, ptrdiff_t * ihi, float * lscale, float * rscale, float * work, ptrdiff_t * info); 
# 17073
extern void sgges_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alphar, float * alphai, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 17099
extern void sgges3_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alphar, float * alphai, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * work, const ptrdiff_t * lwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 17125
extern void sggesx_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, float * alphar, float * alphai, float * beta, float * vsl, const ptrdiff_t * ldvsl, float * vsr, const ptrdiff_t * ldvsr, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 17156
extern void sggev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17178
extern void sggev3_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17200
extern void sggevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, float * lscale, float * rscale, float * abnrm, float * bbnrm, float * rconde, float * rcondv, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 17234
extern void sggglm_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * d, float * x, float * y, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17252
extern void sgghd3_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17273
extern void sgghrd_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 17292
extern void sgglse_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * c, float * d, float * x, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17310
extern void sggqrf_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, float * a, const ptrdiff_t * lda, float * taua, float * b, const ptrdiff_t * ldb, float * taub, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17327
extern void sggrqf_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * taua, float * b, const ptrdiff_t * ldb, float * taub, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17344
extern void sggsvd3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17373
extern void sggsvp3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, ptrdiff_t * k, ptrdiff_t * l, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17403
extern void sgsvj0_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, const float * eps, const float * sfmin, const float * tol, const ptrdiff_t * nsweep, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17425
extern void sgsvj1_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, float * a, const ptrdiff_t * lda, float * d, float * sva, const ptrdiff_t * mv, float * v, const ptrdiff_t * ldv, const float * eps, const float * sfmin, const float * tol, const ptrdiff_t * nsweep, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17448
extern void sgtcon_(const char * norm, const ptrdiff_t * n, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17465
extern void sgtrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * dlf, const float * df, const float * duf, const float * du2, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17490
extern void sgtsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * dl, float * d, float * du, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 17503
extern void sgtsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, float * dlf, float * df, float * duf, float * du2, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17530
extern void sgttrf_(const ptrdiff_t * n, float * dl, float * d, float * du, float * du2, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 17542
extern void sgttrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 17558
extern void sgtts2_(const ptrdiff_t * itrans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * dl, const float * d, const float * du, const float * du2, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb); 
# 17573
extern void shgeqz_(const char * job, const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * t, const ptrdiff_t * ldt, float * alphar, float * alphai, float * beta, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17598
extern void shsein_(const char * side, const char * eigsrc, const char * initv, ptrdiff_t * select, const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, float * wr, const float * wi, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, ptrdiff_t * ifaill, ptrdiff_t * ifailr, ptrdiff_t * info); 
# 17622
extern void shseqr_(const char * job, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * wr, float * wi, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 17641
extern ptrdiff_t sisnan_(const float * sin); 
# 17647
extern void slabad_(float * small, float * large); 
# 17654
extern void slabrd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * d, float * e, float * tauq, float * taup, float * x, const ptrdiff_t * ldx, float * y, const ptrdiff_t * ldy); 
# 17672
extern void slacn2_(const ptrdiff_t * n, float * v, float * x, ptrdiff_t * isgn, float * est, ptrdiff_t * kase, ptrdiff_t * isave); 
# 17684
extern void slacon_(const ptrdiff_t * n, float * v, float * x, ptrdiff_t * isgn, float * est, ptrdiff_t * kase); 
# 17695
extern void slacpy_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb); 
# 17707
extern void sladiv_(const float * a, const float * b, const float * c, const float * d, float * p, float * q); 
# 17718
extern void sladiv1_(float * a, float * b, float * c, float * d, float * p, float * q); 
# 17732
extern float sladiv2_(float * a, float * b, float * c, float * d, float * r, float * t); 
# 17744
extern void slae2_(const float * a, const float * b, const float * c, float * rt1, float * rt2); 
# 17754
extern void slaebz_(const ptrdiff_t * ijob, const ptrdiff_t * nitmax, const ptrdiff_t * n, const ptrdiff_t * mmax, const ptrdiff_t * minp, const ptrdiff_t * nbmin, const float * abstol, const float * reltol, const float * pivmin, const float * d, const float * e, const float * e2, ptrdiff_t * nval, float * ab, float * c, ptrdiff_t * mout, ptrdiff_t * nab, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17779
extern void slaed0_(const ptrdiff_t * icompq, const ptrdiff_t * qsiz, const ptrdiff_t * n, float * d, const float * e, float * q, const ptrdiff_t * ldq, float * qstore, const ptrdiff_t * ldqs, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17796
extern void slaed1_(const ptrdiff_t * n, float * d, float * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, const float * rho, const ptrdiff_t * cutpnt, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17811
extern void slaed2_(ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * n1, float * d, float * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, float * rho, const float * z, float * dlamda, float * w, float * q2, ptrdiff_t * indx, ptrdiff_t * indxc, ptrdiff_t * indxp, ptrdiff_t * coltyp, ptrdiff_t * info); 
# 17833
extern void slaed3_(const ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * n1, float * d, float * q, const ptrdiff_t * ldq, const float * rho, float * dlamda, const float * q2, const ptrdiff_t * indx, const ptrdiff_t * ctot, float * w, float * s, ptrdiff_t * info); 
# 17852
extern void slaed4_(const ptrdiff_t * n, const ptrdiff_t * i, const float * d, const float * z, float * delta, const float * rho, float * dlam, ptrdiff_t * info); 
# 17865
extern void slaed5_(const ptrdiff_t * i, const float * d, const float * z, float * delta, const float * rho, float * dlam); 
# 17876
extern void slaed6_(const ptrdiff_t * kniter, const ptrdiff_t * orgati, const float * rho, const float * d, const float * z, const float * finit, float * tau, ptrdiff_t * info); 
# 17889
extern void slaed7_(const ptrdiff_t * icompq, const ptrdiff_t * n, const ptrdiff_t * qsiz, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, float * d, float * q, const ptrdiff_t * ldq, ptrdiff_t * indxq, const float * rho, const ptrdiff_t * cutpnt, float * qstore, ptrdiff_t * qptr, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const float * givnum, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 17916
extern void slaed8_(const ptrdiff_t * icompq, ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * qsiz, float * d, float * q, const ptrdiff_t * ldq, const ptrdiff_t * indxq, float * rho, const ptrdiff_t * cutpnt, const float * z, float * dlamda, float * q2, const ptrdiff_t * ldq2, float * w, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, float * givnum, ptrdiff_t * indxp, ptrdiff_t * indx, ptrdiff_t * info); 
# 17943
extern void slaed9_(const ptrdiff_t * k, const ptrdiff_t * kstart, const ptrdiff_t * kstop, const ptrdiff_t * n, float * d, float * q, const ptrdiff_t * ldq, const float * rho, const float * dlamda, const float * w, float * s, const ptrdiff_t * lds, ptrdiff_t * info); 
# 17961
extern void slaeda_(const ptrdiff_t * n, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const float * givnum, const float * q, const ptrdiff_t * qptr, float * z, float * ztemp, ptrdiff_t * info); 
# 17980
extern void slaein_(const ptrdiff_t * rightv, const ptrdiff_t * noinit, const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, const float * wr, const float * wi, float * vr, float * vi, float * b, const ptrdiff_t * ldb, float * work, const float * eps3, const float * smlnum, const float * bignum, ptrdiff_t * info); 
# 18001
extern void slaev2_(const float * a, const float * b, const float * c, float * rt1, float * rt2, float * cs1, float * sn1); 
# 18013
extern void slaexc_(const ptrdiff_t * wantq, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * q, const ptrdiff_t * ldq, const ptrdiff_t * j1_, const ptrdiff_t * n1, const ptrdiff_t * n2, float * work, ptrdiff_t * info); 
# 18029
extern void slag2_(const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * safmin, float * scale1, float * scale2, float * wr1, float * wr2, float * wi); 
# 18044
extern void slag2d_(const ptrdiff_t * m, const ptrdiff_t * n, const float * sa, const ptrdiff_t * ldsa, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 18056
extern void slags2_(const ptrdiff_t * upper, const float * a1, const float * a2, const float * a3, const float * b1, const float * b2, const float * b3, float * csu, float * snu, float * csv, float * snv, float * csq, float * snq); 
# 18074
extern void slagtf_(const ptrdiff_t * n, float * a, const float * lambda, float * b, float * c, const float * tol, float * d, ptrdiff_t * in, ptrdiff_t * info); 
# 18088
extern void slagtm_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * alpha, const float * dl, const float * d, const float * du, const float * x, const ptrdiff_t * ldx, const float * beta, float * b, const ptrdiff_t * ldb); 
# 18105
extern void slagts_(const ptrdiff_t * job, const ptrdiff_t * n, const float * a, const float * b, const float * c, const float * d, const ptrdiff_t * in, float * y, float * tol, ptrdiff_t * info); 
# 18120
extern void slagv2_(float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * csl, float * snl, float * csr, float * snr); 
# 18136
extern void slahqr_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * wr, float * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 18155
extern void slahr2_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * tau, float * t, const ptrdiff_t * ldt, float * y, const ptrdiff_t * ldy); 
# 18170
extern void slaic1_(const ptrdiff_t * job, const ptrdiff_t * j, const float * x, const float * sest, const float * w, const float * gamma_, float * sestpr, float * s, float * c); 
# 18184
extern ptrdiff_t slaisnan_(const float * sin1, const float * sin2); 
# 18191
extern void slaln2_(const ptrdiff_t * ltrans, const ptrdiff_t * na, const ptrdiff_t * nw, const float * smin, const float * ca, const float * a, const ptrdiff_t * lda, const float * d1, const float * d2, const float * b, const ptrdiff_t * ldb, const float * wr, const float * wi, float * x, const ptrdiff_t * ldx, float * scale, float * xnorm, ptrdiff_t * info); 
# 18214
extern void slals0_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * nrhs, float * b, const ptrdiff_t * ldb, float * bx, const ptrdiff_t * ldbx, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const float * givnum, const ptrdiff_t * ldgnum, const float * poles, const float * difl, const float * difr, const float * z, const ptrdiff_t * k, const float * c, const float * s, float * work, ptrdiff_t * info); 
# 18243
extern void slalsa_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * b, const ptrdiff_t * ldb, float * bx, const ptrdiff_t * ldbx, const float * u, const ptrdiff_t * ldu, const float * vt, const ptrdiff_t * k, const float * difl, const float * difr, const float * z, const float * poles, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const ptrdiff_t * perm, const float * givnum, const float * c, const float * s, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 18274
extern void slalsd_(const char * uplo, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * d, float * e, float * b, const ptrdiff_t * ldb, const float * rcond, ptrdiff_t * rank, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 18292
extern void slamrg_(const ptrdiff_t * n1, const ptrdiff_t * n2, const float * a, const ptrdiff_t * strd1, const ptrdiff_t * strd2, ptrdiff_t * index); 
# 18303
extern void slamswlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 18324
extern void slamtsqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 18345
extern ptrdiff_t slaneg_(const ptrdiff_t * n, const float * d, const float * lld, const float * sigma, const float * pivmin, const ptrdiff_t * r); 
# 18359
extern float slangb_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * ab, const ptrdiff_t * ldab, float * work); 
# 18375
extern float slange_(const char * norm, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 18390
extern float slangt_(const char * norm, const ptrdiff_t * n, const float * dl, const float * d, const float * du); 
# 18404
extern float slanhs_(const char * norm, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 18418
extern float slansb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const float * ab, const ptrdiff_t * ldab, float * work); 
# 18434
extern float slansf_(const char * norm, const char * transr, const char * uplo, const ptrdiff_t * n, const float * a, float * work); 
# 18449
extern float slansp_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * ap, float * work); 
# 18463
extern float slanst_(const char * norm, const ptrdiff_t * n, const float * d, const float * e); 
# 18476
extern float slansy_(const char * norm, const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 18491
extern float slantb_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const float * ab, const ptrdiff_t * ldab, float * work); 
# 18508
extern float slantp_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * ap, float * work); 
# 18523
extern float slantr_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * work); 
# 18537
extern void slanv2_(float * a, float * b, float * c, float * d, float * rt1r, float * rt1i, float * rt2r, float * rt2i, float * cs, float * sn); 
# 18552
extern void slapll_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, float * ssmin); 
# 18563
extern void slapmr_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, float * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 18574
extern void slapmt_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, float * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 18588
extern float slapy2_(const float * x, const float * y); 
# 18599
extern float slapy3_(const float * x, const float * y, const float * z); 
# 18608
extern void slaqgb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, float * ab, const ptrdiff_t * ldab, const float * r, const float * c, const float * rowcnd, const float * colcnd, const float * amax, char * equed); 
# 18625
extern void slaqge_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * r, const float * c, const float * rowcnd, const float * colcnd, const float * amax, char * equed); 
# 18640
extern void slaqp2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * vn1, float * vn2, float * work); 
# 18655
extern void slaqps_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, float * tau, float * vn1, float * vn2, float * auxv, float * f, const ptrdiff_t * ldf); 
# 18674
extern void slaqr0_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * wr, float * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 18695
extern void slaqr1_(const ptrdiff_t * n, const float * h, const ptrdiff_t * ldh, const float * sr1, float * si1, float * sr2, float * si2, float * v); 
# 18708
extern void slaqr2_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, float * sr, float * si, float * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, float * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, float * work, const ptrdiff_t * lwork); 
# 18739
extern void slaqr3_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, float * sr, float * si, float * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, float * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, float * work, const ptrdiff_t * lwork); 
# 18770
extern void slaqr4_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * h, const ptrdiff_t * ldh, float * wr, float * wi, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 18791
extern void slaqr5_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * kacc22, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nshfts, float * sr, float * si, float * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, float * z, const ptrdiff_t * ldz, float * v, const ptrdiff_t * ldv, float * u, const ptrdiff_t * ldu, const ptrdiff_t * nv, float * wv, const ptrdiff_t * ldwv, const ptrdiff_t * nh, float * wh, const ptrdiff_t * ldwh); 
# 18821
extern void slaqsb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, const float * s, const float * scond, const float * amax, char * equed); 
# 18835
extern void slaqsp_(const char * uplo, const ptrdiff_t * n, float * ap, const float * s, const float * scond, const float * amax, char * equed); 
# 18847
extern void slaqsy_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * s, const float * scond, const float * amax, char * equed); 
# 18860
extern void slaqtr_(const ptrdiff_t * ltran, const ptrdiff_t * lreal, const ptrdiff_t * n, const float * t, const ptrdiff_t * ldt, const float * b, const float * w, float * scale, float * x, float * work, ptrdiff_t * info); 
# 18876
extern void slar1v_(const ptrdiff_t * n, const ptrdiff_t * b1, const ptrdiff_t * bn, const float * lambda, const float * d, const float * l, const float * ld, const float * lld, const float * pivmin, const float * gaptol, float * z, const ptrdiff_t * wantnc, ptrdiff_t * negcnt, float * ztz, float * mingma, ptrdiff_t * r, ptrdiff_t * isuppz, float * nrminv, float * resid, float * rqcorr, float * work); 
# 18902
extern void slar2v_(const ptrdiff_t * n, float * x, float * y, float * z, const ptrdiff_t * incx, const float * c, const float * s, const ptrdiff_t * incc); 
# 18915
extern void slarf_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const ptrdiff_t * incv, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 18929
extern void slarfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * ldwork); 
# 18949
extern void slarfg_(const ptrdiff_t * n, float * alpha, float * x, const ptrdiff_t * incx, float * tau); 
# 18959
extern void slarfgp_(const ptrdiff_t * n, float * alpha, float * x, const ptrdiff_t * incx, float * tau); 
# 18969
extern void slarft_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, const float * v, const ptrdiff_t * ldv, const float * tau, float * t, const ptrdiff_t * ldt); 
# 18983
extern void slarfx_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const float * v, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 18996
extern void slarfy_(char * uplo, ptrdiff_t * n, float * v, ptrdiff_t * incv, float * tau, float * c, ptrdiff_t * ldc, float * work); 
# 19009
extern void slargv_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, float * c, const ptrdiff_t * incc); 
# 19021
extern void slarnv_(const ptrdiff_t * idist, ptrdiff_t * iseed, const ptrdiff_t * n, float * x); 
# 19030
extern void slarra_(const ptrdiff_t * n, const float * d, float * e, float * e2, const float * spltol, const float * tnrm, ptrdiff_t * nsplit, ptrdiff_t * isplit, ptrdiff_t * info); 
# 19044
extern void slarrb_(const ptrdiff_t * n, const float * d, const float * lld, const ptrdiff_t * ifirst, const ptrdiff_t * ilast, const float * rtol1, const float * rtol2, const ptrdiff_t * offset, float * w, float * wgap, float * werr, float * work, ptrdiff_t * iwork, const float * pivmin, const float * spdiam, const ptrdiff_t * twist, ptrdiff_t * info); 
# 19066
extern void slarrc_(const char * jobt, const ptrdiff_t * n, const float * vl, const float * vu, const float * d, const float * e, const float * pivmin, ptrdiff_t * eigcnt, ptrdiff_t * lcnt, ptrdiff_t * rcnt, ptrdiff_t * info); 
# 19082
extern void slarrd_(const char * range, const char * order, const ptrdiff_t * n, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * gers, const float * reltol, const float * d, const float * e, const float * e2, const float * pivmin, const ptrdiff_t * nsplit, const ptrdiff_t * isplit, ptrdiff_t * m, float * w, float * werr, float * wl, float * wu, ptrdiff_t * iblock, ptrdiff_t * indexw, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 19112
extern void slarre_(const char * range, const ptrdiff_t * n, float * vl, float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, float * d, float * e, float * e2, const float * rtol1, const float * rtol2, const float * spltol, ptrdiff_t * nsplit, ptrdiff_t * isplit, ptrdiff_t * m, float * w, float * werr, float * wgap, ptrdiff_t * iblock, ptrdiff_t * indexw, float * gers, float * pivmin, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 19142
extern void slarrf_(const ptrdiff_t * n, const float * d, const float * l, const float * ld, const ptrdiff_t * clstrt, const ptrdiff_t * clend, const float * w, float * wgap, const float * werr, const float * spdiam, const float * clgapl, float * clgapr, const float * pivmin, float * sigma, float * dplus, float * lplus, float * work, ptrdiff_t * info); 
# 19165
extern void slarrj_(const ptrdiff_t * n, const float * d, const float * e2, const ptrdiff_t * ifirst, const ptrdiff_t * ilast, const float * rtol, const ptrdiff_t * offset, float * w, float * werr, float * work, ptrdiff_t * iwork, const float * pivmin, const float * spdiam, ptrdiff_t * info); 
# 19184
extern void slarrk_(const ptrdiff_t * n, const ptrdiff_t * iw, const float * gl, const float * gu, const float * d, const float * e2, const float * pivmin, const float * reltol, float * w, float * werr, ptrdiff_t * info); 
# 19200
extern void slarrr_(const ptrdiff_t * n, const float * d, float * e, ptrdiff_t * info); 
# 19209
extern void slarrv_(const ptrdiff_t * n, const float * vl, const float * vu, float * d, float * l, float * pivmin, const ptrdiff_t * isplit, const ptrdiff_t * m, const ptrdiff_t * dol, const ptrdiff_t * dou, const float * minrgp, const float * rtol1, const float * rtol2, float * w, float * werr, float * wgap, const ptrdiff_t * iblock, const ptrdiff_t * indexw, const float * gers, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 19239
extern void slartg_(const float * f, const float * g, float * cs, float * sn, float * r); 
# 19249
extern void slartgp_(float * f, float * g, float * cs, float * sn, float * r); 
# 19259
extern void slartgs_(const float * x, const float * y, const float * sigma, float * cs, float * sn); 
# 19269
extern void slartv_(const ptrdiff_t * n, float * x, const ptrdiff_t * incx, float * y, const ptrdiff_t * incy, const float * c, const float * s, const ptrdiff_t * incc); 
# 19282
extern void slaruv_(ptrdiff_t * iseed, const ptrdiff_t * n, float * x); 
# 19290
extern void slarz_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const float * v, const ptrdiff_t * incv, const float * tau, float * c, const ptrdiff_t * ldc, float * work); 
# 19305
extern void slarzb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * ldwork); 
# 19326
extern void slarzt_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, float * v, const ptrdiff_t * ldv, const float * tau, float * t, const ptrdiff_t * ldt); 
# 19340
extern void slas2_(const float * f, const float * g, const float * h, float * ssmin, float * ssmax); 
# 19350
extern void slascl_(const char * type, const ptrdiff_t * kl, const ptrdiff_t * ku, const float * cfrom, const float * cto, const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 19365
extern void slasd0_(const ptrdiff_t * n, const ptrdiff_t * sqre, float * d, const float * e, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, const ptrdiff_t * smlsiz, ptrdiff_t * iwork, float * work, ptrdiff_t * info); 
# 19382
extern void slasd1_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, float * d, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, ptrdiff_t * idxq, ptrdiff_t * iwork, float * work, ptrdiff_t * info); 
# 19401
extern void slasd2_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, ptrdiff_t * k, float * d, float * z, const float * alpha, const float * beta, float * u, const ptrdiff_t * ldu, float * vt, const ptrdiff_t * ldvt, float * dsigma, float * u2, const ptrdiff_t * ldu2, float * vt2, const ptrdiff_t * ldvt2, ptrdiff_t * idxp, ptrdiff_t * idx, ptrdiff_t * idxc, ptrdiff_t * idxq, ptrdiff_t * coltyp, ptrdiff_t * info); 
# 19429
extern void slasd3_(const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * k, float * d, float * q, const ptrdiff_t * ldq, float * dsigma, float * u, const ptrdiff_t * ldu, const float * u2, const ptrdiff_t * ldu2, float * vt, const ptrdiff_t * ldvt, float * vt2, const ptrdiff_t * ldvt2, const ptrdiff_t * idxc, const ptrdiff_t * ctot, float * z, ptrdiff_t * info); 
# 19454
extern void slasd4_(const ptrdiff_t * n, const ptrdiff_t * i, const float * d, const float * z, float * delta, const float * rho, float * sigma, float * work, ptrdiff_t * info); 
# 19468
extern void slasd5_(const ptrdiff_t * i, const float * d, const float * z, float * delta, const float * rho, float * dsigma, float * work); 
# 19480
extern void slasd6_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, float * d, float * vf, float * vl, float * alpha, float * beta, ptrdiff_t * idxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, float * givnum, const ptrdiff_t * ldgnum, float * poles, float * difl, float * difr, float * z, ptrdiff_t * k, float * c, float * s, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 19511
extern void slasd7_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, ptrdiff_t * k, float * d, float * z, float * zw, float * vf, float * vfw, float * vl, float * vlw, const float * alpha, const float * beta, float * dsigma, ptrdiff_t * idx, ptrdiff_t * idxp, const ptrdiff_t * idxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, float * givnum, const ptrdiff_t * ldgnum, float * c, float * s, ptrdiff_t * info); 
# 19543
extern void slasd8_(const ptrdiff_t * icompq, const ptrdiff_t * k, float * d, float * z, float * vf, float * vl, float * difl, float * difr, const ptrdiff_t * lddifr, float * dsigma, float * work, ptrdiff_t * info); 
# 19560
extern void slasda_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * sqre, float * d, const float * e, float * u, const ptrdiff_t * ldu, float * vt, ptrdiff_t * k, float * difl, float * difr, float * z, float * poles, ptrdiff_t * givptr, ptrdiff_t * givcol, const ptrdiff_t * ldgcol, ptrdiff_t * perm, float * givnum, float * c, float * s, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 19589
extern void slasdq_(const char * uplo, const ptrdiff_t * sqre, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, float * d, float * e, float * vt, const ptrdiff_t * ldvt, float * u, const ptrdiff_t * ldu, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 19610
extern void slasdt_(const ptrdiff_t * n, ptrdiff_t * lvl, ptrdiff_t * nd, ptrdiff_t * inode, ptrdiff_t * ndiml, ptrdiff_t * ndimr, const ptrdiff_t * msub); 
# 19622
extern void slaset_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * beta, float * a, const ptrdiff_t * lda); 
# 19634
extern void slasq1_(const ptrdiff_t * n, float * d, float * e, float * work, ptrdiff_t * info); 
# 19644
extern void slasq2_(const ptrdiff_t * n, float * z, ptrdiff_t * info); 
# 19652
extern void slasq3_(const ptrdiff_t * i0, const ptrdiff_t * n0, const float * z, ptrdiff_t * pp, float * dmin, float * sigma, float * desig, const float * qmax, ptrdiff_t * nfail, ptrdiff_t * iter, ptrdiff_t * ndiv, const ptrdiff_t * ieee, ptrdiff_t * ttype, float * dmin1, float * dmin2, float * dn, float * dn1, float * dn2, float * g, float * tau); 
# 19677
extern void slasq4_(const ptrdiff_t * i0, const ptrdiff_t * n0, const float * z, const ptrdiff_t * pp, ptrdiff_t * n0in, const float * dmin, const float * dmin1, const float * dmin2, const float * dn, const float * dn1, const float * dn2, float * tau, ptrdiff_t * ttype, float * g); 
# 19696
extern void slasq5_(const ptrdiff_t * i0, const ptrdiff_t * n0, const float * z, const ptrdiff_t * pp, const float * tau, const float * sigma, float * dmin, float * dmin1, float * dmin2, float * dn, float * dnm1, float * dnm2, const ptrdiff_t * ieee, const float * eps); 
# 19715
extern void slasq6_(const ptrdiff_t * i0, const ptrdiff_t * n0, const float * z, const ptrdiff_t * pp, float * dmin, float * dmin1, float * dmin2, float * dn, float * dnm1, float * dnm2); 
# 19730
extern void slasr_(const char * side, const char * pivot, const char * direct, const ptrdiff_t * m, const ptrdiff_t * n, const float * c, const float * s, float * a, const ptrdiff_t * lda); 
# 19744
extern void slasrt_(const char * id, const ptrdiff_t * n, float * d, ptrdiff_t * info); 
# 19753
extern void slassq_(const ptrdiff_t * n, const float * x, const ptrdiff_t * incx, float * scale, float * sumsq); 
# 19763
extern void slasv2_(const float * f, const float * g, const float * h, float * ssmin, float * ssmax, float * snr, float * csr, float * snl, float * csl); 
# 19777
extern void slaswlq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 19793
extern void slaswp_(const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * k1, const ptrdiff_t * k2, const ptrdiff_t * ipiv, const ptrdiff_t * incx); 
# 19805
extern void slasy2_(const ptrdiff_t * ltranl, const ptrdiff_t * ltranr, const ptrdiff_t * isgn, const ptrdiff_t * n1, const ptrdiff_t * n2, const float * tl, const ptrdiff_t * ldtl, const float * tr, const ptrdiff_t * ldtr, const float * b, const ptrdiff_t * ldb, float * scale, float * x, const ptrdiff_t * ldx, float * xnorm, ptrdiff_t * info); 
# 19826
extern void slasyf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 19841
extern void slasyf_aa_(const char * uplo, const ptrdiff_t * j1_, const ptrdiff_t * m, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * h, const ptrdiff_t * ldh, float * work, ptrdiff_t * info); 
# 19857
extern void slasyf_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 19873
extern void slasyf_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 19888
extern void slatbs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 19905
extern void slatdf_(const ptrdiff_t * ijob, const ptrdiff_t * n, const float * z, const ptrdiff_t * ldz, float * rhs, float * rdsum, float * rdscal, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv); 
# 19919
extern void slatps_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const float * ap, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 19934
extern void slatrd_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * e, float * tau, float * w, const ptrdiff_t * ldw); 
# 19948
extern void slatrs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * x, float * scale, float * cnorm, ptrdiff_t * info); 
# 19964
extern void slatrz_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * tau, float * work); 
# 19976
extern void slatsqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * t, const ptrdiff_t * ldt, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 19992
extern void slauu2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20002
extern void slauum_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20012
extern void sopgtr_(const char * uplo, const ptrdiff_t * n, const float * ap, const float * tau, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * info); 
# 20025
extern void sopmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * ap, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20041
extern void sorbdb_(const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x12, const ptrdiff_t * ldx12, float * x21, const ptrdiff_t * ldx21, float * x22, const ptrdiff_t * ldx22, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * tauq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20068
extern void sorbdb1_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20088
extern void sorbdb2_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20108
extern void sorbdb3_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20128
extern void sorbdb4_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * phi, float * taup1, float * taup2, float * tauq1, float * phantom, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20149
extern void sorbdb5_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, float * x1, const ptrdiff_t * incx1, float * x2, const ptrdiff_t * incx2, float * q1, const ptrdiff_t * ldq1, float * q2, const ptrdiff_t * ldq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20168
extern void sorbdb6_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, float * x1, const ptrdiff_t * incx1, float * x2, const ptrdiff_t * incx2, float * q1, const ptrdiff_t * ldq1, float * q2, const ptrdiff_t * ldq2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20187
extern void sorcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x12, const ptrdiff_t * ldx12, float * x21, const ptrdiff_t * ldx21, float * x22, const ptrdiff_t * ldx22, float * theta, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * v2t, const ptrdiff_t * ldv2t, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20222
extern void sorcsd2by1_(const char * jobu1, const char * jobu2, const char * jobv1t, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, float * x11, const ptrdiff_t * ldx11, float * x21, const ptrdiff_t * ldx21, float * theta, float * u1, const ptrdiff_t * ldu1, float * u2, const ptrdiff_t * ldu2, float * v1t, const ptrdiff_t * ldv1t, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20248
extern void sorg2l_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 20261
extern void sorg2r_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 20274
extern void sorgbr_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20289
extern void sorghr_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20303
extern void sorgl2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 20316
extern void sorglq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20330
extern void sorgql_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20344
extern void sorgqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20358
extern void sorgr2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, ptrdiff_t * info); 
# 20371
extern void sorgrq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20385
extern void sorgtr_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20398
extern void sorm22_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, const ptrdiff_t * n2, const float * q, const ptrdiff_t * ldq, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20416
extern void sorm2l_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20433
extern void sorm2r_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20450
extern void sormbr_(const char * vect, const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20469
extern void sormhr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20488
extern void sorml2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20505
extern void sormlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20523
extern void sormql_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20541
extern void sormqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20559
extern void sormr2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20576
extern void sormr3_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, ptrdiff_t * info); 
# 20594
extern void sormrq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20612
extern void sormrz_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20631
extern void sormtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * tau, float * c, const ptrdiff_t * ldc, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 20649
extern void spbcon_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20664
extern void spbequ_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 20678
extern void spbrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * afb, const ptrdiff_t * ldafb, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20700
extern void spbstf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 20711
extern void spbsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 20725
extern void spbsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, float * ab, const ptrdiff_t * ldab, float * afb, const ptrdiff_t * ldafb, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20751
extern void spbtf2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 20762
extern void spbtrf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 20773
extern void spbtrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 20787
extern void spftrf_(const char * transr, const char * uplo, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 20797
extern void spftri_(const char * transr, const char * uplo, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 20807
extern void spftrs_(const char * transr, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 20820
extern void spocon_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20834
extern void spoequ_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 20846
extern void spoequb_(const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 20858
extern void sporfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20879
extern void sposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 20892
extern void sposvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20917
extern void spotf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20927
extern void spotrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20937
extern void spotrf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20947
extern void spotri_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 20957
extern void spotrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 20970
extern void sppcon_(const char * uplo, const ptrdiff_t * n, const float * ap, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 20983
extern void sppequ_(const char * uplo, const ptrdiff_t * n, const float * ap, float * s, float * scond, float * amax, ptrdiff_t * info); 
# 20995
extern void spprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * afp, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21014
extern void sppsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21026
extern void sppsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, float * afp, char * equed, float * s, float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21049
extern void spptrf_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 21058
extern void spptri_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 21067
extern void spptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21079
extern void spstf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const float * tol, float * work, ptrdiff_t * info); 
# 21093
extern void spstrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const float * tol, float * work, ptrdiff_t * info); 
# 21107
extern void sptcon_(const ptrdiff_t * n, const float * d, const float * e, const float * anorm, float * rcond, float * work, ptrdiff_t * info); 
# 21119
extern void spteqr_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21132
extern void sptrfs_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, const float * df, const float * ef, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * info); 
# 21151
extern void sptsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, float * d, float * e, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21163
extern void sptsvx_(const char * fact, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * df, float * ef, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * info); 
# 21184
extern void spttrf_(const ptrdiff_t * n, float * d, float * e, ptrdiff_t * info); 
# 21193
extern void spttrs_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21205
extern void sptts2_(const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * d, const float * e, float * b, const ptrdiff_t * ldb); 
# 21216
extern void srscl_(const ptrdiff_t * n, const float * sa, float * sx, const ptrdiff_t * incx); 
# 21225
extern void ssb2st_kernels_(char * uplo, ptrdiff_t * wantz, ptrdiff_t * ttype, ptrdiff_t * st, ptrdiff_t * ed, ptrdiff_t * sweep, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * ib, float * a, ptrdiff_t * lda, float * v, float * tau, ptrdiff_t * ldvt, float * work); 
# 21245
extern void ssbev_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21261
extern void ssbev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 21278
extern void ssbevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21297
extern void ssbevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 21316
extern void ssbevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * q, const ptrdiff_t * ldq, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21343
extern void ssbevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * q, ptrdiff_t * ldq, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21371
extern void ssbgst_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, const float * bb, const ptrdiff_t * ldbb, float * x, const ptrdiff_t * ldx, float * work, ptrdiff_t * info); 
# 21389
extern void ssbgv_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21408
extern void ssbgvd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21430
extern void ssbgvx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, float * ab, const ptrdiff_t * ldab, float * bb, const ptrdiff_t * ldbb, float * q, const ptrdiff_t * ldq, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21460
extern void ssbtrd_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, float * ab, const ptrdiff_t * ldab, float * d, float * e, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * info); 
# 21477
extern void ssfrk_(const char * transr, const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const float * alpha, const float * a, const ptrdiff_t * lda, const float * beta, float * c); 
# 21492
extern void sspcon_(const char * uplo, const ptrdiff_t * n, const float * ap, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21506
extern void sspev_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21520
extern void sspevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21537
extern void sspevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * ap, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21560
extern void sspgst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * ap, const float * bp, ptrdiff_t * info); 
# 21571
extern void sspgv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21587
extern void sspgvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21606
extern void sspgvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * ap, float * bp, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21631
extern void ssprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * afp, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21651
extern void sspsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * ap, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21664
extern void sspsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * afp, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21686
extern void ssptrd_(const char * uplo, const ptrdiff_t * n, float * ap, float * d, float * e, float * tau, ptrdiff_t * info); 
# 21698
extern void ssptrf_(const char * uplo, const ptrdiff_t * n, float * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 21708
extern void ssptri_(const char * uplo, const ptrdiff_t * n, float * ap, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 21719
extern void ssptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 21732
extern void sstebz_(const char * range, const char * order, const ptrdiff_t * n, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, const float * d, const float * e, ptrdiff_t * m, ptrdiff_t * nsplit, float * w, ptrdiff_t * iblock, ptrdiff_t * isplit, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21755
extern void sstedc_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21771
extern void sstegr_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21796
extern void sstein_(const ptrdiff_t * n, const float * d, const float * e, const ptrdiff_t * m, const float * w, const ptrdiff_t * iblock, const ptrdiff_t * isplit, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21814
extern void sstemr_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, const ptrdiff_t * nzc, ptrdiff_t * isuppz, ptrdiff_t * tryrac, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21840
extern void ssteqr_(const char * compz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21853
extern void ssterf_(const ptrdiff_t * n, float * d, float * e, ptrdiff_t * info); 
# 21862
extern void sstev_(const char * jobz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * info); 
# 21875
extern void sstevd_(const char * jobz, const ptrdiff_t * n, float * d, float * e, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21891
extern void sstevr_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 21916
extern void sstevx_(const char * jobz, const char * range, const ptrdiff_t * n, float * d, float * e, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 21939
extern void ssycon_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21954
extern void ssycon_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21970
extern void ssycon_rook_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const float * anorm, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 21985
extern void ssyconv_(const char * uplo, const char * way, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * e, ptrdiff_t * info); 
# 21998
extern void ssyconvf_(char * uplo, char * way, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 22011
extern void ssyconvf_rook_(char * uplo, char * way, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 22024
extern void ssyequb_(char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * s, float * scond, float * amax, float * work, ptrdiff_t * info); 
# 22038
extern void ssyev_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22052
extern void ssyev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * w, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22066
extern void ssyevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * w, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 22082
extern void ssyevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * w, float * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 22098
extern void ssyevr_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 22124
extern void ssyevr_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, ptrdiff_t * isuppz, float * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 22150
extern void ssyevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 22175
extern void ssyevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * vl, float * vu, ptrdiff_t * il, ptrdiff_t * iu, float * abstol, ptrdiff_t * m, float * w, float * z, ptrdiff_t * ldz, float * work, ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 22200
extern void ssygs2_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 22213
extern void ssygst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 22226
extern void ssygv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * w, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22243
extern void ssygv_2stage_(ptrdiff_t * itype, char * jobz, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * b, ptrdiff_t * ldb, float * w, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22260
extern void ssygvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * w, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 22279
extern void ssygvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * vl, const float * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const float * abstol, ptrdiff_t * m, float * w, float * z, const ptrdiff_t * ldz, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 22307
extern void ssyrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 22329
extern void ssysv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22345
extern void ssysv_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22361
extern void ssysv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22378
extern void ssysv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22394
extern void ssysvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const float * b, const ptrdiff_t * ldb, float * x, const ptrdiff_t * ldx, float * rcond, float * ferr, float * berr, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 22419
extern void ssyswapr_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 22430
extern void ssytd2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tau, ptrdiff_t * info); 
# 22443
extern void ssytf2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 22454
extern void ssytf2_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 22466
extern void ssytf2_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 22477
extern void ssytrd_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * d, float * e, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22492
extern void ssytrd_2stage_(char * vect, char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * d, float * e, float * tau, float * hous2, ptrdiff_t * lhous2, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22510
extern void ssytrd_sb2st_(char * stage1, char * vect, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * ab, ptrdiff_t * ldab, float * d, float * e, float * hous, ptrdiff_t * lhous, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22529
extern void ssytrd_sy2sb_(char * uplo, ptrdiff_t * n, ptrdiff_t * kd, float * a, ptrdiff_t * lda, float * ab, ptrdiff_t * ldab, float * tau, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22545
extern void ssytrf_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22558
extern void ssytrf_aa_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22571
extern void ssytrf_rk_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22585
extern void ssytrf_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22598
extern void ssytri_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 22610
extern void ssytri2_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22623
extern void ssytri2x_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 22636
extern void ssytri_3_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 22650
extern void ssytri_3x_(char * uplo, ptrdiff_t * n, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 22664
extern void ssytri_rook_(const char * uplo, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * work, ptrdiff_t * info); 
# 22676
extern void ssytrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 22690
extern void ssytrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 22705
extern void ssytrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, float * a, ptrdiff_t * lda, float * e, ptrdiff_t * ipiv, float * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 22720
extern void ssytrs_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, const float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22736
extern void ssytrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 22750
extern void stbcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const float * ab, const ptrdiff_t * ldab, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 22766
extern void stbrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 22788
extern void stbtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const float * ab, const ptrdiff_t * ldab, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 22804
extern void stfsm_(const char * transr, const char * side, const char * uplo, const char * trans, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const float * alpha, const float * a, float * b, const ptrdiff_t * ldb); 
# 22820
extern void stftri_(const char * transr, const char * uplo, const char * diag, const ptrdiff_t * n, float * a, ptrdiff_t * info); 
# 22831
extern void stfttp_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * arf, float * ap, ptrdiff_t * info); 
# 22842
extern void stfttr_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * arf, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 22854
extern void stgevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * s, const ptrdiff_t * lds, const float * p, const ptrdiff_t * ldp, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, ptrdiff_t * info); 
# 22875
extern void stgex2_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, const ptrdiff_t * j1_, const ptrdiff_t * n1, const ptrdiff_t * n2, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22897
extern void stgexc_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, ptrdiff_t * ifst, ptrdiff_t * ilst, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 22918
extern void stgsen_(const ptrdiff_t * ijob, const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * select, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * alphar, float * alphai, float * beta, float * q, const ptrdiff_t * ldq, float * z, const ptrdiff_t * ldz, ptrdiff_t * m, float * pl, float * pr, float * dif, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 22948
extern void stgsja_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, const float * tola, const float * tolb, float * alpha, float * beta, float * u, const ptrdiff_t * ldu, float * v, const ptrdiff_t * ldv, float * q, const ptrdiff_t * ldq, float * work, ptrdiff_t * ncycle, ptrdiff_t * info); 
# 22978
extern void stgsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * vl, const ptrdiff_t * ldvl, const float * vr, const ptrdiff_t * ldvr, float * s, float * dif, const ptrdiff_t * mm, ptrdiff_t * m, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23003
extern void stgsy2_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, const float * d, const ptrdiff_t * ldd, const float * e, const ptrdiff_t * lde, float * f, const ptrdiff_t * ldf, float * scale, float * rdsum, float * rdscal, ptrdiff_t * iwork, ptrdiff_t * pq, ptrdiff_t * info); 
# 23030
extern void stgsyl_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, const float * d, const ptrdiff_t * ldd, const float * e, const ptrdiff_t * lde, float * f, const ptrdiff_t * ldf, float * scale, float * dif, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23057
extern void stpcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * ap, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23071
extern void stplqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * mb, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 23088
extern void stplqt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 23103
extern void stpmlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * mb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 23125
extern void stpmqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * nb, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, ptrdiff_t * info); 
# 23147
extern void stpqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * nb, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, float * work, ptrdiff_t * info); 
# 23164
extern void stpqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 23179
extern void stprfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const float * v, const ptrdiff_t * ldv, const float * t, const ptrdiff_t * ldt, float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, float * work, const ptrdiff_t * ldwork); 
# 23202
extern void stprfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23222
extern void stptri_(const char * uplo, const char * diag, const ptrdiff_t * n, float * ap, ptrdiff_t * info); 
# 23232
extern void stptrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * ap, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 23246
extern void stpttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * ap, float * arf, ptrdiff_t * info); 
# 23257
extern void stpttr_(const char * uplo, const ptrdiff_t * n, const float * ap, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 23268
extern void strcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * rcond, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23283
extern void strevc_(const char * side, const char * howmny, ptrdiff_t * select, const ptrdiff_t * n, const float * t, const ptrdiff_t * ldt, float * vl, const ptrdiff_t * ldvl, float * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, float * work, ptrdiff_t * info); 
# 23302
extern void strevc3_(char * side, char * howmny, ptrdiff_t * select, ptrdiff_t * n, float * t, ptrdiff_t * ldt, float * vl, ptrdiff_t * ldvl, float * vr, ptrdiff_t * ldvr, ptrdiff_t * mm, ptrdiff_t * m, float * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 23322
extern void strexc_(const char * compq, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * q, const ptrdiff_t * ldq, ptrdiff_t * ifst, ptrdiff_t * ilst, float * work, ptrdiff_t * info); 
# 23337
extern void strrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, const float * x, const ptrdiff_t * ldx, float * ferr, float * berr, float * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23358
extern void strsen_(const char * job, const char * compq, const ptrdiff_t * select, const ptrdiff_t * n, float * t, const ptrdiff_t * ldt, float * q, const ptrdiff_t * ldq, float * wr, float * wi, ptrdiff_t * m, float * s, float * sep, float * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 23381
extern void strsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const float * t, const ptrdiff_t * ldt, const float * vl, const ptrdiff_t * ldvl, const float * vr, const ptrdiff_t * ldvr, float * s, float * sep, const ptrdiff_t * mm, ptrdiff_t * m, float * work, const ptrdiff_t * ldwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 23404
extern void strsyl_(const char * trana, const char * tranb, const ptrdiff_t * isgn, const ptrdiff_t * m, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, const float * b, const ptrdiff_t * ldb, float * c, const ptrdiff_t * ldc, float * scale, ptrdiff_t * info); 
# 23422
extern void strti2_(const char * uplo, const char * diag, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 23433
extern void strtri_(const char * uplo, const char * diag, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 23444
extern void strtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const float * a, const ptrdiff_t * lda, float * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 23459
extern void strttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * arf, ptrdiff_t * info); 
# 23471
extern void strttp_(const char * uplo, const ptrdiff_t * n, const float * a, const ptrdiff_t * lda, float * ap, ptrdiff_t * info); 
# 23482
extern void stzrzf_(const ptrdiff_t * m, const ptrdiff_t * n, float * a, const ptrdiff_t * lda, float * tau, float * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 23495
extern void xerbla_array_(const char * srname_array, const ptrdiff_t * srname_len, const ptrdiff_t * info); 
# 23503
extern void zbbcsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * theta, double * phi, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * v2t, const ptrdiff_t * ldv2t, double * b11d, double * b11e, double * b12d, double * b12e, double * b21d, double * b21e, double * b22d, double * b22e, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * info); 
# 23537
extern void zbdsqr_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ncvt, const ptrdiff_t * nru, const ptrdiff_t * ncc, double * d, double * e, double * vt, const ptrdiff_t * ldvt, double * u, const ptrdiff_t * ldu, double * c, const ptrdiff_t * ldc, double * rwork, ptrdiff_t * info); 
# 23557
extern void zcgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * work, float * swork, double * rwork, ptrdiff_t * iter, ptrdiff_t * info); 
# 23576
extern void zcposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * work, float * swork, double * rwork, ptrdiff_t * iter, ptrdiff_t * info); 
# 23595
extern void zdrscl_(const ptrdiff_t * n, const double * sa, double * sx, const ptrdiff_t * incx); 
# 23604
extern void zgbbrd_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ncc, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, double * d, double * e, double * q, const ptrdiff_t * ldq, double * pt, const ptrdiff_t * ldpt, double * c, const ptrdiff_t * ldc, double * work, double * rwork, ptrdiff_t * info); 
# 23628
extern void zgbcon_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 23645
extern void zgbequ_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 23662
extern void zgbequb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 23679
extern void zgbrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * afb, const ptrdiff_t * ldafb, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 23703
extern void zgbsv_(const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 23718
extern void zgbsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * afb, const ptrdiff_t * ldafb, ptrdiff_t * ipiv, char * equed, double * r, double * c, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 23747
extern void zgbtf2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 23760
extern void zgbtrf_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 23773
extern void zgbtrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 23789
extern void zgebak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * scale, const ptrdiff_t * m, double * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 23804
extern void zgebal_(const char * job, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ilo, ptrdiff_t * ihi, double * scale, ptrdiff_t * info); 
# 23817
extern void zgebd2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * work, ptrdiff_t * info); 
# 23832
extern void zgebrd_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 23848
extern void zgecon_(const char * norm, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * anorm, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 23862
extern void zgeequ_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 23877
extern void zgeequb_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * r, double * c, double * rowcnd, double * colcnd, double * amax, ptrdiff_t * info); 
# 23892
extern void zgees_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * sdim, double * w, double * vs, const ptrdiff_t * ldvs, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 23912
extern void zgeesx_(const char * jobvs, const char * sort, ptrdiff_t (* select)(), const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * sdim, double * w, double * vs, const ptrdiff_t * ldvs, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 23935
extern void zgeev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 23954
extern void zgeevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, double * scale, double * abnrm, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 23981
extern void zgehd2_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 23994
extern void zgehrd_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24008
extern void zgejsv_(const char * joba, const char * jobu, const char * jobv, const char * jobr, const char * jobt, const char * jobp, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * sva, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * cwork, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 24034
extern void zgelq_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * tsize, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24048
extern void zgelq2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 24060
extern void zgelqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24073
extern void zgelqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 24087
extern void zgelqt3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 24099
extern void zgels_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24115
extern void zgelsd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * s, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 24135
extern void zgelss_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * s, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24154
extern void zgelsy_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * jpvt, const double * rcond, ptrdiff_t * rank, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24173
extern void zgemlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * tsize, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24192
extern void zgemlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 24211
extern void zgemqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * tsize, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24230
extern void zgemqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 24249
extern void zgeql2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 24261
extern void zgeqlf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24274
extern void zgeqp3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24289
extern void zgeqpf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * work, double * rwork, ptrdiff_t * info); 
# 24303
extern void zgeqr_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * tsize, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24317
extern void zgeqr2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 24329
extern void zgeqr2p_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 24341
extern void zgeqrf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24354
extern void zgeqrfp_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24367
extern void zgeqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 24381
extern void zgeqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 24393
extern void zgeqrt3_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 24405
extern void zgerfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 24427
extern void zgerq2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, ptrdiff_t * info); 
# 24439
extern void zgerqf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24452
extern void zgesc2_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * rhs, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv, double * scale); 
# 24464
extern void zgesdd_(const char * jobz, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 24484
extern void zgesv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 24497
extern void zgesvd_(const char * jobu, const char * jobvt, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24517
extern void zgesvdx_(const char * jobu, const char * jobvt, const char * range, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * ns, double * s, double * u, const ptrdiff_t * ldu, double * vt, const ptrdiff_t * ldvt, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 24544
extern void zgesvj_(const char * joba, const char * jobu, const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, double * cwork, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * info); 
# 24565
extern void zgesvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, char * equed, double * r, double * c, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 24592
extern void zgetc2_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * jpiv, ptrdiff_t * info); 
# 24603
extern void zgetf2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 24614
extern void zgetrf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 24625
extern void zgetrf2_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 24636
extern void zgetri_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24648
extern void zgetrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 24662
extern void zgetsls_(const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24678
extern void zggbak_(const char * job, const char * side, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * lscale, const double * rscale, const ptrdiff_t * m, double * v, const ptrdiff_t * ldv, ptrdiff_t * info); 
# 24694
extern void zggbal_(const char * job, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * ilo, ptrdiff_t * ihi, double * lscale, double * rscale, double * work, ptrdiff_t * info); 
# 24711
extern void zgges_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alpha, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 24737
extern void zgges3_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alpha, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 24763
extern void zggesx_(const char * jobvsl, const char * jobvsr, const char * sort, ptrdiff_t (* selctg)(), const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * sdim, double * alpha, double * beta, double * vsl, const ptrdiff_t * ldvsl, double * vsr, const ptrdiff_t * ldvsr, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 24794
extern void zggev_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24816
extern void zggev3_(const char * jobvl, const char * jobvr, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 24838
extern void zggevx_(const char * balanc, const char * jobvl, const char * jobvr, const char * sense, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, ptrdiff_t * ilo, ptrdiff_t * ihi, double * lscale, double * rscale, double * abnrm, double * bbnrm, double * rconde, double * rcondv, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * bwork, ptrdiff_t * info); 
# 24872
extern void zggglm_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * d, double * x, double * y, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24890
extern void zgghd3_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24911
extern void zgghrd_(const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 24930
extern void zgglse_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * c, double * d, double * x, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24948
extern void zggqrf_(const ptrdiff_t * n, const ptrdiff_t * m, const ptrdiff_t * p, double * a, const ptrdiff_t * lda, double * taua, double * b, const ptrdiff_t * ldb, double * taub, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24965
extern void zggrqf_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * taua, double * b, const ptrdiff_t * ldb, double * taub, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 24982
extern void zggsvd3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * p, ptrdiff_t * k, ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 25012
extern void zggsvp3_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, ptrdiff_t * k, ptrdiff_t * l, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, ptrdiff_t * iwork, double * rwork, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25043
extern void zgsvj0_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, const double * eps, const double * sfmin, const double * tol, const ptrdiff_t * nsweep, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25065
extern void zgsvj1_(const char * jobv, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, double * a, const ptrdiff_t * lda, double * d, double * sva, const ptrdiff_t * mv, double * v, const ptrdiff_t * ldv, const double * eps, const double * sfmin, const double * tol, const ptrdiff_t * nsweep, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25088
extern void zgtcon_(const char * norm, const ptrdiff_t * n, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 25104
extern void zgtrfs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * dlf, const double * df, const double * duf, const double * du2, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 25129
extern void zgtsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * dl, double * d, double * du, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 25142
extern void zgtsvx_(const char * fact, const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, double * dlf, double * df, double * duf, double * du2, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 25169
extern void zgttrf_(const ptrdiff_t * n, double * dl, double * d, double * du, double * du2, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 25181
extern void zgttrs_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 25197
extern void zgtts2_(const ptrdiff_t * itrans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * dl, const double * d, const double * du, const double * du2, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb); 
# 25212
extern void zhb2st_kernels_(char * uplo, ptrdiff_t * wantz, ptrdiff_t * ttype, ptrdiff_t * st, ptrdiff_t * ed, ptrdiff_t * sweep, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * ib, double * a, ptrdiff_t * lda, double * v, double * tau, ptrdiff_t * ldvt, double * work); 
# 25232
extern void zhbev_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * info); 
# 25249
extern void zhbev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25267
extern void zhbevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 25288
extern void zhbevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 25309
extern void zhbevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * q, const ptrdiff_t * ldq, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25337
extern void zhbevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * q, ptrdiff_t * ldq, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25366
extern void zhbgst_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, const double * bb, const ptrdiff_t * ldbb, double * x, const ptrdiff_t * ldx, double * work, double * rwork, ptrdiff_t * info); 
# 25385
extern void zhbgv_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * info); 
# 25405
extern void zhbgvd_(const char * jobz, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 25429
extern void zhbgvx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * ka, const ptrdiff_t * kb, double * ab, const ptrdiff_t * ldab, double * bb, const ptrdiff_t * ldbb, double * q, const ptrdiff_t * ldq, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25460
extern void zhbtrd_(const char * vect, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * d, double * e, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * info); 
# 25477
extern void zhecon_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 25491
extern void zhecon_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 25506
extern void zhecon_rook_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 25520
extern void zheequb_(char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, double * work, ptrdiff_t * info); 
# 25534
extern void zheev_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25549
extern void zheev_2stage_(char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * w, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25564
extern void zheevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * w, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 25582
extern void zheevd_2stage_(char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * w, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 25600
extern void zheevr_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 25628
extern void zheevr_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * liwork, ptrdiff_t * info); 
# 25656
extern void zheevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25682
extern void zheevx_2stage_(char * jobz, char * range, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * vl, double * vu, ptrdiff_t * il, ptrdiff_t * iu, double * abstol, ptrdiff_t * m, double * w, double * z, ptrdiff_t * ldz, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25708
extern void zhegs2_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 25721
extern void zhegst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 25734
extern void zhegv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * w, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25752
extern void zhegv_2stage_(ptrdiff_t * itype, char * jobz, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * b, ptrdiff_t * ldb, double * w, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25770
extern void zhegvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * w, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 25791
extern void zhegvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 25820
extern void zherfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 25842
extern void zhesv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25858
extern void zhesv_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25874
extern void zhesv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 25891
extern void zhesv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 25907
extern void zhesvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 25932
extern void zheswapr_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 25943
extern void zhetd2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tau, ptrdiff_t * info); 
# 25956
extern void zhetf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 25967
extern void zhetf2_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 25979
extern void zhetf2_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 25990
extern void zhetrd_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * d, double * e, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26005
extern void zhetrd_2stage_(char * vect, char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * d, double * e, double * tau, double * hous2, ptrdiff_t * lhous2, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 26023
extern void zhetrd_hb2st_(char * stage1, char * vect, char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * ab, ptrdiff_t * ldab, double * d, double * e, double * hous, ptrdiff_t * lhous, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 26042
extern void zhetrd_he2hb_(char * uplo, ptrdiff_t * n, ptrdiff_t * kd, double * a, ptrdiff_t * lda, double * ab, ptrdiff_t * ldab, double * tau, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 26058
extern void zhetrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26071
extern void zhetrf_aa_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26084
extern void zhetrf_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 26098
extern void zhetrf_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26111
extern void zhetri_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 26123
extern void zhetri2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26136
extern void zhetri2x_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * nb, ptrdiff_t * info); 
# 26149
extern void zhetri_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 26163
extern void zhetri_3x_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 26177
extern void zhetri_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 26189
extern void zhetrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 26203
extern void zhetrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 26218
extern void zhetrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 26233
extern void zhetrs_aa_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, const double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26249
extern void zhetrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 26263
extern void zhfrk_(const char * transr, const char * uplo, const char * trans, const ptrdiff_t * n, const ptrdiff_t * k, const double * alpha, const double * a, const ptrdiff_t * lda, const double * beta, double * c); 
# 26278
extern void zhgeqz_(const char * job, const char * compq, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * t, const ptrdiff_t * ldt, double * alpha, double * beta, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 26303
extern void zhpcon_(const char * uplo, const ptrdiff_t * n, const double * ap, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 26316
extern void zhpev_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * info); 
# 26331
extern void zhpevd_(const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 26350
extern void zhpevx_(const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * ap, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 26374
extern void zhpgst_(const ptrdiff_t * itype, const char * uplo, const ptrdiff_t * n, double * ap, const double * bp, ptrdiff_t * info); 
# 26385
extern void zhpgv_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * info); 
# 26402
extern void zhpgvd_(const ptrdiff_t * itype, const char * jobz, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 26423
extern void zhpgvx_(const ptrdiff_t * itype, const char * jobz, const char * range, const char * uplo, const ptrdiff_t * n, double * ap, double * bp, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 26449
extern void zhprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * afp, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 26469
extern void zhpsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 26482
extern void zhpsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * afp, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 26504
extern void zhptrd_(const char * uplo, const ptrdiff_t * n, double * ap, double * d, double * e, double * tau, ptrdiff_t * info); 
# 26516
extern void zhptrf_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 26526
extern void zhptri_(const char * uplo, const ptrdiff_t * n, double * ap, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 26537
extern void zhptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 26550
extern void zhsein_(const char * side, const char * eigsrc, const char * initv, const ptrdiff_t * select, const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, double * w, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, double * rwork, ptrdiff_t * ifaill, ptrdiff_t * ifailr, ptrdiff_t * info); 
# 26574
extern void zhseqr_(const char * job, const char * compz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * w, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 26592
extern void zlabrd_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * d, double * e, double * tauq, double * taup, double * x, const ptrdiff_t * ldx, double * y, const ptrdiff_t * ldy); 
# 26610
extern void zlacgv_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx); 
# 26618
extern void zlacn2_(const ptrdiff_t * n, double * v, double * x, double * est, ptrdiff_t * kase, ptrdiff_t * isave); 
# 26629
extern void zlacon_(const ptrdiff_t * n, double * v, double * x, double * est, ptrdiff_t * kase); 
# 26639
extern void zlacp2_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 26651
extern void zlacpy_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb); 
# 26663
extern void zlacrm_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, double * rwork); 
# 26677
extern void zlacrt_(const ptrdiff_t * n, double * cx, const ptrdiff_t * incx, double * cy, const ptrdiff_t * incy, const double * c, const double * s); 
# 26690
extern doublecomplex zladiv_(const double * x, const double * y); 
# 26701
extern void zlaed0_(const ptrdiff_t * qsiz, const ptrdiff_t * n, double * d, double * e, double * q, const ptrdiff_t * ldq, double * qstore, const ptrdiff_t * ldqs, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 26717
extern void zlaed7_(const ptrdiff_t * n, const ptrdiff_t * cutpnt, const ptrdiff_t * qsiz, const ptrdiff_t * tlvls, const ptrdiff_t * curlvl, const ptrdiff_t * curpbm, double * d, double * q, const ptrdiff_t * ldq, const double * rho, ptrdiff_t * indxq, double * qstore, ptrdiff_t * qptr, const ptrdiff_t * prmptr, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const double * givnum, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 26744
extern void zlaed8_(ptrdiff_t * k, const ptrdiff_t * n, const ptrdiff_t * qsiz, double * q, const ptrdiff_t * ldq, double * d, double * rho, const ptrdiff_t * cutpnt, const double * z, double * dlamda, double * q2, const ptrdiff_t * ldq2, double * w, ptrdiff_t * indxp, ptrdiff_t * indx, const ptrdiff_t * indxq, ptrdiff_t * perm, ptrdiff_t * givptr, ptrdiff_t * givcol, double * givnum, ptrdiff_t * info); 
# 26770
extern void zlaein_(const ptrdiff_t * rightv, const ptrdiff_t * noinit, const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, const double * w, double * v, double * b, const ptrdiff_t * ldb, double * rwork, const double * eps3, const double * smlnum, ptrdiff_t * info); 
# 26788
extern void zlaesy_(const double * a, const double * b, const double * c, double * rt1, double * rt2, double * evscal, double * cs1, double * sn1); 
# 26801
extern void zlaev2_(const double * a, const double * b, const double * c, double * rt1, double * rt2, double * cs1, double * sn1); 
# 26813
extern void zlag2c_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, float * sa, const ptrdiff_t * ldsa, ptrdiff_t * info); 
# 26825
extern void zlags2_(const ptrdiff_t * upper, const double * a1, const double * a2, const double * a3, const double * b1, const double * b2, const double * b3, double * csu, double * snu, double * csv, double * snv, double * csq, double * snq); 
# 26843
extern void zlagtm_(const char * trans, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * alpha, const double * dl, const double * d, const double * du, const double * x, const ptrdiff_t * ldx, const double * beta, double * b, const ptrdiff_t * ldb); 
# 26860
extern void zlahef_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 26875
extern void zlahef_aa_(const char * uplo, const ptrdiff_t * j1_, const ptrdiff_t * m, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * h, const ptrdiff_t * ldh, double * work, ptrdiff_t * info); 
# 26891
extern void zlahef_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 26907
extern void zlahef_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 26922
extern void zlahqr_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * w, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * info); 
# 26940
extern void zlahr2_(const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * tau, double * t, const ptrdiff_t * ldt, double * y, const ptrdiff_t * ldy); 
# 26955
extern void zlaic1_(const ptrdiff_t * job, const ptrdiff_t * j, const double * x, const double * sest, const double * w, const double * gamma_, double * sestpr, double * s, double * c); 
# 26969
extern void zlals0_(const ptrdiff_t * icompq, const ptrdiff_t * nl, const ptrdiff_t * nr, const ptrdiff_t * sqre, const ptrdiff_t * nrhs, double * b, const ptrdiff_t * ldb, double * bx, const ptrdiff_t * ldbx, const ptrdiff_t * perm, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const double * givnum, const ptrdiff_t * ldgnum, const double * poles, const double * difl, const double * difr, const double * z, const ptrdiff_t * k, const double * c, const double * s, double * rwork, ptrdiff_t * info); 
# 26998
extern void zlalsa_(const ptrdiff_t * icompq, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * b, const ptrdiff_t * ldb, double * bx, const ptrdiff_t * ldbx, const double * u, const ptrdiff_t * ldu, const double * vt, const ptrdiff_t * k, const double * difl, const double * difr, const double * z, const double * poles, const ptrdiff_t * givptr, const ptrdiff_t * givcol, const ptrdiff_t * ldgcol, const ptrdiff_t * perm, const double * givnum, const double * c, const double * s, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 27029
extern void zlalsd_(const char * uplo, const ptrdiff_t * smlsiz, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * d, double * e, double * b, const ptrdiff_t * ldb, const double * rcond, ptrdiff_t * rank, double * work, double * rwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 27048
extern void zlamswlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 27069
extern void zlamtsqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 27090
extern double zlangb_(const char * norm, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * ab, const ptrdiff_t * ldab, double * work); 
# 27102
extern double zlange_(const char * norm, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 27113
extern double zlangt_(const char * norm, const ptrdiff_t * n, const double * dl, const double * d, const double * du); 
# 27123
extern double zlanhb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const double * ab, const ptrdiff_t * ldab, double * work); 
# 27135
extern double zlanhe_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 27146
extern double zlanhf_(const char * norm, const char * transr, const char * uplo, const ptrdiff_t * n, const double * a, double * work); 
# 27157
extern double zlanhp_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * ap, double * work); 
# 27167
extern double zlanhs_(const char * norm, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 27177
extern double zlanht_(const char * norm, const ptrdiff_t * n, const double * d, const double * e); 
# 27186
extern double zlansb_(const char * norm, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * k, const double * ab, const ptrdiff_t * ldab, double * work); 
# 27198
extern double zlansp_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * ap, double * work); 
# 27208
extern double zlansy_(const char * norm, const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 27219
extern double zlantb_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * k, const double * ab, const ptrdiff_t * ldab, double * work); 
# 27232
extern double zlantp_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * ap, double * work); 
# 27243
extern double zlantr_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * work); 
# 27256
extern void zlapll_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, double * ssmin); 
# 27267
extern void zlapmr_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, double * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 27278
extern void zlapmt_(const ptrdiff_t * forwrd, const ptrdiff_t * m, const ptrdiff_t * n, double * x, const ptrdiff_t * ldx, ptrdiff_t * k); 
# 27289
extern void zlaqgb_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * kl, const ptrdiff_t * ku, double * ab, const ptrdiff_t * ldab, const double * r, const double * c, const double * rowcnd, const double * colcnd, const double * amax, char * equed); 
# 27306
extern void zlaqge_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * r, const double * c, const double * rowcnd, const double * colcnd, const double * amax, char * equed); 
# 27321
extern void zlaqhb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, double * s, const double * scond, const double * amax, char * equed); 
# 27335
extern void zlaqhe_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * s, const double * scond, const double * amax, char * equed); 
# 27348
extern void zlaqhp_(const char * uplo, const ptrdiff_t * n, double * ap, const double * s, const double * scond, const double * amax, char * equed); 
# 27360
extern void zlaqp2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * vn1, double * vn2, double * work); 
# 27375
extern void zlaqps_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * offset, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * jpvt, double * tau, double * vn1, double * vn2, double * auxv, double * f, const ptrdiff_t * ldf); 
# 27394
extern void zlaqr0_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * w, ptrdiff_t * iloz, ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 27414
extern void zlaqr1_(const ptrdiff_t * n, const double * h, const ptrdiff_t * ldh, const double * s1, double * s2, double * v); 
# 27425
extern void zlaqr2_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, double * sh, double * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, double * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, double * work, const ptrdiff_t * lwork); 
# 27455
extern void zlaqr3_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nw, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, ptrdiff_t * ns, ptrdiff_t * nd, double * sh, double * v, const ptrdiff_t * ldv, const ptrdiff_t * nh, double * t, const ptrdiff_t * ldt, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, double * work, const ptrdiff_t * lwork); 
# 27485
extern void zlaqr4_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * h, const ptrdiff_t * ldh, double * w, ptrdiff_t * iloz, ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 27505
extern void zlaqr5_(const ptrdiff_t * wantt, const ptrdiff_t * wantz, const ptrdiff_t * kacc22, const ptrdiff_t * n, const ptrdiff_t * ktop, const ptrdiff_t * kbot, const ptrdiff_t * nshfts, double * s, double * h, const ptrdiff_t * ldh, const ptrdiff_t * iloz, const ptrdiff_t * ihiz, double * z, const ptrdiff_t * ldz, double * v, const ptrdiff_t * ldv, double * u, const ptrdiff_t * ldu, const ptrdiff_t * nv, double * wv, const ptrdiff_t * ldwv, const ptrdiff_t * nh, double * wh, const ptrdiff_t * ldwh); 
# 27534
extern void zlaqsb_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, const double * s, const double * scond, const double * amax, char * equed); 
# 27548
extern void zlaqsp_(const char * uplo, const ptrdiff_t * n, double * ap, const double * s, const double * scond, const double * amax, char * equed); 
# 27560
extern void zlaqsy_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * s, const double * scond, const double * amax, char * equed); 
# 27573
extern void zlar1v_(const ptrdiff_t * n, const ptrdiff_t * b1, const ptrdiff_t * bn, const double * lambda, const double * d, const double * l, const double * ld, const double * lld, const double * pivmin, const double * gaptol, double * z, const ptrdiff_t * wantnc, ptrdiff_t * negcnt, double * ztz, double * mingma, ptrdiff_t * r, ptrdiff_t * isuppz, double * nrminv, double * resid, double * rqcorr, double * work); 
# 27599
extern void zlar2v_(const ptrdiff_t * n, double * x, double * y, double * z, const ptrdiff_t * incx, const double * c, const double * s, const ptrdiff_t * incc); 
# 27612
extern void zlarcm_(const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, double * rwork); 
# 27626
extern void zlarf_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const ptrdiff_t * incv, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 27640
extern void zlarfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * ldwork); 
# 27660
extern void zlarfg_(const ptrdiff_t * n, double * alpha, double * x, const ptrdiff_t * incx, double * tau); 
# 27670
extern void zlarfgp_(const ptrdiff_t * n, double * alpha, double * x, const ptrdiff_t * incx, double * tau); 
# 27680
extern void zlarft_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, const double * v, const ptrdiff_t * ldv, const double * tau, double * t, const ptrdiff_t * ldt); 
# 27694
extern void zlarfx_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const double * v, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 27707
extern void zlarfy_(char * uplo, ptrdiff_t * n, double * v, ptrdiff_t * incv, double * tau, double * c, ptrdiff_t * ldc, double * work); 
# 27720
extern void zlargv_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, double * c, const ptrdiff_t * incc); 
# 27732
extern void zlarnv_(const ptrdiff_t * idist, ptrdiff_t * iseed, const ptrdiff_t * n, double * x); 
# 27741
extern void zlarrv_(const ptrdiff_t * n, const double * vl, const double * vu, double * d, double * l, double * pivmin, const ptrdiff_t * isplit, const ptrdiff_t * m, const ptrdiff_t * dol, const ptrdiff_t * dou, const double * minrgp, const double * rtol1, const double * rtol2, double * w, double * werr, double * wgap, const ptrdiff_t * iblock, const ptrdiff_t * indexw, const double * gers, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, ptrdiff_t * iwork, ptrdiff_t * info); 
# 27771
extern void zlartg_(const double * f, const double * g, double * cs, double * sn, double * r); 
# 27781
extern void zlartv_(const ptrdiff_t * n, double * x, const ptrdiff_t * incx, double * y, const ptrdiff_t * incy, const double * c, const double * s, const ptrdiff_t * incc); 
# 27794
extern void zlarz_(const char * side, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const double * v, const ptrdiff_t * incv, const double * tau, double * c, const ptrdiff_t * ldc, double * work); 
# 27809
extern void zlarzb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * ldwork); 
# 27830
extern void zlarzt_(const char * direct, const char * storev, const ptrdiff_t * n, const ptrdiff_t * k, double * v, const ptrdiff_t * ldv, const double * tau, double * t, const ptrdiff_t * ldt); 
# 27844
extern void zlascl_(const char * type, const ptrdiff_t * kl, const ptrdiff_t * ku, const double * cfrom, const double * cto, const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 27859
extern void zlaset_(const char * uplo, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * beta, double * a, const ptrdiff_t * lda); 
# 27871
extern void zlasr_(const char * side, const char * pivot, const char * direct, const ptrdiff_t * m, const ptrdiff_t * n, const double * c, const double * s, double * a, const ptrdiff_t * lda); 
# 27885
extern void zlassq_(const ptrdiff_t * n, const double * x, const ptrdiff_t * incx, double * scale, double * sumsq); 
# 27895
extern void zlaswlq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 27911
extern void zlaswp_(const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * k1, const ptrdiff_t * k2, const ptrdiff_t * ipiv, const ptrdiff_t * incx); 
# 27923
extern void zlasyf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 27938
extern void zlasyf_aa_(char * uplo, ptrdiff_t * j1_, ptrdiff_t * m, ptrdiff_t * nb, double * a, ptrdiff_t * lda, ptrdiff_t * ipiv, double * h, ptrdiff_t * ldh, double * work, ptrdiff_t * info); 
# 27954
extern void zlasyf_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nb, ptrdiff_t * kb, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * w, ptrdiff_t * ldw, ptrdiff_t * info); 
# 27970
extern void zlasyf_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, ptrdiff_t * kb, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * w, const ptrdiff_t * ldw, ptrdiff_t * info); 
# 27985
extern void zlat2c_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, float * sa, const ptrdiff_t * ldsa, ptrdiff_t * info); 
# 27997
extern void zlatbs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 28014
extern void zlatdf_(const ptrdiff_t * ijob, const ptrdiff_t * n, const double * z, const ptrdiff_t * ldz, double * rhs, double * rdsum, double * rdscal, const ptrdiff_t * ipiv, const ptrdiff_t * jpiv); 
# 28028
extern void zlatps_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const double * ap, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 28043
extern void zlatrd_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * e, double * tau, double * w, const ptrdiff_t * ldw); 
# 28057
extern void zlatrs_(const char * uplo, const char * trans, const char * diag, const char * normin, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * x, double * scale, double * cnorm, ptrdiff_t * info); 
# 28073
extern void zlatrz_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * tau, double * work); 
# 28085
extern void zlatsqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * mb, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * t, const ptrdiff_t * ldt, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 28101
extern void zlauu2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28111
extern void zlauum_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28121
extern void zpbcon_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, const double * anorm, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 28136
extern void zpbequ_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 28150
extern void zpbrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * afb, const ptrdiff_t * ldafb, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28172
extern void zpbstf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 28183
extern void zpbsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28197
extern void zpbsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, double * ab, const ptrdiff_t * ldab, double * afb, const ptrdiff_t * ldafb, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28223
extern void zpbtf2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 28234
extern void zpbtrf_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, double * ab, const ptrdiff_t * ldab, ptrdiff_t * info); 
# 28245
extern void zpbtrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28259
extern void zpftrf_(const char * transr, const char * uplo, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 28269
extern void zpftri_(const char * transr, const char * uplo, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 28279
extern void zpftrs_(const char * transr, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28292
extern void zpocon_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * anorm, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 28306
extern void zpoequ_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 28318
extern void zpoequb_(const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 28330
extern void zporfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28351
extern void zposv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28364
extern void zposvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28389
extern void zpotf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28399
extern void zpotrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28409
extern void zpotrf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28419
extern void zpotri_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 28429
extern void zpotrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28442
extern void zppcon_(const char * uplo, const ptrdiff_t * n, const double * ap, const double * anorm, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 28455
extern void zppequ_(const char * uplo, const ptrdiff_t * n, const double * ap, double * s, double * scond, double * amax, ptrdiff_t * info); 
# 28467
extern void zpprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * afp, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28486
extern void zppsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28498
extern void zppsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, double * afp, char * equed, double * s, double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28521
extern void zpptrf_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 28530
extern void zpptri_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 28539
extern void zpptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28551
extern void zpstf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const double * tol, double * work, ptrdiff_t * info); 
# 28565
extern void zpstrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * piv, ptrdiff_t * rank, const double * tol, double * work, ptrdiff_t * info); 
# 28579
extern void zptcon_(const ptrdiff_t * n, const double * d, const double * e, const double * anorm, double * rcond, double * rwork, ptrdiff_t * info); 
# 28591
extern void zpteqr_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 28604
extern void zptrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, const double * df, const double * ef, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28625
extern void zptsv_(const ptrdiff_t * n, const ptrdiff_t * nrhs, double * d, double * e, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28637
extern void zptsvx_(const char * fact, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * df, double * ef, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28659
extern void zpttrf_(const ptrdiff_t * n, double * d, double * e, ptrdiff_t * info); 
# 28668
extern void zpttrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28681
extern void zptts2_(const ptrdiff_t * iuplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * d, const double * e, double * b, const ptrdiff_t * ldb); 
# 28693
extern void zrot_(const ptrdiff_t * n, double * cx, const ptrdiff_t * incx, double * cy, const ptrdiff_t * incy, const double * c, const double * s); 
# 28705
extern void zspcon_(const char * uplo, const ptrdiff_t * n, const double * ap, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 28718
extern void zspmv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * ap, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 28732
extern void zspr_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * ap); 
# 28743
extern void zsprfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * afp, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28763
extern void zspsv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * ap, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28776
extern void zspsvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * afp, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 28798
extern void zsptrf_(const char * uplo, const ptrdiff_t * n, double * ap, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 28808
extern void zsptri_(const char * uplo, const ptrdiff_t * n, double * ap, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 28819
extern void zsptrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 28832
extern void zstedc_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 28850
extern void zstegr_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, const double * abstol, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, ptrdiff_t * isuppz, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 28875
extern void zstein_(const ptrdiff_t * n, const double * d, const double * e, const ptrdiff_t * m, const double * w, const ptrdiff_t * iblock, const ptrdiff_t * isplit, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * iwork, ptrdiff_t * ifail, ptrdiff_t * info); 
# 28893
extern void zstemr_(const char * jobz, const char * range, const ptrdiff_t * n, double * d, double * e, const double * vl, const double * vu, const ptrdiff_t * il, const ptrdiff_t * iu, ptrdiff_t * m, double * w, double * z, const ptrdiff_t * ldz, const ptrdiff_t * nzc, ptrdiff_t * isuppz, ptrdiff_t * tryrac, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 28919
extern void zsteqr_(const char * compz, const ptrdiff_t * n, double * d, double * e, double * z, const ptrdiff_t * ldz, double * work, ptrdiff_t * info); 
# 28932
extern void zsycon_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 28946
extern void zsycon_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 28961
extern void zsycon_rook_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, const double * anorm, double * rcond, double * work, ptrdiff_t * info); 
# 28975
extern void zsyconv_(const char * uplo, const char * way, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * e, ptrdiff_t * info); 
# 28988
extern void zsyconvf_(char * uplo, char * way, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 29001
extern void zsyconvf_rook_(char * uplo, char * way, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 29014
extern void zsyequb_(char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * s, double * scond, double * amax, double * work, ptrdiff_t * info); 
# 29028
extern void zsymv_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * a, const ptrdiff_t * lda, const double * x, const ptrdiff_t * incx, const double * beta, double * y, const ptrdiff_t * incy); 
# 29043
extern void zsyr_(const char * uplo, const ptrdiff_t * n, const double * alpha, const double * x, const ptrdiff_t * incx, double * a, const ptrdiff_t * lda); 
# 29055
extern void zsyrfs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * af, const ptrdiff_t * ldaf, const ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 29077
extern void zsysv_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 29093
extern void zsysv_aa_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29109
extern void zsysv_rk_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29126
extern void zsysv_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 29142
extern void zsysvx_(const char * fact, const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * af, const ptrdiff_t * ldaf, ptrdiff_t * ipiv, const double * b, const ptrdiff_t * ldb, double * x, const ptrdiff_t * ldx, double * rcond, double * ferr, double * berr, double * work, const ptrdiff_t * lwork, double * rwork, ptrdiff_t * info); 
# 29167
extern void zsyswapr_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * i1, const ptrdiff_t * i2); 
# 29178
extern void zsytf2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 29189
extern void zsytf2_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 29201
extern void zsytf2_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, ptrdiff_t * info); 
# 29212
extern void zsytrf_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 29225
extern void zsytrf_aa_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29238
extern void zsytrf_rk_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29252
extern void zsytrf_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 29265
extern void zsytri_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 29277
extern void zsytri2_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 29290
extern void zsytri2x_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 29303
extern void zsytri_3_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29317
extern void zsytri_3x_(char * uplo, ptrdiff_t * n, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * work, ptrdiff_t * nb, ptrdiff_t * info); 
# 29331
extern void zsytri_rook_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * work, ptrdiff_t * info); 
# 29343
extern void zsytrs_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 29357
extern void zsytrs2_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 29372
extern void zsytrs_3_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, double * e, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, ptrdiff_t * info); 
# 29387
extern void zsytrs_aa_(char * uplo, ptrdiff_t * n, ptrdiff_t * nrhs, double * a, ptrdiff_t * lda, ptrdiff_t * ipiv, double * b, ptrdiff_t * ldb, double * work, ptrdiff_t * lwork, ptrdiff_t * info); 
# 29403
extern void zsytrs_rook_(const char * uplo, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const ptrdiff_t * ipiv, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 29417
extern void ztbcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const double * ab, const ptrdiff_t * ldab, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 29433
extern void ztbrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 29455
extern void ztbtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * kd, const ptrdiff_t * nrhs, const double * ab, const ptrdiff_t * ldab, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 29471
extern void ztfsm_(const char * transr, const char * side, const char * uplo, const char * trans, const char * diag, const ptrdiff_t * m, const ptrdiff_t * n, const double * alpha, const double * a, double * b, const ptrdiff_t * ldb); 
# 29487
extern void ztftri_(const char * transr, const char * uplo, const char * diag, const ptrdiff_t * n, double * a, ptrdiff_t * info); 
# 29498
extern void ztfttp_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * arf, double * ap, ptrdiff_t * info); 
# 29509
extern void ztfttr_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * arf, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 29521
extern void ztgevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * s, const ptrdiff_t * lds, const double * p, const ptrdiff_t * ldp, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, double * rwork, ptrdiff_t * info); 
# 29543
extern void ztgex2_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, const ptrdiff_t * j1_, ptrdiff_t * info); 
# 29561
extern void ztgexc_(const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, const ptrdiff_t * ifst, ptrdiff_t * ilst, ptrdiff_t * info); 
# 29580
extern void ztgsen_(const ptrdiff_t * ijob, const ptrdiff_t * wantq, const ptrdiff_t * wantz, const ptrdiff_t * select, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * alpha, double * beta, double * q, const ptrdiff_t * ldq, double * z, const ptrdiff_t * ldz, ptrdiff_t * m, double * pl, double * pr, double * dif, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, const ptrdiff_t * liwork, ptrdiff_t * info); 
# 29609
extern void ztgsja_(const char * jobu, const char * jobv, const char * jobq, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, const double * tola, const double * tolb, double * alpha, double * beta, double * u, const ptrdiff_t * ldu, double * v, const ptrdiff_t * ldv, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * ncycle, ptrdiff_t * info); 
# 29639
extern void ztgsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * vl, const ptrdiff_t * ldvl, const double * vr, const ptrdiff_t * ldvr, double * s, double * dif, const ptrdiff_t * mm, ptrdiff_t * m, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 29664
extern void ztgsy2_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, const double * d, const ptrdiff_t * ldd, const double * e, const ptrdiff_t * lde, double * f, const ptrdiff_t * ldf, double * scale, double * rdsum, double * rdscal, ptrdiff_t * info); 
# 29689
extern void ztgsyl_(const char * trans, const ptrdiff_t * ijob, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, const double * d, const ptrdiff_t * ldd, const double * e, const ptrdiff_t * lde, double * f, const ptrdiff_t * ldf, double * scale, double * dif, double * work, const ptrdiff_t * lwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 29716
extern void ztpcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * ap, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 29730
extern void ztplqt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * mb, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 29747
extern void ztplqt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 29762
extern void ztpmlqt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * mb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 29784
extern void ztpmqrt_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const ptrdiff_t * nb, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, ptrdiff_t * info); 
# 29806
extern void ztpqrt_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, const ptrdiff_t * nb, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, double * work, ptrdiff_t * info); 
# 29823
extern void ztpqrt2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * l, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * t, const ptrdiff_t * ldt, ptrdiff_t * info); 
# 29838
extern void ztprfb_(const char * side, const char * trans, const char * direct, const char * storev, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * v, const ptrdiff_t * ldv, const double * t, const ptrdiff_t * ldt, double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, double * work, const ptrdiff_t * ldwork); 
# 29861
extern void ztprfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 29881
extern void ztptri_(const char * uplo, const char * diag, const ptrdiff_t * n, double * ap, ptrdiff_t * info); 
# 29891
extern void ztptrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * ap, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 29905
extern void ztpttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * ap, double * arf, ptrdiff_t * info); 
# 29916
extern void ztpttr_(const char * uplo, const ptrdiff_t * n, const double * ap, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 29927
extern void ztrcon_(const char * norm, const char * uplo, const char * diag, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * rcond, double * work, double * rwork, ptrdiff_t * info); 
# 29942
extern void ztrevc_(const char * side, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * vl, const ptrdiff_t * ldvl, double * vr, const ptrdiff_t * ldvr, const ptrdiff_t * mm, ptrdiff_t * m, double * work, double * rwork, ptrdiff_t * info); 
# 29962
extern void ztrevc3_(char * side, char * howmny, ptrdiff_t * select, ptrdiff_t * n, double * t, ptrdiff_t * ldt, double * vl, ptrdiff_t * ldvl, double * vr, ptrdiff_t * ldvr, ptrdiff_t * mm, ptrdiff_t * m, double * work, ptrdiff_t * lwork, double * rwork, ptrdiff_t * lrwork, ptrdiff_t * info); 
# 29984
extern void ztrexc_(const char * compq, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * q, const ptrdiff_t * ldq, const ptrdiff_t * ifst, const ptrdiff_t * ilst, ptrdiff_t * info); 
# 29998
extern void ztrrfs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, const double * x, const ptrdiff_t * ldx, double * ferr, double * berr, double * work, double * rwork, ptrdiff_t * info); 
# 30019
extern void ztrsen_(const char * job, const char * compq, const ptrdiff_t * select, const ptrdiff_t * n, double * t, const ptrdiff_t * ldt, double * q, const ptrdiff_t * ldq, double * w, ptrdiff_t * m, double * s, double * sep, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30039
extern void ztrsna_(const char * job, const char * howmny, const ptrdiff_t * select, const ptrdiff_t * n, const double * t, const ptrdiff_t * ldt, const double * vl, const ptrdiff_t * ldvl, const double * vr, const ptrdiff_t * ldvr, double * s, double * sep, const ptrdiff_t * mm, ptrdiff_t * m, double * work, const ptrdiff_t * ldwork, double * rwork, ptrdiff_t * info); 
# 30062
extern void ztrsyl_(const char * trana, const char * tranb, const ptrdiff_t * isgn, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * b, const ptrdiff_t * ldb, double * c, const ptrdiff_t * ldc, double * scale, ptrdiff_t * info); 
# 30080
extern void ztrti2_(const char * uplo, const char * diag, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 30091
extern void ztrtri_(const char * uplo, const char * diag, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, ptrdiff_t * info); 
# 30102
extern void ztrtrs_(const char * uplo, const char * trans, const char * diag, const ptrdiff_t * n, const ptrdiff_t * nrhs, const double * a, const ptrdiff_t * lda, double * b, const ptrdiff_t * ldb, ptrdiff_t * info); 
# 30117
extern void ztrttf_(const char * transr, const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * arf, ptrdiff_t * info); 
# 30129
extern void ztrttp_(const char * uplo, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, double * ap, ptrdiff_t * info); 
# 30140
extern void ztzrzf_(const ptrdiff_t * m, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30153
extern void zunbdb_(const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x12, const ptrdiff_t * ldx12, double * x21, const ptrdiff_t * ldx21, double * x22, const ptrdiff_t * ldx22, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * tauq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30180
extern void zunbdb1_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30200
extern void zunbdb2_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30220
extern void zunbdb3_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30240
extern void zunbdb4_(const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * phi, double * taup1, double * taup2, double * tauq1, double * phantom, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30261
extern void zunbdb5_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, double * x1, const ptrdiff_t * incx1, double * x2, const ptrdiff_t * incx2, double * q1, const ptrdiff_t * ldq1, double * q2, const ptrdiff_t * ldq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30280
extern void zunbdb6_(const ptrdiff_t * m1, const ptrdiff_t * m2, const ptrdiff_t * n, double * x1, const ptrdiff_t * incx1, double * x2, const ptrdiff_t * incx2, double * q1, const ptrdiff_t * ldq1, double * q2, const ptrdiff_t * ldq2, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30299
extern void zuncsd_(const char * jobu1, const char * jobu2, const char * jobv1t, const char * jobv2t, const char * trans, const char * signs, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x12, const ptrdiff_t * ldx12, double * x21, const ptrdiff_t * ldx21, double * x22, const ptrdiff_t * ldx22, double * theta, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * v2t, const ptrdiff_t * ldv2t, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 30336
extern void zuncsd2by1_(const char * jobu1, const char * jobu2, const char * jobv1t, const ptrdiff_t * m, const ptrdiff_t * p, const ptrdiff_t * q, double * x11, const ptrdiff_t * ldx11, double * x21, const ptrdiff_t * ldx21, double * theta, double * u1, const ptrdiff_t * ldu1, double * u2, const ptrdiff_t * ldu2, double * v1t, const ptrdiff_t * ldv1t, double * work, const ptrdiff_t * lwork, double * rwork, const ptrdiff_t * lrwork, ptrdiff_t * iwork, ptrdiff_t * info); 
# 30364
extern void zung2l_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 30377
extern void zung2r_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 30390
extern void zungbr_(const char * vect, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30405
extern void zunghr_(const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30419
extern void zungl2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 30432
extern void zunglq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30446
extern void zungql_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30460
extern void zungqr_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30474
extern void zungr2_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, ptrdiff_t * info); 
# 30487
extern void zungrq_(const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30501
extern void zungtr_(const char * uplo, const ptrdiff_t * n, double * a, const ptrdiff_t * lda, const double * tau, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30514
extern void zunm22_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * n1, const ptrdiff_t * n2, const double * q, const ptrdiff_t * ldq, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30532
extern void zunm2l_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30549
extern void zunm2r_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30566
extern void zunmbr_(const char * vect, const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30585
extern void zunmhr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * ilo, const ptrdiff_t * ihi, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30604
extern void zunml2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30621
extern void zunmlq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30639
extern void zunmql_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30657
extern void zunmqr_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30675
extern void zunmr2_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30692
extern void zunmr3_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30710
extern void zunmrq_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30728
extern void zunmrz_(const char * side, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const ptrdiff_t * k, const ptrdiff_t * l, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30747
extern void zunmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * a, const ptrdiff_t * lda, const double * tau, double * c, const ptrdiff_t * ldc, double * work, const ptrdiff_t * lwork, ptrdiff_t * info); 
# 30765
extern void zupgtr_(const char * uplo, const ptrdiff_t * n, const double * ap, const double * tau, double * q, const ptrdiff_t * ldq, double * work, ptrdiff_t * info); 
# 30778
extern void zupmtr_(const char * side, const char * uplo, const char * trans, const ptrdiff_t * m, const ptrdiff_t * n, const double * ap, const double * tau, double * c, const ptrdiff_t * ldc, double * work, ptrdiff_t * info); 
# 30797
#endif /* mllapack_h */
# 12 "/Users/bradyplanden/Documents/Git Repos/SimulinkMPC/fMPC/src/f_mpc.c"
const int ione = 1; 
const int itwo = 2; 
const int ithree = 3; 
const int iseven = 7; 
const double fone = (1); 
const double ftwo = (2); 
const double fzero = (0); 
const double fmone = (-1); 
int quiet = 1; 
int one = 1; 
# 35
void fmpcsolve(const double *A, const double *B, const double *At, const double *Bt, const double *eyen, const double *eyem, const double *
Q, const double *R, const double *Qf, const double *zmax, const double *zmin, const double *x, const double *z0, const int T, const int n, const int m, const int 
nz, const int niters, const double kappa, double *z, double *U, double *X) 
{ double __mw_tmp_for_expr_5; double __mw_tmp_for_expr_4; double __mw_tmp_for_expr_3; double __mw_tmp_for_expr_2; double __mw_tmp_for_expr_1; __MW_INSTRUM_FCN_ENTER_1(); __MW_INSTRUM_NODE_1(); { 
const int maxiter = niters; 
int iiter, i, j, cont; 
double alpha = (0.01); 
double beta = (1); 
double tol = (0.5); 
double s; 
double resd, resp, res, newresd, newresp, newres; 
double *b, *nu, *Ctnu; 
double *dnu, *dz; 
double *gf, *gp, *hp, *newgf, *newgp, *newhp; 
double *rd, *rp, *newrd, *newrp; 
double *dptr, *dptr1, *dptr2, *dptr3; 
double *newnu, *newz, *newCtnu; 


b = (__MW_INSTRUM_NODE_2(), malloc((sizeof(double) * T) * n)); 
dnu = (__MW_INSTRUM_NODE_3(), malloc((sizeof(double) * T) * n)); 
dz = (__MW_INSTRUM_NODE_4(), malloc(sizeof(double) * nz)); 
nu = (__MW_INSTRUM_NODE_5(), malloc((sizeof(double) * T) * n)); 
Ctnu = (__MW_INSTRUM_NODE_6(), malloc(sizeof(double) * nz)); 
z = (__MW_INSTRUM_NODE_7(), malloc(sizeof(double) * nz)); 
gp = (__MW_INSTRUM_NODE_8(), malloc(sizeof(double) * nz)); 
hp = (__MW_INSTRUM_NODE_9(), malloc(sizeof(double) * nz)); 
gf = (__MW_INSTRUM_NODE_10(), malloc(sizeof(double) * nz)); 
rp = (__MW_INSTRUM_NODE_11(), malloc((sizeof(double) * T) * n)); 
rd = (__MW_INSTRUM_NODE_12(), malloc(sizeof(double) * nz)); 
newnu = (__MW_INSTRUM_NODE_13(), malloc((sizeof(double) * T) * n)); 
newz = (__MW_INSTRUM_NODE_14(), malloc(sizeof(double) * nz)); 
newCtnu = (__MW_INSTRUM_NODE_15(), malloc(sizeof(double) * nz)); 
newgf = (__MW_INSTRUM_NODE_16(), malloc(sizeof(double) * nz)); 
newhp = (__MW_INSTRUM_NODE_17(), malloc(sizeof(double) * nz)); 
newgp = (__MW_INSTRUM_NODE_18(), malloc(sizeof(double) * nz)); 
newrp = (__MW_INSTRUM_NODE_19(), malloc((sizeof(double) * T) * n)); 
newrd = (__MW_INSTRUM_NODE_20(), malloc(sizeof(double) * nz)); { 

for (i = 0; __MW_INSTRUM_NODE_21(i < n * T); i++) { nu[i] = (0); }  } { 
for (i = 0; __MW_INSTRUM_NODE_23(i < n * T); i++) { b[i] = (0); }  } 
dgemv_("n", &n, &n, &fone, A, &n, x, &ione, &fzero, b, &ione); 

dptr = z; dptr1 = z0; { 
for (i = 0; __MW_INSTRUM_NODE_25(i < nz); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } { 
if (__MW_INSTRUM_NODE_27((__MW_INSTRUM_NODE_29(quiet, 0), (quiet == 0)))) 
{ 
__MW_INSTRUM_NODE_32(), printf("\n iteration \t step \t\t rd \t\t\t rp\n"); 
}  } { 
for (iiter = 0; __MW_INSTRUM_NODE_33(iiter < maxiter); iiter++) 
{ 
__MW_INSTRUM_NODE_35(), gfgphp(Q, R, Qf, zmax, zmin, z, T, n, m, nz, gf, gp, hp); 
__MW_INSTRUM_NODE_36(), rdrp(A, B, Q, R, Qf, z, nu, gf, gp, b, T, n, m, nz, kappa, rd, rp, Ctnu); 
__MW_INSTRUM_NODE_37(), resdresp(rd, rp, T, n, nz, &resd, &resp, &res); { 
if (__MW_INSTRUM_NODE_38((__MW_INSTRUM_NODE_40(res, tol), (res < tol)))) { break; }  } __MW_INSTRUM_NODE_42(); 

__MW_INSTRUM_NODE_43(), dnudz(A, B, At, Bt, eyen, eyem, Q, R, Qf, hp, rd, rp, T, n, m, nz, kappa, dnu, dz); 

s = (1); { 


while (__MW_INSTRUM_NODE_44(1)) 
{ 
cont = 0; 
dptr = z; dptr1 = dz; dptr2 = zmax; dptr3 = zmin; { 
for (i = 0; __MW_INSTRUM_NODE_46(i < nz); i++) 
{ { 
if (__MW_INSTRUM_NODE_48(((__mw_tmp_for_expr_1 = *dptr + s * *dptr1), ((__mw_tmp_for_expr_2 = *dptr2), (__MW_INSTRUM_NODE_50(__mw_tmp_for_expr_1, __mw_tmp_for_expr_2), (__mw_tmp_for_expr_1 >= __mw_tmp_for_expr_2)))))) { cont = 1; }  } { 
if (__MW_INSTRUM_NODE_52(((__mw_tmp_for_expr_3 = *dptr + s * *dptr1), ((__mw_tmp_for_expr_4 = *dptr3), (__MW_INSTRUM_NODE_54(__mw_tmp_for_expr_3, __mw_tmp_for_expr_4), (__mw_tmp_for_expr_3 <= __mw_tmp_for_expr_4)))))) { cont = 1; }  } 
dptr++; dptr1++; dptr2++; dptr3++; 
}  } { 
if (__MW_INSTRUM_NODE_56((__MW_INSTRUM_NODE_58(cont, 1), (cont == 1)))) 
{ 
s = beta * s; 
continue; 
} else 

{ break; }  } 
}  } __MW_INSTRUM_NODE_61(); 
dptr = newnu; dptr1 = nu; dptr2 = dnu; { 
for (i = 0; __MW_INSTRUM_NODE_62(i < T * n); i++) 
{ 
*dptr = *dptr1 + s * *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = newz; dptr1 = z; dptr2 = dz; { 
for (i = 0; __MW_INSTRUM_NODE_64(i < nz); i++) 
{ 
*dptr = *dptr1 + s * *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } { 


while (__MW_INSTRUM_NODE_66(1)) 
{ 
__MW_INSTRUM_NODE_68(), gfgphp(Q, R, Qf, zmax, zmin, newz, T, n, m, nz, newgf, newgp, newhp); 
__MW_INSTRUM_NODE_69(), rdrp(A, B, Q, R, Qf, newz, newnu, newgf, newgp, b, T, n, m, nz, kappa, newrd, newrp, newCtnu); 
__MW_INSTRUM_NODE_70(), resdresp(newrd, newrp, T, n, nz, &newresd, &newresp, &newres); { 
if (__MW_INSTRUM_NODE_71(((__mw_tmp_for_expr_5 = ((1) - alpha * s) * res), (__MW_INSTRUM_NODE_73(newres, __mw_tmp_for_expr_5), (newres <= __mw_tmp_for_expr_5))))) { break; }  } __MW_INSTRUM_NODE_75(); 
s = beta * s; 
dptr = newnu; dptr1 = nu; dptr2 = dnu; { 
for (i = 0; __MW_INSTRUM_NODE_76(i < T * n); i++) 
{ 
*dptr = *dptr1 + s * *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = newz; dptr1 = z; dptr2 = dz; { 
for (i = 0; __MW_INSTRUM_NODE_78(i < nz); i++) 
{ 
*dptr = *dptr1 + s * *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
}  } __MW_INSTRUM_NODE_80(); 

dptr = nu; dptr1 = newnu; { 
for (i = 0; __MW_INSTRUM_NODE_81(i < T * n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = z; dptr1 = newz; { 
for (i = 0; __MW_INSTRUM_NODE_83(i < nz); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } { 
if (__MW_INSTRUM_NODE_85((__MW_INSTRUM_NODE_87(quiet, 0), (quiet == 0)))) 
{ 
__MW_INSTRUM_NODE_90(), printf("    %d \t\t %5.4f \t %0.5e \t\t %0.5e\n", iiter, s, newresd, newresp); 
}  } 
}  } __MW_INSTRUM_NODE_91(); 



dptr = z0; dptr1 = z; { 
for (i = 0; __MW_INSTRUM_NODE_92(i < nz); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 


dptr = z; { 
for (i = 0; __MW_INSTRUM_NODE_94(i < T); i++) 
{ { 
for (j = 0; __MW_INSTRUM_NODE_96(j < m); j++) 
{ 
*((U + i * m) + j) = *dptr; 
dptr++; 
}  } { 
for (j = 0; __MW_INSTRUM_NODE_98(j < n); j++) 
{ 
*((X + i * n) + j) = *dptr; 
dptr++; 
}  } 
}  } 


__MW_INSTRUM_NODE_100(), free(b); __MW_INSTRUM_NODE_101(), free(dnu); __MW_INSTRUM_NODE_102(), free(dz); __MW_INSTRUM_NODE_103(), free(nu); __MW_INSTRUM_NODE_104(), free(Ctnu); 
__MW_INSTRUM_NODE_105(), free(z); __MW_INSTRUM_NODE_106(), free(gp); __MW_INSTRUM_NODE_107(), free(hp); __MW_INSTRUM_NODE_108(), free(gf); __MW_INSTRUM_NODE_109(), free(rp); __MW_INSTRUM_NODE_110(), free(rd); 
__MW_INSTRUM_NODE_111(), free(newnu); __MW_INSTRUM_NODE_112(), free(newz); __MW_INSTRUM_NODE_113(), free(newCtnu); __MW_INSTRUM_NODE_114(), free(newgf); __MW_INSTRUM_NODE_115(), free(newhp); 
__MW_INSTRUM_NODE_116(), free(newgp); __MW_INSTRUM_NODE_117(), free(newrp); __MW_INSTRUM_NODE_118(), free(newrd); } __MW_INSTRUM_NODE_119(); 
} 



void dnudz(double *A, double *B, double *At, double *Bt, double *eyen, double *
eyem, double *Q, double *R, double *Qf, double *hp, double *rd, double *
rp, const int T, const int n, const int m, const int nz, double kappa, double *dnu, double *dz) 
{ __MW_INSTRUM_FCN_ENTER_2(); __MW_INSTRUM_NODE_120(); { 
int i, j, nT; 
const int info; 
double *dptr, *dptr1, *dptr2, *dptr3, *temp, *tempmatn, *tempmatm; 
double *PhiQ, *PhiR, *Yd, *Yud, *Ld, *Lld, *Ctdnu, *gam, *v, *be, *rdmCtdnu; 
double *PhiinvQAt, *PhiinvRBt, *PhiinvQeye, *PhiinvReye, *CPhiinvrd; 
nT = n * T; 


PhiQ = (__MW_INSTRUM_NODE_121(), malloc(((sizeof(double) * n) * n) * T)); 
PhiR = (__MW_INSTRUM_NODE_122(), malloc(((sizeof(double) * m) * m) * T)); 
PhiinvQAt = (__MW_INSTRUM_NODE_123(), malloc(((sizeof(double) * n) * n) * T)); 
PhiinvRBt = (__MW_INSTRUM_NODE_124(), malloc(((sizeof(double) * m) * n) * T)); 
PhiinvQeye = (__MW_INSTRUM_NODE_125(), malloc(((sizeof(double) * n) * n) * T)); 
PhiinvReye = (__MW_INSTRUM_NODE_126(), malloc(((sizeof(double) * m) * m) * T)); 
CPhiinvrd = (__MW_INSTRUM_NODE_127(), malloc((sizeof(double) * n) * T)); 
Yd = (__MW_INSTRUM_NODE_128(), malloc(((sizeof(double) * n) * n) * T)); 
Yud = (__MW_INSTRUM_NODE_129(), malloc(((sizeof(double) * n) * n) * (T - 1))); 
Ld = (__MW_INSTRUM_NODE_130(), malloc(((sizeof(double) * n) * n) * T)); 
Lld = (__MW_INSTRUM_NODE_131(), malloc(((sizeof(double) * n) * n) * (T - 1))); 
gam = (__MW_INSTRUM_NODE_132(), malloc((sizeof(double) * n) * T)); 
v = (__MW_INSTRUM_NODE_133(), malloc((sizeof(double) * n) * T)); 
be = (__MW_INSTRUM_NODE_134(), malloc((sizeof(double) * n) * T)); 
temp = (__MW_INSTRUM_NODE_135(), malloc(sizeof(double) * n)); 
tempmatn = (__MW_INSTRUM_NODE_136(), malloc((sizeof(double) * n) * n)); 
tempmatm = (__MW_INSTRUM_NODE_137(), malloc((sizeof(double) * m) * m)); 
Ctdnu = (__MW_INSTRUM_NODE_138(), malloc(sizeof(double) * nz)); 
rdmCtdnu = (__MW_INSTRUM_NODE_139(), malloc(sizeof(double) * nz)); { 


for (i = 0; __MW_INSTRUM_NODE_140(i < T - 1); i++) 
{ 
dptr = PhiQ + (n * n) * i; dptr1 = Q; { 
for (j = 0; __MW_INSTRUM_NODE_142(j < n * n); j++) 
{ 
*dptr = (2) * *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = PhiQ + (n * n) * i; dptr1 = (hp + m * (i + 1)) + n * i; { 
for (j = 0; __MW_INSTRUM_NODE_144(j < n); j++) 
{ 
*dptr = *dptr + kappa * *dptr1; 
dptr = (dptr + n) + 1; dptr1++; 
}  } 
dptr = PhiR + (m * m) * i; dptr1 = R; { 
for (j = 0; __MW_INSTRUM_NODE_146(j < m * m); j++) 
{ 
*dptr = (2) * *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = PhiR + (m * m) * i; dptr1 = hp + i * (n + m); { 
for (j = 0; __MW_INSTRUM_NODE_148(j < m); j++) 
{ 
*dptr = *dptr + kappa * *dptr1; 
dptr = (dptr + m) + 1; dptr1++; 
}  } 
}  } 

dptr = PhiR + (m * m) * (T - 1); dptr1 = R; { 
for (j = 0; __MW_INSTRUM_NODE_150(j < m * m); j++) 
{ 
*dptr = (2) * *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = PhiR + (m * m) * (T - 1); dptr1 = hp + (T - 1) * (n + m); { 
for (j = 0; __MW_INSTRUM_NODE_152(j < m); j++) 
{ 
*dptr = *dptr + kappa * *dptr1; 
dptr = (dptr + m) + 1; dptr1++; 
}  } 
dptr = PhiQ + (n * n) * (T - 1); dptr1 = Qf; { 
for (j = 0; __MW_INSTRUM_NODE_154(j < n * n); j++) 
{ 
*dptr = (2) * *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = PhiQ + (n * n) * (T - 1); dptr1 = (hp + m * T) + n * (T - 1); { 
for (j = 0; __MW_INSTRUM_NODE_156(j < n); j++) 
{ 
*dptr = *dptr + kappa * *dptr1; 
dptr = (dptr + n) + 1; dptr1++; 
}  } { 


for (i = 0; __MW_INSTRUM_NODE_158(i < T); i++) 
{ 
dptr = PhiinvQAt + (n * n) * i; dptr1 = At; { 
for (j = 0; __MW_INSTRUM_NODE_160(j < n * n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n * n; dptr1 = PhiQ + (n * n) * i; 
dposv_("l", &n, &n, dptr1, &n, dptr, &n, &info); 

dptr = PhiinvQeye + (n * n) * i; dptr1 = eyen; { 
for (j = 0; __MW_INSTRUM_NODE_162(j < n * n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n * n; dptr1 = PhiQ + (n * n) * i; 
dtrtrs_("l", "n", "n", &n, &n, dptr1, &n, dptr, &n, &info); 
dtrtrs_("l", "t", "n", &n, &n, dptr1, &n, dptr, &n, &info); 


}  } { 
for (i = 0; __MW_INSTRUM_NODE_164(i < T); i++) 
{ 
dptr = PhiinvRBt + (m * n) * i; dptr1 = Bt; { 
for (j = 0; __MW_INSTRUM_NODE_166(j < n * m); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - m * n; dptr1 = PhiR + (m * m) * i; 
dposv_("l", &m, &n, dptr1, &m, dptr, &m, &info); { 


for (j = 0; __MW_INSTRUM_NODE_168(j < m * m); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - m * m; dptr1 = PhiR + (m * m) * i; 
dtrtrs_("l", "n", "n", &m, &m, dptr1, &m, dptr, &m, &info); 
dtrtrs_("l", "t", "n", &m, &m, dptr1, &m, dptr, &m, &info); 


}  } 


dptr = Yud; dptr1 = PhiinvQAt; { 
for (i = 0; __MW_INSTRUM_NODE_170(i < (n * n) * (T - 1)); i++) 
{ 
*dptr = -(*dptr1); 
dptr++; dptr1++; 
}  } 
dptr2 = Yd; dptr3 = PhiinvQeye; { 
for (i = 0; __MW_INSTRUM_NODE_172(i < n * n); i++) 
{ 
*dptr2 = *dptr3; 
dptr2++; dptr3++; 
}  } 
dptr2 = dptr2 - n * n; 
dgemm_("n", "n", &n, &n, &m, &fone, B, &n, PhiinvRBt, &m, &fone, dptr2, &n); { 

for (i = 1; __MW_INSTRUM_NODE_174(i < T); i++) 
{ 
dptr = Yd + (n * n) * i; dptr1 = PhiinvQeye + (n * n) * i; { 
for (j = 0; __MW_INSTRUM_NODE_176(j < n * n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr1 = PhiinvRBt + (m * n) * i; dptr = dptr - n * n; 
dgemm_("n", "n", &n, &n, &m, &fone, B, &n, dptr1, &m, &fone, dptr, &n); 

dptr1 = PhiinvQAt + (n * n) * (i - 1); 
dgemm_("n", "n", &n, &n, &n, &fone, A, &n, dptr1, &n, &fone, dptr, &n); 

}  } 


dptr = Ld; dptr1 = Yd; { 
for (i = 0; __MW_INSTRUM_NODE_178(i < n * n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n * n; 
dposv_("l", &n, &ione, dptr, &n, temp, &n, &info); { 

for (i = 1; __MW_INSTRUM_NODE_180(i < T); i++) 
{ 
dptr = Ld + (n * n) * (i - 1); dptr1 = Yud + (n * n) * (i - 1); dptr2 = Lld + (n * n) * (i - 1); { 
for (j = 0; __MW_INSTRUM_NODE_182(j < n * n); j++) 
{ 
*dptr2 = *dptr1; 
dptr2++; dptr1++; 
}  } 
dptr2 = dptr2 - n * n; 
dtrtrs_("l", "n", "n", &n, &n, dptr, &n, dptr2, &n, &info); 

dptr1 = tempmatn; { 
for (j = 0; __MW_INSTRUM_NODE_184(j < n * n); j++) 
{ 
*dptr1 = *dptr2; 
dptr1++; dptr2++; 
}  } 
dptr1 = dptr1 - n * n; dptr2 = dptr2 - n * n; 
dgemm_("t", "n", &n, &n, &n, &fone, dptr1, &n, eyen, &n, &fzero, dptr2, &n); 

dptr = Ld + (n * n) * i; dptr1 = Yd + (n * n) * i; { 
for (j = 0; __MW_INSTRUM_NODE_186(j < n * n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n * n; 
dgemm_("n", "t", &n, &n, &n, &fmone, dptr2, &n, dptr2, &n, &fone, dptr, &n); 
dposv_("l", &n, &ione, dptr, &n, temp, &n, &info); 


}  } 


dptr = CPhiinvrd; dptr1 = rd + m; { 
for (i = 0; __MW_INSTRUM_NODE_188(i < n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n; 
dtrsv_("l", "n", "n", &n, PhiQ, &n, dptr, &ione); 
dtrsv_("l", "t", "n", &n, PhiQ, &n, dptr, &ione); 


dptr2 = temp; dptr1 = rd; { 
for (i = 0; __MW_INSTRUM_NODE_190(i < m); i++) 
{ 
*dptr2 = *dptr1; 
dptr2++; dptr1++; 
}  } 
dptr2 = dptr2 - m; 
dtrsv_("l", "n", "n", &m, PhiR, &m, dptr2, &ione); 
dtrsv_("l", "t", "n", &m, PhiR, &m, dptr2, &ione); 
dgemv_("n", &n, &m, &fmone, B, &n, temp, &ione, &fone, dptr, &ione); { 




for (i = 1; __MW_INSTRUM_NODE_192(i < T); i++) 
{ 
dptr = CPhiinvrd + n * i; dptr1 = (rd + m) + i * (n + m); { 
for (j = 0; __MW_INSTRUM_NODE_194(j < n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n; dptr3 = PhiQ + (n * n) * i; 
dtrsv_("l", "n", "n", &n, dptr3, &n, dptr, &ione); 
dtrsv_("l", "t", "n", &n, dptr3, &n, dptr, &ione); 


dptr2 = temp; dptr1 = rd + i * (m + n); { 
for (j = 0; __MW_INSTRUM_NODE_196(j < m); j++) 
{ 
*dptr2 = *dptr1; 
dptr2++; dptr1++; 
}  } 
dptr3 = PhiR + (m * m) * i; dptr2 = dptr2 - m; 
dtrsv_("l", "n", "n", &m, dptr3, &m, dptr2, &ione); 
dtrsv_("l", "t", "n", &m, dptr3, &m, dptr2, &ione); 
dgemv_("n", &n, &m, &fmone, B, &n, temp, &ione, &fone, dptr, &ione); 



dptr2 = temp; dptr1 = (rd + (i - 1) * (n + m)) + m; { 
for (j = 0; __MW_INSTRUM_NODE_198(j < n); j++) 
{ 
*dptr2 = *dptr1; 
dptr2++; dptr1++; 
}  } 
dptr3 = PhiQ + (n * n) * (i - 1); dptr2 = dptr2 - n; 
dtrsv_("l", "n", "n", &n, dptr3, &n, dptr2, &ione); 
dtrsv_("l", "t", "n", &n, dptr3, &n, dptr2, &ione); 
dgemv_("n", &n, &n, &fmone, A, &n, temp, &ione, &fone, dptr, &ione); 



}  } 


dptr = be; dptr1 = rp; dptr2 = CPhiinvrd; { 
for (i = 0; __MW_INSTRUM_NODE_200(i < n * T); i++) 
{ 
*dptr = *dptr2 - *dptr1; 
dptr++; dptr1++; dptr2++; 
}  } 


dptr = v; dptr1 = be; { 
for (i = 0; __MW_INSTRUM_NODE_202(i < n); i++) 
{ 
*dptr = -(*dptr1); 
dptr++; dptr1++; 
}  } 
dptr = dptr - n; 
dtrsv_("l", "n", "n", &n, Ld, &n, dptr, &ione); { 

for (i = 1; __MW_INSTRUM_NODE_204(i < T); i++) 
{ 
dptr = v + i * n; dptr1 = v + (i - 1) * n; dptr2 = be + i * n; { 
for (j = 0; __MW_INSTRUM_NODE_206(j < n); j++) 
{ 
*dptr = *dptr2; 
dptr++; dptr2++; 
}  } 
dptr = dptr - n; dptr3 = Lld + (n * n) * (i - 1); 
dgemv_("n", &n, &n, &fmone, dptr3, &n, dptr1, &ione, &fmone, dptr, &ione); 

dptr3 = Ld + (n * n) * i; 
dtrsv_("l", "n", "n", &n, dptr3, &n, dptr, &ione); 

}  } 
dptr = dnu + n * (T - 1); dptr1 = v + n * (T - 1); { 
for (i = 0; __MW_INSTRUM_NODE_208(i < n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n; dptr3 = Ld + (n * n) * (T - 1); 
dtrsv_("l", "t", "n", &n, dptr3, &n, dptr, &ione); { 

for (i = T - 1; __MW_INSTRUM_NODE_210(i > 0); i--) 
{ 
dptr = dnu + n * (i - 1); dptr1 = dnu + n * i; dptr2 = v + n * (i - 1); { 
for (j = 0; __MW_INSTRUM_NODE_212(j < n); j++) 
{ 
*dptr = *dptr2; 
dptr++; dptr2++; 
}  } 
dptr = dptr - n; dptr3 = Lld + (n * n) * (i - 1); 
dgemv_("t", &n, &n, &fmone, dptr3, &n, dptr1, &ione, &fone, dptr, &ione); 

dptr3 = Ld + (n * n) * (i - 1); 
dtrsv_("l", "t", "n", &n, dptr3, &n, dptr, &ione); 

}  } { 


for (i = 0; __MW_INSTRUM_NODE_214(i < T - 1); i++) 
{ 
dptr = Ctdnu + i * (n + m); dptr1 = dnu + i * n; 
dgemv_("n", &m, &n, &fmone, Bt, &m, dptr1, &ione, &fzero, dptr, &ione); 

dptr = (Ctdnu + i * (n + m)) + m; dptr2 = dnu + (i + 1) * n; { 
for (j = 0; __MW_INSTRUM_NODE_216(j < n); j++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = dptr - n; 
dgemv_("n", &n, &n, &fmone, At, &n, dptr2, &ione, &fone, dptr, &ione); 

}  } 

dptr = Ctdnu + (T - 1) * (n + m); dptr1 = dnu + (T - 1) * n; 
dgemv_("n", &m, &n, &fmone, Bt, &m, dptr1, &ione, &fzero, dptr, &ione); 

dptr = dptr + m; { 
for (i = 0; __MW_INSTRUM_NODE_218(i < n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dptr = rdmCtdnu; dptr1 = Ctdnu; dptr2 = rd; { 
for (i = 0; __MW_INSTRUM_NODE_220(i < nz); i++) 
{ 
*dptr = -(*dptr1) - *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } { 


for (i = 0; __MW_INSTRUM_NODE_222(i < T); i++) 
{ 
dptr = (dz + (i + 1) * m) + i * n; dptr1 = (rdmCtdnu + (i + 1) * m) + i * n; 
dptr2 = PhiinvQeye + (n * n) * i; 
dgemv_("n", &n, &n, &fone, dptr2, &n, dptr1, &ione, &fzero, dptr, &ione); 

}  } { 
for (i = 0; __MW_INSTRUM_NODE_224(i < T); i++) 
{ 
dptr = dz + i * (m + n); dptr1 = rdmCtdnu + i * (m + n); 
dptr2 = PhiinvReye + (m * m) * i; 
dgemv_("n", &m, &m, &fone, dptr2, &m, dptr1, &ione, &fzero, dptr, &ione); 

}  } 
__MW_INSTRUM_NODE_226(), free(PhiQ); __MW_INSTRUM_NODE_227(), free(PhiR); __MW_INSTRUM_NODE_228(), free(PhiinvQAt); __MW_INSTRUM_NODE_229(), free(PhiinvRBt); __MW_INSTRUM_NODE_230(), free(PhiinvQeye); 
__MW_INSTRUM_NODE_231(), free(PhiinvReye); __MW_INSTRUM_NODE_232(), free(CPhiinvrd); __MW_INSTRUM_NODE_233(), free(Yd); __MW_INSTRUM_NODE_234(), free(Yud); __MW_INSTRUM_NODE_235(), free(Ld); __MW_INSTRUM_NODE_236(), free(Lld); 
__MW_INSTRUM_NODE_237(), free(gam); __MW_INSTRUM_NODE_238(), free(v); __MW_INSTRUM_NODE_239(), free(be); __MW_INSTRUM_NODE_240(), free(temp); __MW_INSTRUM_NODE_241(), free(tempmatn); __MW_INSTRUM_NODE_242(), free(tempmatm); 
__MW_INSTRUM_NODE_243(), free(Ctdnu); __MW_INSTRUM_NODE_244(), free(rdmCtdnu); } __MW_INSTRUM_NODE_245(); 

} 



void rdrp(double *A, double *B, double *Q, double *R, double *Qf, double *z, double *nu, double *
gf, double *gp, double *b, const int T, const int n, const int m, const int nz, double 
kappa, double *rd, double *rp, double *Ctnu) 
{ __MW_INSTRUM_FCN_ENTER_3(); __MW_INSTRUM_NODE_246(); { 
int i, j; 
double *Cz; 
double *dptr, *dptr1, *dptr2; 

Cz = (__MW_INSTRUM_NODE_247(), malloc((sizeof(double) * T) * n)); 


dptr = Cz; dptr1 = z + m; { 
for (i = 0; __MW_INSTRUM_NODE_248(i < n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 
dgemv_("n", &n, &m, &fmone, B, &n, z, &ione, &fone, Cz, &ione); { 

for (i = 2; __MW_INSTRUM_NODE_250(i <= T); i++) 
{ 
dptr = Cz + (i - 1) * n; dptr1 = (z + m) + (i - 2) * (n + m); 
dptr2 = (z + m) + (i - 1) * (m + n); { 
for (j = 0; __MW_INSTRUM_NODE_252(j < n); j++) 
{ 
*dptr = *dptr2; 
dptr++; dptr2++; 
}  } 
dptr = dptr - n; 
dgemv_("n", &n, &n, &fmone, A, &n, dptr1, &ione, &fone, dptr, &ione); 

dptr1 = dptr1 + n; 
dgemv_("n", &n, &m, &fmone, B, &n, dptr1, &ione, &fone, dptr, &ione); 

}  } 
# 645
dptr = Ctnu; dptr1 = Ctnu + m; dptr2 = nu; { 
for (i = 1; __MW_INSTRUM_NODE_254(i <= T - 1); i++) 
{ 
dgemv_("t", &n, &m, &fmone, B, &n, dptr2, &ione, &fzero, dptr, &ione); 

dptr = (dptr + n) + m; { 
for (j = 0; __MW_INSTRUM_NODE_256(j < n); j++) 
{ 
*dptr1 = *dptr2; 
dptr1++; dptr2++; 
}  } 
dptr1 = (Ctnu + m) + (i - 1) * (n + m); 
dgemv_("t", &n, &n, &fmone, A, &n, dptr2, &ione, &fone, dptr1, &ione); 

dptr1 = (dptr1 + n) + m; 
}  } 
dgemv_("t", &n, &m, &fmone, B, &n, dptr2, &ione, &fzero, dptr, &ione); 

dptr = (Ctnu + nz) - n; dptr1 = nu + (T - 1) * n; { 
for (i = 0; __MW_INSTRUM_NODE_258(i < n); i++) 
{ 
*dptr = *dptr1; 
dptr++; dptr1++; 
}  } 

dptr = rp; dptr1 = Cz; dptr2 = b; { 
for (i = 0; __MW_INSTRUM_NODE_260(i < n * T); i++) 
{ 
*dptr = *dptr1 - *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = rd; dptr1 = Ctnu; dptr2 = gf; { 
for (i = 0; __MW_INSTRUM_NODE_262(i < nz); i++) 
{ 
*dptr = *dptr1 + *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
daxpy_(&nz, &kappa, gp, &ione, rd, &ione); 
__MW_INSTRUM_NODE_264(), free(Cz); } __MW_INSTRUM_NODE_265(); 

} 


void gfgphp(double *Q, double *R, double *Qf, double *zmax, double *zmin, double *z, const int 
T, const int n, const int m, const int nz, double *gf, double *gp, double *hp) 
{ __MW_INSTRUM_FCN_ENTER_4(); __MW_INSTRUM_NODE_266(); { 
int i; 
double *dptr, *dptr1, *dptr2; 
double *gp1, *gp2; 

gp1 = (__MW_INSTRUM_NODE_267(), malloc(sizeof(double) * nz)); 
gp2 = (__MW_INSTRUM_NODE_268(), malloc(sizeof(double) * nz)); 

dptr = gp1; dptr1 = zmax; dptr2 = z; { 
for (i = 0; __MW_INSTRUM_NODE_269(i < nz); i++) 
{ 
*dptr = (1.0) / (*dptr1 - *dptr2); 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = gp2; dptr1 = zmin; dptr2 = z; { 
for (i = 0; __MW_INSTRUM_NODE_271(i < nz); i++) 
{ 
*dptr = (1.0) / (*dptr2 - *dptr1); 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = hp; dptr1 = gp1; dptr2 = gp2; { 
for (i = 0; __MW_INSTRUM_NODE_273(i < nz); i++) 
{ 
*dptr = *dptr1 * *dptr1 + *dptr2 * *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 
dptr = gp; dptr1 = gp1; dptr2 = gp2; { 
for (i = 0; __MW_INSTRUM_NODE_275(i < nz); i++) 
{ 
*dptr = *dptr1 - *dptr2; 
dptr++; dptr1++; dptr2++; 
}  } 

dptr = gf; dptr1 = z; { 
for (i = 0; __MW_INSTRUM_NODE_277(i < T - 1); i++) 
{ 
dgemv_("n", &m, &m, &ftwo, R, &m, dptr1, &ione, &fzero, dptr, &ione); 

dptr = dptr + m; dptr1 = dptr1 + m; 
dgemv_("n", &n, &n, &ftwo, Q, &n, dptr1, &ione, &fzero, dptr, &ione); 

dptr = dptr + n; dptr1 = dptr1 + n; 
}  } 
dgemv_("n", &m, &m, &ftwo, R, &m, dptr1, &ione, &fzero, dptr, &ione); 

dptr = dptr + m; dptr1 = dptr1 + m; 
dgemv_("n", &n, &n, &ftwo, Qf, &n, dptr1, &ione, &fzero, dptr, &ione); 


__MW_INSTRUM_NODE_279(), free(gp1); __MW_INSTRUM_NODE_280(), free(gp2); } __MW_INSTRUM_NODE_281(); 

} 



void resdresp(double *rd, double *rp, const int T, const int n, const int nz, double *resd, double *
resp, double *res) 
{ __MW_INSTRUM_FCN_ENTER_5(); __MW_INSTRUM_NODE_282(); { 
const int nnu = T * n; 
*resp = (__MW_INSTRUM_NODE_283(), dnrm2_(&nnu, rp, &ione)); 
*resd = (__MW_INSTRUM_NODE_284(), dnrm2_(&nz, rd, &ione)); 
*res = (__MW_INSTRUM_NODE_285(), sqrt(*resp * *resp + *resd * *resd)); } __MW_INSTRUM_NODE_286(); 

} 
