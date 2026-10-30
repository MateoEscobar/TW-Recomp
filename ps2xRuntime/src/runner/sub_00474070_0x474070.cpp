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

// Function: sub_00474070
// Address: 0x474070 - 0x474170
void sub_00474070_0x474070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00474070_0x474070");
#endif

    switch (ctx->pc) {
        case 0x474070u: goto label_474070;
        case 0x474074u: goto label_474074;
        case 0x474078u: goto label_474078;
        case 0x47407cu: goto label_47407c;
        case 0x474080u: goto label_474080;
        case 0x474084u: goto label_474084;
        case 0x474088u: goto label_474088;
        case 0x47408cu: goto label_47408c;
        case 0x474090u: goto label_474090;
        case 0x474094u: goto label_474094;
        case 0x474098u: goto label_474098;
        case 0x47409cu: goto label_47409c;
        case 0x4740a0u: goto label_4740a0;
        case 0x4740a4u: goto label_4740a4;
        case 0x4740a8u: goto label_4740a8;
        case 0x4740acu: goto label_4740ac;
        case 0x4740b0u: goto label_4740b0;
        case 0x4740b4u: goto label_4740b4;
        case 0x4740b8u: goto label_4740b8;
        case 0x4740bcu: goto label_4740bc;
        case 0x4740c0u: goto label_4740c0;
        case 0x4740c4u: goto label_4740c4;
        case 0x4740c8u: goto label_4740c8;
        case 0x4740ccu: goto label_4740cc;
        case 0x4740d0u: goto label_4740d0;
        case 0x4740d4u: goto label_4740d4;
        case 0x4740d8u: goto label_4740d8;
        case 0x4740dcu: goto label_4740dc;
        case 0x4740e0u: goto label_4740e0;
        case 0x4740e4u: goto label_4740e4;
        case 0x4740e8u: goto label_4740e8;
        case 0x4740ecu: goto label_4740ec;
        case 0x4740f0u: goto label_4740f0;
        case 0x4740f4u: goto label_4740f4;
        case 0x4740f8u: goto label_4740f8;
        case 0x4740fcu: goto label_4740fc;
        case 0x474100u: goto label_474100;
        case 0x474104u: goto label_474104;
        case 0x474108u: goto label_474108;
        case 0x47410cu: goto label_47410c;
        case 0x474110u: goto label_474110;
        case 0x474114u: goto label_474114;
        case 0x474118u: goto label_474118;
        case 0x47411cu: goto label_47411c;
        case 0x474120u: goto label_474120;
        case 0x474124u: goto label_474124;
        case 0x474128u: goto label_474128;
        case 0x47412cu: goto label_47412c;
        case 0x474130u: goto label_474130;
        case 0x474134u: goto label_474134;
        case 0x474138u: goto label_474138;
        case 0x47413cu: goto label_47413c;
        case 0x474140u: goto label_474140;
        case 0x474144u: goto label_474144;
        case 0x474148u: goto label_474148;
        case 0x47414cu: goto label_47414c;
        case 0x474150u: goto label_474150;
        case 0x474154u: goto label_474154;
        case 0x474158u: goto label_474158;
        case 0x47415cu: goto label_47415c;
        case 0x474160u: goto label_474160;
        case 0x474164u: goto label_474164;
        case 0x474168u: goto label_474168;
        case 0x47416cu: goto label_47416c;
        default: break;
    }

    ctx->pc = 0x474070u;

label_474070:
    // 0x474070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x474070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_474074:
    // 0x474074: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x474074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474078:
    // 0x474078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x474078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47407c:
    // 0x47407c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47407cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_474080:
    // 0x474080: 0xc1292da  jal         func_4A4B68
label_474084:
    if (ctx->pc == 0x474084u) {
        ctx->pc = 0x474084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474080u;
        // 0x474084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474088u;
        goto label_474088;
    }
    ctx->pc = 0x474080u;
    SET_GPR_U32(ctx, 31, 0x474088u);
    ctx->pc = 0x474084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474080u;
    // 0x474084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474080u, 0x474088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474088u;
