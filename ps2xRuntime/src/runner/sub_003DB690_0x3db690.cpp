#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DB690
// Address: 0x3db690 - 0x3dbb48
void sub_003DB690_0x3db690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB690_0x3db690");
#endif

    switch (ctx->pc) {
        case 0x3db690u: goto label_3db690;
        case 0x3db694u: goto label_3db694;
        case 0x3db698u: goto label_3db698;
        case 0x3db69cu: goto label_3db69c;
        case 0x3db6a0u: goto label_3db6a0;
        case 0x3db6a4u: goto label_3db6a4;
        case 0x3db6a8u: goto label_3db6a8;
        case 0x3db6acu: goto label_3db6ac;
        case 0x3db6b0u: goto label_3db6b0;
        case 0x3db6b4u: goto label_3db6b4;
        case 0x3db6b8u: goto label_3db6b8;
        case 0x3db6bcu: goto label_3db6bc;
        case 0x3db6c0u: goto label_3db6c0;
        case 0x3db6c4u: goto label_3db6c4;
        case 0x3db6c8u: goto label_3db6c8;
        case 0x3db6ccu: goto label_3db6cc;
        case 0x3db6d0u: goto label_3db6d0;
        case 0x3db6d4u: goto label_3db6d4;
        case 0x3db6d8u: goto label_3db6d8;
        case 0x3db6dcu: goto label_3db6dc;
        case 0x3db6e0u: goto label_3db6e0;
        case 0x3db6e4u: goto label_3db6e4;
        case 0x3db6e8u: goto label_3db6e8;
        case 0x3db6ecu: goto label_3db6ec;
        case 0x3db6f0u: goto label_3db6f0;
        case 0x3db6f4u: goto label_3db6f4;
        case 0x3db6f8u: goto label_3db6f8;
        case 0x3db6fcu: goto label_3db6fc;
        case 0x3db700u: goto label_3db700;
        case 0x3db704u: goto label_3db704;
        case 0x3db708u: goto label_3db708;
        case 0x3db70cu: goto label_3db70c;
        case 0x3db710u: goto label_3db710;
        case 0x3db714u: goto label_3db714;
        case 0x3db718u: goto label_3db718;
        case 0x3db71cu: goto label_3db71c;
        case 0x3db720u: goto label_3db720;
        case 0x3db724u: goto label_3db724;
        case 0x3db728u: goto label_3db728;
        case 0x3db72cu: goto label_3db72c;
        case 0x3db730u: goto label_3db730;
        case 0x3db734u: goto label_3db734;
        case 0x3db738u: goto label_3db738;
        case 0x3db73cu: goto label_3db73c;
        case 0x3db740u: goto label_3db740;
        case 0x3db744u: goto label_3db744;
        case 0x3db748u: goto label_3db748;
        case 0x3db74cu: goto label_3db74c;
        case 0x3db750u: goto label_3db750;
        case 0x3db754u: goto label_3db754;
        case 0x3db758u: goto label_3db758;
        case 0x3db75cu: goto label_3db75c;
        case 0x3db760u: goto label_3db760;
        case 0x3db764u: goto label_3db764;
        case 0x3db768u: goto label_3db768;
        case 0x3db76cu: goto label_3db76c;
        case 0x3db770u: goto label_3db770;
        case 0x3db774u: goto label_3db774;
        case 0x3db778u: goto label_3db778;
        case 0x3db77cu: goto label_3db77c;
        case 0x3db780u: goto label_3db780;
        case 0x3db784u: goto label_3db784;
        case 0x3db788u: goto label_3db788;
        case 0x3db78cu: goto label_3db78c;
        case 0x3db790u: goto label_3db790;
        case 0x3db794u: goto label_3db794;
        case 0x3db798u: goto label_3db798;
        case 0x3db79cu: goto label_3db79c;
        case 0x3db7a0u: goto label_3db7a0;
        case 0x3db7a4u: goto label_3db7a4;
        case 0x3db7a8u: goto label_3db7a8;
        case 0x3db7acu: goto label_3db7ac;
        case 0x3db7b0u: goto label_3db7b0;
        case 0x3db7b4u: goto label_3db7b4;
        case 0x3db7b8u: goto label_3db7b8;
        case 0x3db7bcu: goto label_3db7bc;
        case 0x3db7c0u: goto label_3db7c0;
        case 0x3db7c4u: goto label_3db7c4;
        case 0x3db7c8u: goto label_3db7c8;
        case 0x3db7ccu: goto label_3db7cc;
        case 0x3db7d0u: goto label_3db7d0;
        case 0x3db7d4u: goto label_3db7d4;
        case 0x3db7d8u: goto label_3db7d8;
        case 0x3db7dcu: goto label_3db7dc;
        case 0x3db7e0u: goto label_3db7e0;
        case 0x3db7e4u: goto label_3db7e4;
        case 0x3db7e8u: goto label_3db7e8;
        case 0x3db7ecu: goto label_3db7ec;
        case 0x3db7f0u: goto label_3db7f0;
        case 0x3db7f4u: goto label_3db7f4;
        case 0x3db7f8u: goto label_3db7f8;
        case 0x3db7fcu: goto label_3db7fc;
        case 0x3db800u: goto label_3db800;
        case 0x3db804u: goto label_3db804;
        case 0x3db808u: goto label_3db808;
        case 0x3db80cu: goto label_3db80c;
        case 0x3db810u: goto label_3db810;
        case 0x3db814u: goto label_3db814;
        case 0x3db818u: goto label_3db818;
        case 0x3db81cu: goto label_3db81c;
        case 0x3db820u: goto label_3db820;
        case 0x3db824u: goto label_3db824;
        case 0x3db828u: goto label_3db828;
        case 0x3db82cu: goto label_3db82c;
        case 0x3db830u: goto label_3db830;
        case 0x3db834u: goto label_3db834;
        case 0x3db838u: goto label_3db838;
        case 0x3db83cu: goto label_3db83c;
        case 0x3db840u: goto label_3db840;
        case 0x3db844u: goto label_3db844;
        case 0x3db848u: goto label_3db848;
        case 0x3db84cu: goto label_3db84c;
        case 0x3db850u: goto label_3db850;
        case 0x3db854u: goto label_3db854;
        case 0x3db858u: goto label_3db858;
        case 0x3db85cu: goto label_3db85c;
        case 0x3db860u: goto label_3db860;
        case 0x3db864u: goto label_3db864;
        case 0x3db868u: goto label_3db868;
        case 0x3db86cu: goto label_3db86c;
        case 0x3db870u: goto label_3db870;
        case 0x3db874u: goto label_3db874;
        case 0x3db878u: goto label_3db878;
        case 0x3db87cu: goto label_3db87c;
        case 0x3db880u: goto label_3db880;
        case 0x3db884u: goto label_3db884;
        case 0x3db888u: goto label_3db888;
        case 0x3db88cu: goto label_3db88c;
        case 0x3db890u: goto label_3db890;
        case 0x3db894u: goto label_3db894;
        case 0x3db898u: goto label_3db898;
        case 0x3db89cu: goto label_3db89c;
        case 0x3db8a0u: goto label_3db8a0;
        case 0x3db8a4u: goto label_3db8a4;
        case 0x3db8a8u: goto label_3db8a8;
        case 0x3db8acu: goto label_3db8ac;
        case 0x3db8b0u: goto label_3db8b0;
        case 0x3db8b4u: goto label_3db8b4;
        case 0x3db8b8u: goto label_3db8b8;
        case 0x3db8bcu: goto label_3db8bc;
        case 0x3db8c0u: goto label_3db8c0;
        case 0x3db8c4u: goto label_3db8c4;
        case 0x3db8c8u: goto label_3db8c8;
        case 0x3db8ccu: goto label_3db8cc;
        case 0x3db8d0u: goto label_3db8d0;
        case 0x3db8d4u: goto label_3db8d4;
        case 0x3db8d8u: goto label_3db8d8;
        case 0x3db8dcu: goto label_3db8dc;
        case 0x3db8e0u: goto label_3db8e0;
        case 0x3db8e4u: goto label_3db8e4;
        case 0x3db8e8u: goto label_3db8e8;
        case 0x3db8ecu: goto label_3db8ec;
        case 0x3db8f0u: goto label_3db8f0;
        case 0x3db8f4u: goto label_3db8f4;
        case 0x3db8f8u: goto label_3db8f8;
        case 0x3db8fcu: goto label_3db8fc;
        case 0x3db900u: goto label_3db900;
        case 0x3db904u: goto label_3db904;
        case 0x3db908u: goto label_3db908;
        case 0x3db90cu: goto label_3db90c;
        case 0x3db910u: goto label_3db910;
        case 0x3db914u: goto label_3db914;
        case 0x3db918u: goto label_3db918;
        case 0x3db91cu: goto label_3db91c;
        case 0x3db920u: goto label_3db920;
        case 0x3db924u: goto label_3db924;
        case 0x3db928u: goto label_3db928;
        case 0x3db92cu: goto label_3db92c;
        case 0x3db930u: goto label_3db930;
        case 0x3db934u: goto label_3db934;
        case 0x3db938u: goto label_3db938;
        case 0x3db93cu: goto label_3db93c;
        case 0x3db940u: goto label_3db940;
        case 0x3db944u: goto label_3db944;
        case 0x3db948u: goto label_3db948;
        case 0x3db94cu: goto label_3db94c;
        case 0x3db950u: goto label_3db950;
        case 0x3db954u: goto label_3db954;
        case 0x3db958u: goto label_3db958;
        case 0x3db95cu: goto label_3db95c;
        case 0x3db960u: goto label_3db960;
        case 0x3db964u: goto label_3db964;
        case 0x3db968u: goto label_3db968;
        case 0x3db96cu: goto label_3db96c;
        case 0x3db970u: goto label_3db970;
        case 0x3db974u: goto label_3db974;
        case 0x3db978u: goto label_3db978;
        case 0x3db97cu: goto label_3db97c;
        case 0x3db980u: goto label_3db980;
        case 0x3db984u: goto label_3db984;
        case 0x3db988u: goto label_3db988;
        case 0x3db98cu: goto label_3db98c;
        case 0x3db990u: goto label_3db990;
        case 0x3db994u: goto label_3db994;
        case 0x3db998u: goto label_3db998;
        case 0x3db99cu: goto label_3db99c;
        case 0x3db9a0u: goto label_3db9a0;
        case 0x3db9a4u: goto label_3db9a4;
        case 0x3db9a8u: goto label_3db9a8;
        case 0x3db9acu: goto label_3db9ac;
        case 0x3db9b0u: goto label_3db9b0;
        case 0x3db9b4u: goto label_3db9b4;
        case 0x3db9b8u: goto label_3db9b8;
        case 0x3db9bcu: goto label_3db9bc;
        case 0x3db9c0u: goto label_3db9c0;
        case 0x3db9c4u: goto label_3db9c4;
        case 0x3db9c8u: goto label_3db9c8;
        case 0x3db9ccu: goto label_3db9cc;
        case 0x3db9d0u: goto label_3db9d0;
        case 0x3db9d4u: goto label_3db9d4;
        case 0x3db9d8u: goto label_3db9d8;
        case 0x3db9dcu: goto label_3db9dc;
        case 0x3db9e0u: goto label_3db9e0;
        case 0x3db9e4u: goto label_3db9e4;
        case 0x3db9e8u: goto label_3db9e8;
        case 0x3db9ecu: goto label_3db9ec;
        case 0x3db9f0u: goto label_3db9f0;
        case 0x3db9f4u: goto label_3db9f4;
        case 0x3db9f8u: goto label_3db9f8;
        case 0x3db9fcu: goto label_3db9fc;
        case 0x3dba00u: goto label_3dba00;
        case 0x3dba04u: goto label_3dba04;
        case 0x3dba08u: goto label_3dba08;
        case 0x3dba0cu: goto label_3dba0c;
        case 0x3dba10u: goto label_3dba10;
        case 0x3dba14u: goto label_3dba14;
        case 0x3dba18u: goto label_3dba18;
        case 0x3dba1cu: goto label_3dba1c;
        case 0x3dba20u: goto label_3dba20;
        case 0x3dba24u: goto label_3dba24;
        case 0x3dba28u: goto label_3dba28;
        case 0x3dba2cu: goto label_3dba2c;
        case 0x3dba30u: goto label_3dba30;
        case 0x3dba34u: goto label_3dba34;
        case 0x3dba38u: goto label_3dba38;
        case 0x3dba3cu: goto label_3dba3c;
        case 0x3dba40u: goto label_3dba40;
        case 0x3dba44u: goto label_3dba44;
        case 0x3dba48u: goto label_3dba48;
        case 0x3dba4cu: goto label_3dba4c;
        case 0x3dba50u: goto label_3dba50;
        case 0x3dba54u: goto label_3dba54;
        case 0x3dba58u: goto label_3dba58;
        case 0x3dba5cu: goto label_3dba5c;
        case 0x3dba60u: goto label_3dba60;
        case 0x3dba64u: goto label_3dba64;
        case 0x3dba68u: goto label_3dba68;
        case 0x3dba6cu: goto label_3dba6c;
        case 0x3dba70u: goto label_3dba70;
        case 0x3dba74u: goto label_3dba74;
        case 0x3dba78u: goto label_3dba78;
        case 0x3dba7cu: goto label_3dba7c;
        case 0x3dba80u: goto label_3dba80;
        case 0x3dba84u: goto label_3dba84;
        case 0x3dba88u: goto label_3dba88;
        case 0x3dba8cu: goto label_3dba8c;
        case 0x3dba90u: goto label_3dba90;
        case 0x3dba94u: goto label_3dba94;
        case 0x3dba98u: goto label_3dba98;
        case 0x3dba9cu: goto label_3dba9c;
        case 0x3dbaa0u: goto label_3dbaa0;
        case 0x3dbaa4u: goto label_3dbaa4;
        case 0x3dbaa8u: goto label_3dbaa8;
        case 0x3dbaacu: goto label_3dbaac;
        case 0x3dbab0u: goto label_3dbab0;
        case 0x3dbab4u: goto label_3dbab4;
        case 0x3dbab8u: goto label_3dbab8;
        case 0x3dbabcu: goto label_3dbabc;
        case 0x3dbac0u: goto label_3dbac0;
        case 0x3dbac4u: goto label_3dbac4;
        case 0x3dbac8u: goto label_3dbac8;
        case 0x3dbaccu: goto label_3dbacc;
        case 0x3dbad0u: goto label_3dbad0;
        case 0x3dbad4u: goto label_3dbad4;
        case 0x3dbad8u: goto label_3dbad8;
        case 0x3dbadcu: goto label_3dbadc;
        case 0x3dbae0u: goto label_3dbae0;
        case 0x3dbae4u: goto label_3dbae4;
        case 0x3dbae8u: goto label_3dbae8;
        case 0x3dbaecu: goto label_3dbaec;
        case 0x3dbaf0u: goto label_3dbaf0;
        case 0x3dbaf4u: goto label_3dbaf4;
        case 0x3dbaf8u: goto label_3dbaf8;
        case 0x3dbafcu: goto label_3dbafc;
        case 0x3dbb00u: goto label_3dbb00;
        case 0x3dbb04u: goto label_3dbb04;
        case 0x3dbb08u: goto label_3dbb08;
        case 0x3dbb0cu: goto label_3dbb0c;
        case 0x3dbb10u: goto label_3dbb10;
        case 0x3dbb14u: goto label_3dbb14;
        case 0x3dbb18u: goto label_3dbb18;
        case 0x3dbb1cu: goto label_3dbb1c;
        case 0x3dbb20u: goto label_3dbb20;
        case 0x3dbb24u: goto label_3dbb24;
        case 0x3dbb28u: goto label_3dbb28;
        case 0x3dbb2cu: goto label_3dbb2c;
        case 0x3dbb30u: goto label_3dbb30;
        case 0x3dbb34u: goto label_3dbb34;
        case 0x3dbb38u: goto label_3dbb38;
        case 0x3dbb3cu: goto label_3dbb3c;
        case 0x3dbb40u: goto label_3dbb40;
        case 0x3dbb44u: goto label_3dbb44;
        default: break;
    }

    ctx->pc = 0x3db690u;

