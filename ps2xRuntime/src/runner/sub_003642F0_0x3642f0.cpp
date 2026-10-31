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

// Function: sub_003642F0
// Address: 0x3642f0 - 0x364328
void sub_003642F0_0x3642f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003642F0_0x3642f0");
#endif

    switch (ctx->pc) {
        case 0x364304u: goto label_364304;
        case 0x36430cu: goto label_36430c;
        case 0x364314u: goto label_364314;
        default: break;
    }

    ctx->pc = 0x3642f0u;

    // 0x3642f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3642f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3642f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3642f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3642f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3642f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3642fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3642FCu;
    SET_GPR_U32(ctx, 31, 0x364304u);
    ctx->pc = 0x364300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3642FCu;
    // 0x364300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3642FCu, 0x364304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364304u;
label_364304:
    // 0x364304: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364304u;
    SET_GPR_U32(ctx, 31, 0x36430Cu);
    ctx->pc = 0x364308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364304u;
    // 0x364308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364304u, 0x36430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36430Cu;
label_36430c:
    // 0x36430c: 0xc0ba718  jal         func_2E9C60
    ctx->pc = 0x36430Cu;
    SET_GPR_U32(ctx, 31, 0x364314u);
    ctx->pc = 0x364310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36430Cu;
    // 0x364310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9C60u, 0x36430Cu, 0x364314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364314u;
label_364314:
    // 0x364314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36431c: 0x3e00008  jr          $ra
    ctx->pc = 0x36431Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36431Cu;
        // 0x364320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36431Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364324u;
    // 0x364324: 0x0  nop
    ctx->pc = 0x364324u;
    // NOP
    ctx->pc = 0x364328u;
}
