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

// Function: sub_0033A690
// Address: 0x33a690 - 0x33a6f0
void sub_0033A690_0x33a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A690_0x33a690");
#endif

    switch (ctx->pc) {
        case 0x33a6b4u: goto label_33a6b4;
        case 0x33a6c4u: goto label_33a6c4;
        case 0x33a6d4u: goto label_33a6d4;
        default: break;
    }

    ctx->pc = 0x33a690u;

    // 0x33a690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33a694: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x33a698: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33a69c: 0x24516ec8  addiu       $s1, $v0, 0x6EC8
    ctx->pc = 0x33a69cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28360));
    // 0x33a6a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x33a6a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33a6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33a6ac: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x33A6ACu;
    SET_GPR_U32(ctx, 31, 0x33A6B4u);
    ctx->pc = 0x33A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6ACu;
    // 0x33a6b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x33A6ACu, 0x33A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6B4u;
label_33a6b4:
    // 0x33a6b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x33a6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33a6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a6bc: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x33A6BCu;
    SET_GPR_U32(ctx, 31, 0x33A6C4u);
    ctx->pc = 0x33A6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6BCu;
    // 0x33a6c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x33A6BCu, 0x33A6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6C4u;
label_33a6c4:
    // 0x33a6c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A6C4u;
    {
        const bool branch_taken_0x33a6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6C4u;
        // 0x33a6c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a6c4) {
            ctx->pc = 0x33A6D8u;
            goto label_33a6d8;
        }
    }
    ctx->pc = 0x33A6CCu;
    // 0x33a6cc: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x33A6CCu;
    SET_GPR_U32(ctx, 31, 0x33A6D4u);
    ctx->pc = 0x33A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A6CCu;
    // 0x33a6d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x33A6CCu, 0x33A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A6D4u;
label_33a6d4:
    // 0x33a6d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x33a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_33a6d8:
    // 0x33a6d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x33a6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33a6dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33a6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33a6e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a6e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x33A6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A6E4u;
        // 0x33a6e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A6ECu;
    // 0x33a6ec: 0x0  nop
    ctx->pc = 0x33a6ecu;
    // NOP
    ctx->pc = 0x33a6f0u;
}