label_3db690:
    // 0x3db690: 0x27bdf6b0  addiu       $sp, $sp, -0x950
    ctx->pc = 0x3db690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964912));
label_3db694:
    // 0x3db694: 0x7fb30900  sq          $s3, 0x900($sp)
    ctx->pc = 0x3db694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 19));
label_3db698:
    // 0x3db698: 0x7fb508e0  sq          $s5, 0x8E0($sp)
    ctx->pc = 0x3db698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 21));
label_3db69c:
    // 0x3db69c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3db69cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db6a0:
    // 0x3db6a0: 0x7fb608d0  sq          $s6, 0x8D0($sp)
    ctx->pc = 0x3db6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 22));
label_3db6a4:
    // 0x3db6a4: 0x7fb708c0  sq          $s7, 0x8C0($sp)
    ctx->pc = 0x3db6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 23));
label_3db6a8:
    // 0x3db6a8: 0x7fb00930  sq          $s0, 0x930($sp)
    ctx->pc = 0x3db6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 16));
label_3db6ac:
    // 0x3db6ac: 0x7fb10920  sq          $s1, 0x920($sp)
    ctx->pc = 0x3db6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 17));
label_3db6b0:
    // 0x3db6b0: 0x7fb20910  sq          $s2, 0x910($sp)
    ctx->pc = 0x3db6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 18));
