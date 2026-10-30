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

// Function: sub_0035D3D8
// Address: 0x35d3d8 - 0x35d438
void sub_0035D3D8_0x35d3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D3D8_0x35d3d8");
#endif

    switch (ctx->pc) {
        case 0x35d3f8u: goto label_35d3f8;
        case 0x35d400u: goto label_35d400;
        case 0x35d414u: goto label_35d414;
        case 0x35d420u: goto label_35d420;
        default: break;
    }

    ctx->pc = 0x35d3d8u;

    // 0x35d3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35d3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35d3dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d3e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35d3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35d3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d3f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D3F0u;
    SET_GPR_U32(ctx, 31, 0x35D3F8u);
    ctx->pc = 0x35D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3F0u;
    // 0x35d3f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D3F0u, 0x35D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D3F8u;
label_35d3f8:
    // 0x35d3f8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D3F8u;
    SET_GPR_U32(ctx, 31, 0x35D400u);
    ctx->pc = 0x35D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D3F8u;
    // 0x35d3fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D3F8u, 0x35D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D400u;
label_35d400:
    // 0x35d400: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d40c: 0xc102488  jal         func_409220
    ctx->pc = 0x35D40Cu;
    SET_GPR_U32(ctx, 31, 0x35D414u);
    ctx->pc = 0x35D410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D40Cu;
    // 0x35d410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D40Cu, 0x35D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D414u;
label_35d414:
    // 0x35d414: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d418: 0xc08e79e  jal         func_239E78
    ctx->pc = 0x35D418u;
    SET_GPR_U32(ctx, 31, 0x35D420u);
    ctx->pc = 0x35D41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D418u;
    // 0x35d41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E78u, 0x35D418u, 0x35D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D420u;
label_35d420:
    // 0x35d420: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35d420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d42c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d42cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d430: 0x3e00008  jr          $ra
    ctx->pc = 0x35D430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D430u;
        // 0x35d434: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D438u;
}
