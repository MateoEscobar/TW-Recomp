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

// Function: sub_0026C1D8
// Address: 0x26c1d8 - 0x26c548
void sub_0026C1D8_0x26c1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C1D8_0x26c1d8");
#endif

    switch (ctx->pc) {
        case 0x26c1d8u: goto label_26c1d8;
        case 0x26c1dcu: goto label_26c1dc;
        case 0x26c1e0u: goto label_26c1e0;
        case 0x26c1e4u: goto label_26c1e4;
        case 0x26c1e8u: goto label_26c1e8;
        case 0x26c1ecu: goto label_26c1ec;
        case 0x26c1f0u: goto label_26c1f0;
        case 0x26c1f4u: goto label_26c1f4;
        case 0x26c1f8u: goto label_26c1f8;
        case 0x26c1fcu: goto label_26c1fc;
        case 0x26c200u: goto label_26c200;
        case 0x26c204u: goto label_26c204;
        case 0x26c208u: goto label_26c208;
        case 0x26c20cu: goto label_26c20c;
        case 0x26c210u: goto label_26c210;
        case 0x26c214u: goto label_26c214;
        case 0x26c218u: goto label_26c218;
        case 0x26c21cu: goto label_26c21c;
        case 0x26c220u: goto label_26c220;
        case 0x26c224u: goto label_26c224;
        case 0x26c228u: goto label_26c228;
        case 0x26c22cu: goto label_26c22c;
        case 0x26c230u: goto label_26c230;
        case 0x26c234u: goto label_26c234;
        case 0x26c238u: goto label_26c238;
        case 0x26c23cu: goto label_26c23c;
        case 0x26c240u: goto label_26c240;
        case 0x26c244u: goto label_26c244;
        case 0x26c248u: goto label_26c248;
        case 0x26c24cu: goto label_26c24c;
        case 0x26c250u: goto label_26c250;
        case 0x26c254u: goto label_26c254;
        case 0x26c258u: goto label_26c258;
        case 0x26c25cu: goto label_26c25c;
        case 0x26c260u: goto label_26c260;
        case 0x26c264u: goto label_26c264;
        case 0x26c268u: goto label_26c268;
        case 0x26c26cu: goto label_26c26c;
        case 0x26c270u: goto label_26c270;
        case 0x26c274u: goto label_26c274;
        case 0x26c278u: goto label_26c278;
        case 0x26c27cu: goto label_26c27c;
        case 0x26c280u: goto label_26c280;
        case 0x26c284u: goto label_26c284;
        case 0x26c288u: goto label_26c288;
        case 0x26c28cu: goto label_26c28c;
        case 0x26c290u: goto label_26c290;
        case 0x26c294u: goto label_26c294;
        case 0x26c298u: goto label_26c298;
        case 0x26c29cu: goto label_26c29c;
        case 0x26c2a0u: goto label_26c2a0;
        case 0x26c2a4u: goto label_26c2a4;
        case 0x26c2a8u: goto label_26c2a8;
        case 0x26c2acu: goto label_26c2ac;
        case 0x26c2b0u: goto label_26c2b0;
        case 0x26c2b4u: goto label_26c2b4;
        case 0x26c2b8u: goto label_26c2b8;
        case 0x26c2bcu: goto label_26c2bc;
        case 0x26c2c0u: goto label_26c2c0;
        case 0x26c2c4u: goto label_26c2c4;
        case 0x26c2c8u: goto label_26c2c8;
        case 0x26c2ccu: goto label_26c2cc;
        case 0x26c2d0u: goto label_26c2d0;
        case 0x26c2d4u: goto label_26c2d4;
        case 0x26c2d8u: goto label_26c2d8;
        case 0x26c2dcu: goto label_26c2dc;
        case 0x26c2e0u: goto label_26c2e0;
        case 0x26c2e4u: goto label_26c2e4;
        case 0x26c2e8u: goto label_26c2e8;
        case 0x26c2ecu: goto label_26c2ec;
        case 0x26c2f0u: goto label_26c2f0;
        case 0x26c2f4u: goto label_26c2f4;
        case 0x26c2f8u: goto label_26c2f8;
        case 0x26c2fcu: goto label_26c2fc;
        case 0x26c300u: goto label_26c300;
        case 0x26c304u: goto label_26c304;
        case 0x26c308u: goto label_26c308;
        case 0x26c30cu: goto label_26c30c;
        case 0x26c310u: goto label_26c310;
        case 0x26c314u: goto label_26c314;
        case 0x26c318u: goto label_26c318;
        case 0x26c31cu: goto label_26c31c;
        case 0x26c320u: goto label_26c320;
        case 0x26c324u: goto label_26c324;
        case 0x26c328u: goto label_26c328;
        case 0x26c32cu: goto label_26c32c;
        case 0x26c330u: goto label_26c330;
        case 0x26c334u: goto label_26c334;
        case 0x26c338u: goto label_26c338;
        case 0x26c33cu: goto label_26c33c;
        case 0x26c340u: goto label_26c340;
        case 0x26c344u: goto label_26c344;
        case 0x26c348u: goto label_26c348;
        case 0x26c34cu: goto label_26c34c;
        case 0x26c350u: goto label_26c350;
        case 0x26c354u: goto label_26c354;
        case 0x26c358u: goto label_26c358;
        case 0x26c35cu: goto label_26c35c;
        case 0x26c360u: goto label_26c360;
        case 0x26c364u: goto label_26c364;
        case 0x26c368u: goto label_26c368;
        case 0x26c36cu: goto label_26c36c;
        case 0x26c370u: goto label_26c370;
        case 0x26c374u: goto label_26c374;
        case 0x26c378u: goto label_26c378;
        case 0x26c37cu: goto label_26c37c;
        case 0x26c380u: goto label_26c380;
        case 0x26c384u: goto label_26c384;
        case 0x26c388u: goto label_26c388;
        case 0x26c38cu: goto label_26c38c;
        case 0x26c390u: goto label_26c390;
        case 0x26c394u: goto label_26c394;
        case 0x26c398u: goto label_26c398;
        case 0x26c39cu: goto label_26c39c;
        case 0x26c3a0u: goto label_26c3a0;
        case 0x26c3a4u: goto label_26c3a4;
        case 0x26c3a8u: goto label_26c3a8;
        case 0x26c3acu: goto label_26c3ac;
        case 0x26c3b0u: goto label_26c3b0;
        case 0x26c3b4u: goto label_26c3b4;
        case 0x26c3b8u: goto label_26c3b8;
        case 0x26c3bcu: goto label_26c3bc;
        case 0x26c3c0u: goto label_26c3c0;
        case 0x26c3c4u: goto label_26c3c4;
        case 0x26c3c8u: goto label_26c3c8;
        case 0x26c3ccu: goto label_26c3cc;
        case 0x26c3d0u: goto label_26c3d0;
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3d8u: goto label_26c3d8;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3e0u: goto label_26c3e0;
        case 0x26c3e4u: goto label_26c3e4;
        case 0x26c3e8u: goto label_26c3e8;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f0u: goto label_26c3f0;
        case 0x26c3f4u: goto label_26c3f4;
        case 0x26c3f8u: goto label_26c3f8;
        case 0x26c3fcu: goto label_26c3fc;
        case 0x26c400u: goto label_26c400;
        case 0x26c404u: goto label_26c404;
        case 0x26c408u: goto label_26c408;
        case 0x26c40cu: goto label_26c40c;
        case 0x26c410u: goto label_26c410;
        case 0x26c414u: goto label_26c414;
        case 0x26c418u: goto label_26c418;
        case 0x26c41cu: goto label_26c41c;
        case 0x26c420u: goto label_26c420;
        case 0x26c424u: goto label_26c424;
        case 0x26c428u: goto label_26c428;
        case 0x26c42cu: goto label_26c42c;
        case 0x26c430u: goto label_26c430;
        case 0x26c434u: goto label_26c434;
        case 0x26c438u: goto label_26c438;
        case 0x26c43cu: goto label_26c43c;
        case 0x26c440u: goto label_26c440;
        case 0x26c444u: goto label_26c444;
        case 0x26c448u: goto label_26c448;
        case 0x26c44cu: goto label_26c44c;
        case 0x26c450u: goto label_26c450;
        case 0x26c454u: goto label_26c454;
        case 0x26c458u: goto label_26c458;
        case 0x26c45cu: goto label_26c45c;
        case 0x26c460u: goto label_26c460;
        case 0x26c464u: goto label_26c464;
        case 0x26c468u: goto label_26c468;
        case 0x26c46cu: goto label_26c46c;
        case 0x26c470u: goto label_26c470;
        case 0x26c474u: goto label_26c474;
        case 0x26c478u: goto label_26c478;
        case 0x26c47cu: goto label_26c47c;
        case 0x26c480u: goto label_26c480;
        case 0x26c484u: goto label_26c484;
        case 0x26c488u: goto label_26c488;
        case 0x26c48cu: goto label_26c48c;
        case 0x26c490u: goto label_26c490;
        case 0x26c494u: goto label_26c494;
        case 0x26c498u: goto label_26c498;
        case 0x26c49cu: goto label_26c49c;
        case 0x26c4a0u: goto label_26c4a0;
        case 0x26c4a4u: goto label_26c4a4;
        case 0x26c4a8u: goto label_26c4a8;
        case 0x26c4acu: goto label_26c4ac;
        case 0x26c4b0u: goto label_26c4b0;
        case 0x26c4b4u: goto label_26c4b4;
        case 0x26c4b8u: goto label_26c4b8;
        case 0x26c4bcu: goto label_26c4bc;
        case 0x26c4c0u: goto label_26c4c0;
        case 0x26c4c4u: goto label_26c4c4;
        case 0x26c4c8u: goto label_26c4c8;
        case 0x26c4ccu: goto label_26c4cc;
        case 0x26c4d0u: goto label_26c4d0;
        case 0x26c4d4u: goto label_26c4d4;
        case 0x26c4d8u: goto label_26c4d8;
        case 0x26c4dcu: goto label_26c4dc;
        case 0x26c4e0u: goto label_26c4e0;
        case 0x26c4e4u: goto label_26c4e4;
        case 0x26c4e8u: goto label_26c4e8;
        case 0x26c4ecu: goto label_26c4ec;
        case 0x26c4f0u: goto label_26c4f0;
        case 0x26c4f4u: goto label_26c4f4;
        case 0x26c4f8u: goto label_26c4f8;
        case 0x26c4fcu: goto label_26c4fc;
        case 0x26c500u: goto label_26c500;
        case 0x26c504u: goto label_26c504;
        case 0x26c508u: goto label_26c508;
        case 0x26c50cu: goto label_26c50c;
        case 0x26c510u: goto label_26c510;
        case 0x26c514u: goto label_26c514;
        case 0x26c518u: goto label_26c518;
        case 0x26c51cu: goto label_26c51c;
        case 0x26c520u: goto label_26c520;
        case 0x26c524u: goto label_26c524;
        case 0x26c528u: goto label_26c528;
        case 0x26c52cu: goto label_26c52c;
        case 0x26c530u: goto label_26c530;
        case 0x26c534u: goto label_26c534;
        case 0x26c538u: goto label_26c538;
        case 0x26c53cu: goto label_26c53c;
        case 0x26c540u: goto label_26c540;
        case 0x26c544u: goto label_26c544;
        default: break;
    }

    ctx->pc = 0x26c1d8u;

