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

// Function: sub_00384A50
// Address: 0x384a50 - 0x384aa0
void sub_00384A50_0x384a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384A50_0x384a50");
#endif

    switch (ctx->pc) {
        case 0x384a68u: goto label_384a68;
        case 0x384a78u: goto label_384a78;
        default: break;
    }

    ctx->pc = 0x384a50u;

    // 0x384a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x384a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x384a54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x384a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x384a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a60: 0xc1050ce  jal         func_414338
    ctx->pc = 0x384A60u;
    SET_GPR_U32(ctx, 31, 0x384A68u);
    ctx->pc = 0x384A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384A60u;
    // 0x384a64: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414338u, 0x384A60u, 0x384A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A68u;
label_384a68:
    // 0x384a68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x384a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x384a6c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x384a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x384a70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x384a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x384a74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x384a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384a78:
    // 0x384a78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x384a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x384a7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x384a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x384a80: 0x2c82001a  sltiu       $v0, $a0, 0x1A
    ctx->pc = 0x384a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x384a84: 0x0  nop
    ctx->pc = 0x384a84u;
    // NOP
    // 0x384a88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x384A88u;
    {
        const bool branch_taken_0x384a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A88u;
        // 0x384a8c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a88) {
            ctx->pc = 0x384A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384a78;
        }
    }
    ctx->pc = 0x384A90u;
    // 0x384a90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x384a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384a98: 0x3e00008  jr          $ra
    ctx->pc = 0x384A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A98u;
        // 0x384a9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384AA0u;
}