label_3db6b4:
    // 0x3db6b4: 0x7fb408f0  sq          $s4, 0x8F0($sp)
    ctx->pc = 0x3db6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 20));
label_3db6b8:
    // 0x3db6b8: 0x7fbe08b0  sq          $fp, 0x8B0($sp)
    ctx->pc = 0x3db6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 30));
label_3db6bc:
    // 0x3db6bc: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3db6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3db6c0:
    // 0x3db6c0: 0xe7b50948  swc1        $f21, 0x948($sp)
    ctx->pc = 0x3db6c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2376), bits); }
label_3db6c4:
    // 0x3db6c4: 0xe7b40940  swc1        $f20, 0x940($sp)
    ctx->pc = 0x3db6c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2368), bits); }
label_3db6c8:
    // 0x3db6c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3db6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3db6cc:
    // 0x3db6cc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db6ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db6d0:
    // 0x3db6d0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db6d4:
    // 0x3db6d4: 0x40f809  jalr        $v0
label_3db6d8:
    if (ctx->pc == 0x3DB6D8u) {
        ctx->pc = 0x3DB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6D4u;
        // 0x3db6d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB6DCu;
        goto label_3db6dc;
    }
    ctx->pc = 0x3DB6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB6DCu);
        ctx->pc = 0x3DB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB6D4u;
        // 0x3db6d8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB6D4u, 0x3DB6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB6DCu;
label_3db6dc:
    // 0x3db6dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3db6dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db6e0:
    // 0x3db6e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3db6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3db6e4:
    // 0x3db6e4: 0x27b70420  addiu       $s7, $sp, 0x420
    ctx->pc = 0x3db6e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3db6e8:
    // 0x3db6e8: 0x27b50440  addiu       $s5, $sp, 0x440
    ctx->pc = 0x3db6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3db6ec:
    // 0x3db6ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3db6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3db6f0:
    // 0x3db6f0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3db6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3db6f4:
    // 0x3db6f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3db6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3db6f8:
    // 0x3db6f8: 0x0  nop
    ctx->pc = 0x3db6f8u;
    // NOP
label_3db6fc:
    // 0x3db6fc: 0x0  nop
    ctx->pc = 0x3db6fcu;
    // NOP
label_3db700:
    // 0x3db700: 0x0  nop
    ctx->pc = 0x3db700u;
    // NOP
label_3db704:
    // 0x3db704: 0x0  nop
    ctx->pc = 0x3db704u;
    // NOP
label_3db708:
    // 0x3db708: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3db70c:
    if (ctx->pc == 0x3DB70Cu) {
        ctx->pc = 0x3DB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB708u;
        // 0x3db70c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB710u;
        goto label_3db710;
    }
    ctx->pc = 0x3DB708u;
    {
        const bool branch_taken_0x3db708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DB70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB708u;
        // 0x3db70c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db708) {
            ctx->pc = 0x3DB6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db6f8;
        }
    }
    ctx->pc = 0x3DB710u;
label_3db710:
    // 0x3db710: 0xc138ddc  jal         func_4E3770
label_3db714:
    if (ctx->pc == 0x3DB714u) {
        ctx->pc = 0x3DB714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB710u;
        // 0x3db714: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB718u;
        goto label_3db718;
    }
    ctx->pc = 0x3DB710u;
    SET_GPR_U32(ctx, 31, 0x3DB718u);
    ctx->pc = 0x3DB714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB710u;
    // 0x3db714: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DB710u, 0x3DB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB718u;
label_3db718:
    // 0x3db718: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db71c:
    // 0x3db71c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3db71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3db720:
    // 0x3db720: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x3db720u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db724:
    // 0x3db724: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3db724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3db728:
    // 0x3db728: 0xc045c82  jal         func_117208
label_3db72c:
    if (ctx->pc == 0x3DB72Cu) {
        ctx->pc = 0x3DB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB728u;
        // 0x3db72c: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB730u;
        goto label_3db730;
    }
    ctx->pc = 0x3DB728u;
    SET_GPR_U32(ctx, 31, 0x3DB730u);
    ctx->pc = 0x3DB72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB728u;
    // 0x3db72c: 0x8ec40014  lw          $a0, 0x14($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117208u, 0x3DB728u, 0x3DB730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB730u;
label_3db730:
    // 0x3db730: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3db730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db734:
    // 0x3db734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3db734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3db738:
    // 0x3db738: 0xc0e8f5c  jal         func_3A3D70
label_3db73c:
    if (ctx->pc == 0x3DB73Cu) {
        ctx->pc = 0x3DB73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB738u;
        // 0x3db73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB740u;
        goto label_3db740;
    }
    ctx->pc = 0x3DB738u;
    SET_GPR_U32(ctx, 31, 0x3DB740u);
    ctx->pc = 0x3DB73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB738u;
    // 0x3db73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3DB738u, 0x3DB740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB740u;
label_3db740:
    // 0x3db740: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3db740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3db744:
    // 0x3db744: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3db744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3db748:
    // 0x3db748: 0xc136afa  jal         func_4DABE8
label_3db74c:
    if (ctx->pc == 0x3DB74Cu) {
        ctx->pc = 0x3DB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB748u;
        // 0x3db74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB750u;
        goto label_3db750;
    }
    ctx->pc = 0x3DB748u;
    SET_GPR_U32(ctx, 31, 0x3DB750u);
    ctx->pc = 0x3DB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB748u;
    // 0x3db74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3DB748u, 0x3DB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB750u;
label_3db750:
    // 0x3db750: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3db750u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db754:
    // 0x3db754: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3db754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3db758:
    // 0x3db758: 0x7ba50450  lq          $a1, 0x450($sp)
    ctx->pc = 0x3db758u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3db75c:
    // 0x3db75c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x3db75cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_3db760:
    // 0x3db760: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3db760u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db764:
    // 0x3db764: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3db764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db768:
    // 0x3db768: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3db768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3db76c:
    // 0x3db76c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3db76cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3db770:
    // 0x3db770: 0x4a0003bf  vwaitq
    ctx->pc = 0x3db770u;
    // VWAITQ (Q already resolved in this runtime)