label_26c1d8:
    // 0x26c1d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26c1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26c1dc:
    // 0x26c1dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26c1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_26c1e0:
    // 0x26c1e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26c1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_26c1e4:
    // 0x26c1e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26c1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_26c1e8:
    // 0x26c1e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26c1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_26c1ec:
    // 0x26c1ec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_26c1f0:
    // 0x26c1f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26c1f4:
    // 0x26c1f4: 0xc089b98  jal         func_226E60
label_26c1f8:
    if (ctx->pc == 0x26C1F8u) {
        ctx->pc = 0x26C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C1F4u;
        // 0x26c1f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C1FCu;
        goto label_26c1fc;
    }
    ctx->pc = 0x26C1F4u;
    SET_GPR_U32(ctx, 31, 0x26C1FCu);
    ctx->pc = 0x26C1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C1F4u;
    // 0x26c1f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x26C1F4u, 0x26C1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C1FCu;
label_26c1fc:
    // 0x26c1fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26c1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c200:
    // 0x26c200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c204:
    // 0x26c204: 0xc087016  jal         func_21C058
label_26c208:
    if (ctx->pc == 0x26C208u) {
        ctx->pc = 0x26C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C204u;
        // 0x26c208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C20Cu;
        goto label_26c20c;
    }
    ctx->pc = 0x26C204u;
    SET_GPR_U32(ctx, 31, 0x26C20Cu);
    ctx->pc = 0x26C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C204u;
    // 0x26c208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C204u, 0x26C20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C20Cu;
