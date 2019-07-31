#ifdef ALLOW_DARWIN

CBOP
C     !ROUTINE: DARWIN_PARAMS.h
C     !INTERFACE:
C #include DARWIN_PARAMS.h

C     !DESCRIPTION:
C Contains run-time parameters for the darwin package
C
C Requires: DARWIN_SIZE.h

      _RL DARWIN_UNINIT_RL
      PARAMETER(DARWIN_UNINIT_RL=-999999999 _d 0)

      COMMON/darwin_forcing_params_l/
     &    darwin_chlInitBalanced,
     &    darwin_haveSurfPAR,
     &    darwin_useSEAICE,
     &    darwin_useQsw,
     &    darwin_useEXFwind
      LOGICAL darwin_chlInitBalanced
      LOGICAL darwin_haveSurfPAR
      LOGICAL darwin_useSEAICE
      LOGICAL darwin_useQsw
      LOGICAL darwin_useEXFwind

      COMMON/darwin_forcing_params_i/
     &    darwin_chlIter0
      INTEGER darwin_chlIter0

      COMMON /DARWIN_CONSTANTS_r/
     &    rad2deg
      _RL rad2deg

#ifdef DARWIN_ALLOW_CARBON
      COMMON /CARBON_CONSTANTS_r/
     &    Pa2Atm,
     &    ptr2mol,
     &    sca1,
     &    sca2,
     &    sca3,
     &    sca4,
     &    sox1,
     &    sox2,
     &    sox3,
     &    sox4,
     &    oA0,
     &    oA1,
     &    oA2,
     &    oA3,
     &    oA4,
     &    oA5,
     &    oB0,
     &    oB1,
     &    oB2,
     &    oB3,
     &    oC0
      _RL Pa2Atm
      _RL ptr2mol
      _RL sca1
      _RL sca2
      _RL sca3
      _RL sca4
      _RL sox1
      _RL sox2
      _RL sox3
      _RL sox4
      _RL oA0
      _RL oA1
      _RL oA2
      _RL oA3
      _RL oA4
      _RL oA5
      _RL oB0
      _RL oB1
      _RL oB2
      _RL oB3
      _RL oC0
#endif

      COMMON /DARWIN_PARAMS_c/ darwin_pickupSuff
      CHARACTER*10 darwin_pickupSuff
      COMMON /DARWIN_PARAMS_l/
     &    darwin_strict_check,
     &    darwin_linFSConserve,
     &    darwin_read_phos
      LOGICAL darwin_strict_check
      LOGICAL darwin_linFSConserve
      LOGICAL darwin_read_phos
      COMMON /DARWIN_PARAMS_i/
     &    darwin_seed,
     &    iDEBUG,
     &    jDEBUG,
     &    kDEBUG
      INTEGER darwin_seed
      INTEGER iDEBUG
      INTEGER jDEBUG
      INTEGER kDEBUG
      COMMON /DARWIN_PARAMS_r/
     &    katten_w,
     &    katten_chl,
     &    parfrac,
     &    parconv,
     &    tempnorm,
     &    TempAeArr,
     &    TemprefArr,
     &    TempCoeffArr,
     &    alpfe,
     &    scav,
     &    ligand_tot,
     &    ligand_stab,
     &    freefemax,
     &    scav_rat,
     &    scav_inter,
     &    scav_exp,
     &    scav_R_POPPOC,
     &    depthfesed,
     &    fesedflux,
     &    fesedflux_pcm,
     &    R_CP_fesed,
     &    Knita,
     &    Knitb,
     &    PAR_oxi,
     &    Kdoc,
     &    Kdop,
     &    Kdon,
     &    KdoFe,
     &    KPOC,
     &    KPOP,
     &    KPON,
     &    KPOFe,
     &    KPOSi,
     &    wC_sink,
     &    wP_sink,
     &    wN_sink,
     &    wFe_sink,
     &    wSi_sink,
     &    wPIC_sink,
     &    Kdissc,
#ifdef DARWIN_ALLOW_CARBON
     &    R_OP,
     &    R_OC,
     &    m3perkg,
     &    surfSaltMinInit,
     &    surfSaltMaxInit,
     &    surfTempMinInit,
     &    surfTempMaxInit,
     &    surfDICMinInit,
     &    surfDICMaxInit,
     &    surfALKMinInit,
     &    surfALKMaxInit,
     &    surfPO4MinInit,
     &    surfPO4MaxInit,
     &    surfSiMinInit,
     &    surfSiMaxInit,
     &    surfSaltMin,
     &    surfSaltMax,
     &    surfTempMin,
     &    surfTempMax,
     &    surfDICMin,
     &    surfDICMax,
     &    surfALKMin,
     &    surfALKMax,
     &    surfPO4Min,
     &    surfPO4Max,
     &    surfSiMin,
     &    surfSiMax,
