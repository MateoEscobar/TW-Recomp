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

// Function: sub_002DD720
// Address: 0x2dd720 - 0x2ddb40
void sub_002DD720_0x2dd720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD720_0x2dd720");
#endif

    switch (ctx->pc) {
        case 0x2dd720u: goto label_2dd720;
        case 0x2dd724u: goto label_2dd724;
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd72cu: goto label_2dd72c;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd734u: goto label_2dd734;
        case 0x2dd738u: goto label_2dd738;
        case 0x2dd73cu: goto label_2dd73c;
        case 0x2dd740u: goto label_2dd740;
        case 0x2dd744u: goto label_2dd744;
        case 0x2dd748u: goto label_2dd748;
        case 0x2dd74cu: goto label_2dd74c;
        case 0x2dd750u: goto label_2dd750;
        case 0x2dd754u: goto label_2dd754;
        case 0x2dd758u: goto label_2dd758;
        case 0x2dd75cu: goto label_2dd75c;
        case 0x2dd760u: goto label_2dd760;
        case 0x2dd764u: goto label_2dd764;
        case 0x2dd768u: goto label_2dd768;
        case 0x2dd76cu: goto label_2dd76c;
        case 0x2dd770u: goto label_2dd770;
        case 0x2dd774u: goto label_2dd774;
        case 0x2dd778u: goto label_2dd778;
        case 0x2dd77cu: goto label_2dd77c;
        case 0x2dd780u: goto label_2dd780;
        case 0x2dd784u: goto label_2dd784;
        case 0x2dd788u: goto label_2dd788;
        case 0x2dd78cu: goto label_2dd78c;
        case 0x2dd790u: goto label_2dd790;
        case 0x2dd794u: goto label_2dd794;
        case 0x2dd798u: goto label_2dd798;
        case 0x2dd79cu: goto label_2dd79c;
        case 0x2dd7a0u: goto label_2dd7a0;
        case 0x2dd7a4u: goto label_2dd7a4;
        case 0x2dd7a8u: goto label_2dd7a8;
        case 0x2dd7acu: goto label_2dd7ac;
        case 0x2dd7b0u: goto label_2dd7b0;
        case 0x2dd7b4u: goto label_2dd7b4;
        case 0x2dd7b8u: goto label_2dd7b8;
        case 0x2dd7bcu: goto label_2dd7bc;
        case 0x2dd7c0u: goto label_2dd7c0;
        case 0x2dd7c4u: goto label_2dd7c4;
        case 0x2dd7c8u: goto label_2dd7c8;
        case 0x2dd7ccu: goto label_2dd7cc;
        case 0x2dd7d0u: goto label_2dd7d0;
        case 0x2dd7d4u: goto label_2dd7d4;
        case 0x2dd7d8u: goto label_2dd7d8;
        case 0x2dd7dcu: goto label_2dd7dc;
        case 0x2dd7e0u: goto label_2dd7e0;
        case 0x2dd7e4u: goto label_2dd7e4;
        case 0x2dd7e8u: goto label_2dd7e8;
        case 0x2dd7ecu: goto label_2dd7ec;
        case 0x2dd7f0u: goto label_2dd7f0;
        case 0x2dd7f4u: goto label_2dd7f4;
        case 0x2dd7f8u: goto label_2dd7f8;
        case 0x2dd7fcu: goto label_2dd7fc;
        case 0x2dd800u: goto label_2dd800;
        case 0x2dd804u: goto label_2dd804;
        case 0x2dd808u: goto label_2dd808;
        case 0x2dd80cu: goto label_2dd80c;
        case 0x2dd810u: goto label_2dd810;
        case 0x2dd814u: goto label_2dd814;
        case 0x2dd818u: goto label_2dd818;
        case 0x2dd81cu: goto label_2dd81c;
        case 0x2dd820u: goto label_2dd820;
        case 0x2dd824u: goto label_2dd824;
        case 0x2dd828u: goto label_2dd828;
        case 0x2dd82cu: goto label_2dd82c;
        case 0x2dd830u: goto label_2dd830;
        case 0x2dd834u: goto label_2dd834;
        case 0x2dd838u: goto label_2dd838;
        case 0x2dd83cu: goto label_2dd83c;
        case 0x2dd840u: goto label_2dd840;
        case 0x2dd844u: goto label_2dd844;
        case 0x2dd848u: goto label_2dd848;
        case 0x2dd84cu: goto label_2dd84c;
        case 0x2dd850u: goto label_2dd850;
        case 0x2dd854u: goto label_2dd854;
        case 0x2dd858u: goto label_2dd858;
        case 0x2dd85cu: goto label_2dd85c;
        case 0x2dd860u: goto label_2dd860;
        case 0x2dd864u: goto label_2dd864;
        case 0x2dd868u: goto label_2dd868;
        case 0x2dd86cu: goto label_2dd86c;
        case 0x2dd870u: goto label_2dd870;
        case 0x2dd874u: goto label_2dd874;
        case 0x2dd878u: goto label_2dd878;
        case 0x2dd87cu: goto label_2dd87c;
        case 0x2dd880u: goto label_2dd880;
        case 0x2dd884u: goto label_2dd884;
        case 0x2dd888u: goto label_2dd888;
        case 0x2dd88cu: goto label_2dd88c;
        case 0x2dd890u: goto label_2dd890;
        case 0x2dd894u: goto label_2dd894;
        case 0x2dd898u: goto label_2dd898;
        case 0x2dd89cu: goto label_2dd89c;
        case 0x2dd8a0u: goto label_2dd8a0;
        case 0x2dd8a4u: goto label_2dd8a4;
        case 0x2dd8a8u: goto label_2dd8a8;
        case 0x2dd8acu: goto label_2dd8ac;
        case 0x2dd8b0u: goto label_2dd8b0;
        case 0x2dd8b4u: goto label_2dd8b4;
        case 0x2dd8b8u: goto label_2dd8b8;
        case 0x2dd8bcu: goto label_2dd8bc;
        case 0x2dd8c0u: goto label_2dd8c0;
        case 0x2dd8c4u: goto label_2dd8c4;
        case 0x2dd8c8u: goto label_2dd8c8;
        case 0x2dd8ccu: goto label_2dd8cc;
        case 0x2dd8d0u: goto label_2dd8d0;
        case 0x2dd8d4u: goto label_2dd8d4;
        case 0x2dd8d8u: goto label_2dd8d8;
        case 0x2dd8dcu: goto label_2dd8dc;
        case 0x2dd8e0u: goto label_2dd8e0;
        case 0x2dd8e4u: goto label_2dd8e4;
        case 0x2dd8e8u: goto label_2dd8e8;
        case 0x2dd8ecu: goto label_2dd8ec;
        case 0x2dd8f0u: goto label_2dd8f0;
        case 0x2dd8f4u: goto label_2dd8f4;
        case 0x2dd8f8u: goto label_2dd8f8;
        case 0x2dd8fcu: goto label_2dd8fc;
        case 0x2dd900u: goto label_2dd900;
        case 0x2dd904u: goto label_2dd904;
        case 0x2dd908u: goto label_2dd908;
        case 0x2dd90cu: goto label_2dd90c;
        case 0x2dd910u: goto label_2dd910;
        case 0x2dd914u: goto label_2dd914;
        case 0x2dd918u: goto label_2dd918;
        case 0x2dd91cu: goto label_2dd91c;
        case 0x2dd920u: goto label_2dd920;
        case 0x2dd924u: goto label_2dd924;
        case 0x2dd928u: goto label_2dd928;
        case 0x2dd92cu: goto label_2dd92c;
        case 0x2dd930u: goto label_2dd930;
        case 0x2dd934u: goto label_2dd934;
        case 0x2dd938u: goto label_2dd938;
        case 0x2dd93cu: goto label_2dd93c;
        case 0x2dd940u: goto label_2dd940;
        case 0x2dd944u: goto label_2dd944;
        case 0x2dd948u: goto label_2dd948;
        case 0x2dd94cu: goto label_2dd94c;
        case 0x2dd950u: goto label_2dd950;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd958u: goto label_2dd958;
        case 0x2dd95cu: goto label_2dd95c;
        case 0x2dd960u: goto label_2dd960;
        case 0x2dd964u: goto label_2dd964;
        case 0x2dd968u: goto label_2dd968;
        case 0x2dd96cu: goto label_2dd96c;
        case 0x2dd970u: goto label_2dd970;
        case 0x2dd974u: goto label_2dd974;
        case 0x2dd978u: goto label_2dd978;
        case 0x2dd97cu: goto label_2dd97c;
        case 0x2dd980u: goto label_2dd980;
        case 0x2dd984u: goto label_2dd984;
        case 0x2dd988u: goto label_2dd988;
        case 0x2dd98cu: goto label_2dd98c;
        case 0x2dd990u: goto label_2dd990;
        case 0x2dd994u: goto label_2dd994;
        case 0x2dd998u: goto label_2dd998;
        case 0x2dd99cu: goto label_2dd99c;
        case 0x2dd9a0u: goto label_2dd9a0;
        case 0x2dd9a4u: goto label_2dd9a4;
        case 0x2dd9a8u: goto label_2dd9a8;
        case 0x2dd9acu: goto label_2dd9ac;
        case 0x2dd9b0u: goto label_2dd9b0;
        case 0x2dd9b4u: goto label_2dd9b4;
        case 0x2dd9b8u: goto label_2dd9b8;
        case 0x2dd9bcu: goto label_2dd9bc;
        case 0x2dd9c0u: goto label_2dd9c0;
        case 0x2dd9c4u: goto label_2dd9c4;
        case 0x2dd9c8u: goto label_2dd9c8;
        case 0x2dd9ccu: goto label_2dd9cc;
        case 0x2dd9d0u: goto label_2dd9d0;
        case 0x2dd9d4u: goto label_2dd9d4;
        case 0x2dd9d8u: goto label_2dd9d8;
        case 0x2dd9dcu: goto label_2dd9dc;
        case 0x2dd9e0u: goto label_2dd9e0;
        case 0x2dd9e4u: goto label_2dd9e4;
        case 0x2dd9e8u: goto label_2dd9e8;
        case 0x2dd9ecu: goto label_2dd9ec;
        case 0x2dd9f0u: goto label_2dd9f0;
        case 0x2dd9f4u: goto label_2dd9f4;
        case 0x2dd9f8u: goto label_2dd9f8;
        case 0x2dd9fcu: goto label_2dd9fc;
        case 0x2dda00u: goto label_2dda00;
        case 0x2dda04u: goto label_2dda04;
        case 0x2dda08u: goto label_2dda08;
        case 0x2dda0cu: goto label_2dda0c;
        case 0x2dda10u: goto label_2dda10;
        case 0x2dda14u: goto label_2dda14;
        case 0x2dda18u: goto label_2dda18;
        case 0x2dda1cu: goto label_2dda1c;
        case 0x2dda20u: goto label_2dda20;
        case 0x2dda24u: goto label_2dda24;
        case 0x2dda28u: goto label_2dda28;
        case 0x2dda2cu: goto label_2dda2c;
        case 0x2dda30u: goto label_2dda30;
        case 0x2dda34u: goto label_2dda34;
        case 0x2dda38u: goto label_2dda38;
        case 0x2dda3cu: goto label_2dda3c;
        case 0x2dda40u: goto label_2dda40;
        case 0x2dda44u: goto label_2dda44;
        case 0x2dda48u: goto label_2dda48;
        case 0x2dda4cu: goto label_2dda4c;
        case 0x2dda50u: goto label_2dda50;
        case 0x2dda54u: goto label_2dda54;
        case 0x2dda58u: goto label_2dda58;
        case 0x2dda5cu: goto label_2dda5c;
        case 0x2dda60u: goto label_2dda60;
        case 0x2dda64u: goto label_2dda64;
        case 0x2dda68u: goto label_2dda68;
        case 0x2dda6cu: goto label_2dda6c;
        case 0x2dda70u: goto label_2dda70;
        case 0x2dda74u: goto label_2dda74;
        case 0x2dda78u: goto label_2dda78;
        case 0x2dda7cu: goto label_2dda7c;
        case 0x2dda80u: goto label_2dda80;
        case 0x2dda84u: goto label_2dda84;
        case 0x2dda88u: goto label_2dda88;
        case 0x2dda8cu: goto label_2dda8c;
        case 0x2dda90u: goto label_2dda90;
        case 0x2dda94u: goto label_2dda94;
        case 0x2dda98u: goto label_2dda98;
        case 0x2dda9cu: goto label_2dda9c;
        case 0x2ddaa0u: goto label_2ddaa0;
        case 0x2ddaa4u: goto label_2ddaa4;
        case 0x2ddaa8u: goto label_2ddaa8;
        case 0x2ddaacu: goto label_2ddaac;
        case 0x2ddab0u: goto label_2ddab0;
        case 0x2ddab4u: goto label_2ddab4;
        case 0x2ddab8u: goto label_2ddab8;
        case 0x2ddabcu: goto label_2ddabc;
        case 0x2ddac0u: goto label_2ddac0;
        case 0x2ddac4u: goto label_2ddac4;
        case 0x2ddac8u: goto label_2ddac8;
        case 0x2ddaccu: goto label_2ddacc;
        case 0x2ddad0u: goto label_2ddad0;
        case 0x2ddad4u: goto label_2ddad4;
        case 0x2ddad8u: goto label_2ddad8;
        case 0x2ddadcu: goto label_2ddadc;
        case 0x2ddae0u: goto label_2ddae0;
        case 0x2ddae4u: goto label_2ddae4;
        case 0x2ddae8u: goto label_2ddae8;
        case 0x2ddaecu: goto label_2ddaec;
        case 0x2ddaf0u: goto label_2ddaf0;
        case 0x2ddaf4u: goto label_2ddaf4;
        case 0x2ddaf8u: goto label_2ddaf8;
        case 0x2ddafcu: goto label_2ddafc;
        case 0x2ddb00u: goto label_2ddb00;
        case 0x2ddb04u: goto label_2ddb04;
        case 0x2ddb08u: goto label_2ddb08;
        case 0x2ddb0cu: goto label_2ddb0c;
        case 0x2ddb10u: goto label_2ddb10;
        case 0x2ddb14u: goto label_2ddb14;
        case 0x2ddb18u: goto label_2ddb18;
        case 0x2ddb1cu: goto label_2ddb1c;
        case 0x2ddb20u: goto label_2ddb20;
        case 0x2ddb24u: goto label_2ddb24;
        case 0x2ddb28u: goto label_2ddb28;
        case 0x2ddb2cu: goto label_2ddb2c;
        case 0x2ddb30u: goto label_2ddb30;
        case 0x2ddb34u: goto label_2ddb34;
        case 0x2ddb38u: goto label_2ddb38;
        case 0x2ddb3cu: goto label_2ddb3c;
        default: break;
    }

    ctx->pc = 0x2dd720u;