label_3db774:
    // 0x3db774: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3db774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3db778:
    // 0x3db778: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3db778u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3db77c:
    // 0x3db77c: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x3db77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_3db780:
    // 0x3db780: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db784:
    // 0x3db784: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3db784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3db788:
    // 0x3db788: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3db788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3db78c:
    // 0x3db78c: 0x7fa50430  sq          $a1, 0x430($sp)
    ctx->pc = 0x3db78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 5));
label_3db790:
    // 0x3db790: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3db790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3db794:
    // 0x3db794: 0xc0e94a0  jal         func_3A5280
label_3db798:
    if (ctx->pc == 0x3DB798u) {
        ctx->pc = 0x3DB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB794u;
        // 0x3db798: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB79Cu;
        goto label_3db79c;
    }
    ctx->pc = 0x3DB794u;
    SET_GPR_U32(ctx, 31, 0x3DB79Cu);
    ctx->pc = 0x3DB798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB794u;
    // 0x3db798: 0x7fa20470  sq          $v0, 0x470($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB794u, 0x3DB79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB79Cu;
label_3db79c:
    // 0x3db79c: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_3db7a0:
    if (ctx->pc == 0x3DB7A0u) {
        ctx->pc = 0x3DB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB79Cu;
        // 0x3db7a0: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7A4u;
        goto label_3db7a4;
    }
    ctx->pc = 0x3DB79Cu;
    {
        const bool branch_taken_0x3db79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db79c) {
            ctx->pc = 0x3DB7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB79Cu;
            // 0x3db7a0: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB894u;
            goto label_3db894;
        }
    }
    ctx->pc = 0x3DB7A4u;
label_3db7a4:
    // 0x3db7a4: 0x16200043  bnez        $s1, . + 4 + (0x43 << 2)
label_3db7a8:
    if (ctx->pc == 0x3DB7A8u) {
        ctx->pc = 0x3DB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7A4u;
        // 0x3db7a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7ACu;
        goto label_3db7ac;
    }
    ctx->pc = 0x3DB7A4u;
    {
        const bool branch_taken_0x3db7a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7A4u;
        // 0x3db7a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7a4) {
            ctx->pc = 0x3DB8B4u;
            goto label_3db8b4;
        }
    }
    ctx->pc = 0x3DB7ACu;
label_3db7ac:
    // 0x3db7ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3db7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3db7b0:
    // 0x3db7b0: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x3db7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_3db7b4:
    // 0x3db7b4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x3db7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_3db7b8:
    // 0x3db7b8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x3db7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3db7bc:
    // 0x3db7bc: 0x946256dc  lhu         $v0, 0x56DC($v1)
    ctx->pc = 0x3db7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22236)));
label_3db7c0:
    // 0x3db7c0: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x3db7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3db7c4:
    // 0x3db7c4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x3db7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3db7c8:
    // 0x3db7c8: 0x8c4314d8  lw          $v1, 0x14D8($v0)
    ctx->pc = 0x3db7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3db7cc:
    // 0x3db7cc: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
label_3db7d0:
    if (ctx->pc == 0x3DB7D0u) {
        ctx->pc = 0x3DB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7CCu;
        // 0x3db7d0: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7D4u;
        goto label_3db7d4;
    }
    ctx->pc = 0x3DB7CCu;
    {
        const bool branch_taken_0x3db7cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3DB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7CCu;
        // 0x3db7d0: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7cc) {
            ctx->pc = 0x3DB7DCu;
            goto label_3db7dc;
        }
    }
    ctx->pc = 0x3DB7D4u;
label_3db7d4:
    // 0x3db7d4: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_3db7d8:
    if (ctx->pc == 0x3DB7D8u) {
        ctx->pc = 0x3DB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7D4u;
        // 0x3db7d8: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7DCu;
        goto label_3db7dc;
    }
    ctx->pc = 0x3DB7D4u;
    {
        const bool branch_taken_0x3db7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3db7d4) {
            ctx->pc = 0x3DB7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB7D4u;
            // 0x3db7d8: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB840u;
            goto label_3db840;
        }
    }
    ctx->pc = 0x3DB7DCu;
label_3db7dc:
    // 0x3db7dc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db7dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db7e0:
    // 0x3db7e0: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3db7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3db7e4:
    // 0x3db7e4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3db7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3db7e8:
    // 0x3db7e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db7ec:
    // 0x3db7ec: 0xc0e94a0  jal         func_3A5280
label_3db7f0:
    if (ctx->pc == 0x3DB7F0u) {
        ctx->pc = 0x3DB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7ECu;
        // 0x3db7f0: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7F4u;
        goto label_3db7f4;
    }
    ctx->pc = 0x3DB7ECu;
    SET_GPR_U32(ctx, 31, 0x3DB7F4u);
    ctx->pc = 0x3DB7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB7ECu;
    // 0x3db7f0: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB7ECu, 0x3DB7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB7F4u;
label_3db7f4:
    // 0x3db7f4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3db7f8:
    if (ctx->pc == 0x3DB7F8u) {
        ctx->pc = 0x3DB7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7F4u;
        // 0x3db7f8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB7FCu;
        goto label_3db7fc;
    }
    ctx->pc = 0x3DB7F4u;
    {
        const bool branch_taken_0x3db7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db7f4) {
            ctx->pc = 0x3DB7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB7F4u;
            // 0x3db7f8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB834u;
            goto label_3db834;
        }
    }
    ctx->pc = 0x3DB7FCu;
label_3db7fc:
    // 0x3db7fc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db7fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db800:
    // 0x3db800: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3db800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3db804:
    // 0x3db804: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3db804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3db808:
    // 0x3db808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db80c:
    // 0x3db80c: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3db80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3db810:
    // 0x3db810: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3db810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3db814:
    // 0x3db814: 0xc0e8db8  jal         func_3A36E0
label_3db818:
    if (ctx->pc == 0x3DB818u) {
        ctx->pc = 0x3DB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB814u;
        // 0x3db818: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB81Cu;
        goto label_3db81c;
    }
    ctx->pc = 0x3DB814u;
    SET_GPR_U32(ctx, 31, 0x3DB81Cu);
    ctx->pc = 0x3DB818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB814u;
    // 0x3db818: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A36E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A36E0u, 0x3DB814u, 0x3DB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB81Cu;
label_3db81c:
    // 0x3db81c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3db820:
    if (ctx->pc == 0x3DB820u) {
        ctx->pc = 0x3DB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB81Cu;
        // 0x3db820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB824u;
        goto label_3db824;
    }
    ctx->pc = 0x3DB81Cu;
    {
        const bool branch_taken_0x3db81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB81Cu;
        // 0x3db820: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db81c) {
            ctx->pc = 0x3DB8B4u;
            goto label_3db8b4;
        }
    }
    ctx->pc = 0x3DB824u;
label_3db824:
    // 0x3db824: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3db824u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3db828:
    // 0x3db828: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3db828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3db82c:
    // 0x3db82c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3db830:
    if (ctx->pc == 0x3DB830u) {
        ctx->pc = 0x3DB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB82Cu;
        // 0x3db830: 0x261045f0  addiu       $s0, $s0, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB834u;
        goto label_3db834;
    }
    ctx->pc = 0x3DB82Cu;
    {
        const bool branch_taken_0x3db82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB82Cu;
        // 0x3db830: 0x261045f0  addiu       $s0, $s0, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db82c) {
            ctx->pc = 0x3DB864u;
            goto label_3db864;
        }
    }
    ctx->pc = 0x3DB834u;
label_3db834:
    // 0x3db834: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3db834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3db838:
    // 0x3db838: 0x1000000a  b           . + 4 + (0xA << 2)
label_3db83c:
    if (ctx->pc == 0x3DB83Cu) {
        ctx->pc = 0x3DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB838u;
        // 0x3db83c: 0x261045f0  addiu       $s0, $s0, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB840u;
        goto label_3db840;
    }
    ctx->pc = 0x3DB838u;
    {
        const bool branch_taken_0x3db838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB838u;
        // 0x3db83c: 0x261045f0  addiu       $s0, $s0, 0x45F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db838) {
            ctx->pc = 0x3DB864u;
            goto label_3db864;
        }
    }
    ctx->pc = 0x3DB840u;
