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

// Function: sub_0016AB38
// Address: 0x16ab38 - 0x16ab90
void sub_0016AB38_0x16ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB38_0x16ab38");
#endif

    switch (ctx->pc) {
        case 0x16ab68u: goto label_16ab68;
        case 0x16ab7cu: goto label_16ab7c;
        default: break;
    }

    ctx->pc = 0x16ab38u;

    // 0x16ab38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ab38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ab3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16ab40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16ab44: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16ab48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ab4c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x16ab4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ab54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ab58: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16AB58u;
    {
        const bool branch_taken_0x16ab58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB58u;
        // 0x16ab5c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab58) {
            ctx->pc = 0x16AB7Cu;
            goto label_16ab7c;
        }
    }
    ctx->pc = 0x16AB60u;
    // 0x16ab60: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16AB60u;
    SET_GPR_U32(ctx, 31, 0x16AB68u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16AB60u, 0x16AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB68u;
label_16ab68:
    // 0x16ab68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB68u;
    {
        const bool branch_taken_0x16ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB68u;
        // 0x16ab6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab68) {
            ctx->pc = 0x16AB7Cu;
            goto label_16ab7c;
        }
    }
    ctx->pc = 0x16AB70u;
    // 0x16ab70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ab70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab74: 0xc0592ee  jal         func_164BB8
    ctx->pc = 0x16AB74u;
    SET_GPR_U32(ctx, 31, 0x16AB7Cu);
    ctx->pc = 0x16AB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB74u;
    // 0x16ab78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB8u, 0x16AB74u, 0x16AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB7Cu;
label_16ab7c:
    // 0x16ab7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16ab7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ab80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ab80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ab84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ab84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ab88: 0x3e00008  jr          $ra
    ctx->pc = 0x16AB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB88u;
        // 0x16ab8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AB90u;
}
