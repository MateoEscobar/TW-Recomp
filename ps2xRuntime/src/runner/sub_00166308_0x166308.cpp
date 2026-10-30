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

// Function: sub_00166308
// Address: 0x166308 - 0x1664d8
void sub_00166308_0x166308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166308_0x166308");
#endif

    switch (ctx->pc) {
        case 0x166308u: goto label_166308;
        case 0x16630cu: goto label_16630c;
        case 0x166310u: goto label_166310;
        case 0x166314u: goto label_166314;
        case 0x166318u: goto label_166318;
        case 0x16631cu: goto label_16631c;
        case 0x166320u: goto label_166320;
        case 0x166324u: goto label_166324;
        case 0x166328u: goto label_166328;
        case 0x16632cu: goto label_16632c;
        case 0x166330u: goto label_166330;
        case 0x166334u: goto label_166334;
        case 0x166338u: goto label_166338;
        case 0x16633cu: goto label_16633c;
        case 0x166340u: goto label_166340;
        case 0x166344u: goto label_166344;
        case 0x166348u: goto label_166348;
        case 0x16634cu: goto label_16634c;
        case 0x166350u: goto label_166350;
        case 0x166354u: goto label_166354;
        case 0x166358u: goto label_166358;
        case 0x16635cu: goto label_16635c;
        case 0x166360u: goto label_166360;
        case 0x166364u: goto label_166364;
        case 0x166368u: goto label_166368;
        case 0x16636cu: goto label_16636c;
        case 0x166370u: goto label_166370;
        case 0x166374u: goto label_166374;
        case 0x166378u: goto label_166378;
        case 0x16637cu: goto label_16637c;
        case 0x166380u: goto label_166380;
        case 0x166384u: goto label_166384;
        case 0x166388u: goto label_166388;
        case 0x16638cu: goto label_16638c;
        case 0x166390u: goto label_166390;
        case 0x166394u: goto label_166394;
        case 0x166398u: goto label_166398;
        case 0x16639cu: goto label_16639c;
        case 0x1663a0u: goto label_1663a0;
        case 0x1663a4u: goto label_1663a4;
        case 0x1663a8u: goto label_1663a8;
        case 0x1663acu: goto label_1663ac;
        case 0x1663b0u: goto label_1663b0;
        case 0x1663b4u: goto label_1663b4;
        case 0x1663b8u: goto label_1663b8;
        case 0x1663bcu: goto label_1663bc;
        case 0x1663c0u: goto label_1663c0;
        case 0x1663c4u: goto label_1663c4;
        case 0x1663c8u: goto label_1663c8;
        case 0x1663ccu: goto label_1663cc;
        case 0x1663d0u: goto label_1663d0;
        case 0x1663d4u: goto label_1663d4;
        case 0x1663d8u: goto label_1663d8;
        case 0x1663dcu: goto label_1663dc;
        case 0x1663e0u: goto label_1663e0;
        case 0x1663e4u: goto label_1663e4;
        case 0x1663e8u: goto label_1663e8;
        case 0x1663ecu: goto label_1663ec;
        case 0x1663f0u: goto label_1663f0;
        case 0x1663f4u: goto label_1663f4;
        case 0x1663f8u: goto label_1663f8;
        case 0x1663fcu: goto label_1663fc;
        case 0x166400u: goto label_166400;
        case 0x166404u: goto label_166404;
        case 0x166408u: goto label_166408;
        case 0x16640cu: goto label_16640c;
        case 0x166410u: goto label_166410;
        case 0x166414u: goto label_166414;
        case 0x166418u: goto label_166418;
        case 0x16641cu: goto label_16641c;
        case 0x166420u: goto label_166420;
        case 0x166424u: goto label_166424;
        case 0x166428u: goto label_166428;
        case 0x16642cu: goto label_16642c;
        case 0x166430u: goto label_166430;
        case 0x166434u: goto label_166434;
        case 0x166438u: goto label_166438;
        case 0x16643cu: goto label_16643c;
        case 0x166440u: goto label_166440;
        case 0x166444u: goto label_166444;
        case 0x166448u: goto label_166448;
        case 0x16644cu: goto label_16644c;
        case 0x166450u: goto label_166450;
        case 0x166454u: goto label_166454;
        case 0x166458u: goto label_166458;
        case 0x16645cu: goto label_16645c;
        case 0x166460u: goto label_166460;
        case 0x166464u: goto label_166464;
        case 0x166468u: goto label_166468;
        case 0x16646cu: goto label_16646c;
        case 0x166470u: goto label_166470;
        case 0x166474u: goto label_166474;
        case 0x166478u: goto label_166478;
        case 0x16647cu: goto label_16647c;
        case 0x166480u: goto label_166480;
        case 0x166484u: goto label_166484;
        case 0x166488u: goto label_166488;
        case 0x16648cu: goto label_16648c;
        case 0x166490u: goto label_166490;
        case 0x166494u: goto label_166494;
        case 0x166498u: goto label_166498;
        case 0x16649cu: goto label_16649c;
        case 0x1664a0u: goto label_1664a0;
        case 0x1664a4u: goto label_1664a4;
        case 0x1664a8u: goto label_1664a8;
        case 0x1664acu: goto label_1664ac;
        case 0x1664b0u: goto label_1664b0;
        case 0x1664b4u: goto label_1664b4;
        case 0x1664b8u: goto label_1664b8;
        case 0x1664bcu: goto label_1664bc;
        case 0x1664c0u: goto label_1664c0;
        case 0x1664c4u: goto label_1664c4;
        case 0x1664c8u: goto label_1664c8;
        case 0x1664ccu: goto label_1664cc;
        case 0x1664d0u: goto label_1664d0;
        case 0x1664d4u: goto label_1664d4;
        default: break;
    }

    ctx->pc = 0x166308u;

