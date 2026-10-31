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

// Function: sub_0016AE10
// Address: 0x16ae10 - 0x16ae60
void sub_0016AE10_0x16ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AE10_0x16ae10");
#endif

    switch (ctx->pc) {
        case 0x16ae34u: goto label_16ae34;
        case 0x16ae44u: goto label_16ae44;
        case 0x16ae50u: goto label_16ae50;
        default: break;
    }

    ctx->pc = 0x16ae10u;

    // 0x16ae10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ae14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ae18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ae1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ae20: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AE20u;
    {
        const bool branch_taken_0x16ae20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE20u;
        // 0x16ae24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae20) {
            ctx->pc = 0x16AE50u;
            goto label_16ae50;
        }
    }
    ctx->pc = 0x16AE28u;
    // 0x16ae28: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ae2c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AE2Cu;
    SET_GPR_U32(ctx, 31, 0x16AE34u);
    ctx->pc = 0x16AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE2Cu;
    // 0x16ae30: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AE2Cu, 0x16AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE34u;
label_16ae34:
    // 0x16ae34: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16ae38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ae38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae3c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AE3Cu;
    SET_GPR_U32(ctx, 31, 0x16AE44u);
    ctx->pc = 0x16AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE3Cu;
    // 0x16ae40: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AE3Cu, 0x16AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE44u;
label_16ae44:
    // 0x16ae44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae48: 0xc05a44c  jal         func_169130
    ctx->pc = 0x16AE48u;
    SET_GPR_U32(ctx, 31, 0x16AE50u);
    ctx->pc = 0x16AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE48u;
    // 0x16ae4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169130u, 0x16AE48u, 0x16AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE50u;
label_16ae50:
    // 0x16ae50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ae50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ae54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ae54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE58u;
        // 0x16ae5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE60u;
}
