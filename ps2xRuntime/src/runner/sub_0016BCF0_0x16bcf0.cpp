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

// Function: sub_0016BCF0
// Address: 0x16bcf0 - 0x16bd38
void sub_0016BCF0_0x16bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BCF0_0x16bcf0");
#endif

    switch (ctx->pc) {
        case 0x16bd18u: goto label_16bd18;
        default: break;
    }

    ctx->pc = 0x16bcf0u;

    // 0x16bcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bcf4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16bcf8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16bcfc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16bcfcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16bd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bd04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16bd08: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16BD08u;
    {
        const bool branch_taken_0x16bd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD08u;
        // 0x16bd0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd08) {
            ctx->pc = 0x16BD28u;
            goto label_16bd28;
        }
    }
    ctx->pc = 0x16BD10u;
    // 0x16bd10: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16BD10u;
    SET_GPR_U32(ctx, 31, 0x16BD18u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16BD10u, 0x16BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BD18u;
label_16bd18:
    // 0x16bd18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16bd18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bd1c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16bd20: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16BD20u;
    {
        const bool branch_taken_0x16bd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bd20) {
            ctx->pc = 0x16BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BD20u;
            // 0x16bd24: 0xa07000df  sb          $s0, 0xDF($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 223), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BD28u;
            goto label_16bd28;
        }
    }
    ctx->pc = 0x16BD28u;
label_16bd28:
    // 0x16bd28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16bd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bd2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x16BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD30u;
        // 0x16bd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BD38u;
}