label_166308:
    // 0x166308: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x166308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_16630c:
    // 0x16630c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16630cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_166310:
    // 0x166310: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x166310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_166314:
    // 0x166314: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x166314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_166318:
    // 0x166318: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x166318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_16631c:
    // 0x16631c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16631cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166320:
    // 0x166320: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x166320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_166324:
    // 0x166324: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x166324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_166328:
    // 0x166328: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x166328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_16632c:
    // 0x16632c: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
label_166330:
    if (ctx->pc == 0x166330u) {
        ctx->pc = 0x166330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16632Cu;
        // 0x166330: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166334u;
        goto label_166334;
    }
    ctx->pc = 0x16632Cu;
    {
        const bool branch_taken_0x16632c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x166330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16632Cu;
        // 0x166330: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16632c) {
            ctx->pc = 0x1664B0u;
            goto label_1664b0;
        }
    }
    ctx->pc = 0x166334u;
label_166334:
    // 0x166334: 0xc087502  jal         func_21D408
label_166338:
    if (ctx->pc == 0x166338u) {
        ctx->pc = 0x166338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166334u;
        // 0x166338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16633Cu;
        goto label_16633c;
    }
    ctx->pc = 0x166334u;
    SET_GPR_U32(ctx, 31, 0x16633Cu);
    ctx->pc = 0x166338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166334u;
    // 0x166338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x166334u, 0x16633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16633Cu;
label_16633c:
    // 0x16633c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16633cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166340:
    // 0x166340: 0x8e74020c  lw          $s4, 0x20C($s3)
    ctx->pc = 0x166340u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_166344:
    // 0x166344: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_166348:
    if (ctx->pc == 0x166348u) {
        ctx->pc = 0x166348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166344u;
        // 0x166348: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16634Cu;
        goto label_16634c;
    }
    ctx->pc = 0x166344u;
    {
        const bool branch_taken_0x166344 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x166348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166344u;
        // 0x166348: 0x26440048  addiu       $a0, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166344) {
            ctx->pc = 0x166394u;
            goto label_166394;
        }
    }
    ctx->pc = 0x16634Cu;
label_16634c:
    // 0x16634c: 0xc087502  jal         func_21D408
label_166350:
    if (ctx->pc == 0x166350u) {
        ctx->pc = 0x166350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16634Cu;
        // 0x166350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166354u;
        goto label_166354;
    }
    ctx->pc = 0x16634Cu;
    SET_GPR_U32(ctx, 31, 0x166354u);
    ctx->pc = 0x166350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16634Cu;
    // 0x166350: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16634Cu, 0x166354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166354u;
label_166354:
    // 0x166354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_166358:
    // 0x166358: 0xc0a36c8  jal         func_28DB20
label_16635c:
    if (ctx->pc == 0x16635Cu) {
        ctx->pc = 0x16635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166358u;
        // 0x16635c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166360u;
        goto label_166360;
    }
    ctx->pc = 0x166358u;
    SET_GPR_U32(ctx, 31, 0x166360u);
    ctx->pc = 0x16635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166358u;
    // 0x16635c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x166358u, 0x166360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166360u;
label_166360:
    // 0x166360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166364:
    // 0x166364: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x166364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166368:
    // 0x166368: 0xc0a33f8  jal         func_28CFE0
