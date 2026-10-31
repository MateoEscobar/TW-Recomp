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

// Function: sub_0016ACF0
// Address: 0x16acf0 - 0x16ad80
void sub_0016ACF0_0x16acf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ACF0_0x16acf0");
#endif

    switch (ctx->pc) {
        case 0x16ad24u: goto label_16ad24;
        case 0x16ad38u: goto label_16ad38;
        case 0x16ad44u: goto label_16ad44;
        case 0x16ad4cu: goto label_16ad4c;
        case 0x16ad58u: goto label_16ad58;
        case 0x16ad64u: goto label_16ad64;
        default: break;
    }

    ctx->pc = 0x16acf0u;

    // 0x16acf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16acf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16acf8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16acf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16acfc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16ad00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad04: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16ad04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16ad08: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16AD08u;
    {
        const bool branch_taken_0x16ad08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD08u;
        // 0x16ad0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad08) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16AD10u;
    // 0x16ad10: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16AD10u;
    {
        const bool branch_taken_0x16ad10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD10u;
        // 0x16ad14: 0x48c00  sll         $s1, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad10) {
            ctx->pc = 0x16AD64u;
            goto label_16ad64;
        }
    }
    ctx->pc = 0x16AD18u;
    // 0x16ad18: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x16ad18u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x16ad1c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AD1Cu;
    SET_GPR_U32(ctx, 31, 0x16AD24u);
    ctx->pc = 0x16AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD1Cu;
    // 0x16ad20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AD1Cu, 0x16AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD24u;
label_16ad24:
    // 0x16ad24: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16ad28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16ad28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad2c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x16ad30: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AD30u;
    SET_GPR_U32(ctx, 31, 0x16AD38u);
    ctx->pc = 0x16AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD30u;
    // 0x16ad34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AD30u, 0x16AD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD38u;
label_16ad38:
    // 0x16ad38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16ad38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad3c: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x16AD3Cu;
    SET_GPR_U32(ctx, 31, 0x16AD44u);
    ctx->pc = 0x16AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD3Cu;
    // 0x16ad40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x16AD3Cu, 0x16AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD44u;
label_16ad44:
    // 0x16ad44: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AD44u;
    SET_GPR_U32(ctx, 31, 0x16AD4Cu);
    ctx->pc = 0x16AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD44u;
    // 0x16ad48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AD44u, 0x16AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD4Cu;
label_16ad4c:
    // 0x16ad4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ad4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad50: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AD50u;
    SET_GPR_U32(ctx, 31, 0x16AD58u);
    ctx->pc = 0x16AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD50u;
    // 0x16ad54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AD50u, 0x16AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD58u;
label_16ad58:
    // 0x16ad58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad5c: 0xc05a432  jal         func_1690C8
    ctx->pc = 0x16AD5Cu;
    SET_GPR_U32(ctx, 31, 0x16AD64u);
    ctx->pc = 0x16AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD5Cu;
    // 0x16ad60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1690C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1690C8u, 0x16AD5Cu, 0x16AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD64u;
label_16ad64:
    // 0x16ad64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ad68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16ad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ad6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16ad6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ad70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ad70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad74: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD74u;
        // 0x16ad78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AD7Cu;
    // 0x16ad7c: 0x0  nop
    ctx->pc = 0x16ad7cu;
    // NOP
    ctx->pc = 0x16ad80u;
}