label_474088:
    // 0x474088: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x474088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47408c:
    // 0x47408c: 0xc1292da  jal         func_4A4B68
label_474090:
    if (ctx->pc == 0x474090u) {
        ctx->pc = 0x474090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47408Cu;
        // 0x474090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474094u;
        goto label_474094;
    }
    ctx->pc = 0x47408Cu;
    SET_GPR_U32(ctx, 31, 0x474094u);
    ctx->pc = 0x474090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47408Cu;
    // 0x474090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x47408Cu, 0x474094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474094u;
label_474094:
    // 0x474094: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x474094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_474098:
    // 0x474098: 0xc1292da  jal         func_4A4B68
label_47409c:
    if (ctx->pc == 0x47409Cu) {
        ctx->pc = 0x47409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474098u;
        // 0x47409c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4740A0u;
        goto label_4740a0;
    }
    ctx->pc = 0x474098u;
    SET_GPR_U32(ctx, 31, 0x4740A0u);
    ctx->pc = 0x47409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474098u;
    // 0x47409c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474098u, 0x4740A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740A0u;
label_4740a0:
    // 0x4740a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4740a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4740a4:
    // 0x4740a4: 0xc1292da  jal         func_4A4B68
label_4740a8:
    if (ctx->pc == 0x4740A8u) {
        ctx->pc = 0x4740A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4740A4u;
        // 0x4740a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4740ACu;
        goto label_4740ac;
    }
    ctx->pc = 0x4740A4u;
    SET_GPR_U32(ctx, 31, 0x4740ACu);
    ctx->pc = 0x4740A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4740A4u;
    // 0x4740a8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x4740A4u, 0x4740ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740ACu;
label_4740ac:
    // 0x4740ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4740acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4740b0:
    // 0x4740b0: 0xc1292da  jal         func_4A4B68
label_4740b4:
    if (ctx->pc == 0x4740B4u) {
        ctx->pc = 0x4740B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4740B0u;
        // 0x4740b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4740B8u;
        goto label_4740b8;
    }
    ctx->pc = 0x4740B0u;
    SET_GPR_U32(ctx, 31, 0x4740B8u);
    ctx->pc = 0x4740B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4740B0u;
    // 0x4740b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x4740B0u, 0x4740B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740B8u;
label_4740b8:
    // 0x4740b8: 0xc12944c  jal         func_4A5130
label_4740bc:
    if (ctx->pc == 0x4740BCu) {
        ctx->pc = 0x4740BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4740B8u;
        // 0x4740bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4740C0u;
        goto label_4740c0;
    }
    ctx->pc = 0x4740B8u;
    SET_GPR_U32(ctx, 31, 0x4740C0u);
    ctx->pc = 0x4740BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4740B8u;
    // 0x4740bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5130u, 0x4740B8u, 0x4740C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740C0u;
label_4740c0:
    // 0x4740c0: 0x8f838a80  lw          $v1, -0x7580($gp)
    ctx->pc = 0x4740c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
label_4740c4:
    // 0x4740c4: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4740c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_4740c8:
    // 0x4740c8: 0x2610ad18  addiu       $s0, $s0, -0x52E8
    ctx->pc = 0x4740c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946072));
label_4740cc:
    // 0x4740cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4740ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4740d0:
    // 0x4740d0: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x4740d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4740d4:
    // 0x4740d4: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x4740d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_4740d8:
    // 0x4740d8: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x4740d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_4740dc:
    // 0x4740dc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x4740dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_4740e0:
    // 0x4740e0: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x4740e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_4740e4:
    // 0x4740e4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x4740e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_4740e8:
    // 0x4740e8: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x4740e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_4740ec:
    // 0x4740ec: 0xc1295f2  jal         func_4A57C8