label_26c20c:
    // 0x26c20c: 0x122000c7  beqz        $s1, . + 4 + (0xC7 << 2)
label_26c210:
    if (ctx->pc == 0x26C210u) {
        ctx->pc = 0x26C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C20Cu;
        // 0x26c210: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C214u;
        goto label_26c214;
    }
    ctx->pc = 0x26C20Cu;
    {
        const bool branch_taken_0x26c20c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C20Cu;
        // 0x26c210: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c20c) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C214u;
label_26c214:
    // 0x26c214: 0xc089fac  jal         func_227EB0
label_26c218:
    if (ctx->pc == 0x26C218u) {
        ctx->pc = 0x26C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C214u;
        // 0x26c218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C21Cu;
        goto label_26c21c;
    }
    ctx->pc = 0x26C214u;
    SET_GPR_U32(ctx, 31, 0x26C21Cu);
    ctx->pc = 0x26C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C214u;
    // 0x26c218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x26C214u, 0x26C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C21Cu;
label_26c21c:
    // 0x26c21c: 0x144000c3  bnez        $v0, . + 4 + (0xC3 << 2)
label_26c220:
    if (ctx->pc == 0x26C220u) {
        ctx->pc = 0x26C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C21Cu;
        // 0x26c220: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C224u;
        goto label_26c224;
    }
    ctx->pc = 0x26C21Cu;
    {
        const bool branch_taken_0x26c21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C21Cu;
        // 0x26c220: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c21c) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C224u;
label_26c224:
    // 0x26c224: 0xc089f86  jal         func_227E18
label_26c228:
    if (ctx->pc == 0x26C228u) {
        ctx->pc = 0x26C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C224u;
        // 0x26c228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C22Cu;
        goto label_26c22c;
    }
    ctx->pc = 0x26C224u;
    SET_GPR_U32(ctx, 31, 0x26C22Cu);
    ctx->pc = 0x26C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C224u;
    // 0x26c228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x26C224u, 0x26C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C22Cu;
label_26c22c:
    // 0x26c22c: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
label_26c230:
    if (ctx->pc == 0x26C230u) {
        ctx->pc = 0x26C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C22Cu;
        // 0x26c230: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C234u;
        goto label_26c234;
    }
    ctx->pc = 0x26C22Cu;
    {
        const bool branch_taken_0x26c22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C22Cu;
        // 0x26c230: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c22c) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C234u;
label_26c234:
    // 0x26c234: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x26c234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26c238:
    // 0x26c238: 0x504000bd  beql        $v0, $zero, . + 4 + (0xBD << 2)
label_26c23c:
    if (ctx->pc == 0x26C23Cu) {
        ctx->pc = 0x26C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C238u;
        // 0x26c23c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C240u;
        goto label_26c240;
    }
    ctx->pc = 0x26C238u;
    {
        const bool branch_taken_0x26c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c238) {
            ctx->pc = 0x26C23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C238u;
            // 0x26c23c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C240u;
label_26c240:
    // 0x26c240: 0xc089f86  jal         func_227E18
label_26c244:
    if (ctx->pc == 0x26C244u) {
        ctx->pc = 0x26C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C240u;
        // 0x26c244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C248u;
        goto label_26c248;
    }
    ctx->pc = 0x26C240u;
    SET_GPR_U32(ctx, 31, 0x26C248u);
    ctx->pc = 0x26C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C240u;
    // 0x26c244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x26C240u, 0x26C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C248u;
label_26c248:
    // 0x26c248: 0x544000b8  bnel        $v0, $zero, . + 4 + (0xB8 << 2)
label_26c24c:
    if (ctx->pc == 0x26C24Cu) {
        ctx->pc = 0x26C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C248u;
        // 0x26c24c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C250u;
        goto label_26c250;
    }
    ctx->pc = 0x26C248u;
    {
        const bool branch_taken_0x26c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c248) {
            ctx->pc = 0x26C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C248u;
            // 0x26c24c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C250u;
label_26c250:
    // 0x26c250: 0xc089fac  jal         func_227EB0
label_26c254:
    if (ctx->pc == 0x26C254u) {
        ctx->pc = 0x26C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C250u;
        // 0x26c254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C258u;
        goto label_26c258;
    }
    ctx->pc = 0x26C250u;
    SET_GPR_U32(ctx, 31, 0x26C258u);
    ctx->pc = 0x26C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C250u;
    // 0x26c254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x26C250u, 0x26C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C258u;
label_26c258:
    // 0x26c258: 0x544000b4  bnel        $v0, $zero, . + 4 + (0xB4 << 2)
label_26c25c:
    if (ctx->pc == 0x26C25Cu) {
        ctx->pc = 0x26C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C258u;
        // 0x26c25c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C260u;
        goto label_26c260;
    }
    ctx->pc = 0x26C258u;
    {
        const bool branch_taken_0x26c258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c258) {
            ctx->pc = 0x26C25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C258u;
            // 0x26c25c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C260u;
label_26c260:
    // 0x26c260: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x26c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26c264:
    // 0x26c264: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_26c268:
    if (ctx->pc == 0x26C268u) {
        ctx->pc = 0x26C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C264u;
        // 0x26c268: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C26Cu;
        goto label_26c26c;
    }
    ctx->pc = 0x26C264u;
    {
        const bool branch_taken_0x26c264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C264u;
        // 0x26c268: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c264) {
            ctx->pc = 0x26C528u;
            goto label_26c528;
        }
    }
    ctx->pc = 0x26C26Cu;
label_26c26c:
    // 0x26c26c: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x26c26cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
label_26c270:
    // 0x26c270: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26c270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26c274:
    // 0x26c274: 0x34a5d3ef  ori         $a1, $a1, 0xD3EF
    ctx->pc = 0x26c274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54255);
label_26c278:
    // 0x26c278: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x26c278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
label_26c27c:
    // 0x26c27c: 0x34a507f0  ori         $a1, $a1, 0x7F0
    ctx->pc = 0x26c27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2032);
label_26c280:
    // 0x26c280: 0xc08997c  jal         func_2265F0
label_26c284:
    if (ctx->pc == 0x26C284u) {
        ctx->pc = 0x26C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C280u;
        // 0x26c284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C288u;
        goto label_26c288;
    }
    ctx->pc = 0x26C280u;
    SET_GPR_U32(ctx, 31, 0x26C288u);
    ctx->pc = 0x26C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C280u;
    // 0x26c284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26C280u, 0x26C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C288u;
label_26c288:
    // 0x26c288: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26c28c:
    if (ctx->pc == 0x26C28Cu) {
        ctx->pc = 0x26C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C288u;
        // 0x26c28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C290u;
        goto label_26c290;
    }
    ctx->pc = 0x26C288u;
    {
        const bool branch_taken_0x26c288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C288u;
        // 0x26c28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c288) {
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C290u;
label_26c290:
    // 0x26c290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c294:
    // 0x26c294: 0xc08702a  jal         func_21C0A8
label_26c298:
    if (ctx->pc == 0x26C298u) {
        ctx->pc = 0x26C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C294u;
        // 0x26c298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C29Cu;
        goto label_26c29c;
    }
    ctx->pc = 0x26C294u;
    SET_GPR_U32(ctx, 31, 0x26C29Cu);
    ctx->pc = 0x26C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C294u;
    // 0x26c298: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C0A8u, 0x26C294u, 0x26C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C29Cu;
label_26c29c:
    // 0x26c29c: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x26c29cu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c2a0:
    // 0x26c2a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c2a4:
    // 0x26c2a4: 0xc089548  jal         func_225520
label_26c2a8:
    if (ctx->pc == 0x26C2A8u) {
        ctx->pc = 0x26C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2A4u;
        // 0x26c2a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2ACu;
        goto label_26c2ac;
    }
    ctx->pc = 0x26C2A4u;
    SET_GPR_U32(ctx, 31, 0x26C2ACu);
    ctx->pc = 0x26C2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2A4u;
    // 0x26c2a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225520u, 0x26C2A4u, 0x26C2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2ACu;
label_26c2ac:
    // 0x26c2ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c2b0:
    // 0x26c2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c2b4:
    // 0x26c2b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c2b8:
    // 0x26c2b8: 0xc099cb4  jal         func_2672D0
label_26c2bc:
    if (ctx->pc == 0x26C2BCu) {
        ctx->pc = 0x26C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2B8u;
        // 0x26c2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2C0u;
        goto label_26c2c0;
    }
    ctx->pc = 0x26C2B8u;
    SET_GPR_U32(ctx, 31, 0x26C2C0u);
    ctx->pc = 0x26C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2B8u;
    // 0x26c2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26C2B8u, 0x26C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2C0u;
label_26c2c0:
    // 0x26c2c0: 0x12600099  beqz        $s3, . + 4 + (0x99 << 2)
label_26c2c4:
    if (ctx->pc == 0x26C2C4u) {
        ctx->pc = 0x26C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2C0u;
        // 0x26c2c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2C8u;
        goto label_26c2c8;
    }
    ctx->pc = 0x26C2C0u;
    {
        const bool branch_taken_0x26c2c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2C0u;
        // 0x26c2c4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2c0) {
            ctx->pc = 0x26C528u;
            goto label_26c528;
        }
    }
    ctx->pc = 0x26C2C8u;
label_26c2c8:
    // 0x26c2c8: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_26c2cc:
    if (ctx->pc == 0x26C2CCu) {
        ctx->pc = 0x26C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2C8u;
        // 0x26c2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2D0u;
        goto label_26c2d0;
    }
    ctx->pc = 0x26C2C8u;
    {
        const bool branch_taken_0x26c2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2C8u;
        // 0x26c2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2c8) {
            ctx->pc = 0x26C378u;
            goto label_26c378;
        }
    }
    ctx->pc = 0x26C2D0u;
label_26c2d0:
    // 0x26c2d0: 0x3c058fc5  lui         $a1, 0x8FC5
    ctx->pc = 0x26c2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36805 << 16));
