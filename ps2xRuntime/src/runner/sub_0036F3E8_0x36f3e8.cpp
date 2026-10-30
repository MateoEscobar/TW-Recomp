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

// Function: sub_0036F3E8
// Address: 0x36f3e8 - 0x36f430
void sub_0036F3E8_0x36f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F3E8_0x36f3e8");
#endif

    switch (ctx->pc) {
        case 0x36f404u: goto label_36f404;
        case 0x36f40cu: goto label_36f40c;
        case 0x36f418u: goto label_36f418;
        default: break;
    }

    ctx->pc = 0x36f3e8u;

    // 0x36f3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36f3ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f3ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36f3f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f3fc: 0xc102488  jal         func_409220
    ctx->pc = 0x36F3FCu;
    SET_GPR_U32(ctx, 31, 0x36F404u);
    ctx->pc = 0x36F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3FCu;
    // 0x36f400: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36F3FCu, 0x36F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F404u;
label_36f404:
    // 0x36f404: 0xc06d26a  jal         func_1B49A8
    ctx->pc = 0x36F404u;
    SET_GPR_U32(ctx, 31, 0x36F40Cu);
    ctx->pc = 0x36F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F404u;
    // 0x36f408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B49A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B49A8u, 0x36F404u, 0x36F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F40Cu;
label_36f40c:
    // 0x36f40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36f40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f410: 0xc102562  jal         func_409588
    ctx->pc = 0x36F410u;
    SET_GPR_U32(ctx, 31, 0x36F418u);
    ctx->pc = 0x36F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F410u;
    // 0x36f414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36F410u, 0x36F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F418u;
label_36f418:
    // 0x36f418: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36f418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f424: 0x3e00008  jr          $ra
    ctx->pc = 0x36F424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F424u;
        // 0x36f428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F42Cu;
    // 0x36f42c: 0x0  nop
    ctx->pc = 0x36f42cu;
    // NOP
    ctx->pc = 0x36f430u;
}