label_3db840:
    // 0x3db840: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3db840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3db844:
    // 0x3db844: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3db844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3db848:
    // 0x3db848: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db84c:
    // 0x3db84c: 0xc0e94a0  jal         func_3A5280
label_3db850:
    if (ctx->pc == 0x3DB850u) {
        ctx->pc = 0x3DB850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB84Cu;
        // 0x3db850: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB854u;
        goto label_3db854;
    }
    ctx->pc = 0x3DB84Cu;
    SET_GPR_U32(ctx, 31, 0x3DB854u);
    ctx->pc = 0x3DB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB84Cu;
    // 0x3db850: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB84Cu, 0x3DB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB854u;
label_3db854:
    // 0x3db854: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3db858:
    if (ctx->pc == 0x3DB858u) {
        ctx->pc = 0x3DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB854u;
        // 0x3db858: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB85Cu;
        goto label_3db85c;
    }
    ctx->pc = 0x3DB854u;
    {
        const bool branch_taken_0x3db854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB854u;
        // 0x3db858: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db854) {
            ctx->pc = 0x3DB8B0u;
            goto label_3db8b0;
        }
    }
    ctx->pc = 0x3DB85Cu;
label_3db85c:
    // 0x3db85c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3db85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3db860:
    // 0x3db860: 0x26104608  addiu       $s0, $s0, 0x4608
    ctx->pc = 0x3db860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17928));
label_3db864:
    // 0x3db864: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3db864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3db868:
    // 0x3db868: 0xc0cd4ee  jal         func_3353B8
label_3db86c:
    if (ctx->pc == 0x3DB86Cu) {
        ctx->pc = 0x3DB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB868u;
        // 0x3db86c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB870u;
        goto label_3db870;
    }
    ctx->pc = 0x3DB868u;
    SET_GPR_U32(ctx, 31, 0x3DB870u);
    ctx->pc = 0x3DB86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB868u;
    // 0x3db86c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DB868u, 0x3DB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB870u;
label_3db870:
    // 0x3db870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3db870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3db874:
    // 0x3db874: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3db874u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db878:
    // 0x3db878: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3db878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3db87c:
    // 0x3db87c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3db87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3db880:
    // 0x3db880: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3db880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3db884:
    // 0x3db884: 0xc045c64  jal         func_117190
label_3db888:
    if (ctx->pc == 0x3DB888u) {
        ctx->pc = 0x3DB888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB884u;
        // 0x3db888: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB88Cu;
        goto label_3db88c;
    }
    ctx->pc = 0x3DB884u;
    SET_GPR_U32(ctx, 31, 0x3DB88Cu);
    ctx->pc = 0x3DB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB884u;
    // 0x3db888: 0x7fa30440  sq          $v1, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DB884u, 0x3DB88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB88Cu;
label_3db88c:
    // 0x3db88c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3db890:
    if (ctx->pc == 0x3DB890u) {
        ctx->pc = 0x3DB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB88Cu;
        // 0x3db890: 0xaec20014  sw          $v0, 0x14($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB894u;
        goto label_3db894;
    }
    ctx->pc = 0x3DB88Cu;
    {
        const bool branch_taken_0x3db88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB88Cu;
        // 0x3db890: 0xaec20014  sw          $v0, 0x14($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db88c) {
            ctx->pc = 0x3DB8B0u;
            goto label_3db8b0;
        }
    }
    ctx->pc = 0x3DB894u;
label_3db894:
    // 0x3db894: 0x27a40430  addiu       $a0, $sp, 0x430
    ctx->pc = 0x3db894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3db898:
    // 0x3db898: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x3db898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
label_3db89c:
    // 0x3db89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db8a0:
    // 0x3db8a0: 0xc0e94a0  jal         func_3A5280
label_3db8a4:
    if (ctx->pc == 0x3DB8A4u) {
        ctx->pc = 0x3DB8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8A0u;
        // 0x3db8a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8A8u;
        goto label_3db8a8;
    }
    ctx->pc = 0x3DB8A0u;
    SET_GPR_U32(ctx, 31, 0x3DB8A8u);
    ctx->pc = 0x3DB8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8A0u;
    // 0x3db8a4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB8A0u, 0x3DB8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8A8u;
label_3db8a8:
    // 0x3db8a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3db8ac:
    if (ctx->pc == 0x3DB8ACu) {
        ctx->pc = 0x3DB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8A8u;
        // 0x3db8ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8B0u;
        goto label_3db8b0;
    }
    ctx->pc = 0x3DB8A8u;
    {
        const bool branch_taken_0x3db8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8A8u;
        // 0x3db8ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8a8) {
            ctx->pc = 0x3DB8C4u;
            goto label_3db8c4;
        }
    }
    ctx->pc = 0x3DB8B0u;
label_3db8b0:
    // 0x3db8b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3db8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3db8b4:
    // 0x3db8b4: 0xc0e858c  jal         func_3A1630
label_3db8b8:
    if (ctx->pc == 0x3DB8B8u) {
        ctx->pc = 0x3DB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8B4u;
        // 0x3db8b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8BCu;
        goto label_3db8bc;
    }
    ctx->pc = 0x3DB8B4u;
    SET_GPR_U32(ctx, 31, 0x3DB8BCu);
    ctx->pc = 0x3DB8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8B4u;
    // 0x3db8b8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB8B4u, 0x3DB8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8BCu;
label_3db8bc:
    // 0x3db8bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_3db8c0:
    if (ctx->pc == 0x3DB8C0u) {
        ctx->pc = 0x3DB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8BCu;
        // 0x3db8c0: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8C4u;
        goto label_3db8c4;
    }
    ctx->pc = 0x3DB8BCu;
    {
        const bool branch_taken_0x3db8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8BCu;
        // 0x3db8c0: 0x7a620010  lq          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db8bc) {
            ctx->pc = 0x3DB8D0u;
            goto label_3db8d0;
        }
    }
    ctx->pc = 0x3DB8C4u;
label_3db8c4:
    // 0x3db8c4: 0xc0e858c  jal         func_3A1630
label_3db8c8:
    if (ctx->pc == 0x3DB8C8u) {
        ctx->pc = 0x3DB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8C4u;
        // 0x3db8c8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8CCu;
        goto label_3db8cc;
    }
    ctx->pc = 0x3DB8C4u;
    SET_GPR_U32(ctx, 31, 0x3DB8CCu);
    ctx->pc = 0x3DB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8C4u;
    // 0x3db8c8: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB8C4u, 0x3DB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8CCu;
label_3db8cc:
    // 0x3db8cc: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db8ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db8d0:
    // 0x3db8d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3db8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3db8d4:
    // 0x3db8d4: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3db8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3db8d8:
    // 0x3db8d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db8dc:
    // 0x3db8dc: 0xc0e94a0  jal         func_3A5280
label_3db8e0:
    if (ctx->pc == 0x3DB8E0u) {
        ctx->pc = 0x3DB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8DCu;
        // 0x3db8e0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8E4u;
        goto label_3db8e4;
    }
    ctx->pc = 0x3DB8DCu;
    SET_GPR_U32(ctx, 31, 0x3DB8E4u);
    ctx->pc = 0x3DB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB8DCu;
    // 0x3db8e0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB8DCu, 0x3DB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8E4u;
label_3db8e4:
    // 0x3db8e4: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
label_3db8e8:
    if (ctx->pc == 0x3DB8E8u) {
        ctx->pc = 0x3DB8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB8E4u;
        // 0x3db8e8: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB8ECu;
        goto label_3db8ec;
    }
    ctx->pc = 0x3DB8E4u;
    {
        const bool branch_taken_0x3db8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db8e4) {
            ctx->pc = 0x3DB8E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB8E4u;
            // 0x3db8e8: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBAF0u;
            goto label_3dbaf0;
        }
    }
    ctx->pc = 0x3DB8ECu;
