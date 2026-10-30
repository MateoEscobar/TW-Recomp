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

// Function: sub_0011BAD8
// Address: 0x11bad8 - 0x11bb98
void sub_0011BAD8_0x11bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BAD8_0x11bad8");
#endif

    switch (ctx->pc) {
        case 0x11bad8u: goto label_11bad8;
        case 0x11badcu: goto label_11badc;
        case 0x11bae0u: goto label_11bae0;
        case 0x11bae4u: goto label_11bae4;
        case 0x11bae8u: goto label_11bae8;
        case 0x11baecu: goto label_11baec;
        case 0x11baf0u: goto label_11baf0;
        case 0x11baf4u: goto label_11baf4;
        case 0x11baf8u: goto label_11baf8;
        case 0x11bafcu: goto label_11bafc;
        case 0x11bb00u: goto label_11bb00;
        case 0x11bb04u: goto label_11bb04;
        case 0x11bb08u: goto label_11bb08;
        case 0x11bb0cu: goto label_11bb0c;
        case 0x11bb10u: goto label_11bb10;
        case 0x11bb14u: goto label_11bb14;
        case 0x11bb18u: goto label_11bb18;
        case 0x11bb1cu: goto label_11bb1c;
        case 0x11bb20u: goto label_11bb20;
        case 0x11bb24u: goto label_11bb24;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb2cu: goto label_11bb2c;
        case 0x11bb30u: goto label_11bb30;
        case 0x11bb34u: goto label_11bb34;
        case 0x11bb38u: goto label_11bb38;
        case 0x11bb3cu: goto label_11bb3c;
        case 0x11bb40u: goto label_11bb40;
        case 0x11bb44u: goto label_11bb44;
        case 0x11bb48u: goto label_11bb48;
        case 0x11bb4cu: goto label_11bb4c;
        case 0x11bb50u: goto label_11bb50;
        case 0x11bb54u: goto label_11bb54;
        case 0x11bb58u: goto label_11bb58;
        case 0x11bb5cu: goto label_11bb5c;
        case 0x11bb60u: goto label_11bb60;
        case 0x11bb64u: goto label_11bb64;
        case 0x11bb68u: goto label_11bb68;
        case 0x11bb6cu: goto label_11bb6c;
        case 0x11bb70u: goto label_11bb70;
        case 0x11bb74u: goto label_11bb74;
        case 0x11bb78u: goto label_11bb78;
        case 0x11bb7cu: goto label_11bb7c;
        case 0x11bb80u: goto label_11bb80;
        case 0x11bb84u: goto label_11bb84;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bb8cu: goto label_11bb8c;
        case 0x11bb90u: goto label_11bb90;
        case 0x11bb94u: goto label_11bb94;
        default: break;
    }

    ctx->pc = 0x11bad8u;

label_11bad8:
    // 0x11bad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11badc:
    // 0x11badc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11badcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11bae0:
    // 0x11bae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_11bae4:
    // 0x11bae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11bae8:
    // 0x11bae8: 0xc0e4060  jal         func_390180
label_11baec:
    if (ctx->pc == 0x11BAECu) {
        ctx->pc = 0x11BAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAE8u;
        // 0x11baec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BAF0u;
        goto label_11baf0;
    }
    ctx->pc = 0x11BAE8u;
    SET_GPR_U32(ctx, 31, 0x11BAF0u);
    ctx->pc = 0x11BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAE8u;
    // 0x11baec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BAE8u, 0x11BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAF0u;
label_11baf0:
    // 0x11baf0: 0xc047a5e  jal         func_11E978
label_11baf4:
    if (ctx->pc == 0x11BAF4u) {
        ctx->pc = 0x11BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAF0u;
        // 0x11baf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BAF8u;
        goto label_11baf8;
    }
    ctx->pc = 0x11BAF0u;
    SET_GPR_U32(ctx, 31, 0x11BAF8u);
    ctx->pc = 0x11BAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BAF0u;
    // 0x11baf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11BAF0u, 0x11BAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BAF8u;
label_11baf8:
    // 0x11baf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11baf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bafc:
    // 0x11bafc: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_11bb00:
    if (ctx->pc == 0x11BB00u) {
        ctx->pc = 0x11BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BAFCu;
        // 0x11bb00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB04u;
        goto label_11bb04;
    }
    ctx->pc = 0x11BAFCu;
    {
        const bool branch_taken_0x11bafc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bafc) {
            ctx->pc = 0x11BB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BAFCu;
            // 0x11bb00: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB04u;
label_11bb04:
    // 0x11bb04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bb08:
    // 0x11bb08: 0x84440138  lh          $a0, 0x138($v0)
    ctx->pc = 0x11bb08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 312)));
label_11bb0c:
    // 0x11bb0c: 0x8c45013c  lw          $a1, 0x13C($v0)
    ctx->pc = 0x11bb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_11bb10:
    // 0x11bb10: 0xa0f809  jalr        $a1