label_16636c:
    if (ctx->pc == 0x16636Cu) {
        ctx->pc = 0x16636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166368u;
        // 0x16636c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166370u;
        goto label_166370;
    }
    ctx->pc = 0x166368u;
    SET_GPR_U32(ctx, 31, 0x166370u);
    ctx->pc = 0x16636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166368u;
    // 0x16636c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x166368u, 0x166370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166370u;
label_166370:
    // 0x166370: 0xc0a3bd2  jal         func_28EF48
label_166374:
    if (ctx->pc == 0x166374u) {
        ctx->pc = 0x166374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166370u;
        // 0x166374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166378u;
        goto label_166378;
    }
    ctx->pc = 0x166370u;
    SET_GPR_U32(ctx, 31, 0x166378u);
    ctx->pc = 0x166374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166370u;
    // 0x166374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x166370u, 0x166378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166378u;
label_166378:
    // 0x166378: 0xc13782a  jal         func_4DE0A8
label_16637c:
    if (ctx->pc == 0x16637Cu) {
        ctx->pc = 0x16637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166378u;
        // 0x16637c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166380u;
        goto label_166380;
    }
    ctx->pc = 0x166378u;
    SET_GPR_U32(ctx, 31, 0x166380u);
    ctx->pc = 0x16637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166378u;
    // 0x16637c: 0x26040164  addiu       $a0, $s0, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x166378u, 0x166380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166380u;
label_166380:
    // 0x166380: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x166380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_166384:
    // 0x166384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x166384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_166388:
    // 0x166388: 0xc059936  jal         func_1664D8
label_16638c:
    if (ctx->pc == 0x16638Cu) {
        ctx->pc = 0x16638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166388u;
        // 0x16638c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166390u;
        goto label_166390;
    }
    ctx->pc = 0x166388u;
    SET_GPR_U32(ctx, 31, 0x166390u);
    ctx->pc = 0x16638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166388u;
    // 0x16638c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1664D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1664D8u, 0x166388u, 0x166390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166390u;
label_166390:
    // 0x166390: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x166390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_166394:
    // 0x166394: 0xc136b80  jal         func_4DAE00
label_166398:
    if (ctx->pc == 0x166398u) {
        ctx->pc = 0x166398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166394u;
        // 0x166398: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16639Cu;
        goto label_16639c;
    }
    ctx->pc = 0x166394u;
    SET_GPR_U32(ctx, 31, 0x16639Cu);
    ctx->pc = 0x166398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166394u;
    // 0x166398: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x166394u, 0x16639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16639Cu;
label_16639c:
    // 0x16639c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x16639cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1663a0:
    // 0x1663a0: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1663a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_1663a4:
    // 0x1663a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1663a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1663a8:
    // 0x1663a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1663ac:
    if (ctx->pc == 0x1663ACu) {
        ctx->pc = 0x1663ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663A8u;
        // 0x1663ac: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663B0u;
        goto label_1663b0;
    }
    ctx->pc = 0x1663A8u;
    {
        const bool branch_taken_0x1663a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1663ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663A8u;
        // 0x1663ac: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663a8) {
            ctx->pc = 0x1663B8u;
            goto label_1663b8;
        }
    }
    ctx->pc = 0x1663B0u;
label_1663b0:
    // 0x1663b0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1663b4:
    if (ctx->pc == 0x1663B4u) {
        ctx->pc = 0x1663B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663B0u;
        // 0x1663b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663B8u;
        goto label_1663b8;
    }
    ctx->pc = 0x1663B0u;
    {
        const bool branch_taken_0x1663b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1663B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663B0u;
        // 0x1663b4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663b0) {
            ctx->pc = 0x1663BCu;
            goto label_1663bc;
        }
    }
    ctx->pc = 0x1663B8u;
label_1663b8:
    // 0x1663b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1663b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1663bc:
    // 0x1663bc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1663bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1663c0:
    // 0x1663c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1663c4:
    if (ctx->pc == 0x1663C4u) {
        ctx->pc = 0x1663C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663C0u;
        // 0x1663c4: 0xae72020c  sw          $s2, 0x20C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663C8u;
        goto label_1663c8;
    }
    ctx->pc = 0x1663C0u;
    {
        const bool branch_taken_0x1663c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1663c0) {
            ctx->pc = 0x1663C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1663C0u;
            // 0x1663c4: 0xae72020c  sw          $s2, 0x20C($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1663D4u;
            goto label_1663d4;
        }
    }
    ctx->pc = 0x1663C8u;
label_1663c8:
    // 0x1663c8: 0xc05b438  jal         func_16D0E0
