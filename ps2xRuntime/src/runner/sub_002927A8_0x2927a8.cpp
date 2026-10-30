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

// Function: sub_002927A8
// Address: 0x2927a8 - 0x2927f8
void sub_002927A8_0x2927a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002927A8_0x2927a8");
#endif

    switch (ctx->pc) {
        case 0x2927c8u: goto label_2927c8;
        case 0x2927d0u: goto label_2927d0;
        case 0x2927e0u: goto label_2927e0;
        default: break;
    }

    ctx->pc = 0x2927a8u;

    // 0x2927a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2927a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2927ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2927acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2927b0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2927b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2927b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2927b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2927b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2927b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2927bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2927bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2927c0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2927C0u;
    SET_GPR_U32(ctx, 31, 0x2927C8u);
    ctx->pc = 0x2927C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927C0u;
    // 0x2927c4: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2927C0u, 0x2927C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927C8u;
label_2927c8:
    // 0x2927c8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2927C8u;
    SET_GPR_U32(ctx, 31, 0x2927D0u);
    ctx->pc = 0x2927CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927C8u;
    // 0x2927cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2927C8u, 0x2927D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927D0u;
label_2927d0:
    // 0x2927d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2927D0u;
    {
        const bool branch_taken_0x2927d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2927d0) {
            ctx->pc = 0x2927D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2927D0u;
            // 0x2927d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2927E8u;
            goto label_2927e8;
        }
    }
    ctx->pc = 0x2927D8u;
    // 0x2927d8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2927D8u;
    SET_GPR_U32(ctx, 31, 0x2927E0u);
    ctx->pc = 0x2927DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2927D8u;
    // 0x2927dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2927D8u, 0x2927E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2927E0u;
label_2927e0:
    // 0x2927e0: 0xac500224  sw          $s0, 0x224($v0)
    ctx->pc = 0x2927e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 16));
    // 0x2927e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2927e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2927e8:
    // 0x2927e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2927e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2927ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2927ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2927F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2927ECu;
        // 0x2927f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2927ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2927F4u;
    // 0x2927f4: 0x0  nop
    ctx->pc = 0x2927f4u;
    // NOP
    ctx->pc = 0x2927f8u;
}