label_2dd720:
    // 0x2dd720: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2dd720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2dd724:
    // 0x2dd724: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2dd724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2dd728:
    // 0x2dd728: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2dd728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2dd72c:
    // 0x2dd72c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2dd72cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd730:
    // 0x2dd730: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2dd730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2dd734:
    // 0x2dd734: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dd734u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd738:
    // 0x2dd738: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2dd738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2dd73c:
    // 0x2dd73c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2dd73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2dd740:
    // 0x2dd740: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2dd740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2dd744:
    // 0x2dd744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2dd744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2dd748:
    // 0x2dd748: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2dd748u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2dd74c:
    // 0x2dd74c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2dd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2dd750:
    // 0x2dd750: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2dd750u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd754:
    // 0x2dd754: 0xc08a1a8  jal         func_2286A0
label_2dd758:
    if (ctx->pc == 0x2DD758u) {
        ctx->pc = 0x2DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD754u;
        // 0x2dd758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD75Cu;
        goto label_2dd75c;
    }
    ctx->pc = 0x2DD754u;
    SET_GPR_U32(ctx, 31, 0x2DD75Cu);
    ctx->pc = 0x2DD758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD754u;
    // 0x2dd758: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286A0u, 0x2DD754u, 0x2DD75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD75Cu;
label_2dd75c:
    // 0x2dd75c: 0x105200ed  beq         $v0, $s2, . + 4 + (0xED << 2)