label_26c2d4:
    // 0x26c2d4: 0xc089998  jal         func_226660
label_26c2d8:
    if (ctx->pc == 0x26C2D8u) {
        ctx->pc = 0x26C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2D4u;
        // 0x26c2d8: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2DCu;
        goto label_26c2dc;
    }
    ctx->pc = 0x26C2D4u;
    SET_GPR_U32(ctx, 31, 0x26C2DCu);
    ctx->pc = 0x26C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2D4u;
    // 0x26c2d8: 0x34a57a60  ori         $a1, $a1, 0x7A60 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31328);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26C2D4u, 0x26C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2DCu;
label_26c2dc:
    // 0x26c2dc: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
label_26c2e0:
    if (ctx->pc == 0x26C2E0u) {
        ctx->pc = 0x26C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2DCu;
        // 0x26c2e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2E4u;
        goto label_26c2e4;
    }
    ctx->pc = 0x26C2DCu;
    {
        const bool branch_taken_0x26c2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c2dc) {
            ctx->pc = 0x26C2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C2DCu;
            // 0x26c2e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C2E4u;
label_26c2e4:
    // 0x26c2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c2e8:
    // 0x26c2e8: 0xc08997c  jal         func_2265F0
label_26c2ec:
    if (ctx->pc == 0x26C2ECu) {
        ctx->pc = 0x26C2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2E8u;
        // 0x26c2ec: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2F0u;
        goto label_26c2f0;
    }
    ctx->pc = 0x26C2E8u;
    SET_GPR_U32(ctx, 31, 0x26C2F0u);
    ctx->pc = 0x26C2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C2E8u;
    // 0x26c2ec: 0x240500d0  addiu       $a1, $zero, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26C2E8u, 0x26C2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C2F0u;
label_26c2f0:
    // 0x26c2f0: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_26c2f4:
    if (ctx->pc == 0x26C2F4u) {
        ctx->pc = 0x26C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2F0u;
        // 0x26c2f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C2F8u;
        goto label_26c2f8;
    }
    ctx->pc = 0x26C2F0u;
    {
        const bool branch_taken_0x26c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2F0u;
        // 0x26c2f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2f0) {
            ctx->pc = 0x26C528u;
            goto label_26c528;
        }
    }
    ctx->pc = 0x26C2F8u;
