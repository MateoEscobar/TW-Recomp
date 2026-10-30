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

// Function: sub_002FAEE0
// Address: 0x2faee0 - 0x2faf20
void sub_002FAEE0_0x2faee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAEE0_0x2faee0");
#endif

    switch (ctx->pc) {
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf08u: goto label_2faf08;
        default: break;
    }

    ctx->pc = 0x2faee0u;

    // 0x2faee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2faee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2faee4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2faee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2faee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2faee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2faeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2faeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faef0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2faef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2faef4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FAEF4u;
    SET_GPR_U32(ctx, 31, 0x2FAEFCu);
    ctx->pc = 0x2FAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEF4u;
    // 0x2faef8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FAEF4u, 0x2FAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEFCu;
label_2faefc:
    // 0x2faefc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2faefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2faf00: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FAF00u;
    SET_GPR_U32(ctx, 31, 0x2FAF08u);
    ctx->pc = 0x2FAF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAF00u;
    // 0x2faf04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FAF00u, 0x2FAF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF08u;
label_2faf08:
    // 0x2faf08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2faf08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2faf0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2faf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2faf10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faf14: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF14u;
        // 0x2faf18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAF1Cu;
    // 0x2faf1c: 0x0  nop
    ctx->pc = 0x2faf1cu;
    // NOP
    ctx->pc = 0x2faf20u;
}
