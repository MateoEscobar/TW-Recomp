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

// Function: sub_00155378
// Address: 0x155378 - 0x1553c0
void sub_00155378_0x155378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155378_0x155378");
#endif

    switch (ctx->pc) {
        case 0x155388u: goto label_155388;
        case 0x15539cu: goto label_15539c;
        case 0x1553a4u: goto label_1553a4;
        case 0x1553b0u: goto label_1553b0;
        default: break;
    }

    ctx->pc = 0x155378u;

    // 0x155378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15537c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155380: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x155380u;
    SET_GPR_U32(ctx, 31, 0x155388u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x155380u, 0x155388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155388u;
label_155388:
    // 0x155388: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x155388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x15538c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15538Cu;
    {
        const bool branch_taken_0x15538c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15538Cu;
        // 0x155390: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15538c) {
            ctx->pc = 0x1553B4u;
            goto label_1553b4;
        }
    }
    ctx->pc = 0x155394u;
    // 0x155394: 0xc0568a4  jal         func_15A290
    ctx->pc = 0x155394u;
    SET_GPR_U32(ctx, 31, 0x15539Cu);
    ctx->pc = 0x155398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155394u;
    // 0x155398: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A290u, 0x155394u, 0x15539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15539Cu;
label_15539c:
    // 0x15539c: 0xc05689c  jal         func_15A270
    ctx->pc = 0x15539Cu;
    SET_GPR_U32(ctx, 31, 0x1553A4u);
    ctx->pc = 0x1553A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15539Cu;
    // 0x1553a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A270u, 0x15539Cu, 0x1553A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553A4u;
label_1553a4:
    // 0x1553a4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1553a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1553a8: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x1553A8u;
    SET_GPR_U32(ctx, 31, 0x1553B0u);
    ctx->pc = 0x1553ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1553A8u;
    // 0x1553ac: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x1553A8u, 0x1553B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1553B0u;
label_1553b0:
    // 0x1553b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1553b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1553b4:
    // 0x1553b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1553B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1553B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1553B4u;
        // 0x1553b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1553B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1553BCu;
    // 0x1553bc: 0x0  nop
    ctx->pc = 0x1553bcu;
    // NOP
    ctx->pc = 0x1553c0u;
}
