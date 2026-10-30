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

// Function: sub_0029D3F8
// Address: 0x29d3f8 - 0x29d438
void sub_0029D3F8_0x29d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D3F8_0x29d3f8");
#endif

    switch (ctx->pc) {
        case 0x29d418u: goto label_29d418;
        case 0x29d424u: goto label_29d424;
        default: break;
    }

    ctx->pc = 0x29d3f8u;

    // 0x29d3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d3fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x29d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x29d400: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29d404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29d404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29d408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d40c: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x29d40cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x29d410: 0xc0e4546  jal         func_391518
    ctx->pc = 0x29D410u;
    SET_GPR_U32(ctx, 31, 0x29D418u);
    ctx->pc = 0x29D414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D410u;
    // 0x29d414: 0x94a50112  lhu         $a1, 0x112($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391518u, 0x29D410u, 0x29D418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D418u;
label_29d418:
    // 0x29d418: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29d41c: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x29D41Cu;
    SET_GPR_U32(ctx, 31, 0x29D424u);
    ctx->pc = 0x29D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D41Cu;
    // 0x29d420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x29D41Cu, 0x29D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D424u;
label_29d424:
    // 0x29d424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29d424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d428: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29d428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29d42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29d42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d430: 0x3e00008  jr          $ra
    ctx->pc = 0x29D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D430u;
        // 0x29d434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D438u;
}