label_3db8ec:
    // 0x3db8ec: 0xc047ab8  jal         func_11EAE0
label_3db8f0:
    if (ctx->pc == 0x3DB8F0u) {
        ctx->pc = 0x3DB8F4u;
        goto label_3db8f4;
    }
    ctx->pc = 0x3DB8ECu;
    SET_GPR_U32(ctx, 31, 0x3DB8F4u);
    ctx->pc = 0x11EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EAE0u, 0x3DB8ECu, 0x3DB8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB8F4u;
label_3db8f4:
    // 0x3db8f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3db8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3db8f8:
    // 0x3db8f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3db8f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db8fc:
    // 0x3db8fc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3db8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3db900:
    // 0x3db900: 0xc0cd4ee  jal         func_3353B8
label_3db904:
    if (ctx->pc == 0x3DB904u) {
        ctx->pc = 0x3DB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB900u;
        // 0x3db904: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB908u;
        goto label_3db908;
    }
    ctx->pc = 0x3DB900u;
    SET_GPR_U32(ctx, 31, 0x3DB908u);
    ctx->pc = 0x3DB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB900u;
    // 0x3db904: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DB900u, 0x3DB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB908u;
label_3db908:
    // 0x3db908: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3db90c:
    if (ctx->pc == 0x3DB90Cu) {
        ctx->pc = 0x3DB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB908u;
        // 0x3db90c: 0x27b20430  addiu       $s2, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB910u;
        goto label_3db910;
    }
    ctx->pc = 0x3DB908u;
    {
        const bool branch_taken_0x3db908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB908u;
        // 0x3db90c: 0x27b20430  addiu       $s2, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db908) {
            ctx->pc = 0x3DB954u;
            goto label_3db954;
        }
    }
    ctx->pc = 0x3DB910u;
label_3db910:
    // 0x3db910: 0xc0e9694  jal         func_3A5A50
label_3db914:
    if (ctx->pc == 0x3DB914u) {
        ctx->pc = 0x3DB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB910u;
        // 0x3db914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB918u;
        goto label_3db918;
    }
    ctx->pc = 0x3DB910u;
    SET_GPR_U32(ctx, 31, 0x3DB918u);
    ctx->pc = 0x3DB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB910u;
    // 0x3db914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DB910u, 0x3DB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB918u;
label_3db918:
    // 0x3db918: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3db91c:
    if (ctx->pc == 0x3DB91Cu) {
        ctx->pc = 0x3DB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB918u;
        // 0x3db91c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB920u;
        goto label_3db920;
    }
    ctx->pc = 0x3DB918u;
    {
        const bool branch_taken_0x3db918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB918u;
        // 0x3db91c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db918) {
            ctx->pc = 0x3DB954u;
            goto label_3db954;
        }
    }
    ctx->pc = 0x3DB920u;
label_3db920:
    // 0x3db920: 0x7ac30000  lq          $v1, 0x0($s6)
    ctx->pc = 0x3db920u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_3db924:
    // 0x3db924: 0x27b10490  addiu       $s1, $sp, 0x490
    ctx->pc = 0x3db924u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3db928:
    // 0x3db928: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x3db928u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_3db92c:
    // 0x3db92c: 0x261048d8  addiu       $s0, $s0, 0x48D8
    ctx->pc = 0x3db92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18648));
label_3db930:
    // 0x3db930: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3db930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db934:
    // 0x3db934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3db934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3db938:
    // 0x3db938: 0x7fa30430  sq          $v1, 0x430($sp)
    ctx->pc = 0x3db938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 3));
label_3db93c:
    // 0x3db93c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3db93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3db940:
    // 0x3db940: 0xc0e9f84  jal         func_3A7E10
label_3db944:
    if (ctx->pc == 0x3DB944u) {
        ctx->pc = 0x3DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB940u;
        // 0x3db944: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB948u;
        goto label_3db948;
    }
    ctx->pc = 0x3DB940u;
    SET_GPR_U32(ctx, 31, 0x3DB948u);
    ctx->pc = 0x3DB944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB940u;
    // 0x3db944: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E10u, 0x3DB940u, 0x3DB948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB948u;
label_3db948:
    // 0x3db948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db94c:
    // 0x3db94c: 0xc0f15bc  jal         func_3C56F0
label_3db950:
    if (ctx->pc == 0x3DB950u) {
        ctx->pc = 0x3DB950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB94Cu;
        // 0x3db950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB954u;
        goto label_3db954;
    }
    ctx->pc = 0x3DB94Cu;
    SET_GPR_U32(ctx, 31, 0x3DB954u);
    ctx->pc = 0x3DB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB94Cu;
    // 0x3db950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DB94Cu, 0x3DB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB954u;
label_3db954:
    // 0x3db954: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3db954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3db958:
    // 0x3db958: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3db958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_3db95c:
    // 0x3db95c: 0xc0cd4ee  jal         func_3353B8
label_3db960:
    if (ctx->pc == 0x3DB960u) {
        ctx->pc = 0x3DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB95Cu;
        // 0x3db960: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB964u;
        goto label_3db964;
    }
    ctx->pc = 0x3DB95Cu;
    SET_GPR_U32(ctx, 31, 0x3DB964u);
    ctx->pc = 0x3DB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB95Cu;
    // 0x3db960: 0x2444b8b8  addiu       $a0, $v0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DB95Cu, 0x3DB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB964u;
label_3db964:
    // 0x3db964: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3db968:
    if (ctx->pc == 0x3DB968u) {
        ctx->pc = 0x3DB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB964u;
        // 0x3db968: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB96Cu;
        goto label_3db96c;
    }
    ctx->pc = 0x3DB964u;
    {
        const bool branch_taken_0x3db964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB964u;
        // 0x3db968: 0x27a40440  addiu       $a0, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db964) {
            ctx->pc = 0x3DB9BCu;
            goto label_3db9bc;
        }
    }
    ctx->pc = 0x3DB96Cu;
label_3db96c:
    // 0x3db96c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3db96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3db970:
    // 0x3db970: 0xc136afa  jal         func_4DABE8
label_3db974:
    if (ctx->pc == 0x3DB974u) {
        ctx->pc = 0x3DB974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB970u;
        // 0x3db974: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB978u;
        goto label_3db978;
    }
    ctx->pc = 0x3DB970u;
    SET_GPR_U32(ctx, 31, 0x3DB978u);
    ctx->pc = 0x3DB974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB970u;
    // 0x3db974: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3DB970u, 0x3DB978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB978u;
label_3db978:
    // 0x3db978: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3db978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3db97c:
    // 0x3db97c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3db97cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3db980:
    // 0x3db980: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3db980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3db984:
    // 0x3db984: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3db984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3db988:
    // 0x3db988: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3db988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3db98c:
    // 0x3db98c: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3db98cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3db990:
    // 0x3db990: 0x4a0003bf  vwaitq
    ctx->pc = 0x3db990u;
    // VWAITQ (Q already resolved in this runtime)
label_3db994:
    // 0x3db994: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3db994u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3db998:
    // 0x3db998: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3db998u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3db99c:
    // 0x3db99c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3db99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3db9a0:
    // 0x3db9a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3db9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3db9a4:
    // 0x3db9a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3db9a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3db9a8:
    // 0x3db9a8: 0x0  nop
    ctx->pc = 0x3db9a8u;
    // NOP
label_3db9ac:
    // 0x3db9ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3db9acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3db9b0:
    // 0x3db9b0: 0x0  nop
    ctx->pc = 0x3db9b0u;
    // NOP
label_3db9b4:
    // 0x3db9b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3db9b8:
    if (ctx->pc == 0x3DB9B8u) {
        ctx->pc = 0x3DB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9B4u;
        // 0x3db9b8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB9BCu;
        goto label_3db9bc;
    }
    ctx->pc = 0x3DB9B4u;
    {
        const bool branch_taken_0x3db9b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9B4u;
        // 0x3db9b8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9b4) {
            ctx->pc = 0x3DB9D0u;
            goto label_3db9d0;
        }
    }
    ctx->pc = 0x3DB9BCu;