label_26c2f8:
    // 0x26c2f8: 0x1682008c  bne         $s4, $v0, . + 4 + (0x8C << 2)
label_26c2fc:
    if (ctx->pc == 0x26C2FCu) {
        ctx->pc = 0x26C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2F8u;
        // 0x26c2fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C300u;
        goto label_26c300;
    }
    ctx->pc = 0x26C2F8u;
    {
        const bool branch_taken_0x26c2f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2F8u;
        // 0x26c2fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c2f8) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C300u;
label_26c300:
    // 0x26c300: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c304:
    // 0x26c304: 0xc08997c  jal         func_2265F0
label_26c308:
    if (ctx->pc == 0x26C308u) {
        ctx->pc = 0x26C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C304u;
        // 0x26c308: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C30Cu;
        goto label_26c30c;
    }
    ctx->pc = 0x26C304u;
    SET_GPR_U32(ctx, 31, 0x26C30Cu);
    ctx->pc = 0x26C308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C304u;
    // 0x26c308: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26C304u, 0x26C30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C30Cu;
label_26c30c:
    // 0x26c30c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_26c310:
    if (ctx->pc == 0x26C310u) {
        ctx->pc = 0x26C310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C30Cu;
        // 0x26c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C314u;
        goto label_26c314;
    }
    ctx->pc = 0x26C30Cu;
    {
        const bool branch_taken_0x26c30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c30c) {
            ctx->pc = 0x26C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C30Cu;
            // 0x26c310: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C340u;
            goto label_26c340;
        }
    }
    ctx->pc = 0x26C314u;
label_26c314:
    // 0x26c314: 0xc0e409a  jal         func_390268
label_26c318:
    if (ctx->pc == 0x26C318u) {
        ctx->pc = 0x26C318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C314u;
        // 0x26c318: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C31Cu;
        goto label_26c31c;
    }
    ctx->pc = 0x26C314u;
    SET_GPR_U32(ctx, 31, 0x26C31Cu);
    ctx->pc = 0x26C318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C314u;
    // 0x26c318: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26C314u, 0x26C31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C31Cu;
label_26c31c:
    // 0x26c31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c320:
    // 0x26c320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c324:
    // 0x26c324: 0xc08b2c0  jal         func_22CB00
label_26c328:
    if (ctx->pc == 0x26C328u) {
        ctx->pc = 0x26C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C324u;
        // 0x26c328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C32Cu;
        goto label_26c32c;
    }
    ctx->pc = 0x26C324u;
    SET_GPR_U32(ctx, 31, 0x26C32Cu);
    ctx->pc = 0x26C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C324u;
    // 0x26c328: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26C324u, 0x26C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C32Cu;
label_26c32c:
    // 0x26c32c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26c32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c330:
    // 0x26c330: 0xc0a0152  jal         func_280548
label_26c334:
    if (ctx->pc == 0x26C334u) {
        ctx->pc = 0x26C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C330u;
        // 0x26c334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C338u;
        goto label_26c338;
    }
    ctx->pc = 0x26C330u;
    SET_GPR_U32(ctx, 31, 0x26C338u);
    ctx->pc = 0x26C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C330u;
    // 0x26c334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26C330u, 0x26C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C338u;
label_26c338:
    // 0x26c338: 0x1000000f  b           . + 4 + (0xF << 2)
label_26c33c:
    if (ctx->pc == 0x26C33Cu) {
        ctx->pc = 0x26C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C338u;
        // 0x26c33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C340u;
        goto label_26c340;
    }
    ctx->pc = 0x26C338u;
    {
        const bool branch_taken_0x26c338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C338u;
        // 0x26c33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c338) {
            ctx->pc = 0x26C378u;
            goto label_26c378;
        }
    }
    ctx->pc = 0x26C340u;
label_26c340:
    // 0x26c340: 0xc08997c  jal         func_2265F0
label_26c344:
    if (ctx->pc == 0x26C344u) {
        ctx->pc = 0x26C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C340u;
        // 0x26c344: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C348u;
        goto label_26c348;
    }
    ctx->pc = 0x26C340u;
    SET_GPR_U32(ctx, 31, 0x26C348u);
    ctx->pc = 0x26C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C340u;
    // 0x26c344: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x26C340u, 0x26C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C348u;
label_26c348:
    // 0x26c348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_26c34c:
    if (ctx->pc == 0x26C34Cu) {
        ctx->pc = 0x26C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C348u;
        // 0x26c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C350u;
        goto label_26c350;
    }
    ctx->pc = 0x26C348u;
    {
        const bool branch_taken_0x26c348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C348u;
        // 0x26c34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c348) {
            ctx->pc = 0x26C378u;
            goto label_26c378;
        }
    }
    ctx->pc = 0x26C350u;
label_26c350:
    // 0x26c350: 0xc0e409a  jal         func_390268
label_26c354:
    if (ctx->pc == 0x26C354u) {
        ctx->pc = 0x26C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C350u;
        // 0x26c354: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C358u;
        goto label_26c358;
    }
    ctx->pc = 0x26C350u;
    SET_GPR_U32(ctx, 31, 0x26C358u);
    ctx->pc = 0x26C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C350u;
    // 0x26c354: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26C350u, 0x26C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C358u;
