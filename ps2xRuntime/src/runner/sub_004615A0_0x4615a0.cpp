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

// Function: sub_004615A0
// Address: 0x4615a0 - 0x4615d0
void sub_004615A0_0x4615a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004615A0_0x4615a0");
#endif

    switch (ctx->pc) {
        case 0x4615b8u: goto label_4615b8;
        default: break;
    }

    ctx->pc = 0x4615a0u;

    // 0x4615a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4615a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4615a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4615a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4615a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4615a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4615ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4615acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4615b0: 0xc11851c  jal         func_461470
    ctx->pc = 0x4615B0u;
    SET_GPR_U32(ctx, 31, 0x4615B8u);
    ctx->pc = 0x4615B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4615B0u;
    // 0x4615b4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x4615B0u, 0x4615B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4615B8u;
label_4615b8:
    // 0x4615b8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x4615b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x4615bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4615bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4615c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4615c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4615c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4615c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4615c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4615C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4615CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4615C8u;
        // 0x4615cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4615C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4615D0u;
}