label_1663cc:
    if (ctx->pc == 0x1663CCu) {
        ctx->pc = 0x1663CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663C8u;
        // 0x1663cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663D0u;
        goto label_1663d0;
    }
    ctx->pc = 0x1663C8u;
    SET_GPR_U32(ctx, 31, 0x1663D0u);
    ctx->pc = 0x1663CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663C8u;
    // 0x1663cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D0E0u, 0x1663C8u, 0x1663D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663D0u;
label_1663d0:
    // 0x1663d0: 0xae72020c  sw          $s2, 0x20C($s3)
    ctx->pc = 0x1663d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 18));
label_1663d4:
    // 0x1663d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1663d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1663d8:
    // 0x1663d8: 0xc0a2a86  jal         func_28AA18
label_1663dc:
    if (ctx->pc == 0x1663DCu) {
        ctx->pc = 0x1663DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663D8u;
        // 0x1663dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663E0u;
        goto label_1663e0;
    }
    ctx->pc = 0x1663D8u;
    SET_GPR_U32(ctx, 31, 0x1663E0u);
    ctx->pc = 0x1663DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1663D8u;
    // 0x1663dc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA18u, 0x1663D8u, 0x1663E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1663E0u;
label_1663e0:
    // 0x1663e0: 0x924200d8  lbu         $v0, 0xD8($s2)
    ctx->pc = 0x1663e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 216)));
label_1663e4:
    // 0x1663e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1663e8:
    if (ctx->pc == 0x1663E8u) {
        ctx->pc = 0x1663E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E4u;
        // 0x1663e8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1663ECu;
        goto label_1663ec;
    }
    ctx->pc = 0x1663E4u;
    {
        const bool branch_taken_0x1663e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1663E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1663E4u;
        // 0x1663e8: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1663e4) {
            ctx->pc = 0x1663F8u;
            goto label_1663f8;
        }
    }
    ctx->pc = 0x1663ECu;
label_1663ec:
    // 0x1663ec: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x1663ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_1663f0:
    // 0x1663f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1663f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1663f4:
    // 0x1663f4: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x1663f4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_1663f8:
    // 0x1663f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1663f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1663fc:
    // 0x1663fc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1663fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_166400:
    // 0x166400: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x166400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_166404:
    // 0x166404: 0x40f809  jalr        $v0
label_166408:
    if (ctx->pc == 0x166408u) {
        ctx->pc = 0x166408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166404u;
        // 0x166408: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16640Cu;
        goto label_16640c;
    }
    ctx->pc = 0x166404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16640Cu);
        ctx->pc = 0x166408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166404u;
        // 0x166408: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166404u, 0x16640Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16640Cu;
label_16640c:
    // 0x16640c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x16640cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_166410:
    // 0x166410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x166410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_166414:
    // 0x166414: 0xc13786a  jal         func_4DE1A8
label_166418:
    if (ctx->pc == 0x166418u) {
        ctx->pc = 0x166418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166414u;
        // 0x166418: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16641Cu;
        goto label_16641c;
    }
    ctx->pc = 0x166414u;
    SET_GPR_U32(ctx, 31, 0x16641Cu);
    ctx->pc = 0x166418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166414u;
    // 0x166418: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE1A8u, 0x166414u, 0x16641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16641Cu;
label_16641c:
    // 0x16641c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x16641cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_166420:
    // 0x166420: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x166420u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_166424:
    // 0x166424: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x166424u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_166428:
    // 0x166428: 0x5470000b  bnel        $v1, $s0, . + 4 + (0xB << 2)
label_16642c:
    if (ctx->pc == 0x16642Cu) {
        ctx->pc = 0x16642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166428u;
        // 0x16642c: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166430u;
        goto label_166430;
    }
    ctx->pc = 0x166428u;
    {
        const bool branch_taken_0x166428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x166428) {
            ctx->pc = 0x16642Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166428u;
            // 0x16642c: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166458u;
            goto label_166458;
        }
    }
    ctx->pc = 0x166430u;
label_166430:
    // 0x166430: 0x922203ac  lbu         $v0, 0x3AC($s1)
    ctx->pc = 0x166430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 940)));
label_166434:
    // 0x166434: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_166438:
    if (ctx->pc == 0x166438u) {
        ctx->pc = 0x166438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166434u;
        // 0x166438: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16643Cu;
        goto label_16643c;
    }
    ctx->pc = 0x166434u;
    {
        const bool branch_taken_0x166434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x166434) {
            ctx->pc = 0x166438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166434u;
            // 0x166438: 0x8e2300cc  lw          $v1, 0xCC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166458u;
            goto label_166458;
        }
    }
    ctx->pc = 0x16643Cu;