label_26c358:
    // 0x26c358: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c35c:
    // 0x26c35c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26c35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c360:
    // 0x26c360: 0xc08b2c0  jal         func_22CB00
label_26c364:
    if (ctx->pc == 0x26C364u) {
        ctx->pc = 0x26C364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C360u;
        // 0x26c364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C368u;
        goto label_26c368;
    }
    ctx->pc = 0x26C360u;
    SET_GPR_U32(ctx, 31, 0x26C368u);
    ctx->pc = 0x26C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C360u;
    // 0x26c364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26C360u, 0x26C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C368u;
label_26c368:
    // 0x26c368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c36c:
    // 0x26c36c: 0xc0a0152  jal         func_280548
label_26c370:
    if (ctx->pc == 0x26C370u) {
        ctx->pc = 0x26C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C36Cu;
        // 0x26c370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C374u;
        goto label_26c374;
    }
    ctx->pc = 0x26C36Cu;
    SET_GPR_U32(ctx, 31, 0x26C374u);
    ctx->pc = 0x26C370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C36Cu;
    // 0x26c370: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26C36Cu, 0x26C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C374u;
label_26c374:
    // 0x26c374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c378:
    // 0x26c378: 0xc089998  jal         func_226660
label_26c37c:
    if (ctx->pc == 0x26C37Cu) {
        ctx->pc = 0x26C37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C378u;
        // 0x26c37c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C380u;
        goto label_26c380;
    }
    ctx->pc = 0x26C378u;
    SET_GPR_U32(ctx, 31, 0x26C380u);
    ctx->pc = 0x26C37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C378u;
    // 0x26c37c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26C378u, 0x26C380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C380u;
label_26c380:
    // 0x26c380: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_26c384:
    if (ctx->pc == 0x26C384u) {
        ctx->pc = 0x26C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C380u;
        // 0x26c384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C388u;
        goto label_26c388;
    }
    ctx->pc = 0x26C380u;
    {
        const bool branch_taken_0x26c380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C380u;
        // 0x26c384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c380) {
            ctx->pc = 0x26C3ECu;
            goto label_26c3ec;
        }
    }
    ctx->pc = 0x26C388u;
label_26c388:
    // 0x26c388: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x26c388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_26c38c:
    // 0x26c38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c390:
    // 0x26c390: 0xc089998  jal         func_226660
label_26c394:
    if (ctx->pc == 0x26C394u) {
        ctx->pc = 0x26C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C390u;
        // 0x26c394: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C398u;
        goto label_26c398;
    }
    ctx->pc = 0x26C390u;
    SET_GPR_U32(ctx, 31, 0x26C398u);
    ctx->pc = 0x26C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C390u;
    // 0x26c394: 0x34a57fff  ori         $a1, $a1, 0x7FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26C390u, 0x26C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C398u;
label_26c398:
    // 0x26c398: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_26c39c:
    if (ctx->pc == 0x26C39Cu) {
        ctx->pc = 0x26C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C398u;
        // 0x26c39c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3A0u;
        goto label_26c3a0;
    }
    ctx->pc = 0x26C398u;
    {
        const bool branch_taken_0x26c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C398u;
        // 0x26c39c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c398) {
            ctx->pc = 0x26C3ECu;
            goto label_26c3ec;
        }
    }
    ctx->pc = 0x26C3A0u;
label_26c3a0:
    // 0x26c3a0: 0x8e3000d8  lw          $s0, 0xD8($s1)
    ctx->pc = 0x26c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26c3a4:
    // 0x26c3a4: 0xc05dc36  jal         func_1770D8
label_26c3a8:
    if (ctx->pc == 0x26C3A8u) {
        ctx->pc = 0x26C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3A4u;
        // 0x26c3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3ACu;
        goto label_26c3ac;
    }
    ctx->pc = 0x26C3A4u;
    SET_GPR_U32(ctx, 31, 0x26C3ACu);
    ctx->pc = 0x26C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3A4u;
    // 0x26c3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1770D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1770D8u, 0x26C3A4u, 0x26C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3ACu;
label_26c3ac:
    // 0x26c3ac: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x26c3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_26c3b0:
    // 0x26c3b0: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x26c3b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26c3b4:
    // 0x26c3b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26c3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26c3b8:
    // 0x26c3b8: 0x0  nop
    ctx->pc = 0x26c3b8u;
    // NOP
label_26c3bc:
    // 0x26c3bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c3c0:
    // 0x26c3c0: 0x0  nop
    ctx->pc = 0x26c3c0u;
    // NOP
label_26c3c4:
    // 0x26c3c4: 0x45020059  bc1fl       . + 4 + (0x59 << 2)
label_26c3c8:
    if (ctx->pc == 0x26C3C8u) {
        ctx->pc = 0x26C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3C4u;
        // 0x26c3c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3CCu;
        goto label_26c3cc;
    }
    ctx->pc = 0x26C3C4u;
    {
        const bool branch_taken_0x26c3c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c3c4) {
            ctx->pc = 0x26C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C3C4u;
            // 0x26c3c8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C3CCu;
label_26c3cc:
    // 0x26c3cc: 0xc05d484  jal         func_175210
label_26c3d0:
    if (ctx->pc == 0x26C3D0u) {
        ctx->pc = 0x26C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3CCu;
        // 0x26c3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3D4u;
        goto label_26c3d4;
    }
    ctx->pc = 0x26C3CCu;
    SET_GPR_U32(ctx, 31, 0x26C3D4u);
    ctx->pc = 0x26C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3CCu;
    // 0x26c3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26C3CCu, 0x26C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D4u;
label_26c3d4:
    // 0x26c3d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c3d8:
    // 0x26c3d8: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x26c3d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_26c3dc:
    // 0x26c3dc: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x26c3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_26c3e0:
    // 0x26c3e0: 0xa0f809  jalr        $a1
label_26c3e4:
    if (ctx->pc == 0x26C3E4u) {
        ctx->pc = 0x26C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3E0u;
        // 0x26c3e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3E8u;
        goto label_26c3e8;
    }
    ctx->pc = 0x26C3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26C3E8u);
        ctx->pc = 0x26C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3E0u;
        // 0x26c3e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C3E0u, 0x26C3E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C3E8u;
