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

// Function: sub_00231C58
// Address: 0x231c58 - 0x231cd0
void sub_00231C58_0x231c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231C58_0x231c58");
#endif

    switch (ctx->pc) {
        case 0x231c6cu: goto label_231c6c;
        case 0x231c7cu: goto label_231c7c;
        case 0x231cb0u: goto label_231cb0;
        case 0x231cc0u: goto label_231cc0;
        default: break;
    }

    ctx->pc = 0x231c58u;

    // 0x231c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x231c5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x231c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x231c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x231c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x231c64: 0xc088f0c  jal         func_223C30
    ctx->pc = 0x231C64u;
    SET_GPR_U32(ctx, 31, 0x231C6Cu);
    ctx->pc = 0x231C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C64u;
    // 0x231c68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C30u, 0x231C64u, 0x231C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C6Cu;
label_231c6c:
    // 0x231c6c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x231C6Cu;
    {
        const bool branch_taken_0x231c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c6c) {
            ctx->pc = 0x231C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231C6Cu;
            // 0x231c70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231C74u;
    // 0x231c74: 0xc088e88  jal         func_223A20
    ctx->pc = 0x231C74u;
    SET_GPR_U32(ctx, 31, 0x231C7Cu);
    ctx->pc = 0x231C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231C74u;
    // 0x231c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x231C74u, 0x231C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231C7Cu;
label_231c7c:
    // 0x231c7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x231C7Cu;
    {
        const bool branch_taken_0x231c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231c7c) {
            ctx->pc = 0x231CB8u;
            goto label_231cb8;
        }
    }
    ctx->pc = 0x231C84u;
    // 0x231c84: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x231c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x231c88: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x231c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x231c8c: 0x28620253  slti        $v0, $v1, 0x253
    ctx->pc = 0x231c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)595) ? 1 : 0);
    // 0x231c90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x231c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x231c94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x231C94u;
    {
        const bool branch_taken_0x231c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231C94u;
        // 0x231c98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c94) {
            ctx->pc = 0x231CA0u;
            goto label_231ca0;
        }
    }
    ctx->pc = 0x231C9Cu;
    // 0x231c9c: 0x2864025b  slti        $a0, $v1, 0x25B
    ctx->pc = 0x231c9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)603) ? 1 : 0);
label_231ca0:
    // 0x231ca0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x231CA0u;
    {
        const bool branch_taken_0x231ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x231ca0) {
            ctx->pc = 0x231CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231CA0u;
            // 0x231ca4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231CA8u;
    // 0x231ca8: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x231CA8u;
    SET_GPR_U32(ctx, 31, 0x231CB0u);
    ctx->pc = 0x231CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CA8u;
    // 0x231cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x231CA8u, 0x231CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CB0u;
label_231cb0:
    // 0x231cb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231CB0u;
    {
        const bool branch_taken_0x231cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CB0u;
        // 0x231cb4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231cb0) {
            ctx->pc = 0x231CC4u;
            goto label_231cc4;
        }
    }
    ctx->pc = 0x231CB8u;
label_231cb8:
    // 0x231cb8: 0xc08a588  jal         func_229620
    ctx->pc = 0x231CB8u;
    SET_GPR_U32(ctx, 31, 0x231CC0u);
    ctx->pc = 0x231CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231CB8u;
    // 0x231cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229620u, 0x231CB8u, 0x231CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231CC0u;
label_231cc0:
    // 0x231cc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x231cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_231cc4:
    // 0x231cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x231CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231CC8u;
        // 0x231ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231CD0u;
}
