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

// Function: sub_002FCEB8
// Address: 0x2fceb8 - 0x2fcf28
void sub_002FCEB8_0x2fceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCEB8_0x2fceb8");
#endif

    switch (ctx->pc) {
        case 0x2fced8u: goto label_2fced8;
        case 0x2fcee0u: goto label_2fcee0;
        case 0x2fcef0u: goto label_2fcef0;
        case 0x2fcefcu: goto label_2fcefc;
        case 0x2fcf10u: goto label_2fcf10;
        default: break;
    }

    ctx->pc = 0x2fceb8u;

    // 0x2fceb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fcebc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fcebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fcec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fcec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fcec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fcec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcec8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fcec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fcecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fceccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fced0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2FCED0u;
    SET_GPR_U32(ctx, 31, 0x2FCED8u);
    ctx->pc = 0x2FCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCED0u;
    // 0x2fced4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FCED0u, 0x2FCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCED8u;
label_2fced8:
    // 0x2fced8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2FCED8u;
    SET_GPR_U32(ctx, 31, 0x2FCEE0u);
    ctx->pc = 0x2FCEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCED8u;
    // 0x2fcedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2FCED8u, 0x2FCEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEE0u;
label_2fcee0:
    // 0x2fcee0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FCEE0u;
    {
        const bool branch_taken_0x2fcee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEE0u;
        // 0x2fcee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcee0) {
            ctx->pc = 0x2FCF14u;
            goto label_2fcf14;
        }
    }
    ctx->pc = 0x2FCEE8u;
    // 0x2fcee8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2FCEE8u;
    SET_GPR_U32(ctx, 31, 0x2FCEF0u);
    ctx->pc = 0x2FCEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCEE8u;
    // 0x2fceec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FCEE8u, 0x2FCEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEF0u;
label_2fcef0:
    // 0x2fcef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fcef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcef4: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2FCEF4u;
    SET_GPR_U32(ctx, 31, 0x2FCEFCu);
    ctx->pc = 0x2FCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCEF4u;
    // 0x2fcef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2FCEF4u, 0x2FCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCEFCu;
label_2fcefc:
    // 0x2fcefc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCEFCu;
    {
        const bool branch_taken_0x2fcefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCEFCu;
        // 0x2fcf00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcefc) {
            ctx->pc = 0x2FCF10u;
            goto label_2fcf10;
        }
    }
    ctx->pc = 0x2FCF04u;
    // 0x2fcf04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fcf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf08: 0xc0bf3ca  jal         func_2FCF28
    ctx->pc = 0x2FCF08u;
    SET_GPR_U32(ctx, 31, 0x2FCF10u);
    ctx->pc = 0x2FCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCF08u;
    // 0x2fcf0c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCF28u, 0x2FCF08u, 0x2FCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCF10u;
label_2fcf10:
    // 0x2fcf10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fcf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fcf14:
    // 0x2fcf14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fcf14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcf18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF1Cu;
        // 0x2fcf20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCF24u;
    // 0x2fcf24: 0x0  nop
    ctx->pc = 0x2fcf24u;
    // NOP
    ctx->pc = 0x2fcf28u;
}
