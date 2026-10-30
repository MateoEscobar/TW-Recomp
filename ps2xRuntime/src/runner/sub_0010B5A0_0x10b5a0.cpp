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

// Function: sub_0010B5A0
// Address: 0x10b5a0 - 0x10b608
void sub_0010B5A0_0x10b5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B5A0_0x10b5a0");
#endif

    switch (ctx->pc) {
        case 0x10b5ccu: goto label_10b5cc;
        case 0x10b5d4u: goto label_10b5d4;
        case 0x10b5e8u: goto label_10b5e8;
        case 0x10b5f0u: goto label_10b5f0;
        default: break;
    }

    ctx->pc = 0x10b5a0u;

    // 0x10b5a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b5a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10b5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10b5a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10b5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10b5b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b5b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b5b8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x10b5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x10b5bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B5BCu;
    {
        const bool branch_taken_0x10b5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5BCu;
        // 0x10b5c0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b5bc) {
            ctx->pc = 0x10B5D4u;
            goto label_10b5d4;
        }
    }
    ctx->pc = 0x10B5C4u;
    // 0x10b5c4: 0xc041120  jal         func_104480
    ctx->pc = 0x10B5C4u;
    SET_GPR_U32(ctx, 31, 0x10B5CCu);
    ctx->pc = 0x10B5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5C4u;
    // 0x10b5c8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10B5C4u, 0x10B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5CCu;
label_10b5cc:
    // 0x10b5cc: 0xc041120  jal         func_104480
    ctx->pc = 0x10B5CCu;
    SET_GPR_U32(ctx, 31, 0x10B5D4u);
    ctx->pc = 0x10B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5CCu;
    // 0x10b5d0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104480u, 0x10B5CCu, 0x10B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5D4u;
label_10b5d4:
    // 0x10b5d4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x10b5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x10b5d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B5D8u;
    {
        const bool branch_taken_0x10b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b5d8) {
            ctx->pc = 0x10B5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10B5D8u;
            // 0x10b5dc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10B5F4u;
            goto label_10b5f4;
        }
    }
    ctx->pc = 0x10B5E0u;
    // 0x10b5e0: 0xc041124  jal         func_104490
    ctx->pc = 0x10B5E0u;
    SET_GPR_U32(ctx, 31, 0x10B5E8u);
    ctx->pc = 0x10B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E0u;
    // 0x10b5e4: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x10B5E0u, 0x10B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5E8u;
label_10b5e8:
    // 0x10b5e8: 0xc041124  jal         func_104490
    ctx->pc = 0x10B5E8u;
    SET_GPR_U32(ctx, 31, 0x10B5F0u);
    ctx->pc = 0x10B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5E8u;
    // 0x10b5ec: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104490u, 0x10B5E8u, 0x10B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F0u;
label_10b5f0:
    // 0x10b5f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10b5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b5f4:
    // 0x10b5f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x10B5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B5FCu;
        // 0x10b600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B604u;
    // 0x10b604: 0x0  nop
    ctx->pc = 0x10b604u;
    // NOP
    ctx->pc = 0x10b608u;
}
