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

// Function: sub_0038E098
// Address: 0x38e098 - 0x38e0f0
void sub_0038E098_0x38e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E098_0x38e098");
#endif

    switch (ctx->pc) {
        case 0x38e0b4u: goto label_38e0b4;
        case 0x38e0c8u: goto label_38e0c8;
        case 0x38e0dcu: goto label_38e0dc;
        default: break;
    }

    ctx->pc = 0x38e098u;

    // 0x38e098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e09c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38e0a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38e0a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38e0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38e0ac: 0xc0e4088  jal         func_390220
    ctx->pc = 0x38E0ACu;
    SET_GPR_U32(ctx, 31, 0x38E0B4u);
    ctx->pc = 0x38E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0ACu;
    // 0x38e0b0: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390220u, 0x38E0ACu, 0x38E0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E0B4u;
label_38e0b4:
    // 0x38e0b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e0b8: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38E0B8u;
    {
        const bool branch_taken_0x38e0b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e0b8) {
            ctx->pc = 0x38E0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E0B8u;
            // 0x38e0bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E0E0u;
            goto label_38e0e0;
        }
    }
    ctx->pc = 0x38E0C0u;
    // 0x38e0c0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x38E0C0u;
    SET_GPR_U32(ctx, 31, 0x38E0C8u);
    ctx->pc = 0x38E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0C0u;
    // 0x38e0c4: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38E0C0u, 0x38E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E0C8u;
label_38e0c8:
    // 0x38e0c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E0C8u;
    {
        const bool branch_taken_0x38e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0C8u;
        // 0x38e0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0c8) {
            ctx->pc = 0x38E0DCu;
            goto label_38e0dc;
        }
    }
    ctx->pc = 0x38E0D0u;
    // 0x38e0d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38e0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e0d4: 0xc0e354e  jal         func_38D538
    ctx->pc = 0x38E0D4u;
    SET_GPR_U32(ctx, 31, 0x38E0DCu);
    ctx->pc = 0x38E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E0D4u;
    // 0x38e0d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D538u, 0x38E0D4u, 0x38E0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E0DCu;
label_38e0dc:
    // 0x38e0dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e0e0:
    // 0x38e0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0E4u;
        // 0x38e0e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E0ECu;
    // 0x38e0ec: 0x0  nop
    ctx->pc = 0x38e0ecu;
    // NOP
    ctx->pc = 0x38e0f0u;
}