label_3db9bc:
    // 0x3db9bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db9c0:
    // 0x3db9c0: 0xc0e90ca  jal         func_3A4328
label_3db9c4:
    if (ctx->pc == 0x3DB9C4u) {
        ctx->pc = 0x3DB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9C0u;
        // 0x3db9c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB9C8u;
        goto label_3db9c8;
    }
    ctx->pc = 0x3DB9C0u;
    SET_GPR_U32(ctx, 31, 0x3DB9C8u);
    ctx->pc = 0x3DB9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB9C0u;
    // 0x3db9c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3DB9C0u, 0x3DB9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB9C8u;
label_3db9c8:
    // 0x3db9c8: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3db9c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3db9cc:
    // 0x3db9cc: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x3db9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
label_3db9d0:
    // 0x3db9d0: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3db9d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3db9d4:
    // 0x3db9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3db9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3db9d8:
    // 0x3db9d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3db9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3db9dc:
    // 0x3db9dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3db9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3db9e0:
    // 0x3db9e0: 0xc0e94a0  jal         func_3A5280
label_3db9e4:
    if (ctx->pc == 0x3DB9E4u) {
        ctx->pc = 0x3DB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9E0u;
        // 0x3db9e4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB9E8u;
        goto label_3db9e8;
    }
    ctx->pc = 0x3DB9E0u;
    SET_GPR_U32(ctx, 31, 0x3DB9E8u);
    ctx->pc = 0x3DB9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB9E0u;
    // 0x3db9e4: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DB9E0u, 0x3DB9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB9E8u;
label_3db9e8:
    // 0x3db9e8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_3db9ec:
    if (ctx->pc == 0x3DB9ECu) {
        ctx->pc = 0x3DB9F0u;
        goto label_3db9f0;
    }
    ctx->pc = 0x3DB9E8u;
    {
        const bool branch_taken_0x3db9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3db9e8) {
            ctx->pc = 0x3DBA90u;
            goto label_3dba90;
        }
    }
    ctx->pc = 0x3DB9F0u;
label_3db9f0:
    // 0x3db9f0: 0x12800031  beqz        $s4, . + 4 + (0x31 << 2)
label_3db9f4:
    if (ctx->pc == 0x3DB9F4u) {
        ctx->pc = 0x3DB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9F0u;
        // 0x3db9f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB9F8u;
        goto label_3db9f8;
    }
    ctx->pc = 0x3DB9F0u;
    {
        const bool branch_taken_0x3db9f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9F0u;
        // 0x3db9f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9f0) {
            ctx->pc = 0x3DBAB8u;
            goto label_3dbab8;
        }
    }
    ctx->pc = 0x3DB9F8u;
label_3db9f8:
    // 0x3db9f8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3db9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3db9fc:
    // 0x3db9fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3db9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3dba00:
    // 0x3dba00: 0x3c013b8a  lui         $at, 0x3B8A
    ctx->pc = 0x3dba00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15242 << 16));
label_3dba04:
    // 0x3dba04: 0x3421d8f3  ori         $at, $at, 0xD8F3
    ctx->pc = 0x3dba04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55539);
label_3dba08:
    // 0x3dba08: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dba08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dba0c:
    // 0x3dba0c: 0x0  nop
    ctx->pc = 0x3dba0cu;
    // NOP
label_3dba10:
    // 0x3dba10: 0xc047e6c  jal         func_11F9B0
label_3dba14:
    if (ctx->pc == 0x3DBA14u) {
        ctx->pc = 0x3DBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA10u;
        // 0x3dba14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA18u;
        goto label_3dba18;
    }
    ctx->pc = 0x3DBA10u;
    SET_GPR_U32(ctx, 31, 0x3DBA18u);
    ctx->pc = 0x3DBA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBA10u;
    // 0x3dba14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3DBA10u, 0x3DBA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA18u;
label_3dba18:
    // 0x3dba18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3dba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dba1c:
    // 0x3dba1c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x3dba1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_3dba20:
    // 0x3dba20: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x3dba20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_3dba24:
    // 0x3dba24: 0xa0f809  jalr        $a1
label_3dba28:
    if (ctx->pc == 0x3DBA28u) {
        ctx->pc = 0x3DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA24u;
        // 0x3dba28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA2Cu;
        goto label_3dba2c;
    }
    ctx->pc = 0x3DBA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3DBA2Cu);
        ctx->pc = 0x3DBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA24u;
        // 0x3dba28: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBA24u, 0x3DBA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DBA2Cu;
label_3dba2c:
    // 0x3dba2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3dba2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dba30:
    // 0x3dba30: 0x27a40450  addiu       $a0, $sp, 0x450
    ctx->pc = 0x3dba30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dba34:
    // 0x3dba34: 0xc136afa  jal         func_4DABE8
label_3dba38:
    if (ctx->pc == 0x3DBA38u) {
        ctx->pc = 0x3DBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA34u;
        // 0x3dba38: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA3Cu;
        goto label_3dba3c;
    }
    ctx->pc = 0x3DBA34u;
    SET_GPR_U32(ctx, 31, 0x3DBA3Cu);
    ctx->pc = 0x3DBA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBA34u;
    // 0x3dba38: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3DBA34u, 0x3DBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA3Cu;
label_3dba3c:
    // 0x3dba3c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3dba3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dba40:
    // 0x3dba40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dba44:
    // 0x3dba44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3dba44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dba48:
    // 0x3dba48: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3dba48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dba4c:
    // 0x3dba4c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dba4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dba50:
    // 0x3dba50: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dba50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dba54:
    // 0x3dba54: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x3dba54u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_3dba58:
    // 0x3dba58: 0x4a0003bf  vwaitq
    ctx->pc = 0x3dba58u;
    // VWAITQ (Q already resolved in this runtime)
label_3dba5c:
    // 0x3dba5c: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x3dba5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dba60:
    // 0x3dba60: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3dba60u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
label_3dba64:
    // 0x3dba64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dba64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3dba68:
    // 0x3dba68: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x3dba68u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dba6c:
    // 0x3dba6c: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3dba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3dba70:
    // 0x3dba70: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x3dba70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
label_3dba74:
    // 0x3dba74: 0xc0e9182  jal         func_3A4608
label_3dba78:
    if (ctx->pc == 0x3DBA78u) {
        ctx->pc = 0x3DBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA74u;
        // 0x3dba78: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA7Cu;
        goto label_3dba7c;
    }
    ctx->pc = 0x3DBA74u;
    SET_GPR_U32(ctx, 31, 0x3DBA7Cu);
    ctx->pc = 0x3DBA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBA74u;
    // 0x3dba78: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DBA74u, 0x3DBA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBA7Cu;
label_3dba7c:
    // 0x3dba7c: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x3dba7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3dba80:
    // 0x3dba80: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_3dba84:
    if (ctx->pc == 0x3DBA84u) {
        ctx->pc = 0x3DBA88u;
        goto label_3dba88;
    }
    ctx->pc = 0x3DBA80u;
    {
        const bool branch_taken_0x3dba80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dba80) {
            ctx->pc = 0x3DBA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dba10;
        }
    }
    ctx->pc = 0x3DBA88u;
label_3dba88:
    // 0x3dba88: 0x1000000c  b           . + 4 + (0xC << 2)
label_3dba8c:
    if (ctx->pc == 0x3DBA8Cu) {
        ctx->pc = 0x3DBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA88u;
        // 0x3dba8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA90u;
        goto label_3dba90;
    }
    ctx->pc = 0x3DBA88u;
    {
        const bool branch_taken_0x3dba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA88u;
        // 0x3dba8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba88) {
            ctx->pc = 0x3DBABCu;
            goto label_3dbabc;
        }
    }
    ctx->pc = 0x3DBA90u;
