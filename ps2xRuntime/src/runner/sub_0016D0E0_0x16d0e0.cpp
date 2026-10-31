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

// Function: sub_0016D0E0
// Address: 0x16d0e0 - 0x16d170
void sub_0016D0E0_0x16d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D0E0_0x16d0e0");
#endif

    switch (ctx->pc) {
        case 0x16d100u: goto label_16d100;
        case 0x16d10cu: goto label_16d10c;
        case 0x16d128u: goto label_16d128;
        case 0x16d130u: goto label_16d130;
        case 0x16d13cu: goto label_16d13c;
        default: break;
    }

    ctx->pc = 0x16d0e0u;

    // 0x16d0e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d0e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d0e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d0ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d0f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d0f8: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x16d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x16d0fc: 0x0  nop
    ctx->pc = 0x16d0fcu;
    // NOP
label_16d100:
    // 0x16d100: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x16d100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d104: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16D104u;
    SET_GPR_U32(ctx, 31, 0x16D10Cu);
    ctx->pc = 0x16D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D104u;
    // 0x16d108: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16D104u, 0x16D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D10Cu;
label_16d10c:
    // 0x16d10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d110: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16d114: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16D114u;
    {
        const bool branch_taken_0x16d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D114u;
        // 0x16d118: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d114) {
            ctx->pc = 0x16D148u;
            goto label_16d148;
        }
    }
    ctx->pc = 0x16D11Cu;
    // 0x16d11c: 0x24910048  addiu       $s1, $a0, 0x48
    ctx->pc = 0x16d11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x16d120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d124: 0x0  nop
    ctx->pc = 0x16d124u;
    // NOP
label_16d128:
    // 0x16d128: 0xc137826  jal         func_4DE098
    ctx->pc = 0x16D128u;
    SET_GPR_U32(ctx, 31, 0x16D130u);
    ctx->pc = 0x16D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D128u;
    // 0x16d12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x16D128u, 0x16D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D130u;
label_16d130:
    // 0x16d130: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d134: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16D134u;
    SET_GPR_U32(ctx, 31, 0x16D13Cu);
    ctx->pc = 0x16D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D134u;
    // 0x16d138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16D134u, 0x16D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D13Cu;
label_16d13c:
    // 0x16d13c: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x16d13cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x16d140: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16D140u;
    {
        const bool branch_taken_0x16d140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d140) {
            ctx->pc = 0x16D144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D140u;
            // 0x16d144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d128;
        }
    }
    ctx->pc = 0x16D148u;
label_16d148:
    // 0x16d148: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x16d148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d14c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x16d14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x16d150: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16D150u;
    {
        const bool branch_taken_0x16d150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d150) {
            ctx->pc = 0x16D154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16D150u;
            // 0x16d154: 0x102400  sll         $a0, $s0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16d100;
        }
    }
    ctx->pc = 0x16D158u;
    // 0x16d158: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d15c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d15cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d160: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d168: 0x3e00008  jr          $ra
    ctx->pc = 0x16D168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D168u;
        // 0x16d16c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D170u;
}
