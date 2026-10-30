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

// Function: sub_0016AC40
// Address: 0x16ac40 - 0x16ac98
void sub_0016AC40_0x16ac40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AC40_0x16ac40");
#endif

    switch (ctx->pc) {
        case 0x16ac64u: goto label_16ac64;
        case 0x16ac74u: goto label_16ac74;
        case 0x16ac80u: goto label_16ac80;
        default: break;
    }

    ctx->pc = 0x16ac40u;

    // 0x16ac40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ac44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ac48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16ac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16ac4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ac50: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AC50u;
    {
        const bool branch_taken_0x16ac50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC50u;
        // 0x16ac54: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac50) {
            ctx->pc = 0x16AC80u;
            goto label_16ac80;
        }
    }
    ctx->pc = 0x16AC58u;
    // 0x16ac58: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ac58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ac5c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AC5Cu;
    SET_GPR_U32(ctx, 31, 0x16AC64u);
    ctx->pc = 0x16AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC5Cu;
    // 0x16ac60: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AC5Cu, 0x16AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC64u;
label_16ac64:
    // 0x16ac64: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16ac68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ac68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac6c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AC6Cu;
    SET_GPR_U32(ctx, 31, 0x16AC74u);
    ctx->pc = 0x16AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC6Cu;
    // 0x16ac70: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AC6Cu, 0x16AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC74u;
label_16ac74:
    // 0x16ac74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac78: 0xc05a418  jal         func_169060
    ctx->pc = 0x16AC78u;
    SET_GPR_U32(ctx, 31, 0x16AC80u);
    ctx->pc = 0x16AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC78u;
    // 0x16ac7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169060u, 0x16AC78u, 0x16AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC80u;
label_16ac80:
    // 0x16ac80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16ac80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ac84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ac84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ac88: 0x3e00008  jr          $ra
    ctx->pc = 0x16AC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC88u;
        // 0x16ac8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AC90u;
    // 0x16ac90: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16ac94: 0x0  nop
    ctx->pc = 0x16ac94u;
    // NOP
    ctx->pc = 0x16ac98u;
}
