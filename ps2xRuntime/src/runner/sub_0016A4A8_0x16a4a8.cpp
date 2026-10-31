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

// Function: sub_0016A4A8
// Address: 0x16a4a8 - 0x16a4e8
void sub_0016A4A8_0x16a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A4A8_0x16a4a8");
#endif

    switch (ctx->pc) {
        case 0x16a4c8u: goto label_16a4c8;
        case 0x16a4d0u: goto label_16a4d0;
        default: break;
    }

    ctx->pc = 0x16a4a8u;

    // 0x16a4a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a4ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16a4b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a4b4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16a4b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16a4b8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A4B8u;
    {
        const bool branch_taken_0x16a4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B8u;
        // 0x16a4bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b8) {
            ctx->pc = 0x16A4D8u;
            goto label_16a4d8;
        }
    }
    ctx->pc = 0x16A4C0u;
    // 0x16a4c0: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16A4C0u;
    SET_GPR_U32(ctx, 31, 0x16A4C8u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16A4C0u, 0x16A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4C8u;
label_16a4c8:
    // 0x16a4c8: 0xc059888  jal         func_166220
    ctx->pc = 0x16A4C8u;
    SET_GPR_U32(ctx, 31, 0x16A4D0u);
    ctx->pc = 0x16A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4C8u;
    // 0x16a4cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166220u, 0x16A4C8u, 0x16A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4D0u;
label_16a4d0:
    // 0x16a4d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16A4D0u;
    {
        const bool branch_taken_0x16a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4D0u;
        // 0x16a4d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4d0) {
            ctx->pc = 0x16A4E0u;
            goto label_16a4e0;
        }
    }
    ctx->pc = 0x16A4D8u;
label_16a4d8:
    // 0x16a4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a4e0:
    // 0x16a4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4E0u;
        // 0x16a4e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A4E8u;
}