label_2dd760:
    if (ctx->pc == 0x2DD760u) {
        ctx->pc = 0x2DD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD75Cu;
        // 0x2dd760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD764u;
        goto label_2dd764;
    }
    ctx->pc = 0x2DD75Cu;
    {
        const bool branch_taken_0x2dd75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2DD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD75Cu;
        // 0x2dd760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd75c) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD764u;
label_2dd764:
    // 0x2dd764: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2dd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2dd768:
    // 0x2dd768: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2dd768u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2dd76c:
    // 0x2dd76c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2dd76cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2dd770:
    // 0x2dd770: 0x505200e8  beql        $v0, $s2, . + 4 + (0xE8 << 2)
label_2dd774:
    if (ctx->pc == 0x2DD774u) {
        ctx->pc = 0x2DD774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD770u;
        // 0x2dd774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD778u;
        goto label_2dd778;
    }
    ctx->pc = 0x2DD770u;
    {
        const bool branch_taken_0x2dd770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2dd770) {
            ctx->pc = 0x2DD774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD770u;
            // 0x2dd774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD778u;
label_2dd778:
    // 0x2dd778: 0xc0e4060  jal         func_390180
label_2dd77c:
    if (ctx->pc == 0x2DD77Cu) {
        ctx->pc = 0x2DD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD778u;
        // 0x2dd77c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD780u;
        goto label_2dd780;
    }
    ctx->pc = 0x2DD778u;
    SET_GPR_U32(ctx, 31, 0x2DD780u);
    ctx->pc = 0x2DD77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD778u;
    // 0x2dd77c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DD778u, 0x2DD780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD780u;
label_2dd780:
    // 0x2dd780: 0xc0e57ce  jal         func_395F38
label_2dd784:
    if (ctx->pc == 0x2DD784u) {
        ctx->pc = 0x2DD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD780u;
        // 0x2dd784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD788u;
        goto label_2dd788;
    }
    ctx->pc = 0x2DD780u;
    SET_GPR_U32(ctx, 31, 0x2DD788u);
    ctx->pc = 0x2DD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD780u;
    // 0x2dd784: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DD780u, 0x2DD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD788u;
label_2dd788:
    // 0x2dd788: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd78c:
    // 0x2dd78c: 0x122000e1  beqz        $s1, . + 4 + (0xE1 << 2)
label_2dd790:
    if (ctx->pc == 0x2DD790u) {
        ctx->pc = 0x2DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD78Cu;
        // 0x2dd790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD794u;
        goto label_2dd794;
    }
    ctx->pc = 0x2DD78Cu;
    {
        const bool branch_taken_0x2dd78c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD78Cu;
        // 0x2dd790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd78c) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD794u;
label_2dd794:
    // 0x2dd794: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2dd794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2dd798:
    // 0x2dd798: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2dd798u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2dd79c:
    // 0x2dd79c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dd7a0:
    if (ctx->pc == 0x2DD7A0u) {
        ctx->pc = 0x2DD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD79Cu;
        // 0x2dd7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7A4u;
        goto label_2dd7a4;
    }
    ctx->pc = 0x2DD79Cu;
    {
        const bool branch_taken_0x2dd79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD79Cu;
        // 0x2dd7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd79c) {
            ctx->pc = 0x2DD7ACu;
            goto label_2dd7ac;
        }
    }
    ctx->pc = 0x2DD7A4u;
label_2dd7a4:
    // 0x2dd7a4: 0x100000db  b           . + 4 + (0xDB << 2)
label_2dd7a8:
    if (ctx->pc == 0x2DD7A8u) {
        ctx->pc = 0x2DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A4u;
        // 0x2dd7a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7ACu;
        goto label_2dd7ac;
    }
    ctx->pc = 0x2DD7A4u;
    {
        const bool branch_taken_0x2dd7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7A4u;
        // 0x2dd7a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7a4) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD7ACu;
label_2dd7ac:
    // 0x2dd7ac: 0xc089bfc  jal         func_226FF0
label_2dd7b0:
    if (ctx->pc == 0x2DD7B0u) {
        ctx->pc = 0x2DD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7ACu;
        // 0x2dd7b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7B4u;
        goto label_2dd7b4;
    }
    ctx->pc = 0x2DD7ACu;
    SET_GPR_U32(ctx, 31, 0x2DD7B4u);
    ctx->pc = 0x2DD7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7ACu;
    // 0x2dd7b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2DD7ACu, 0x2DD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7B4u;
label_2dd7b4:
    // 0x2dd7b4: 0xc0e57ce  jal         func_395F38
label_2dd7b8:
    if (ctx->pc == 0x2DD7B8u) {
        ctx->pc = 0x2DD7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7B4u;
        // 0x2dd7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7BCu;
        goto label_2dd7bc;
    }
    ctx->pc = 0x2DD7B4u;
    SET_GPR_U32(ctx, 31, 0x2DD7BCu);
    ctx->pc = 0x2DD7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7B4u;
    // 0x2dd7b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2DD7B4u, 0x2DD7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD7BCu;
label_2dd7bc:
    // 0x2dd7bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dd7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd7c0:
    // 0x2dd7c0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_2dd7c4:
    if (ctx->pc == 0x2DD7C4u) {
        ctx->pc = 0x2DD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7C0u;
        // 0x2dd7c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7C8u;
        goto label_2dd7c8;
    }
    ctx->pc = 0x2DD7C0u;
    {
        const bool branch_taken_0x2dd7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7C0u;
        // 0x2dd7c4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7c0) {
            ctx->pc = 0x2DD7F8u;
            goto label_2dd7f8;
        }
    }
    ctx->pc = 0x2DD7C8u;
label_2dd7c8:
    // 0x2dd7c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2dd7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2dd7cc:
    // 0x2dd7cc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2dd7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2dd7d0:
    // 0x2dd7d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2dd7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2dd7d4:
    // 0x2dd7d4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2dd7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2dd7d8:
    // 0x2dd7d8: 0x40f809  jalr        $v0
label_2dd7dc:
    if (ctx->pc == 0x2DD7DCu) {
        ctx->pc = 0x2DD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7D8u;
        // 0x2dd7dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7E0u;
        goto label_2dd7e0;
    }
    ctx->pc = 0x2DD7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD7E0u);
        ctx->pc = 0x2DD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7D8u;
        // 0x2dd7dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD7D8u, 0x2DD7E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD7E0u;
label_2dd7e0:
    // 0x2dd7e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2dd7e4:
    // 0x2dd7e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dd7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dd7e8:
    // 0x2dd7e8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2dd7e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_2dd7ec:
    // 0x2dd7ec: 0x16120034  bne         $s0, $s2, . + 4 + (0x34 << 2)
label_2dd7f0:
    if (ctx->pc == 0x2DD7F0u) {
        ctx->pc = 0x2DD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7ECu;
        // 0x2dd7f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD7F4u;
        goto label_2dd7f4;
    }
    ctx->pc = 0x2DD7ECu;
    {
        const bool branch_taken_0x2dd7ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DD7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7ECu;
        // 0x2dd7f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7ec) {
            ctx->pc = 0x2DD8C0u;
            goto label_2dd8c0;
        }
    }
    ctx->pc = 0x2DD7F4u;