#endif
     &    diaz_ini_fac,
     &    O2crit,
     &    denit_NP,
     &    denit_NO3,
     &    NO3crit,
     &    PARmin,
     &    chl2nmax,
     &    synthcost,
     &    palat_min,
     &    inhib_graz,
     &    inhib_graz_exp,
     &    hillnumUptake,
     &    hillnumGraz,
     &    hollexp,
     &    phygrazmin,
     &    pcoefO2,
     &    pmaxDIN,
     &    ksatPOM,
     &    ksatDOM,
     &    ksatDIN,
     &    alpha_hydrol,
     &    yod,
     &    yoe,
     &    ynd,
     &    yne,
     &    fnh4,
     &    ynh4,
     &    yonh4,
     &    fno2,
     &    yno2,
     &    yono2,
     &    depthdenit
      _RL katten_w
      _RL katten_chl
      _RL parfrac
      _RL parconv
      _RL tempnorm
      _RL TempAeArr
      _RL TemprefArr
      _RL TempCoeffArr
      _RL alpfe
      _RL scav
      _RL ligand_tot
      _RL ligand_stab
      _RL freefemax
      _RL scav_rat
      _RL scav_inter
      _RL scav_exp
      _RL scav_R_POPPOC
      _RL depthfesed
      _RL fesedflux
      _RL fesedflux_pcm
      _RL R_CP_fesed
      _RL Knita
      _RL Knitb
      _RL PAR_oxi
      _RL Kdoc
      _RL Kdop
      _RL Kdon
      _RL KdoFe
      _RL KPOC
      _RL KPOP
      _RL KPON
      _RL KPOFe
      _RL KPOSi
      _RL wC_sink
      _RL wP_sink
      _RL wN_sink
      _RL wFe_sink
      _RL wSi_sink
      _RL wPIC_sink
      _RL Kdissc
#ifdef DARWIN_ALLOW_CARBON
      _RL R_OP
      _RL R_OC
      _RL m3perkg
      _RL surfSaltMinInit
      _RL surfSaltMaxInit
      _RL surfTempMinInit
      _RL surfTempMaxInit
      _RL surfDICMinInit
      _RL surfDICMaxInit
      _RL surfALKMinInit
      _RL surfALKMaxInit
      _RL surfPO4MinInit
      _RL surfPO4MaxInit
      _RL surfSiMinInit
      _RL surfSiMaxInit
      _RL surfSaltMin
      _RL surfSaltMax
      _RL surfTempMin
      _RL surfTempMax
      _RL surfDICMin
      _RL surfDICMax
      _RL surfALKMin
      _RL surfALKMax
      _RL surfPO4Min
      _RL surfPO4Max
      _RL surfSiMin
      _RL surfSiMax
#endif
      _RL diaz_ini_fac
      _RL O2crit
      _RL denit_NP
      _RL denit_NO3
      _RL NO3crit
      _RL PARmin
      _RL chl2nmax
      _RL synthcost
      _RL palat_min
      _RL inhib_graz
      _RL inhib_graz_exp
      _RL hillnumUptake
      _RL hillnumGraz
      _RL hollexp
      _RL phygrazmin
      _RL pcoefO2
      _RL pmaxDIN
      _RL ksatPOM
      _RL ksatDOM
      _RL ksatDIN
      _RL alpha_hydrol
      _RL yod
      _RL yoe
      _RL ynd
      _RL yne
      _RL fnh4
      _RL ynh4
      _RL yonh4
      _RL fno2
      _RL yno2
      _RL yono2
      _RL depthdenit

#ifdef DARWIN_ALLOW_CDOM
      COMMON /DARWIN_CDOM_PARAMS_r/
     &    fracCDOM,
     &    CDOMdegrd,
     &    CDOMbleach,
     &    PARCDOM,
     &    R_NP_CDOM,
     &    R_FeP_CDOM,
     &    R_CP_CDOM,
     &    CDOMcoeff
      _RL fracCDOM
      _RL CDOMdegrd
      _RL CDOMbleach
      _RL PARCDOM
      _RL R_NP_CDOM
      _RL R_FeP_CDOM
      _RL R_CP_CDOM
      _RL CDOMcoeff
#endif

      COMMON /DARWIN_DEPENDENT_PARAMS_i/
     &    darwin_dependent_i_dummy,
#ifdef ALLOW_RADTRANS
#ifdef DARWIN_ALLOW_CDOM
#else
     &    laCDOM,
#endif
#endif
     &    kMinFeSed,
     &    kMaxFeSed
      INTEGER darwin_dependent_i_dummy
#ifdef ALLOW_RADTRANS
#ifdef DARWIN_ALLOW_CDOM
#else
      INTEGER laCDOM
#endif
#endif
      INTEGER kMinFeSed
      INTEGER kMaxFeSed


#endif /* ALLOW_DARWIN */