label_26c3e8:
    // 0x26c3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c3ec:
    // 0x26c3ec: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
label_26c3f0:
    if (ctx->pc == 0x26C3F0u) {
        ctx->pc = 0x26C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3ECu;
        // 0x26c3f0: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C3F4u;
        goto label_26c3f4;
    }
    ctx->pc = 0x26C3ECu;
    {
        const bool branch_taken_0x26c3ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3ECu;
        // 0x26c3f0: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3ec) {
            ctx->pc = 0x26C444u;
            goto label_26c444;
        }
    }
    ctx->pc = 0x26C3F4u;
label_26c3f4:
    // 0x26c3f4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26c3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_26c3f8:
    // 0x26c3f8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26c3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_26c3fc:
    // 0x26c3fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c400:
    // 0x26c400: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c404:
    // 0x26c404: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c408:
    // 0x26c408: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c408u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c40c:
    // 0x26c40c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_26c410:
    if (ctx->pc == 0x26C410u) {
        ctx->pc = 0x26C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C40Cu;
        // 0x26c410: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C414u;
        goto label_26c414;
    }
    ctx->pc = 0x26C40Cu;
    {
        const bool branch_taken_0x26c40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C40Cu;
        // 0x26c410: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c40c) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C414u;
label_26c414:
    // 0x26c414: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x26c414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_26c418:
    // 0x26c418: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c41c:
    // 0x26c41c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c420:
    // 0x26c420: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c424:
    // 0x26c424: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c428:
    // 0x26c428: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_26c42c:
    if (ctx->pc == 0x26C42Cu) {
        ctx->pc = 0x26C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C428u;
        // 0x26c42c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C430u;
        goto label_26c430;
    }
    ctx->pc = 0x26C428u;
    {
        const bool branch_taken_0x26c428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C428u;
        // 0x26c42c: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c428) {
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C430u;
label_26c430:
    // 0x26c430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c434:
    // 0x26c434: 0xc09af9a  jal         func_26BE68
label_26c438:
    if (ctx->pc == 0x26C438u) {
        ctx->pc = 0x26C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C434u;
        // 0x26c438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C43Cu;
        goto label_26c43c;
    }
    ctx->pc = 0x26C434u;
    SET_GPR_U32(ctx, 31, 0x26C43Cu);
    ctx->pc = 0x26C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C434u;
    // 0x26c438: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BE68u, 0x26C434u, 0x26C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C43Cu;
label_26c43c:
    // 0x26c43c: 0x1000003b  b           . + 4 + (0x3B << 2)
label_26c440:
    if (ctx->pc == 0x26C440u) {
        ctx->pc = 0x26C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C43Cu;
        // 0x26c440: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C444u;
        goto label_26c444;
    }
    ctx->pc = 0x26C43Cu;
    {
        const bool branch_taken_0x26c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C43Cu;
        // 0x26c440: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c43c) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C444u;
label_26c444:
    // 0x26c444: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_26c448:
    // 0x26c448: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c44c:
    // 0x26c44c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c44cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c450:
    // 0x26c450: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c454:
    // 0x26c454: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c458:
    // 0x26c458: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_26c45c:
    if (ctx->pc == 0x26C45Cu) {
        ctx->pc = 0x26C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C458u;
        // 0x26c45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C460u;
        goto label_26c460;
    }
    ctx->pc = 0x26C458u;
    {
        const bool branch_taken_0x26c458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C458u;
        // 0x26c45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c458) {
            ctx->pc = 0x26C4C4u;
            goto label_26c4c4;
        }
    }
    ctx->pc = 0x26C460u;
label_26c460:
    // 0x26c460: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x26c460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_26c464:
    // 0x26c464: 0x8c430254  lw          $v1, 0x254($v0)
    ctx->pc = 0x26c464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
label_26c468:
    // 0x26c468: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_26c46c:
    if (ctx->pc == 0x26C46Cu) {
        ctx->pc = 0x26C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C468u;
        // 0x26c46c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C470u;
        goto label_26c470;
    }
    ctx->pc = 0x26C468u;
    {
        const bool branch_taken_0x26c468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C468u;
        // 0x26c46c: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c468) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C470u;
label_26c470:
    // 0x26c470: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x26c470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_26c474:
    // 0x26c474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c478:
    // 0x26c478: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c47c:
    // 0x26c47c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c480:
    // 0x26c480: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c480u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c484:
    // 0x26c484: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_26c488:
    if (ctx->pc == 0x26C488u) {
        ctx->pc = 0x26C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C484u;
        // 0x26c488: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C48Cu;
        goto label_26c48c;
    }
    ctx->pc = 0x26C484u;
    {
        const bool branch_taken_0x26c484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c484) {
            ctx->pc = 0x26C488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C484u;
            // 0x26c488: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4E4u;
            goto label_26c4e4;
        }
    }
    ctx->pc = 0x26C48Cu;
label_26c48c:
    // 0x26c48c: 0xc088e48  jal         func_223920
label_26c490:
    if (ctx->pc == 0x26C490u) {
        ctx->pc = 0x26C490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C48Cu;
        // 0x26c490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C494u;
        goto label_26c494;
    }
    ctx->pc = 0x26C48Cu;
    SET_GPR_U32(ctx, 31, 0x26C494u);
    ctx->pc = 0x26C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C48Cu;
    // 0x26c490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x26C48Cu, 0x26C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C494u;
label_26c494:
    // 0x26c494: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_26c498:
    if (ctx->pc == 0x26C498u) {
        ctx->pc = 0x26C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C494u;
        // 0x26c498: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C49Cu;
        goto label_26c49c;
    }
    ctx->pc = 0x26C494u;
    {
        const bool branch_taken_0x26c494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c494) {
            ctx->pc = 0x26C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C494u;
            // 0x26c498: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4E4u;
            goto label_26c4e4;
        }
    }
    ctx->pc = 0x26C49Cu;
label_26c49c:
    // 0x26c49c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26c49cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26c4a0:
    // 0x26c4a0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26c4a0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_26c4a4:
    // 0x26c4a4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_26c4a8:
    if (ctx->pc == 0x26C4A8u) {
        ctx->pc = 0x26C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4A4u;
        // 0x26c4a8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4ACu;
        goto label_26c4ac;
    }
    ctx->pc = 0x26C4A4u;
    {
        const bool branch_taken_0x26c4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c4a4) {
            ctx->pc = 0x26C4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C4A4u;
            // 0x26c4a8: 0xde2200e0  ld          $v0, 0xE0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C4E4u;
            goto label_26c4e4;
        }
    }
    ctx->pc = 0x26C4ACu;
