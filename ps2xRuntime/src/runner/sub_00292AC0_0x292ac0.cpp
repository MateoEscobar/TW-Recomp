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

// Function: sub_00292AC0
// Address: 0x292ac0 - 0x292b10
void sub_00292AC0_0x292ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292AC0_0x292ac0");
#endif

    switch (ctx->pc) {
        case 0x292adcu: goto label_292adc;
        case 0x292ae4u: goto label_292ae4;
        case 0x292af4u: goto label_292af4;
        case 0x292b00u: goto label_292b00;
        default: break;
    }

    ctx->pc = 0x292ac0u;

    // 0x292ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x292ac4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292ac8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x292ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292acc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ad0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292ad4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292AD4u;
    SET_GPR_U32(ctx, 31, 0x292ADCu);
    ctx->pc = 0x292AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AD4u;
    // 0x292ad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292AD4u, 0x292ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292ADCu;
label_292adc:
    // 0x292adc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292ADCu;
    SET_GPR_U32(ctx, 31, 0x292AE4u);
    ctx->pc = 0x292AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292ADCu;
    // 0x292ae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292ADCu, 0x292AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AE4u;
label_292ae4:
    // 0x292ae4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x292AE4u;
    {
        const bool branch_taken_0x292ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292AE4u;
        // 0x292ae8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ae4) {
            ctx->pc = 0x292B00u;
            goto label_292b00;
        }
    }
    ctx->pc = 0x292AECu;
    // 0x292aec: 0xc08750a  jal         func_21D428
    ctx->pc = 0x292AECu;
    SET_GPR_U32(ctx, 31, 0x292AF4u);
    ctx->pc = 0x292AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AECu;
    // 0x292af0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x292AECu, 0x292AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292AF4u;
label_292af4:
    // 0x292af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292af8: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x292AF8u;
    SET_GPR_U32(ctx, 31, 0x292B00u);
    ctx->pc = 0x292AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292AF8u;
    // 0x292afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x292AF8u, 0x292B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292B00u;
label_292b00:
    // 0x292b00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292b08: 0x3e00008  jr          $ra
    ctx->pc = 0x292B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292B08u;
        // 0x292b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292B10u;
}