label_3dba90:
    // 0x3dba90: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3dba94:
    if (ctx->pc == 0x3DBA94u) {
        ctx->pc = 0x3DBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA90u;
        // 0x3dba94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBA98u;
        goto label_3dba98;
    }
    ctx->pc = 0x3DBA90u;
    {
        const bool branch_taken_0x3dba90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBA90u;
        // 0x3dba94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dba90) {
            ctx->pc = 0x3DBAB8u;
            goto label_3dbab8;
        }
    }
    ctx->pc = 0x3DBA98u;
label_3dba98:
    // 0x3dba98: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3dba98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3dba9c:
    // 0x3dba9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dba9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbaa0:
    // 0x3dbaa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbaa4:
    // 0x3dbaa4: 0xc0e9182  jal         func_3A4608
label_3dbaa8:
    if (ctx->pc == 0x3DBAA8u) {
        ctx->pc = 0x3DBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAA4u;
        // 0x3dbaa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBAACu;
        goto label_3dbaac;
    }
    ctx->pc = 0x3DBAA4u;
    SET_GPR_U32(ctx, 31, 0x3DBAACu);
    ctx->pc = 0x3DBAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBAA4u;
    // 0x3dbaa8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4608u, 0x3DBAA4u, 0x3DBAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBAACu;
label_3dbaac:
    // 0x3dbaac: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x3dbaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3dbab0:
    // 0x3dbab0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_3dbab4:
    if (ctx->pc == 0x3DBAB4u) {
        ctx->pc = 0x3DBAB8u;
        goto label_3dbab8;
    }
    ctx->pc = 0x3DBAB0u;
    {
        const bool branch_taken_0x3dbab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbab0) {
            ctx->pc = 0x3DBA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dba98;
        }
    }
    ctx->pc = 0x3DBAB8u;
label_3dbab8:
    // 0x3dbab8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dbab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbabc:
    // 0x3dbabc: 0x5280000c  beql        $s4, $zero, . + 4 + (0xC << 2)
label_3dbac0:
    if (ctx->pc == 0x3DBAC0u) {
        ctx->pc = 0x3DBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBABCu;
        // 0x3dbac0: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBAC4u;
        goto label_3dbac4;
    }
    ctx->pc = 0x3DBABCu;
    {
        const bool branch_taken_0x3dbabc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dbabc) {
            ctx->pc = 0x3DBAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DBABCu;
            // 0x3dbac0: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DBAF0u;
            goto label_3dbaf0;
        }
    }
    ctx->pc = 0x3DBAC4u;
label_3dbac4:
    // 0x3dbac4: 0x0  nop
    ctx->pc = 0x3dbac4u;
    // NOP
label_3dbac8:
    // 0x3dbac8: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x3dbac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_3dbacc:
    // 0x3dbacc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3dbaccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_3dbad0:
    // 0x3dbad0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dbad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dbad4:
    // 0x3dbad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dbad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dbad8:
    // 0x3dbad8: 0xc0e919a  jal         func_3A4668
label_3dbadc:
    if (ctx->pc == 0x3DBADCu) {
        ctx->pc = 0x3DBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAD8u;
        // 0x3dbadc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBAE0u;
        goto label_3dbae0;
    }
    ctx->pc = 0x3DBAD8u;
    SET_GPR_U32(ctx, 31, 0x3DBAE0u);
    ctx->pc = 0x3DBADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBAD8u;
    // 0x3dbadc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4668u, 0x3DBAD8u, 0x3DBAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBAE0u;
label_3dbae0:
    // 0x3dbae0: 0x214182b  sltu        $v1, $s0, $s4
    ctx->pc = 0x3dbae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3dbae4:
    // 0x3dbae4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3dbae8:
    if (ctx->pc == 0x3DBAE8u) {
        ctx->pc = 0x3DBAECu;
        goto label_3dbaec;
    }
    ctx->pc = 0x3DBAE4u;
    {
        const bool branch_taken_0x3dbae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dbae4) {
            ctx->pc = 0x3DBAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dbac8;
        }
    }
    ctx->pc = 0x3DBAECu;
label_3dbaec:
    // 0x3dbaec: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x3dbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_3dbaf0:
    // 0x3dbaf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3dbaf4:
    if (ctx->pc == 0x3DBAF4u) {
        ctx->pc = 0x3DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAF0u;
        // 0x3dbaf4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBAF8u;
        goto label_3dbaf8;
    }
    ctx->pc = 0x3DBAF0u;
    {
        const bool branch_taken_0x3dbaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBAF0u;
        // 0x3dbaf4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbaf0) {
            ctx->pc = 0x3DBB08u;
            goto label_3dbb08;
        }
    }
    ctx->pc = 0x3DBAF8u;
label_3dbaf8:
    // 0x3dbaf8: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3dbaf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3dbafc:
    // 0x3dbafc: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3dbafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3dbb00:
    // 0x3dbb00: 0xc045c82  jal         func_117208
label_3dbb04:
    if (ctx->pc == 0x3DBB04u) {
        ctx->pc = 0x3DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB00u;
        // 0x3dbb04: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBB08u;
        goto label_3dbb08;
    }
    ctx->pc = 0x3DBB00u;
    SET_GPR_U32(ctx, 31, 0x3DBB08u);
    ctx->pc = 0x3DBB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBB00u;
    // 0x3dbb04: 0x8ec40010  lw          $a0, 0x10($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117208u, 0x3DBB00u, 0x3DBB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBB08u;
label_3dbb08:
    // 0x3dbb08: 0x7bb00930  lq          $s0, 0x930($sp)
    ctx->pc = 0x3dbb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3dbb0c:
    // 0x3dbb0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dbb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dbb10:
    // 0x3dbb10: 0x7bb10920  lq          $s1, 0x920($sp)
    ctx->pc = 0x3dbb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3dbb14:
    // 0x3dbb14: 0x7bb20910  lq          $s2, 0x910($sp)
    ctx->pc = 0x3dbb14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3dbb18:
    // 0x3dbb18: 0x7bb30900  lq          $s3, 0x900($sp)
    ctx->pc = 0x3dbb18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3dbb1c:
    // 0x3dbb1c: 0x7bb408f0  lq          $s4, 0x8F0($sp)
    ctx->pc = 0x3dbb1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3dbb20:
    // 0x3dbb20: 0x7bb508e0  lq          $s5, 0x8E0($sp)
    ctx->pc = 0x3dbb20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3dbb24:
    // 0x3dbb24: 0x7bb608d0  lq          $s6, 0x8D0($sp)
    ctx->pc = 0x3dbb24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3dbb28:
    // 0x3dbb28: 0x7bb708c0  lq          $s7, 0x8C0($sp)
    ctx->pc = 0x3dbb28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3dbb2c:
    // 0x3dbb2c: 0x7bbe08b0  lq          $fp, 0x8B0($sp)
    ctx->pc = 0x3dbb2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3dbb30:
    // 0x3dbb30: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3dbb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3dbb34:
    // 0x3dbb34: 0xc7b50948  lwc1        $f21, 0x948($sp)
    ctx->pc = 0x3dbb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3dbb38:
    // 0x3dbb38: 0xc7b40940  lwc1        $f20, 0x940($sp)
    ctx->pc = 0x3dbb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dbb3c:
    // 0x3dbb3c: 0x3e00008  jr          $ra
label_3dbb40:
    if (ctx->pc == 0x3DBB40u) {
        ctx->pc = 0x3DBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB3Cu;
        // 0x3dbb40: 0x27bd0950  addiu       $sp, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DBB44u;
        goto label_3dbb44;
    }
    ctx->pc = 0x3DBB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBB3Cu;
        // 0x3dbb40: 0x27bd0950  addiu       $sp, $sp, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBB44u;
label_3dbb44:
    // 0x3dbb44: 0x0  nop
    ctx->pc = 0x3dbb44u;
    // NOP
    ctx->pc = 0x3dbb48u;
}
