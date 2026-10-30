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

// Function: sub_00238A88
// Address: 0x238a88 - 0x238ae0
void sub_00238A88_0x238a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238A88_0x238a88");
#endif

    switch (ctx->pc) {
        case 0x238aacu: goto label_238aac;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ac8u: goto label_238ac8;
        default: break;
    }

    ctx->pc = 0x238a88u;

    // 0x238a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238a8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238a90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x238a94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x238a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238a98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238a9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238aa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238aa4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238AA4u;
    SET_GPR_U32(ctx, 31, 0x238AACu);
    ctx->pc = 0x238AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AA4u;
    // 0x238aa8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238AA4u, 0x238AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AACu;
label_238aac:
    // 0x238aac: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238AACu;
    SET_GPR_U32(ctx, 31, 0x238AB4u);
    ctx->pc = 0x238AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AACu;
    // 0x238ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238AACu, 0x238AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AB4u;
label_238ab4:
    // 0x238ab4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238AB4u;
    {
        const bool branch_taken_0x238ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AB4u;
        // 0x238ab8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ab4) {
            ctx->pc = 0x238AC8u;
            goto label_238ac8;
        }
    }
    ctx->pc = 0x238ABCu;
    // 0x238abc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ac0: 0xc089c7c  jal         func_2271F0
    ctx->pc = 0x238AC0u;
    SET_GPR_U32(ctx, 31, 0x238AC8u);
    ctx->pc = 0x238AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238AC0u;
    // 0x238ac4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x238AC0u, 0x238AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238AC8u;
label_238ac8:
    // 0x238ac8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x238ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238acc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x238accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x238AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AD4u;
        // 0x238ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238ADCu;
    // 0x238adc: 0x0  nop
    ctx->pc = 0x238adcu;
    // NOP
    ctx->pc = 0x238ae0u;
}
