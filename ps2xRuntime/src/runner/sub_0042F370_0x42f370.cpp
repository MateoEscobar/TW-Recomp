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

// Function: sub_0042F370
// Address: 0x42f370 - 0x42f3c0
void sub_0042F370_0x42f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042F370_0x42f370");
#endif

    switch (ctx->pc) {
        case 0x42f394u: goto label_42f394;
        case 0x42f3acu: goto label_42f3ac;
        default: break;
    }

    ctx->pc = 0x42f370u;

    // 0x42f370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42f374: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42f378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42f37c: 0x8c625a00  lw          $v0, 0x5A00($v1)
    ctx->pc = 0x42f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715A00u));
    // 0x42f380: 0x24705a00  addiu       $s0, $v1, 0x5A00
    ctx->pc = 0x42f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23040));
    // 0x42f384: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42F384u;
    {
        const bool branch_taken_0x42f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F384u;
        // 0x42f388: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42f384) {
            ctx->pc = 0x42F3ACu;
            goto label_42f3ac;
        }
    }
    ctx->pc = 0x42F38Cu;
    // 0x42f38c: 0xc10bcfe  jal         func_42F3F8
    ctx->pc = 0x42F38Cu;
    SET_GPR_U32(ctx, 31, 0x42F394u);
    ctx->pc = 0x42F3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42F3F8u, 0x42F38Cu, 0x42F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F394u;
label_42f394:
    // 0x42f394: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42f394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42f398: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x42f398u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x42f39c: 0x24a5c320  addiu       $a1, $a1, -0x3CE0
    ctx->pc = 0x42f39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951712));
    // 0x42f3a0: 0x24c659f0  addiu       $a2, $a2, 0x59F0
    ctx->pc = 0x42f3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23024));
    // 0x42f3a4: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42F3A4u;
    SET_GPR_U32(ctx, 31, 0x42F3ACu);
    ctx->pc = 0x42F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42F3A4u;
    // 0x42f3a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42F3A4u, 0x42F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42F3ACu;
label_42f3ac:
    // 0x42f3ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42f3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42f3b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42f3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42f3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42f3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42f3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x42F3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42F3B8u;
        // 0x42f3bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42F3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42F3C0u;
}
