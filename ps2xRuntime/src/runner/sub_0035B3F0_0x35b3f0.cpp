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

// Function: sub_0035B3F0
// Address: 0x35b3f0 - 0x35b448
void sub_0035B3F0_0x35b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B3F0_0x35b3f0");
#endif

    switch (ctx->pc) {
        case 0x35b40cu: goto label_35b40c;
        case 0x35b414u: goto label_35b414;
        case 0x35b41cu: goto label_35b41c;
        case 0x35b424u: goto label_35b424;
        case 0x35b430u: goto label_35b430;
        default: break;
    }

    ctx->pc = 0x35b3f0u;

    // 0x35b3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b3f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b3fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b404: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B404u;
    SET_GPR_U32(ctx, 31, 0x35B40Cu);
    ctx->pc = 0x35B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B404u;
    // 0x35b408: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B404u, 0x35B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B40Cu;
label_35b40c:
    // 0x35b40c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B40Cu;
    SET_GPR_U32(ctx, 31, 0x35B414u);
    ctx->pc = 0x35B410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B40Cu;
    // 0x35b410: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B40Cu, 0x35B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B414u;
label_35b414:
    // 0x35b414: 0xc08d51e  jal         func_235478
    ctx->pc = 0x35B414u;
    SET_GPR_U32(ctx, 31, 0x35B41Cu);
    ctx->pc = 0x35B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B414u;
    // 0x35b418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235478u, 0x35B414u, 0x35B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B41Cu;
label_35b41c:
    // 0x35b41c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x35B41Cu;
    SET_GPR_U32(ctx, 31, 0x35B424u);
    ctx->pc = 0x35B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B41Cu;
    // 0x35b420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x35B41Cu, 0x35B424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B424u;
label_35b424:
    // 0x35b424: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b428: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35B428u;
    SET_GPR_U32(ctx, 31, 0x35B430u);
    ctx->pc = 0x35B42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B428u;
    // 0x35b42c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35B428u, 0x35B430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B430u;
label_35b430:
    // 0x35b430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b43c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B43Cu;
        // 0x35b440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B444u;
    // 0x35b444: 0x0  nop
    ctx->pc = 0x35b444u;
    // NOP
    ctx->pc = 0x35b448u;
}
