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

// Function: sub_001CD888
// Address: 0x1cd888 - 0x1cd8c8
void sub_001CD888_0x1cd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD888_0x1cd888");
#endif

    switch (ctx->pc) {
        case 0x1cd8a0u: goto label_1cd8a0;
        default: break;
    }

    ctx->pc = 0x1cd888u;

    // 0x1cd888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cd88c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cd890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cd890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd898: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x1CD898u;
    SET_GPR_U32(ctx, 31, 0x1CD8A0u);
    ctx->pc = 0x1CD89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD898u;
    // 0x1cd89c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x1CD898u, 0x1CD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD8A0u;
label_1cd8a0:
    // 0x1cd8a0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1cd8a4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cd8a8: 0x24632fd0  addiu       $v1, $v1, 0x2FD0
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12240));
    // 0x1cd8ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd8b0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1cd8b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1cd8b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cd8b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cd8b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cd8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8BCu;
        // 0x1cd8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD8C4u;
    // 0x1cd8c4: 0x0  nop
    ctx->pc = 0x1cd8c4u;
    // NOP
    ctx->pc = 0x1cd8c8u;
}
