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

// Function: sub_00413848
// Address: 0x413848 - 0x413890
void sub_00413848_0x413848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413848_0x413848");
#endif

    switch (ctx->pc) {
        case 0x413860u: goto label_413860;
        case 0x413870u: goto label_413870;
        default: break;
    }

    ctx->pc = 0x413848u;

    // 0x413848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x413848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41384c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41384cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x413850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x413850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413854: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x413854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x413858: 0xc0cdfb6  jal         func_337ED8
    ctx->pc = 0x413858u;
    SET_GPR_U32(ctx, 31, 0x413860u);
    ctx->pc = 0x41385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413858u;
    // 0x41385c: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337ED8u, 0x413858u, 0x413860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413860u;
label_413860:
    // 0x413860: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x413860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x413864: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x413864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413868: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x413868u;
    SET_GPR_U32(ctx, 31, 0x413870u);
    ctx->pc = 0x41386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413868u;
    // 0x41386c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x413868u, 0x413870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413870u;
label_413870:
    // 0x413870: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x413870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x413874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x413874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x413878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x413878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41387c: 0x3e00008  jr          $ra
    ctx->pc = 0x41387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41387Cu;
        // 0x413880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41387Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413884u;
    // 0x413884: 0x0  nop
    ctx->pc = 0x413884u;
    // NOP
    // 0x413888: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x413888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x41388c: 0x0  nop
    ctx->pc = 0x41388cu;
    // NOP
    ctx->pc = 0x413890u;
}