label_2dd7f4:
    // 0x2dd7f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2dd7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2dd7f8:
    // 0x2dd7f8: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x2dd7f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
label_2dd7fc:
    // 0x2dd7fc: 0xc0e44cc  jal         func_391330
label_2dd800:
    if (ctx->pc == 0x2DD800u) {
        ctx->pc = 0x2DD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD7FCu;
        // 0x2dd800: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD804u;
        goto label_2dd804;
    }
    ctx->pc = 0x2DD7FCu;
    SET_GPR_U32(ctx, 31, 0x2DD804u);
    ctx->pc = 0x2DD800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD7FCu;
    // 0x2dd800: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2DD7FCu, 0x2DD804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD804u;
label_2dd804:
    // 0x2dd804: 0x9443005e  lhu         $v1, 0x5E($v0)
    ctx->pc = 0x2dd804u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
label_2dd808:
    // 0x2dd808: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2dd80c:
    if (ctx->pc == 0x2DD80Cu) {
        ctx->pc = 0x2DD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD808u;
        // 0x2dd80c: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD810u;
        goto label_2dd810;
    }
    ctx->pc = 0x2DD808u;
    {
        const bool branch_taken_0x2dd808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD808u;
        // 0x2dd80c: 0x80440087  lb          $a0, 0x87($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 135)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd808) {
            ctx->pc = 0x2DD81Cu;
            goto label_2dd81c;
        }
    }
    ctx->pc = 0x2DD810u;
label_2dd810:
    // 0x2dd810: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2dd810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2dd814:
    // 0x2dd814: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_2dd818:
    if (ctx->pc == 0x2DD818u) {
        ctx->pc = 0x2DD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD814u;
        // 0x2dd818: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD81Cu;
        goto label_2dd81c;
    }
    ctx->pc = 0x2DD814u;
    {
        const bool branch_taken_0x2dd814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd814) {
            ctx->pc = 0x2DD818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD814u;
            // 0x2dd818: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD878u;
            goto label_2dd878;
        }
    }
    ctx->pc = 0x2DD81Cu;
label_2dd81c:
    // 0x2dd81c: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x2dd81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2dd820:
    // 0x2dd820: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2dd820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2dd824:
    // 0x2dd824: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2dd828:
    if (ctx->pc == 0x2DD828u) {
        ctx->pc = 0x2DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD824u;
        // 0x2dd828: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD82Cu;
        goto label_2dd82c;
    }
    ctx->pc = 0x2DD824u;
    {
        const bool branch_taken_0x2dd824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd824) {
            ctx->pc = 0x2DD828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD824u;
            // 0x2dd828: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD878u;
            goto label_2dd878;
        }
    }
    ctx->pc = 0x2DD82Cu;
label_2dd82c:
    // 0x2dd82c: 0xc095fce  jal         func_257F38
label_2dd830:
    if (ctx->pc == 0x2DD830u) {
        ctx->pc = 0x2DD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD82Cu;
        // 0x2dd830: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD834u;
        goto label_2dd834;
    }
    ctx->pc = 0x2DD82Cu;
    SET_GPR_U32(ctx, 31, 0x2DD834u);
    ctx->pc = 0x2DD830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD82Cu;
    // 0x2dd830: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2DD82Cu, 0x2DD834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD834u;
label_2dd834:
    // 0x2dd834: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2dd834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2dd838:
    // 0x2dd838: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dd838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dd83c:
    // 0x2dd83c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dd83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dd840:
    // 0x2dd840: 0x40f809  jalr        $v0
label_2dd844:
    if (ctx->pc == 0x2DD844u) {
        ctx->pc = 0x2DD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD840u;
        // 0x2dd844: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD848u;
        goto label_2dd848;
    }
    ctx->pc = 0x2DD840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD848u);
        ctx->pc = 0x2DD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD840u;
        // 0x2dd844: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD840u, 0x2DD848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD848u;
label_2dd848:
    // 0x2dd848: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dd848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dd84c:
    // 0x2dd84c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd850:
    // 0x2dd850: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dd850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dd854:
    // 0x2dd854: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dd854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dd858:
    // 0x2dd858: 0x40f809  jalr        $v0
label_2dd85c:
    if (ctx->pc == 0x2DD85Cu) {
        ctx->pc = 0x2DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD858u;
        // 0x2dd85c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD860u;
        goto label_2dd860;
    }
    ctx->pc = 0x2DD858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD860u);
        ctx->pc = 0x2DD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD858u;
        // 0x2dd85c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD858u, 0x2DD860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD860u;
label_2dd860:
    // 0x2dd860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd864:
    // 0x2dd864: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2dd864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd868:
    // 0x2dd868: 0xc0b71c2  jal         func_2DC708
label_2dd86c:
    if (ctx->pc == 0x2DD86Cu) {
        ctx->pc = 0x2DD86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD868u;
        // 0x2dd86c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD870u;
        goto label_2dd870;
    }
    ctx->pc = 0x2DD868u;
    SET_GPR_U32(ctx, 31, 0x2DD870u);
    ctx->pc = 0x2DD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD868u;
    // 0x2dd86c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC708u, 0x2DD868u, 0x2DD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD870u;
label_2dd870:
    // 0x2dd870: 0x1000000f  b           . + 4 + (0xF << 2)
