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

// Function: sub_0029C160
// Address: 0x29c160 - 0x29c1f0
void sub_0029C160_0x29c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C160_0x29c160");
#endif

    switch (ctx->pc) {
        case 0x29c188u: goto label_29c188;
        case 0x29c19cu: goto label_29c19c;
        case 0x29c1b4u: goto label_29c1b4;
        case 0x29c1bcu: goto label_29c1bc;
        default: break;
    }

    ctx->pc = 0x29c160u;

    // 0x29c160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29c164: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x29c164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x29c168: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29c168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x29c16c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29c16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c170: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x29c170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x29c174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29c174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c17c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29c17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c180: 0xc089f98  jal         func_227E60
    ctx->pc = 0x29C180u;
    SET_GPR_U32(ctx, 31, 0x29C188u);
    ctx->pc = 0x29C184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C180u;
    // 0x29c184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x29C180u, 0x29C188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C188u;
label_29c188:
    // 0x29c188: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29C188u;
    {
        const bool branch_taken_0x29c188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C188u;
        // 0x29c18c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c188) {
            ctx->pc = 0x29C1C4u;
            goto label_29c1c4;
        }
    }
    ctx->pc = 0x29C190u;
    // 0x29c190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29c190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c194: 0xc088aa4  jal         func_222A90
    ctx->pc = 0x29C194u;
    SET_GPR_U32(ctx, 31, 0x29C19Cu);
    ctx->pc = 0x29C198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C194u;
    // 0x29c198: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x29C194u, 0x29C19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C19Cu;
label_29c19c:
    // 0x29c19c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c1a4: 0x16220007  bne         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C1A4u;
    {
        const bool branch_taken_0x29c1a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x29C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1A4u;
        // 0x29c1a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1a4) {
            ctx->pc = 0x29C1C4u;
            goto label_29c1c4;
        }
    }
    ctx->pc = 0x29C1ACu;
    // 0x29c1ac: 0xc087502  jal         func_21D408
    ctx->pc = 0x29C1ACu;
    SET_GPR_U32(ctx, 31, 0x29C1B4u);
    ctx->pc = 0x29C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1ACu;
    // 0x29c1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x29C1ACu, 0x29C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1B4u;
label_29c1b4:
    // 0x29c1b4: 0xc0a4138  jal         func_2904E0
    ctx->pc = 0x29C1B4u;
    SET_GPR_U32(ctx, 31, 0x29C1BCu);
    ctx->pc = 0x29C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1B4u;
    // 0x29c1b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2904E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2904E0u, 0x29C1B4u, 0x29C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1BCu;
label_29c1bc:
    // 0x29c1bc: 0x222900a  movz        $s2, $s1, $v0
    ctx->pc = 0x29c1bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
    // 0x29c1c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29c1c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29c1c4:
    // 0x29c1c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x29c1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c1c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29c1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c1cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x29c1ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x29C1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1D4u;
        // 0x29c1d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C1DCu;
    // 0x29c1dc: 0x0  nop
    ctx->pc = 0x29c1dcu;
    // NOP
    // 0x29c1e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x29c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29c1e4: 0x0  nop
    ctx->pc = 0x29c1e4u;
    // NOP
    // 0x29c1e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29c1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29c1ec: 0x0  nop
    ctx->pc = 0x29c1ecu;
    // NOP
    ctx->pc = 0x29c1f0u;
}