label_11bb14:
    if (ctx->pc == 0x11BB14u) {
        ctx->pc = 0x11BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB10u;
        // 0x11bb14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB18u;
        goto label_11bb18;
    }
    ctx->pc = 0x11BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11BB18u);
        ctx->pc = 0x11BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB10u;
        // 0x11bb14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB10u, 0x11BB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB18u;
label_11bb18:
    // 0x11bb18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bb1c:
    // 0x11bb1c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11bb20:
    // 0x11bb20: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11bb24:
    // 0x11bb24: 0x40f809  jalr        $v0
label_11bb28:
    if (ctx->pc == 0x11BB28u) {
        ctx->pc = 0x11BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB24u;
        // 0x11bb28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB2Cu;
        goto label_11bb2c;
    }
    ctx->pc = 0x11BB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BB2Cu);
        ctx->pc = 0x11BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB24u;
        // 0x11bb28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB24u, 0x11BB2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB2Cu;
label_11bb2c:
    // 0x11bb2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_11bb30:
    // 0x11bb30: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
label_11bb34:
    if (ctx->pc == 0x11BB34u) {
        ctx->pc = 0x11BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB30u;
        // 0x11bb34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB38u;
        goto label_11bb38;
    }
    ctx->pc = 0x11BB30u;
    {
        const bool branch_taken_0x11bb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bb30) {
            ctx->pc = 0x11BB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB30u;
            // 0x11bb34: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB38u;
label_11bb38:
    // 0x11bb38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bb3c:
    // 0x11bb3c: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x11bb3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_11bb40:
    // 0x11bb40: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_11bb44:
    // 0x11bb44: 0x40f809  jalr        $v0
label_11bb48:
    if (ctx->pc == 0x11BB48u) {
        ctx->pc = 0x11BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB44u;
        // 0x11bb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB4Cu;
        goto label_11bb4c;
    }
    ctx->pc = 0x11BB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BB4Cu);
        ctx->pc = 0x11BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB44u;
        // 0x11bb48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB44u, 0x11BB4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB4Cu;
label_11bb4c:
    // 0x11bb4c: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_11bb50:
    // 0x11bb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bb54:
    // 0x11bb54: 0xc047e78  jal         func_11F9E0
label_11bb58:
    if (ctx->pc == 0x11BB58u) {
        ctx->pc = 0x11BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB54u;
        // 0x11bb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB5Cu;
        goto label_11bb5c;
    }
    ctx->pc = 0x11BB54u;
    SET_GPR_U32(ctx, 31, 0x11BB5Cu);
    ctx->pc = 0x11BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB54u;
    // 0x11bb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11BB54u, 0x11BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB5Cu;
label_11bb5c:
    // 0x11bb5c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_11bb60:
    if (ctx->pc == 0x11BB60u) {
        ctx->pc = 0x11BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB5Cu;
        // 0x11bb60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB64u;
        goto label_11bb64;
    }
    ctx->pc = 0x11BB5Cu;
    {
        const bool branch_taken_0x11bb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bb5c) {
            ctx->pc = 0x11BB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BB5Cu;
            // 0x11bb60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BB88u;
            goto label_11bb88;
        }
    }
    ctx->pc = 0x11BB64u;
label_11bb64:
    // 0x11bb64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bb68:
    // 0x11bb68: 0xc047e78  jal         func_11F9E0
label_11bb6c:
    if (ctx->pc == 0x11BB6Cu) {
        ctx->pc = 0x11BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB68u;
        // 0x11bb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB70u;
        goto label_11bb70;
    }
    ctx->pc = 0x11BB68u;
    SET_GPR_U32(ctx, 31, 0x11BB70u);
    ctx->pc = 0x11BB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB68u;
    // 0x11bb6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11BB68u, 0x11BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BB70u;
label_11bb70:
    // 0x11bb70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11bb74:
    // 0x11bb74: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_11bb78:
    // 0x11bb78: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x11bb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_11bb7c:
    // 0x11bb7c: 0xa0f809  jalr        $a1
label_11bb80:
    if (ctx->pc == 0x11BB80u) {
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB7Cu;
        // 0x11bb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB84u;
        goto label_11bb84;
    }
    ctx->pc = 0x11BB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x11BB84u);
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB7Cu;
        // 0x11bb80: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB7Cu, 0x11BB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BB84u;
label_11bb84:
    // 0x11bb84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11bb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11bb88:
    // 0x11bb88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11bb8c:
    // 0x11bb8c: 0x3e00008  jr          $ra
label_11bb90:
    if (ctx->pc == 0x11BB90u) {
        ctx->pc = 0x11BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB8Cu;
        // 0x11bb90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BB94u;
        goto label_11bb94;
    }
    ctx->pc = 0x11BB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB8Cu;
        // 0x11bb90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BB8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BB94u;
label_11bb94:
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
    ctx->pc = 0x11bb98u;
}