label_2dd874:
    if (ctx->pc == 0x2DD874u) {
        ctx->pc = 0x2DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD870u;
        // 0x2dd874: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD878u;
        goto label_2dd878;
    }
    ctx->pc = 0x2DD870u;
    {
        const bool branch_taken_0x2dd870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD870u;
        // 0x2dd874: 0x8e830014  lw          $v1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd870) {
            ctx->pc = 0x2DD8B0u;
            goto label_2dd8b0;
        }
    }
    ctx->pc = 0x2DD878u;
label_2dd878:
    // 0x2dd878: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dd878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dd87c:
    // 0x2dd87c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dd87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dd880:
    // 0x2dd880: 0x40f809  jalr        $v0
label_2dd884:
    if (ctx->pc == 0x2DD884u) {
        ctx->pc = 0x2DD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD880u;
        // 0x2dd884: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD888u;
        goto label_2dd888;
    }
    ctx->pc = 0x2DD880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD888u);
        ctx->pc = 0x2DD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD880u;
        // 0x2dd884: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD880u, 0x2DD888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD888u;
label_2dd888:
    // 0x2dd888: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2dd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dd88c:
    // 0x2dd88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dd88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd890:
    // 0x2dd890: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dd890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dd894:
    // 0x2dd894: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dd894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dd898:
    // 0x2dd898: 0x40f809  jalr        $v0
label_2dd89c:
    if (ctx->pc == 0x2DD89Cu) {
        ctx->pc = 0x2DD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD898u;
        // 0x2dd89c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8A0u;
        goto label_2dd8a0;
    }
    ctx->pc = 0x2DD898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DD8A0u);
        ctx->pc = 0x2DD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD898u;
        // 0x2dd89c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD898u, 0x2DD8A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DD8A0u;
label_2dd8a0:
    // 0x2dd8a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dd8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8a4:
    // 0x2dd8a4: 0xc0b7432  jal         func_2DD0C8
label_2dd8a8:
    if (ctx->pc == 0x2DD8A8u) {
        ctx->pc = 0x2DD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8A4u;
        // 0x2dd8a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8ACu;
        goto label_2dd8ac;
    }
    ctx->pc = 0x2DD8A4u;
    SET_GPR_U32(ctx, 31, 0x2DD8ACu);
    ctx->pc = 0x2DD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8A4u;
    // 0x2dd8a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0C8u, 0x2DD8A4u, 0x2DD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8ACu;
label_2dd8ac:
    // 0x2dd8ac: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2dd8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2dd8b0:
    // 0x2dd8b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dd8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8b4:
    // 0x2dd8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dd8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2dd8b8:
    // 0x2dd8b8: 0x10000096  b           . + 4 + (0x96 << 2)
label_2dd8bc:
    if (ctx->pc == 0x2DD8BCu) {
        ctx->pc = 0x2DD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8B8u;
        // 0x2dd8bc: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8C0u;
        goto label_2dd8c0;
    }
    ctx->pc = 0x2DD8B8u;
    {
        const bool branch_taken_0x2dd8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8B8u;
        // 0x2dd8bc: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8b8) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD8C0u;
label_2dd8c0:
    // 0x2dd8c0: 0xc088fa8  jal         func_223EA0
label_2dd8c4:
    if (ctx->pc == 0x2DD8C4u) {
        ctx->pc = 0x2DD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8C0u;
        // 0x2dd8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8C8u;
        goto label_2dd8c8;
    }
    ctx->pc = 0x2DD8C0u;
    SET_GPR_U32(ctx, 31, 0x2DD8C8u);
    ctx->pc = 0x2DD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8C0u;
    // 0x2dd8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x2DD8C0u, 0x2DD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8C8u;
label_2dd8c8:
    // 0x2dd8c8: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
label_2dd8cc:
    if (ctx->pc == 0x2DD8CCu) {
        ctx->pc = 0x2DD8D0u;
        goto label_2dd8d0;
    }
    ctx->pc = 0x2DD8C8u;
    {
        const bool branch_taken_0x2dd8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x2dd8c8) {
            ctx->pc = 0x2DD8E0u;
            goto label_2dd8e0;
        }
    }
    ctx->pc = 0x2DD8D0u;
label_2dd8d0:
    // 0x2dd8d0: 0xc089000  jal         func_224000
label_2dd8d4:
    if (ctx->pc == 0x2DD8D4u) {
        ctx->pc = 0x2DD8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8D0u;
        // 0x2dd8d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8D8u;
        goto label_2dd8d8;
    }
    ctx->pc = 0x2DD8D0u;
    SET_GPR_U32(ctx, 31, 0x2DD8D8u);
    ctx->pc = 0x2DD8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8D0u;
    // 0x2dd8d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x2DD8D0u, 0x2DD8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8D8u;
label_2dd8d8:
    // 0x2dd8d8: 0x1452008e  bne         $v0, $s2, . + 4 + (0x8E << 2)
label_2dd8dc:
    if (ctx->pc == 0x2DD8DCu) {
        ctx->pc = 0x2DD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8D8u;
        // 0x2dd8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8E0u;
        goto label_2dd8e0;
    }
    ctx->pc = 0x2DD8D8u;
    {
        const bool branch_taken_0x2dd8d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DD8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8D8u;
        // 0x2dd8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8d8) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD8E0u;
label_2dd8e0:
    // 0x2dd8e0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2dd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2dd8e4:
    // 0x2dd8e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dd8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dd8e8:
    // 0x2dd8e8: 0xc089998  jal         func_226660
label_2dd8ec:
    if (ctx->pc == 0x2DD8ECu) {
        ctx->pc = 0x2DD8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8E8u;
        // 0x2dd8ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8F0u;
        goto label_2dd8f0;
    }
    ctx->pc = 0x2DD8E8u;
    SET_GPR_U32(ctx, 31, 0x2DD8F0u);
    ctx->pc = 0x2DD8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD8E8u;
    // 0x2dd8ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2DD8E8u, 0x2DD8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD8F0u;
label_2dd8f0:
    // 0x2dd8f0: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
label_2dd8f4:
    if (ctx->pc == 0x2DD8F4u) {
        ctx->pc = 0x2DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8F0u;
        // 0x2dd8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD8F8u;
        goto label_2dd8f8;
    }
    ctx->pc = 0x2DD8F0u;
    {
        const bool branch_taken_0x2dd8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8F0u;
        // 0x2dd8f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8f0) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DD8F8u;
label_2dd8f8:
    // 0x2dd8f8: 0x92820019  lbu         $v0, 0x19($s4)
    ctx->pc = 0x2dd8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 25)));
label_2dd8fc:
    // 0x2dd8fc: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_2dd900:
    if (ctx->pc == 0x2DD900u) {
        ctx->pc = 0x2DD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8FCu;
        // 0x2dd900: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD904u;
        goto label_2dd904;
    }
    ctx->pc = 0x2DD8FCu;
    {
        const bool branch_taken_0x2dd8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD8FCu;
        // 0x2dd900: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd8fc) {
            ctx->pc = 0x2DDA0Cu;
            goto label_2dda0c;
        }
    }
    ctx->pc = 0x2DD904u;
