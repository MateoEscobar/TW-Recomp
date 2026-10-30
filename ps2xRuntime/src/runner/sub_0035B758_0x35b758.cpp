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

// Function: sub_0035B758
// Address: 0x35b758 - 0x35b7a8
void sub_0035B758_0x35b758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B758_0x35b758");
#endif

    switch (ctx->pc) {
        case 0x35b774u: goto label_35b774;
        case 0x35b77cu: goto label_35b77c;
        case 0x35b784u: goto label_35b784;
        case 0x35b790u: goto label_35b790;
        default: break;
    }

    ctx->pc = 0x35b758u;

    // 0x35b758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b75c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b764: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b76c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B76Cu;
    SET_GPR_U32(ctx, 31, 0x35B774u);
    ctx->pc = 0x35B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B76Cu;
    // 0x35b770: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B76Cu, 0x35B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B774u;
label_35b774:
    // 0x35b774: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B774u;
    SET_GPR_U32(ctx, 31, 0x35B77Cu);
    ctx->pc = 0x35B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B774u;
    // 0x35b778: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B774u, 0x35B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B77Cu;
label_35b77c:
    // 0x35b77c: 0xc08d5e6  jal         func_235798
    ctx->pc = 0x35B77Cu;
    SET_GPR_U32(ctx, 31, 0x35B784u);
    ctx->pc = 0x35B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B77Cu;
    // 0x35b780: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235798u, 0x35B77Cu, 0x35B784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B784u;
label_35b784:
    // 0x35b784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35b784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b788: 0xc102562  jal         func_409588
    ctx->pc = 0x35B788u;
    SET_GPR_U32(ctx, 31, 0x35B790u);
    ctx->pc = 0x35B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B788u;
    // 0x35b78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35B788u, 0x35B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B790u;
label_35b790:
    // 0x35b790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b79c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B79Cu;
        // 0x35b7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B7A4u;
    // 0x35b7a4: 0x0  nop
    ctx->pc = 0x35b7a4u;
    // NOP
    ctx->pc = 0x35b7a8u;
}