label_4740f0:
    if (ctx->pc == 0x4740F0u) {
        ctx->pc = 0x4740F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4740ECu;
        // 0x4740f0: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4740F4u;
        goto label_4740f4;
    }
    ctx->pc = 0x4740ECu;
    SET_GPR_U32(ctx, 31, 0x4740F4u);
    ctx->pc = 0x4740F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4740ECu;
    // 0x4740f0: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x4740ECu, 0x4740F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4740F4u;
label_4740f4:
    // 0x4740f4: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4740f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
label_4740f8:
    // 0x4740f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4740f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4740fc:
    // 0x4740fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4740fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_474100:
    // 0x474100: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x474100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_474104:
    // 0x474104: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x474104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_474108:
    // 0x474108: 0x3e00008  jr          $ra
label_47410c:
    if (ctx->pc == 0x47410Cu) {
        ctx->pc = 0x47410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474108u;
        // 0x47410c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474110u;
        goto label_474110;
    }
    ctx->pc = 0x474108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474108u;
        // 0x47410c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474110u;
label_474110:
    // 0x474110: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x474110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_474114:
    // 0x474114: 0x0  nop
    ctx->pc = 0x474114u;
    // NOP
label_474118:
    // 0x474118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x474118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_47411c:
    // 0x47411c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47411cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_474120:
    // 0x474120: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x474120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_474124:
    // 0x474124: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x474124u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_474128:
    // 0x474128: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_47412c:
    if (ctx->pc == 0x47412Cu) {
        ctx->pc = 0x47412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474128u;
        // 0x47412c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474130u;
        goto label_474130;
    }
    ctx->pc = 0x474128u;
    {
        const bool branch_taken_0x474128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x474128) {
            ctx->pc = 0x47412Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x474128u;
            // 0x47412c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x474138u;
            goto label_474138;
        }
    }
    ctx->pc = 0x474130u;
label_474130:
    // 0x474130: 0x1000000b  b           . + 4 + (0xB << 2)
label_474134:
    if (ctx->pc == 0x474134u) {
        ctx->pc = 0x474134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474130u;
        // 0x474134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474138u;
        goto label_474138;
    }
    ctx->pc = 0x474130u;
    {
        const bool branch_taken_0x474130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x474134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474130u;
        // 0x474134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474130) {
            ctx->pc = 0x474160u;
            goto label_474160;
        }
    }
    ctx->pc = 0x474138u;
label_474138:
    // 0x474138: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x474138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_47413c:
    // 0x47413c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_474140:
    // 0x474140: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_474144:
    if (ctx->pc == 0x474144u) {
        ctx->pc = 0x474144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474140u;
        // 0x474144: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x474148u;
        goto label_474148;
    }
    ctx->pc = 0x474140u;
    {
        const bool branch_taken_0x474140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x474144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474140u;
        // 0x474144: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x474140) {
            ctx->pc = 0x47415Cu;
            goto label_47415c;
        }
    }
    ctx->pc = 0x474148u;
label_474148:
    // 0x474148: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x474148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47414c:
    // 0x47414c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474150:
    // 0x474150: 0x8c62ad38  lw          $v0, -0x52C8($v1)
    ctx->pc = 0x474150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946104)));
label_474154:
    // 0x474154: 0x40f809  jalr        $v0
label_474158:
    if (ctx->pc == 0x474158u) {
        ctx->pc = 0x474158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474154u;
        // 0x474158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47415Cu;
        goto label_47415c;
    }
    ctx->pc = 0x474154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47415Cu);
        ctx->pc = 0x474158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474154u;
        // 0x474158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474154u, 0x47415Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47415Cu;
label_47415c:
    // 0x47415c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_474160:
    // 0x474160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x474160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_474164:
    // 0x474164: 0x3e00008  jr          $ra
label_474168:
    if (ctx->pc == 0x474168u) {
        ctx->pc = 0x474168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474164u;
        // 0x474168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47416Cu;
        goto label_47416c;
    }
    ctx->pc = 0x474164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x474168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474164u;
        // 0x474168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47416Cu;
label_47416c:
    // 0x47416c: 0x0  nop
    ctx->pc = 0x47416cu;
    // NOP
    ctx->pc = 0x474170u;
}
