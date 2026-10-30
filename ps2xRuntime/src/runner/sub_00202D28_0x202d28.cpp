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

// Function: sub_00202D28
// Address: 0x202d28 - 0x202da0
void sub_00202D28_0x202d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202D28_0x202d28");
#endif

    switch (ctx->pc) {
        case 0x202d58u: goto label_202d58;
        case 0x202d64u: goto label_202d64;
        default: break;
    }

    ctx->pc = 0x202d28u;

    // 0x202d28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202d2c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x202d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x202d30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x202d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x202d34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202d3c: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x202d3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x202d40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x202d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x202d44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202d4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x202d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d54: 0x0  nop
    ctx->pc = 0x202d54u;
    // NOP
label_202d58:
    // 0x202d58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d5c: 0xc080b38  jal         func_202CE0
    ctx->pc = 0x202D5Cu;
    SET_GPR_U32(ctx, 31, 0x202D64u);
    ctx->pc = 0x202D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D5Cu;
    // 0x202d60: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202CE0u, 0x202D5Cu, 0x202D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D64u;
label_202d64:
    // 0x202d64: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202D64u;
    {
        const bool branch_taken_0x202d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x202D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D64u;
        // 0x202d68: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d64) {
            ctx->pc = 0x202D74u;
            goto label_202d74;
        }
    }
    ctx->pc = 0x202D6Cu;
    // 0x202d6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202D6Cu;
    {
        const bool branch_taken_0x202d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D6Cu;
        // 0x202d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d6c) {
            ctx->pc = 0x202D84u;
            goto label_202d84;
        }
    }
    ctx->pc = 0x202D74u;
label_202d74:
    // 0x202d74: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x202d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x202d78: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x202D78u;
    {
        const bool branch_taken_0x202d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D78u;
        // 0x202d7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d78) {
            ctx->pc = 0x202D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d58;
        }
    }
    ctx->pc = 0x202D80u;
    // 0x202d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202d84:
    // 0x202d84: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x202d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202d88: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x202d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202d8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202d8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202d90: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x202d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202d98: 0x3e00008  jr          $ra
    ctx->pc = 0x202D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D98u;
        // 0x202d9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202DA0u;
}
