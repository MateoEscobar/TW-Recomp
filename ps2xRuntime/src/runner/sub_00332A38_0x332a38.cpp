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

// Function: sub_00332A38
// Address: 0x332a38 - 0x332ac0
void sub_00332A38_0x332a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332A38_0x332a38");
#endif

    switch (ctx->pc) {
        case 0x332a38u: goto label_332a38;
        case 0x332a3cu: goto label_332a3c;
        case 0x332a40u: goto label_332a40;
        case 0x332a44u: goto label_332a44;
        case 0x332a48u: goto label_332a48;
        case 0x332a4cu: goto label_332a4c;
        case 0x332a50u: goto label_332a50;
        case 0x332a54u: goto label_332a54;
        case 0x332a58u: goto label_332a58;
        case 0x332a5cu: goto label_332a5c;
        case 0x332a60u: goto label_332a60;
        case 0x332a64u: goto label_332a64;
        case 0x332a68u: goto label_332a68;
        case 0x332a6cu: goto label_332a6c;
        case 0x332a70u: goto label_332a70;
        case 0x332a74u: goto label_332a74;
        case 0x332a78u: goto label_332a78;
        case 0x332a7cu: goto label_332a7c;
        case 0x332a80u: goto label_332a80;
        case 0x332a84u: goto label_332a84;
        case 0x332a88u: goto label_332a88;
        case 0x332a8cu: goto label_332a8c;
        case 0x332a90u: goto label_332a90;
        case 0x332a94u: goto label_332a94;
        case 0x332a98u: goto label_332a98;
        case 0x332a9cu: goto label_332a9c;
        case 0x332aa0u: goto label_332aa0;
        case 0x332aa4u: goto label_332aa4;
        case 0x332aa8u: goto label_332aa8;
        case 0x332aacu: goto label_332aac;
        case 0x332ab0u: goto label_332ab0;
        case 0x332ab4u: goto label_332ab4;
        case 0x332ab8u: goto label_332ab8;
        case 0x332abcu: goto label_332abc;
        default: break;
    }

    ctx->pc = 0x332a38u;

label_332a38:
    // 0x332a38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x332a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_332a3c:
    // 0x332a3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x332a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_332a40:
    // 0x332a40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x332a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_332a44:
    // 0x332a44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x332a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_332a48:
    // 0x332a48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x332a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_332a4c:
    // 0x332a4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x332a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_332a50:
    // 0x332a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_332a54:
    // 0x332a54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x332a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_332a58:
    // 0x332a58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x332a58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_332a5c:
    // 0x332a5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x332a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_332a60:
    // 0x332a60: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_332a64:
    if (ctx->pc == 0x332A64u) {
        ctx->pc = 0x332A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A60u;
        // 0x332a64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332A68u;
        goto label_332a68;
    }
    ctx->pc = 0x332A60u;
    {
        const bool branch_taken_0x332a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A60u;
        // 0x332a64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a60) {
            ctx->pc = 0x332A7Cu;
            goto label_332a7c;
        }
    }
    ctx->pc = 0x332A68u;
label_332a68:
    // 0x332a68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x332a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_332a6c:
    // 0x332a6c: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x332a6cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_332a70:
    // 0x332a70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x332a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_332a74:
    // 0x332a74: 0x10000005  b           . + 4 + (0x5 << 2)
label_332a78:
    if (ctx->pc == 0x332A78u) {
        ctx->pc = 0x332A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A74u;
        // 0x332a78: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332A7Cu;
        goto label_332a7c;
    }
    ctx->pc = 0x332A74u;
    {
        const bool branch_taken_0x332a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A74u;
        // 0x332a78: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a74) {
            ctx->pc = 0x332A8Cu;
            goto label_332a8c;
        }
    }
    ctx->pc = 0x332A7Cu;
label_332a7c:
    // 0x332a7c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x332a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_332a80:
    // 0x332a80: 0x40f809  jalr        $v0
label_332a84:
    if (ctx->pc == 0x332A84u) {
        ctx->pc = 0x332A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A80u;
        // 0x332a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332A88u;
        goto label_332a88;
    }
    ctx->pc = 0x332A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x332A88u);
        ctx->pc = 0x332A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A80u;
        // 0x332a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332A80u, 0x332A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x332A88u;
label_332a88:
    // 0x332a88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x332a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_332a8c:
    // 0x332a8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x332a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_332a90:
    // 0x332a90: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
label_332a94:
    if (ctx->pc == 0x332A94u) {
        ctx->pc = 0x332A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A90u;
        // 0x332a94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332A98u;
        goto label_332a98;
    }
    ctx->pc = 0x332A90u;
    {
        const bool branch_taken_0x332a90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x332A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A90u;
        // 0x332a94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332a90) {
            ctx->pc = 0x332AA8u;
            goto label_332aa8;
        }
    }
    ctx->pc = 0x332A98u;
label_332a98:
    // 0x332a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_332a9c:
    // 0x332a9c: 0xc0cca7c  jal         func_3329F0
label_332aa0:
    if (ctx->pc == 0x332AA0u) {
        ctx->pc = 0x332AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332A9Cu;
        // 0x332aa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332AA4u;
        goto label_332aa4;
    }
    ctx->pc = 0x332A9Cu;
    SET_GPR_U32(ctx, 31, 0x332AA4u);
    ctx->pc = 0x332AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332A9Cu;
    // 0x332aa0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3329F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3329F0u, 0x332A9Cu, 0x332AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332AA4u;
label_332aa4:
    // 0x332aa4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x332aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_332aa8:
    // 0x332aa8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x332aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_332aac:
    // 0x332aac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x332aacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_332ab0:
    // 0x332ab0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x332ab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_332ab4:
    // 0x332ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_332ab8:
    // 0x332ab8: 0x3e00008  jr          $ra
label_332abc:
    if (ctx->pc == 0x332ABCu) {
        ctx->pc = 0x332ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AB8u;
        // 0x332abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x332AC0u;
        goto label_fallthrough_0x332ab8;
    }
    ctx->pc = 0x332AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332AB8u;
        // 0x332abc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x332ab8:
    ctx->pc = 0x332AC0u;
}