label_2dd904:
    // 0x2dd904: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x2dd904u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_2dd908:
    // 0x2dd908: 0x26720090  addiu       $s2, $s3, 0x90
    ctx->pc = 0x2dd908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2dd90c:
    // 0x2dd90c: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x2dd90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2dd910:
    // 0x2dd910: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2dd910u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_2dd914:
    // 0x2dd914: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2dd914u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2dd918:
    // 0x2dd918: 0x26034b00  addiu       $v1, $s0, 0x4B00
    ctx->pc = 0x2dd918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2dd91c:
    // 0x2dd91c: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x2dd91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
label_2dd920:
    // 0x2dd920: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2dd920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2dd924:
    // 0x2dd924: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dd924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2dd928:
    // 0x2dd928: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2dd928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dd92c:
    // 0x2dd92c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2dd930:
    // 0x2dd930: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2dd930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2dd934:
    // 0x2dd934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dd934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dd938:
    // 0x2dd938: 0xc0e3ec8  jal         func_38FB20
label_2dd93c:
    if (ctx->pc == 0x2DD93Cu) {
        ctx->pc = 0x2DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD938u;
        // 0x2dd93c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD940u;
        goto label_2dd940;
    }
    ctx->pc = 0x2DD938u;
    SET_GPR_U32(ctx, 31, 0x2DD940u);
    ctx->pc = 0x2DD93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD938u;
    // 0x2dd93c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB20u, 0x2DD938u, 0x2DD940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD940u;
label_2dd940:
    // 0x2dd940: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2dd944:
    if (ctx->pc == 0x2DD944u) {
        ctx->pc = 0x2DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD940u;
        // 0x2dd944: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD948u;
        goto label_2dd948;
    }
    ctx->pc = 0x2DD940u;
    {
        const bool branch_taken_0x2dd940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD940u;
        // 0x2dd944: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd940) {
            ctx->pc = 0x2DD96Cu;
            goto label_2dd96c;
        }
    }
    ctx->pc = 0x2DD948u;
label_2dd948:
    // 0x2dd948: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2dd94c:
    // 0x2dd94c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd950:
    // 0x2dd950: 0x0  nop
    ctx->pc = 0x2dd950u;
    // NOP
label_2dd954:
    // 0x2dd954: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd958:
    // 0x2dd958: 0x0  nop
    ctx->pc = 0x2dd958u;
    // NOP
label_2dd95c:
    // 0x2dd95c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2dd960:
    if (ctx->pc == 0x2DD960u) {
        ctx->pc = 0x2DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD95Cu;
        // 0x2dd960: 0x8e222c7c  lw          $v0, 0x2C7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD964u;
        goto label_2dd964;
    }
    ctx->pc = 0x2DD95Cu;
    {
        const bool branch_taken_0x2dd95c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd95c) {
            ctx->pc = 0x2DD960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD95Cu;
            // 0x2dd960: 0x8e222c7c  lw          $v0, 0x2C7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD970u;
            goto label_2dd970;
        }
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2dd964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd968:
    // 0x2dd968: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2dd968u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_2dd96c:
    // 0x2dd96c: 0x8e222c7c  lw          $v0, 0x2C7C($s1)
    ctx->pc = 0x2dd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_2dd970:
    // 0x2dd970: 0x26034b00  addiu       $v1, $s0, 0x4B00
    ctx->pc = 0x2dd970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_2dd974:
    // 0x2dd974: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2dd974u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2dd978:
    // 0x2dd978: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x2dd978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2dd97c:
    // 0x2dd97c: 0x8c440844  lw          $a0, 0x844($v0)
    ctx->pc = 0x2dd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2116)));
label_2dd980:
    // 0x2dd980: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2dd984:
    // 0x2dd984: 0xc0e397e  jal         func_38E5F8
label_2dd988:
    if (ctx->pc == 0x2DD988u) {
        ctx->pc = 0x2DD988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD984u;
        // 0x2dd988: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD98Cu;
        goto label_2dd98c;
    }
    ctx->pc = 0x2DD984u;
    SET_GPR_U32(ctx, 31, 0x2DD98Cu);
    ctx->pc = 0x2DD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD984u;
    // 0x2dd988: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E5F8u, 0x2DD984u, 0x2DD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD98Cu;
label_2dd98c:
    // 0x2dd98c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2dd990:
    if (ctx->pc == 0x2DD990u) {
        ctx->pc = 0x2DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD98Cu;
        // 0x2dd990: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD994u;
        goto label_2dd994;
    }
    ctx->pc = 0x2DD98Cu;
    {
        const bool branch_taken_0x2dd98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD98Cu;
        // 0x2dd990: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd98c) {
            ctx->pc = 0x2DD9C0u;
            goto label_2dd9c0;
        }
    }
    ctx->pc = 0x2DD994u;
label_2dd994:
    // 0x2dd994: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x2dd994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
label_2dd998:
    // 0x2dd998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dd99c:
    // 0x2dd99c: 0x0  nop
    ctx->pc = 0x2dd99cu;
    // NOP
label_2dd9a0:
    // 0x2dd9a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2dd9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd9a4:
    // 0x2dd9a4: 0x0  nop
    ctx->pc = 0x2dd9a4u;
    // NOP
label_2dd9a8:
    // 0x2dd9a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2dd9ac:
    if (ctx->pc == 0x2DD9ACu) {
        ctx->pc = 0x2DD9B0u;
        goto label_2dd9b0;
    }
    ctx->pc = 0x2DD9A8u;
    {
        const bool branch_taken_0x2dd9a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd9a8) {
            ctx->pc = 0x2DD9C0u;
            goto label_2dd9c0;
        }
    }
    ctx->pc = 0x2DD9B0u;
label_2dd9b0:
    // 0x2dd9b0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2dd9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dd9b4:
    // 0x2dd9b4: 0x0  nop
    ctx->pc = 0x2dd9b4u;
    // NOP
label_2dd9b8:
    // 0x2dd9b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2dd9bc:
    if (ctx->pc == 0x2DD9BCu) {
        ctx->pc = 0x2DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9B8u;
        // 0x2dd9bc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9C0u;
        goto label_2dd9c0;
    }
    ctx->pc = 0x2DD9B8u;
    {
        const bool branch_taken_0x2dd9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd9b8) {
            ctx->pc = 0x2DD9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9B8u;
            // 0x2dd9bc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9C0u;
            goto label_2dd9c0;
        }
    }
    ctx->pc = 0x2DD9C0u;
label_2dd9c0:
    // 0x2dd9c0: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_2dd9c4:
    if (ctx->pc == 0x2DD9C4u) {
        ctx->pc = 0x2DD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9C0u;
        // 0x2dd9c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9C8u;
        goto label_2dd9c8;
    }
    ctx->pc = 0x2DD9C0u;
    {
        const bool branch_taken_0x2dd9c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9C0u;
        // 0x2dd9c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9c0) {
            ctx->pc = 0x2DDA0Cu;
            goto label_2dda0c;
        }
    }
    ctx->pc = 0x2DD9C8u;
label_2dd9c8:
    // 0x2dd9c8: 0xc0a367c  jal         func_28D9F0
