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

// Function: sub_003E9E60
// Address: 0x3e9e60 - 0x3e9ea0
void sub_003E9E60_0x3e9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9E60_0x3e9e60");
#endif

    switch (ctx->pc) {
        case 0x3e9e78u: goto label_3e9e78;
        default: break;
    }

    ctx->pc = 0x3e9e60u;

    // 0x3e9e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e9e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e9e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e9e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e9e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e9e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e9e70: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E9E70u;
    SET_GPR_U32(ctx, 31, 0x3E9E78u);
    ctx->pc = 0x3E9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9E70u;
    // 0x3e9e74: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E9E70u, 0x3E9E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9E78u;
label_3e9e78:
    // 0x3e9e78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e9e7c: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3e9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
    // 0x3e9e80: 0x3463ff01  ori         $v1, $v1, 0xFF01
    ctx->pc = 0x3e9e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65281);
    // 0x3e9e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e9e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e9e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e9e8c: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x3e9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x3e9e90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e9e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9E94u;
        // 0x3e9e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9E9Cu;
    // 0x3e9e9c: 0x0  nop
    ctx->pc = 0x3e9e9cu;
    // NOP
    ctx->pc = 0x3e9ea0u;
}
