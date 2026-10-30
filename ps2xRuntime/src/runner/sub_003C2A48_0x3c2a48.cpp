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

// Function: sub_003C2A48
// Address: 0x3c2a48 - 0x3c2ab8
void sub_003C2A48_0x3c2a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2A48_0x3c2a48");
#endif

    switch (ctx->pc) {
        case 0x3c2a48u: goto label_3c2a48;
        case 0x3c2a4cu: goto label_3c2a4c;
        case 0x3c2a50u: goto label_3c2a50;
        case 0x3c2a54u: goto label_3c2a54;
        case 0x3c2a58u: goto label_3c2a58;
        case 0x3c2a5cu: goto label_3c2a5c;
        case 0x3c2a60u: goto label_3c2a60;
        case 0x3c2a64u: goto label_3c2a64;
        case 0x3c2a68u: goto label_3c2a68;
        case 0x3c2a6cu: goto label_3c2a6c;
        case 0x3c2a70u: goto label_3c2a70;
        case 0x3c2a74u: goto label_3c2a74;
        case 0x3c2a78u: goto label_3c2a78;
        case 0x3c2a7cu: goto label_3c2a7c;
        case 0x3c2a80u: goto label_3c2a80;
        case 0x3c2a84u: goto label_3c2a84;
        case 0x3c2a88u: goto label_3c2a88;
        case 0x3c2a8cu: goto label_3c2a8c;
        case 0x3c2a90u: goto label_3c2a90;
        case 0x3c2a94u: goto label_3c2a94;
        case 0x3c2a98u: goto label_3c2a98;
        case 0x3c2a9cu: goto label_3c2a9c;
        case 0x3c2aa0u: goto label_3c2aa0;
        case 0x3c2aa4u: goto label_3c2aa4;
        case 0x3c2aa8u: goto label_3c2aa8;
        case 0x3c2aacu: goto label_3c2aac;
        case 0x3c2ab0u: goto label_3c2ab0;
        case 0x3c2ab4u: goto label_3c2ab4;
        default: break;
    }

    ctx->pc = 0x3c2a48u;

label_3c2a48:
    // 0x3c2a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c2a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3c2a4c:
    // 0x3c2a4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3c2a50:
    // 0x3c2a50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c2a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c2a54:
    // 0x3c2a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c2a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a58:
    // 0x3c2a58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c2a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3c2a5c:
    // 0x3c2a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c2a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c2a60:
    // 0x3c2a60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c2a60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a64:
    // 0x3c2a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3c2a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c2a68:
    // 0x3c2a68: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3c2a68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c2a6c:
    // 0x3c2a6c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c2a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c2a70:
    // 0x3c2a70: 0x40f809  jalr        $v0
label_3c2a74:
    if (ctx->pc == 0x3C2A74u) {
        ctx->pc = 0x3C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A70u;
        // 0x3c2a74: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A78u;
        goto label_3c2a78;
    }
    ctx->pc = 0x3C2A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C2A78u);
        ctx->pc = 0x3C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A70u;
        // 0x3c2a74: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2A70u, 0x3C2A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C2A78u;
label_3c2a78:
    // 0x3c2a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3c2a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c2a7c:
    // 0x3c2a7c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x3c2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3c2a80:
    // 0x3c2a80: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_3c2a84:
    if (ctx->pc == 0x3C2A84u) {
        ctx->pc = 0x3C2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A80u;
        // 0x3c2a84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A88u;
        goto label_3c2a88;
    }
    ctx->pc = 0x3C2A80u;
    {
        const bool branch_taken_0x3c2a80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A80u;
        // 0x3c2a84: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2a80) {
            ctx->pc = 0x3C2AA0u;
            goto label_3c2aa0;
        }
    }
    ctx->pc = 0x3C2A88u;
label_3c2a88:
    // 0x3c2a88: 0xc0ea146  jal         func_3A8518
label_3c2a8c:
    if (ctx->pc == 0x3C2A8Cu) {
        ctx->pc = 0x3C2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2A88u;
        // 0x3c2a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2A90u;
        goto label_3c2a90;
    }
    ctx->pc = 0x3C2A88u;
    SET_GPR_U32(ctx, 31, 0x3C2A90u);
    ctx->pc = 0x3C2A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C2A88u;
    // 0x3c2a8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C2A88u, 0x3C2A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C2A90u;
label_3c2a90:
    // 0x3c2a90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c2a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c2a94:
    // 0x3c2a94: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3c2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3c2a98:
    // 0x3c2a98: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3c2a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_3c2a9c:
    // 0x3c2a9c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c2a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c2aa0:
    // 0x3c2aa0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c2aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c2aa4:
    // 0x3c2aa4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c2aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c2aa8:
    // 0x3c2aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c2aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c2aac:
    // 0x3c2aac: 0x3e00008  jr          $ra
label_3c2ab0:
    if (ctx->pc == 0x3C2AB0u) {
        ctx->pc = 0x3C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AACu;
        // 0x3c2ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C2AB4u;
        goto label_3c2ab4;
    }
    ctx->pc = 0x3C2AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2AACu;
        // 0x3c2ab0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2AB4u;
label_3c2ab4:
    // 0x3c2ab4: 0x0  nop
    ctx->pc = 0x3c2ab4u;
    // NOP
    ctx->pc = 0x3c2ab8u;
}
