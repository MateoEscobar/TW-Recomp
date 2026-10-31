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

// Function: sub_00374780
// Address: 0x374780 - 0x3747b8
void sub_00374780_0x374780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374780_0x374780");
#endif

    switch (ctx->pc) {
        case 0x374794u: goto label_374794;
        case 0x37479cu: goto label_37479c;
        case 0x3747a8u: goto label_3747a8;
        default: break;
    }

    ctx->pc = 0x374780u;

    // 0x374780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37478c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37478Cu;
    SET_GPR_U32(ctx, 31, 0x374794u);
    ctx->pc = 0x374790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37478Cu;
    // 0x374790: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37478Cu, 0x374794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374794u;
label_374794:
    // 0x374794: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374794u;
    SET_GPR_U32(ctx, 31, 0x37479Cu);
    ctx->pc = 0x374798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374794u;
    // 0x374798: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374794u, 0x37479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37479Cu;
label_37479c:
    // 0x37479c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37479cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3747a0: 0xc1070ac  jal         func_41C2B0
    ctx->pc = 0x3747A0u;
    SET_GPR_U32(ctx, 31, 0x3747A8u);
    ctx->pc = 0x3747A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747A0u;
    // 0x3747a4: 0x22403  sra         $a0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2B0u, 0x3747A0u, 0x3747A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747A8u;
label_3747a8:
    // 0x3747a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3747a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3747ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3747acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3747B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3747B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747B0u;
        // 0x3747b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3747B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3747B8u;
}