label_26c4ac:
    // 0x26c4ac: 0xc0874fa  jal         func_21D3E8
label_26c4b0:
    if (ctx->pc == 0x26C4B0u) {
        ctx->pc = 0x26C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4ACu;
        // 0x26c4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4B4u;
        goto label_26c4b4;
    }
    ctx->pc = 0x26C4ACu;
    SET_GPR_U32(ctx, 31, 0x26C4B4u);
    ctx->pc = 0x26C4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4ACu;
    // 0x26c4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x26C4ACu, 0x26C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4B4u;
label_26c4b4:
    // 0x26c4b4: 0xc09edd4  jal         func_27B750
label_26c4b8:
    if (ctx->pc == 0x26C4B8u) {
        ctx->pc = 0x26C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4B4u;
        // 0x26c4b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4BCu;
        goto label_26c4bc;
    }
    ctx->pc = 0x26C4B4u;
    SET_GPR_U32(ctx, 31, 0x26C4BCu);
    ctx->pc = 0x26C4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4B4u;
    // 0x26c4b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B750u, 0x26C4B4u, 0x26C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4BCu;
label_26c4bc:
    // 0x26c4bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26c4c0:
    if (ctx->pc == 0x26C4C0u) {
        ctx->pc = 0x26C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4BCu;
        // 0x26c4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4C4u;
        goto label_26c4c4;
    }
    ctx->pc = 0x26C4BCu;
    {
        const bool branch_taken_0x26c4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4BCu;
        // 0x26c4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4bc) {
            ctx->pc = 0x26C4E0u;
            goto label_26c4e0;
        }
    }
    ctx->pc = 0x26C4C4u;
label_26c4c4:
    // 0x26c4c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26c4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c4c8:
    // 0x26c4c8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x26c4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_26c4cc:
    // 0x26c4cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26c4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c4d0:
    // 0x26c4d0: 0xc098ab2  jal         func_262AC8
label_26c4d4:
    if (ctx->pc == 0x26C4D4u) {
        ctx->pc = 0x26C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4D0u;
        // 0x26c4d4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4D8u;
        goto label_26c4d8;
    }
    ctx->pc = 0x26C4D0u;
    SET_GPR_U32(ctx, 31, 0x26C4D8u);
    ctx->pc = 0x26C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C4D0u;
    // 0x26c4d4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x26C4D0u, 0x26C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C4D8u;
label_26c4d8:
    // 0x26c4d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_26c4dc:
    if (ctx->pc == 0x26C4DCu) {
        ctx->pc = 0x26C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4D8u;
        // 0x26c4dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C4E0u;
        goto label_26c4e0;
    }
    ctx->pc = 0x26C4D8u;
    {
        const bool branch_taken_0x26c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4D8u;
        // 0x26c4dc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4d8) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C4E0u;
label_26c4e0:
    // 0x26c4e0: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x26c4e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_26c4e4:
    // 0x26c4e4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x26c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_26c4e8:
    // 0x26c4e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c4ec:
    // 0x26c4ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c4f0:
    // 0x26c4f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c4f4:
    // 0x26c4f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c4f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c4f8:
    // 0x26c4f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_26c4fc:
    if (ctx->pc == 0x26C4FCu) {
        ctx->pc = 0x26C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4F8u;
        // 0x26c4fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C500u;
        goto label_26c500;
    }
    ctx->pc = 0x26C4F8u;
    {
        const bool branch_taken_0x26c4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C4F8u;
        // 0x26c4fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c4f8) {
            ctx->pc = 0x26C52Cu;
            goto label_26c52c;
        }
    }
    ctx->pc = 0x26C500u;
label_26c500:
    // 0x26c500: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x26c500u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_26c504:
    // 0x26c504: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26c508:
    // 0x26c508: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26c508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c50c:
    // 0x26c50c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26c50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_26c510:
    // 0x26c510: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x26c510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_26c514:
    // 0x26c514: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_26c518:
    if (ctx->pc == 0x26C518u) {
        ctx->pc = 0x26C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C514u;
        // 0x26c518: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C51Cu;
        goto label_26c51c;
    }
    ctx->pc = 0x26C514u;
    {
        const bool branch_taken_0x26c514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C514u;
        // 0x26c518: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c514) {
            ctx->pc = 0x26C530u;
            goto label_26c530;
        }
    }
    ctx->pc = 0x26C51Cu;
label_26c51c:
    // 0x26c51c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c520:
    // 0x26c520: 0xc09af9a  jal         func_26BE68
label_26c524:
    if (ctx->pc == 0x26C524u) {
        ctx->pc = 0x26C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C520u;
        // 0x26c524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C528u;
        goto label_26c528;
    }
    ctx->pc = 0x26C520u;
    SET_GPR_U32(ctx, 31, 0x26C528u);
    ctx->pc = 0x26C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C520u;
    // 0x26c524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BE68u, 0x26C520u, 0x26C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C528u;
label_26c528:
    // 0x26c528: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26c528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26c52c:
    // 0x26c52c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26c52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26c530:
    // 0x26c530: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26c530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26c534:
    // 0x26c534: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26c534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26c538:
    // 0x26c538: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26c538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26c53c:
    // 0x26c53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c540:
    // 0x26c540: 0x3e00008  jr          $ra
label_26c544:
    if (ctx->pc == 0x26C544u) {
        ctx->pc = 0x26C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C540u;
        // 0x26c544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C548u;
        goto label_fallthrough_0x26c540;
    }
    ctx->pc = 0x26C540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C540u;
        // 0x26c544: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26c540:
    ctx->pc = 0x26C548u;
}
