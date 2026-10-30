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

// Function: sub_00202C48
// Address: 0x202c48 - 0x202cc8
void sub_00202C48_0x202c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202C48_0x202c48");
#endif

    switch (ctx->pc) {
        case 0x202c78u: goto label_202c78;
        case 0x202c80u: goto label_202c80;
        default: break;
    }

    ctx->pc = 0x202c48u;

    // 0x202c48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202c4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x202c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x202c50: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x202c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x202c54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202c54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x202c5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x202c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x202c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202c6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x202c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x202c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c74: 0x0  nop
    ctx->pc = 0x202c74u;
    // NOP
label_202c78:
    // 0x202c78: 0xc080ad4  jal         func_202B50
    ctx->pc = 0x202C78u;
    SET_GPR_U32(ctx, 31, 0x202C80u);
    ctx->pc = 0x202C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C78u;
    // 0x202c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B50u, 0x202C78u, 0x202C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C80u;
label_202c80:
    // 0x202c80: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x202C80u;
    {
        const bool branch_taken_0x202c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c80) {
            ctx->pc = 0x202C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202C80u;
            // 0x202c84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202C9Cu;
            goto label_202c9c;
        }
    }
    ctx->pc = 0x202C88u;
    // 0x202c88: 0x16320003  bne         $s1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C88u;
        // 0x202c8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202C98u;
            goto label_202c98;
        }
    }
    ctx->pc = 0x202C90u;
    // 0x202c90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202C90u;
    {
        const bool branch_taken_0x202c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C90u;
        // 0x202c94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c90) {
            ctx->pc = 0x202CACu;
            goto label_202cac;
        }
    }
    ctx->pc = 0x202C98u;
label_202c98:
    // 0x202c98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202c9c:
    // 0x202c9c: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x202c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202ca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x202CA0u;
    {
        const bool branch_taken_0x202ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CA0u;
        // 0x202ca4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ca0) {
            ctx->pc = 0x202C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202c78;
        }
    }
    ctx->pc = 0x202CA8u;
    // 0x202ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x202ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202cac:
    // 0x202cac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x202cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202cb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x202cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202cb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202cb8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x202cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x202CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CC0u;
        // 0x202cc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202CC8u;
}