label_16643c:
    // 0x16643c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_166440:
    // 0x166440: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x166440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_166444:
    // 0x166444: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x166444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_166448:
    // 0x166448: 0x40f809  jalr        $v0
label_16644c:
    if (ctx->pc == 0x16644Cu) {
        ctx->pc = 0x16644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166448u;
        // 0x16644c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166450u;
        goto label_166450;
    }
    ctx->pc = 0x166448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166450u);
        ctx->pc = 0x16644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166448u;
        // 0x16644c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166448u, 0x166450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166450u;
label_166450:
    // 0x166450: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x166450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_166454:
    // 0x166454: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x166454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_166458:
    // 0x166458: 0x240200ed  addiu       $v0, $zero, 0xED
    ctx->pc = 0x166458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 237));
label_16645c:
    // 0x16645c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_166460:
    if (ctx->pc == 0x166460u) {
        ctx->pc = 0x166460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16645Cu;
        // 0x166460: 0x26a70001  addiu       $a3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166464u;
        goto label_166464;
    }
    ctx->pc = 0x16645Cu;
    {
        const bool branch_taken_0x16645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x166460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16645Cu;
        // 0x166460: 0x26a70001  addiu       $a3, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16645c) {
            ctx->pc = 0x166480u;
            goto label_166480;
        }
    }
    ctx->pc = 0x166464u;
label_166464:
    // 0x166464: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x166464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_166468:
    // 0x166468: 0x264401b0  addiu       $a0, $s2, 0x1B0
    ctx->pc = 0x166468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
label_16646c:
    // 0x16646c: 0x24c6cb30  addiu       $a2, $a2, -0x34D0
    ctx->pc = 0x16646cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953776));
label_166470:
    // 0x166470: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x166470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
label_166474:
    // 0x166474: 0xc05905e  jal         func_164178
label_166478:
    if (ctx->pc == 0x166478u) {
        ctx->pc = 0x166478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166474u;
        // 0x166478: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16647Cu;
        goto label_16647c;
    }
    ctx->pc = 0x166474u;
    SET_GPR_U32(ctx, 31, 0x16647Cu);
    ctx->pc = 0x166478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166474u;
    // 0x166478: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x166474u, 0x16647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16647Cu;
label_16647c:
    // 0x16647c: 0x26a70001  addiu       $a3, $s5, 0x1
    ctx->pc = 0x16647cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_166480:
    // 0x166480: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x166480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_166484:
    // 0x166484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x166484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166488:
    // 0x166488: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x166488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_16648c:
    // 0x16648c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16648cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_166490:
    // 0x166490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x166490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_166494:
    // 0x166494: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x166494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_166498:
    // 0x166498: 0x24a5bd30  addiu       $a1, $a1, -0x42D0
    ctx->pc = 0x166498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950192));
label_16649c:
    // 0x16649c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_1664a0:
    // 0x1664a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1664a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1664a4:
    // 0x1664a4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1664a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_1664a8:
    // 0x1664a8: 0xc059308  jal         func_164C20
label_1664ac:
    if (ctx->pc == 0x1664ACu) {
        ctx->pc = 0x1664ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664A8u;
        // 0x1664ac: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664B0u;
        goto label_1664b0;
    }
    ctx->pc = 0x1664A8u;
    SET_GPR_U32(ctx, 31, 0x1664B0u);
    ctx->pc = 0x1664ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1664A8u;
    // 0x1664ac: 0xafb10024  sw          $s1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164C20u, 0x1664A8u, 0x1664B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1664B0u;
label_1664b0:
    // 0x1664b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1664b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1664b4:
    // 0x1664b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1664b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1664b8:
    // 0x1664b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1664b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1664bc:
    // 0x1664bc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1664bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1664c0:
    // 0x1664c0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1664c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1664c4:
    // 0x1664c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1664c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1664c8:
    // 0x1664c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1664c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1664cc:
    // 0x1664cc: 0x3e00008  jr          $ra
label_1664d0:
    if (ctx->pc == 0x1664D0u) {
        ctx->pc = 0x1664D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664CCu;
        // 0x1664d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1664D4u;
        goto label_1664d4;
    }
    ctx->pc = 0x1664CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1664D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1664CCu;
        // 0x1664d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1664CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1664D4u;
label_1664d4:
    // 0x1664d4: 0x0  nop
    ctx->pc = 0x1664d4u;
    // NOP
    ctx->pc = 0x1664d8u;
}
