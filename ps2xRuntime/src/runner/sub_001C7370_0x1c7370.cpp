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

// Function: sub_001C7370
// Address: 0x1c7370 - 0x1c73e8
void sub_001C7370_0x1c7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7370_0x1c7370");
#endif

    switch (ctx->pc) {
        case 0x1c7398u: goto label_1c7398;
        case 0x1c73a8u: goto label_1c73a8;
        case 0x1c73c4u: goto label_1c73c4;
        default: break;
    }

    ctx->pc = 0x1c7370u;

    // 0x1c7370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7374: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c7374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c7378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c7378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c737c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c737cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7384: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c7384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c7388: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C7388u;
    {
        const bool branch_taken_0x1c7388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7388u;
        // 0x1c738c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7388) {
            ctx->pc = 0x1C73D0u;
            goto label_1c73d0;
        }
    }
    ctx->pc = 0x1C7390u;
    // 0x1c7390: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1C7390u;
    SET_GPR_U32(ctx, 31, 0x1C7398u);
    ctx->pc = 0x1C7394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7390u;
    // 0x1c7394: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1C7390u, 0x1C7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7398u;
label_1c7398:
    // 0x1c7398: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C7398u;
    {
        const bool branch_taken_0x1c7398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7398u;
        // 0x1c739c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7398) {
            ctx->pc = 0x1C73D4u;
            goto label_1c73d4;
        }
    }
    ctx->pc = 0x1C73A0u;
    // 0x1c73a0: 0xc0706b8  jal         func_1C1AE0
    ctx->pc = 0x1C73A0u;
    SET_GPR_U32(ctx, 31, 0x1C73A8u);
    ctx->pc = 0x1C73A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C73A0u;
    // 0x1c73a4: 0x26040420  addiu       $a0, $s0, 0x420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1AE0u, 0x1C73A0u, 0x1C73A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73A8u;
label_1c73a8:
    // 0x1c73a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C73A8u;
    {
        const bool branch_taken_0x1c73a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73A8u;
        // 0x1c73ac: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73a8) {
            ctx->pc = 0x1C73D0u;
            goto label_1c73d0;
        }
    }
    ctx->pc = 0x1C73B0u;
    // 0x1c73b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1c73b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c73b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C73B4u;
    {
        const bool branch_taken_0x1c73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c73b4) {
            ctx->pc = 0x1C73B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C73B4u;
            // 0x1c73b8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C73D0u;
            goto label_1c73d0;
        }
    }
    ctx->pc = 0x1C73BCu;
    // 0x1c73bc: 0xc075106  jal         func_1D4418
    ctx->pc = 0x1C73BCu;
    SET_GPR_U32(ctx, 31, 0x1C73C4u);
    ctx->pc = 0x1D4418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4418u, 0x1C73BCu, 0x1C73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C73C4u;
label_1c73c4:
    // 0x1c73c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C73C4u;
    {
        const bool branch_taken_0x1c73c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C73C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73C4u;
        // 0x1c73c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c73c4) {
            ctx->pc = 0x1C73D4u;
            goto label_1c73d4;
        }
    }
    ctx->pc = 0x1C73CCu;
    // 0x1c73cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c73ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c73d0:
    // 0x1c73d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c73d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c73d4:
    // 0x1c73d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c73d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c73d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c73d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c73dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c73dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c73e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C73E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C73E0u;
        // 0x1c73e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C73E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C73E8u;
}
