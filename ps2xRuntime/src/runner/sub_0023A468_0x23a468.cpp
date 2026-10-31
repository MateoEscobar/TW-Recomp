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

// Function: sub_0023A468
// Address: 0x23a468 - 0x23a4e0
void sub_0023A468_0x23a468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A468_0x23a468");
#endif

    switch (ctx->pc) {
        case 0x23a484u: goto label_23a484;
        case 0x23a48cu: goto label_23a48c;
        case 0x23a4b0u: goto label_23a4b0;
        default: break;
    }

    ctx->pc = 0x23a468u;

    // 0x23a468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23a468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23a46c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23a470: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23a474: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23a47c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A47Cu;
    SET_GPR_U32(ctx, 31, 0x23A484u);
    ctx->pc = 0x23A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A47Cu;
    // 0x23a480: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A47Cu, 0x23A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A484u;
label_23a484:
    // 0x23a484: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23A484u;
    SET_GPR_U32(ctx, 31, 0x23A48Cu);
    ctx->pc = 0x23A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A484u;
    // 0x23a488: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23A484u, 0x23A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A48Cu;
label_23a48c:
    // 0x23a48c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a490: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x23A490u;
    {
        const bool branch_taken_0x23a490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A490u;
        // 0x23a494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a490) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A498u;
    // 0x23a498: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x23a498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x23a49c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23a49cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23a4a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A4A0u;
    {
        const bool branch_taken_0x23a4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A0u;
        // 0x23a4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4a0) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A4A8u;
    // 0x23a4a8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23A4A8u;
    SET_GPR_U32(ctx, 31, 0x23A4B0u);
    ctx->pc = 0x23A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A4A8u;
    // 0x23a4ac: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23A4A8u, 0x23A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4B0u;
label_23a4b0:
    // 0x23a4b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a4b4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23A4B4u;
    {
        const bool branch_taken_0x23a4b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4B4u;
        // 0x23a4b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4b4) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A4BCu;
    // 0x23a4bc: 0x8e030634  lw          $v1, 0x634($s0)
    ctx->pc = 0x23a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1588)));
    // 0x23a4c0: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23A4C0u;
    {
        const bool branch_taken_0x23a4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4C0u;
        // 0x23a4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4c0) {
            ctx->pc = 0x23A4CCu;
            goto label_23a4cc;
        }
    }
    ctx->pc = 0x23A4C8u;
    // 0x23a4c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a4cc:
    // 0x23a4cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23a4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a4d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D4u;
        // 0x23a4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4DCu;
    // 0x23a4dc: 0x0  nop
    ctx->pc = 0x23a4dcu;
    // NOP
    ctx->pc = 0x23a4e0u;
}