label_2dd9cc:
    if (ctx->pc == 0x2DD9CCu) {
        ctx->pc = 0x2DD9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9C8u;
        // 0x2dd9cc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9D0u;
        goto label_2dd9d0;
    }
    ctx->pc = 0x2DD9C8u;
    SET_GPR_U32(ctx, 31, 0x2DD9D0u);
    ctx->pc = 0x2DD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9C8u;
    // 0x2dd9cc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DD9C8u, 0x2DD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9D0u;
label_2dd9d0:
    // 0x2dd9d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dd9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd9d4:
    // 0x2dd9d4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_2dd9d8:
    if (ctx->pc == 0x2DD9D8u) {
        ctx->pc = 0x2DD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9D4u;
        // 0x2dd9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9DCu;
        goto label_2dd9dc;
    }
    ctx->pc = 0x2DD9D4u;
    {
        const bool branch_taken_0x2dd9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9D4u;
        // 0x2dd9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9d4) {
            ctx->pc = 0x2DD9FCu;
            goto label_2dd9fc;
        }
    }
    ctx->pc = 0x2DD9DCu;
label_2dd9dc:
    // 0x2dd9dc: 0xc0884f6  jal         func_2213D8
label_2dd9e0:
    if (ctx->pc == 0x2DD9E0u) {
        ctx->pc = 0x2DD9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9DCu;
        // 0x2dd9e0: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9E4u;
        goto label_2dd9e4;
    }
    ctx->pc = 0x2DD9DCu;
    SET_GPR_U32(ctx, 31, 0x2DD9E4u);
    ctx->pc = 0x2DD9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9DCu;
    // 0x2dd9e0: 0x26b00010  addiu       $s0, $s5, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DD9DCu, 0x2DD9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9E4u;
label_2dd9e4:
    // 0x2dd9e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2dd9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2dd9e8:
    // 0x2dd9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd9ec:
    // 0x2dd9ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dd9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dd9f0:
    // 0x2dd9f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dd9f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dd9f4:
    // 0x2dd9f4: 0xc0bf800  jal         func_2FE000
label_2dd9f8:
    if (ctx->pc == 0x2DD9F8u) {
        ctx->pc = 0x2DD9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9F4u;
        // 0x2dd9f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DD9FCu;
        goto label_2dd9fc;
    }
    ctx->pc = 0x2DD9F4u;
    SET_GPR_U32(ctx, 31, 0x2DD9FCu);
    ctx->pc = 0x2DD9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9F4u;
    // 0x2dd9f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DD9F4u, 0x2DD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9FCu;
label_2dd9fc:
    // 0x2dd9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dda00:
    // 0x2dda00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dda00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dda04:
    // 0x2dda04: 0x10000043  b           . + 4 + (0x43 << 2)
label_2dda08:
    if (ctx->pc == 0x2DDA08u) {
        ctx->pc = 0x2DDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA04u;
        // 0x2dda08: 0xa2830019  sb          $v1, 0x19($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA0Cu;
        goto label_2dda0c;
    }
    ctx->pc = 0x2DDA04u;
    {
        const bool branch_taken_0x2dda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA04u;
        // 0x2dda08: 0xa2830019  sb          $v1, 0x19($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda04) {
            ctx->pc = 0x2DDB14u;
            goto label_2ddb14;
        }
    }
    ctx->pc = 0x2DDA0Cu;
label_2dda0c:
    // 0x2dda0c: 0xc0a774e  jal         func_29DD38
label_2dda10:
    if (ctx->pc == 0x2DDA10u) {
        ctx->pc = 0x2DDA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA0Cu;
        // 0x2dda10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA14u;
        goto label_2dda14;
    }
    ctx->pc = 0x2DDA0Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA14u);
    ctx->pc = 0x2DDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA0Cu;
    // 0x2dda10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD38u, 0x2DDA0Cu, 0x2DDA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA14u;
label_2dda14:
    // 0x2dda14: 0xc0a367c  jal         func_28D9F0
label_2dda18:
    if (ctx->pc == 0x2DDA18u) {
        ctx->pc = 0x2DDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA14u;
        // 0x2dda18: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA1Cu;
        goto label_2dda1c;
    }
    ctx->pc = 0x2DDA14u;
    SET_GPR_U32(ctx, 31, 0x2DDA1Cu);
    ctx->pc = 0x2DDA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA14u;
    // 0x2dda18: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DDA14u, 0x2DDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA1Cu;
label_2dda1c:
    // 0x2dda1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dda1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dda20:
    // 0x2dda20: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_2dda24:
    if (ctx->pc == 0x2DDA24u) {
        ctx->pc = 0x2DDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA20u;
        // 0x2dda24: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA28u;
        goto label_2dda28;
    }
    ctx->pc = 0x2DDA20u;
    {
        const bool branch_taken_0x2dda20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA20u;
        // 0x2dda24: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda20) {
            ctx->pc = 0x2DDA84u;
            goto label_2dda84;
        }
    }
    ctx->pc = 0x2DDA28u;
label_2dda28:
    // 0x2dda28: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2dda28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
label_2dda2c:
    // 0x2dda2c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2dda2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2dda30:
    // 0x2dda30: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x2dda30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dda34:
    // 0x2dda34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2dda34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2dda38:
    // 0x2dda38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2dda38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dda3c:
    // 0x2dda3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dda3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dda40:
    // 0x2dda40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dda40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dda44:
    // 0x2dda44: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2dda44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dda48:
    // 0x2dda48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2dda48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2dda4c:
    // 0x2dda4c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x2dda4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_2dda50:
    // 0x2dda50: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2dda50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dda54:
    // 0x2dda54: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2dda54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2dda58:
    // 0x2dda58: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2dda58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2dda5c:
    // 0x2dda5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2dda5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2dda60:
    // 0x2dda60: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2dda60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2dda64:
    // 0x2dda64: 0xc0884f6  jal         func_2213D8
label_2dda68:
    if (ctx->pc == 0x2DDA68u) {
        ctx->pc = 0x2DDA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA64u;
        // 0x2dda68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA6Cu;
        goto label_2dda6c;
    }
    ctx->pc = 0x2DDA64u;
    SET_GPR_U32(ctx, 31, 0x2DDA6Cu);
    ctx->pc = 0x2DDA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA64u;
    // 0x2dda68: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DDA64u, 0x2DDA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA6Cu;
label_2dda6c:
    // 0x2dda6c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2dda6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2dda70:
    // 0x2dda70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dda70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dda74:
    // 0x2dda74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dda74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dda78:
    // 0x2dda78: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2dda78u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2dda7c:
    // 0x2dda7c: 0xc0bf800  jal         func_2FE000
label_2dda80:
    if (ctx->pc == 0x2DDA80u) {
        ctx->pc = 0x2DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA7Cu;
        // 0x2dda80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDA84u;
        goto label_2dda84;
    }
    ctx->pc = 0x2DDA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA84u);
    ctx->pc = 0x2DDA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA7Cu;
    // 0x2dda80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DDA7Cu, 0x2DDA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA84u;
label_2dda84:
    // 0x2dda84: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2dda84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2dda88:
    // 0x2dda88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dda88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dda8c:
    // 0x2dda8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2dda8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2dda90:
    // 0x2dda90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dda90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2dda94:
    // 0x2dda94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dda94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dda98:
    // 0x2dda98: 0xc0a3892  jal         func_28E248
