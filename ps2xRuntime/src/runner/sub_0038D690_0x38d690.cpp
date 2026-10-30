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

// Function: sub_0038D690
// Address: 0x38d690 - 0x38d6d8
void sub_0038D690_0x38d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D690_0x38d690");
#endif

    switch (ctx->pc) {
        case 0x38d6a4u: goto label_38d6a4;
        case 0x38d6b4u: goto label_38d6b4;
        case 0x38d6bcu: goto label_38d6bc;
        case 0x38d6ccu: goto label_38d6cc;
        default: break;
    }

    ctx->pc = 0x38d690u;

    // 0x38d690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38d698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38d69c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38D69Cu;
    SET_GPR_U32(ctx, 31, 0x38D6A4u);
    ctx->pc = 0x38D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D69Cu;
    // 0x38d6a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38D69Cu, 0x38D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6A4u;
label_38d6a4:
    // 0x38d6a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38D6A4u;
    {
        const bool branch_taken_0x38d6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6A4u;
        // 0x38d6a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6a4) {
            ctx->pc = 0x38D6D0u;
            goto label_38d6d0;
        }
    }
    ctx->pc = 0x38D6ACu;
    // 0x38d6ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38D6ACu;
    SET_GPR_U32(ctx, 31, 0x38D6B4u);
    ctx->pc = 0x38D6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6ACu;
    // 0x38d6b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38D6ACu, 0x38D6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6B4u;
label_38d6b4:
    // 0x38d6b4: 0xc0e2612  jal         func_389848
    ctx->pc = 0x38D6B4u;
    SET_GPR_U32(ctx, 31, 0x38D6BCu);
    ctx->pc = 0x38D6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6B4u;
    // 0x38d6b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x38D6B4u, 0x38D6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6BCu;
label_38d6bc:
    // 0x38d6bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D6BCu;
    {
        const bool branch_taken_0x38d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6BCu;
        // 0x38d6c0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d6bc) {
            ctx->pc = 0x38D6D0u;
            goto label_38d6d0;
        }
    }
    ctx->pc = 0x38D6C4u;
    // 0x38d6c4: 0xc0e321a  jal         func_38C868
    ctx->pc = 0x38D6C4u;
    SET_GPR_U32(ctx, 31, 0x38D6CCu);
    ctx->pc = 0x38D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6C4u;
    // 0x38d6c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C868u, 0x38D6C4u, 0x38D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D6CCu;
label_38d6cc:
    // 0x38d6cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38d6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38d6d0:
    // 0x38d6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x38D6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D6D0u;
        // 0x38d6d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D6D8u;
}
