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

// Function: sub_001552B0
// Address: 0x1552b0 - 0x155308
void sub_001552B0_0x1552b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001552B0_0x1552b0");
#endif

    switch (ctx->pc) {
        case 0x1552ccu: goto label_1552cc;
        case 0x1552e4u: goto label_1552e4;
        case 0x1552f0u: goto label_1552f0;
        default: break;
    }

    ctx->pc = 0x1552b0u;

    // 0x1552b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1552b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1552b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1552b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1552b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1552bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1552bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1552c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1552c4: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x1552C4u;
    SET_GPR_U32(ctx, 31, 0x1552CCu);
    ctx->pc = 0x1552C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552C4u;
    // 0x1552c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x1552C4u, 0x1552CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552CCu;
label_1552cc:
    // 0x1552cc: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x1552ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x1552d0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1552D0u;
    {
        const bool branch_taken_0x1552d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552d0) {
            ctx->pc = 0x1552D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1552D0u;
            // 0x1552d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552F4u;
            goto label_1552f4;
        }
    }
    ctx->pc = 0x1552D8u;
    // 0x1552d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1552d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1552dc: 0xc0577f4  jal         func_15DFD0
    ctx->pc = 0x1552DCu;
    SET_GPR_U32(ctx, 31, 0x1552E4u);
    ctx->pc = 0x1552E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552DCu;
    // 0x1552e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DFD0u, 0x1552DCu, 0x1552E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552E4u;
label_1552e4:
    // 0x1552e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1552e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x1552e8: 0xc05797a  jal         func_15E5E8
    ctx->pc = 0x1552E8u;
    SET_GPR_U32(ctx, 31, 0x1552F0u);
    ctx->pc = 0x1552ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1552E8u;
    // 0x1552ec: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5E8u, 0x1552E8u, 0x1552F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1552F0u;
label_1552f0:
    // 0x1552f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1552f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1552f4:
    // 0x1552f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1552f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1552f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1552f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1552fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1552FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1552FCu;
        // 0x155300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1552FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155304u;
    // 0x155304: 0x0  nop
    ctx->pc = 0x155304u;
    // NOP
    ctx->pc = 0x155308u;
}
