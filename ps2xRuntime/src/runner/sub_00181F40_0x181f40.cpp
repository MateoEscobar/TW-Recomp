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

// Function: sub_00181F40
// Address: 0x181f40 - 0x181fb0
void sub_00181F40_0x181f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181F40_0x181f40");
#endif

    switch (ctx->pc) {
        case 0x181f6cu: goto label_181f6c;
        default: break;
    }

    ctx->pc = 0x181f40u;

    // 0x181f40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x181f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x181f44: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x181f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x181f48: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x181f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x181f4c: 0x24900060  addiu       $s0, $a0, 0x60
    ctx->pc = 0x181f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x181f50: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x181f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x181f54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x181f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x181f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x181f5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x181f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181f64: 0xc137cca  jal         func_4DF328
    ctx->pc = 0x181F64u;
    SET_GPR_U32(ctx, 31, 0x181F6Cu);
    ctx->pc = 0x181F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181F64u;
    // 0x181f68: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DF328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF328u, 0x181F64u, 0x181F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181F6Cu;
label_181f6c:
    // 0x181f6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x181f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x181f70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x181f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181f74: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181F74u;
    {
        const bool branch_taken_0x181f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F74u;
        // 0x181f78: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f74) {
            ctx->pc = 0x181F94u;
            goto label_181f94;
        }
    }
    ctx->pc = 0x181F7Cu;
    // 0x181f7c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x181f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x181f80: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x181f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181f84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x181F84u;
    {
        const bool branch_taken_0x181f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F84u;
        // 0x181f88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f84) {
            ctx->pc = 0x181F98u;
            goto label_181f98;
        }
    }
    ctx->pc = 0x181F8Cu;
    // 0x181f8c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181F8Cu;
    {
        const bool branch_taken_0x181f8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F8Cu;
        // 0x181f90: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f8c) {
            ctx->pc = 0x181F9Cu;
            goto label_181f9c;
        }
    }
    ctx->pc = 0x181F94u;
label_181f94:
    // 0x181f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181f98:
    // 0x181f98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x181f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181f9c:
    // 0x181f9c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x181f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x181fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x181FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181FA4u;
        // 0x181fa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181FACu;
    // 0x181fac: 0x0  nop
    ctx->pc = 0x181facu;
    // NOP
    ctx->pc = 0x181fb0u;
}
