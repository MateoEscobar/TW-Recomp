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

// Function: sub_00182A50
// Address: 0x182a50 - 0x182ac8
void sub_00182A50_0x182a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182A50_0x182a50");
#endif

    switch (ctx->pc) {
        case 0x182a78u: goto label_182a78;
        case 0x182a84u: goto label_182a84;
        case 0x182a98u: goto label_182a98;
        case 0x182aa8u: goto label_182aa8;
        default: break;
    }

    ctx->pc = 0x182a50u;

    // 0x182a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182a54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a60: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x182a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182a64: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x182A64u;
    {
        const bool branch_taken_0x182a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A64u;
        // 0x182a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a64) {
            ctx->pc = 0x182AB4u;
            goto label_182ab4;
        }
    }
    ctx->pc = 0x182A6Cu;
    // 0x182a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a70: 0xc065cac  jal         func_1972B0
    ctx->pc = 0x182A70u;
    SET_GPR_U32(ctx, 31, 0x182A78u);
    ctx->pc = 0x182A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A70u;
    // 0x182a74: 0xa2020041  sb          $v0, 0x41($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x182A70u, 0x182A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A78u;
label_182a78:
    // 0x182a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a7c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x182A7Cu;
    SET_GPR_U32(ctx, 31, 0x182A84u);
    ctx->pc = 0x182A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A7Cu;
    // 0x182a80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182BD8u, 0x182A7Cu, 0x182A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A84u;
label_182a84:
    // 0x182a84: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x182a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182a88: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x182A88u;
    {
        const bool branch_taken_0x182a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A88u;
        // 0x182a8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a88) {
            ctx->pc = 0x182AB8u;
            goto label_182ab8;
        }
    }
    ctx->pc = 0x182A90u;
    // 0x182a90: 0xc065b58  jal         func_196D60
    ctx->pc = 0x182A90u;
    SET_GPR_U32(ctx, 31, 0x182A98u);
    ctx->pc = 0x182A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182A90u;
    // 0x182a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D60u, 0x182A90u, 0x182A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A98u;
label_182a98:
    // 0x182a98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182A98u;
    {
        const bool branch_taken_0x182a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182A98u;
        // 0x182a9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182a98) {
            ctx->pc = 0x182AB8u;
            goto label_182ab8;
        }
    }
    ctx->pc = 0x182AA0u;
    // 0x182aa0: 0xc065b64  jal         func_196D90
    ctx->pc = 0x182AA0u;
    SET_GPR_U32(ctx, 31, 0x182AA8u);
    ctx->pc = 0x182AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182AA0u;
    // 0x182aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D90u, 0x182AA0u, 0x182AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AA8u;
label_182aa8:
    // 0x182aa8: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x182aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x182aac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x182AACu;
    {
        const bool branch_taken_0x182aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AACu;
        // 0x182ab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182aac) {
            ctx->pc = 0x182AB8u;
            goto label_182ab8;
        }
    }
    ctx->pc = 0x182AB4u;
label_182ab4:
    // 0x182ab4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182ab8:
    // 0x182ab8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x182ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x182AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182AC8u;
}
