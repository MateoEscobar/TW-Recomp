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

// Function: sub_0041F3E8
// Address: 0x41f3e8 - 0x41f428
void sub_0041F3E8_0x41f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F3E8_0x41f3e8");
#endif

    switch (ctx->pc) {
        case 0x41f40cu: goto label_41f40c;
        default: break;
    }

    ctx->pc = 0x41f3e8u;

    // 0x41f3e8: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x41f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f3ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41f3ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x41f3f0: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x41f3f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x41f3f4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x41f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x41f3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41f3fc: 0x2465b460  addiu       $a1, $v1, -0x4BA0
    ctx->pc = 0x41f3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947936));
    // 0x41f400: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x41f400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x41f404: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x41F404u;
    SET_GPR_U32(ctx, 31, 0x41F40Cu);
    ctx->pc = 0x41F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41F404u;
    // 0x41f408: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x41F404u, 0x41F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41F40Cu;
label_41f40c:
    // 0x41f40c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x41f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x41f410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41f410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41f414: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x41f414u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x41f418: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x41f418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41f41c: 0x3e00008  jr          $ra
    ctx->pc = 0x41F41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F41Cu;
        // 0x41f420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F424u;
    // 0x41f424: 0x0  nop
    ctx->pc = 0x41f424u;
    // NOP
    ctx->pc = 0x41f428u;
}