label_2dda9c:
    if (ctx->pc == 0x2DDA9Cu) {
        ctx->pc = 0x2DDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA98u;
        // 0x2dda9c: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAA0u;
        goto label_2ddaa0;
    }
    ctx->pc = 0x2DDA98u;
    SET_GPR_U32(ctx, 31, 0x2DDAA0u);
    ctx->pc = 0x2DDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA98u;
    // 0x2dda9c: 0x2407007d  addiu       $a3, $zero, 0x7D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2DDA98u, 0x2DDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAA0u;
label_2ddaa0:
    // 0x2ddaa0: 0x92900018  lbu         $s0, 0x18($s4)
    ctx->pc = 0x2ddaa0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 24)));
label_2ddaa4:
    // 0x2ddaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ddaa8:
    // 0x2ddaa8: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
label_2ddaac:
    if (ctx->pc == 0x2DDAACu) {
        ctx->pc = 0x2DDAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAA8u;
        // 0x2ddaac: 0xa2800019  sb          $zero, 0x19($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAB0u;
        goto label_2ddab0;
    }
    ctx->pc = 0x2DDAA8u;
    {
        const bool branch_taken_0x2ddaa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ddaa8) {
            ctx->pc = 0x2DDAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDAA8u;
            // 0x2ddaac: 0xa2800019  sb          $zero, 0x19($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDB10u;
            goto label_2ddb10;
        }
    }
    ctx->pc = 0x2DDAB0u;
label_2ddab0:
    // 0x2ddab0: 0xc0a4802  jal         func_292008
label_2ddab4:
    if (ctx->pc == 0x2DDAB4u) {
        ctx->pc = 0x2DDAB8u;
        goto label_2ddab8;
    }
    ctx->pc = 0x2DDAB0u;
    SET_GPR_U32(ctx, 31, 0x2DDAB8u);
    ctx->pc = 0x292008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292008u, 0x2DDAB0u, 0x2DDAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAB8u;
label_2ddab8:
    // 0x2ddab8: 0x54500015  bnel        $v0, $s0, . + 4 + (0x15 << 2)
label_2ddabc:
    if (ctx->pc == 0x2DDABCu) {
        ctx->pc = 0x2DDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAB8u;
        // 0x2ddabc: 0xa2800019  sb          $zero, 0x19($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAC0u;
        goto label_2ddac0;
    }
    ctx->pc = 0x2DDAB8u;
    {
        const bool branch_taken_0x2ddab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ddab8) {
            ctx->pc = 0x2DDABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDAB8u;
            // 0x2ddabc: 0xa2800019  sb          $zero, 0x19($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDB10u;
            goto label_2ddb10;
        }
    }
    ctx->pc = 0x2DDAC0u;
label_2ddac0:
    // 0x2ddac0: 0xc0a367c  jal         func_28D9F0
label_2ddac4:
    if (ctx->pc == 0x2DDAC4u) {
        ctx->pc = 0x2DDAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAC0u;
        // 0x2ddac4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAC8u;
        goto label_2ddac8;
    }
    ctx->pc = 0x2DDAC0u;
    SET_GPR_U32(ctx, 31, 0x2DDAC8u);
    ctx->pc = 0x2DDAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDAC0u;
    // 0x2ddac4: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DDAC0u, 0x2DDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAC8u;
label_2ddac8:
    // 0x2ddac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ddac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ddacc:
    // 0x2ddacc: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2ddad0:
    if (ctx->pc == 0x2DDAD0u) {
        ctx->pc = 0x2DDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDACCu;
        // 0x2ddad0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAD4u;
        goto label_2ddad4;
    }
    ctx->pc = 0x2DDACCu;
    {
        const bool branch_taken_0x2ddacc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDACCu;
        // 0x2ddad0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddacc) {
            ctx->pc = 0x2DDB0Cu;
            goto label_2ddb0c;
        }
    }
    ctx->pc = 0x2DDAD4u;
label_2ddad4:
    // 0x2ddad4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ddad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ddad8:
    // 0x2ddad8: 0xc0cd4ee  jal         func_3353B8
label_2ddadc:
    if (ctx->pc == 0x2DDADCu) {
        ctx->pc = 0x2DDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAD8u;
        // 0x2ddadc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDAE0u;
        goto label_2ddae0;
    }
    ctx->pc = 0x2DDAD8u;
    SET_GPR_U32(ctx, 31, 0x2DDAE0u);
    ctx->pc = 0x2DDADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDAD8u;
    // 0x2ddadc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2DDAD8u, 0x2DDAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDAE0u;
label_2ddae0:
    // 0x2ddae0: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2ddae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2ddae4:
    // 0x2ddae4: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x2ddae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2ddae8:
    // 0x2ddae8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2ddae8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ddaec:
    // 0x2ddaec: 0x2408008e  addiu       $t0, $zero, 0x8E
    ctx->pc = 0x2ddaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_2ddaf0:
    // 0x2ddaf0: 0x83400b  movn        $t0, $a0, $v1
    ctx->pc = 0x2ddaf0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
label_2ddaf4:
    // 0x2ddaf4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2ddaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2ddaf8:
    // 0x2ddaf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ddaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ddafc:
    // 0x2ddafc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2ddafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ddb00:
    // 0x2ddb00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ddb00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb04:
    // 0x2ddb04: 0xc0bec3c  jal         func_2FB0F0
label_2ddb08:
    if (ctx->pc == 0x2DDB08u) {
        ctx->pc = 0x2DDB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB04u;
        // 0x2ddb08: 0x240905dc  addiu       $t1, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDB0Cu;
        goto label_2ddb0c;
    }
    ctx->pc = 0x2DDB04u;
    SET_GPR_U32(ctx, 31, 0x2DDB0Cu);
    ctx->pc = 0x2DDB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDB04u;
    // 0x2ddb08: 0x240905dc  addiu       $t1, $zero, 0x5DC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2DDB04u, 0x2DDB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDB0Cu;
label_2ddb0c:
    // 0x2ddb0c: 0xa2800019  sb          $zero, 0x19($s4)
    ctx->pc = 0x2ddb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 25), (uint8_t)GPR_U32(ctx, 0));
label_2ddb10:
    // 0x2ddb10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ddb10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ddb14:
    // 0x2ddb14: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2ddb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ddb18:
    // 0x2ddb18: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2ddb18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ddb1c:
    // 0x2ddb1c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2ddb1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2ddb20:
    // 0x2ddb20: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2ddb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ddb24:
    // 0x2ddb24: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ddb24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ddb28:
    // 0x2ddb28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ddb28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ddb2c:
    // 0x2ddb2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ddb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ddb30:
    // 0x2ddb30: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2ddb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ddb34:
    // 0x2ddb34: 0x3e00008  jr          $ra
label_2ddb38:
    if (ctx->pc == 0x2DDB38u) {
        ctx->pc = 0x2DDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB34u;
        // 0x2ddb38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDB3Cu;
        goto label_2ddb3c;
    }
    ctx->pc = 0x2DDB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDB34u;
        // 0x2ddb38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDB3Cu;
label_2ddb3c:
    // 0x2ddb3c: 0x0  nop
    ctx->pc = 0x2ddb3cu;
    // NOP
    ctx->pc = 0x2ddb40u;
}
