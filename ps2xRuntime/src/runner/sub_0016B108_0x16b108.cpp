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

// Function: sub_0016B108
// Address: 0x16b108 - 0x16b178
void sub_0016B108_0x16b108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B108_0x16b108");
#endif

    switch (ctx->pc) {
        case 0x16b138u: goto label_16b138;
        case 0x16b150u: goto label_16b150;
        default: break;
    }

    ctx->pc = 0x16b108u;

    // 0x16b108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16b108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16b10c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16b10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16b110: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16b110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16b114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16b114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b118: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16b11c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b120: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16b120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16b124: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16b124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b12c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x16b12cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x16b130: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x16b130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16b134: 0x0  nop
    ctx->pc = 0x16b134u;
    // NOP
label_16b138:
    // 0x16b138: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16b138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b13c: 0x8e64caa8  lw          $a0, -0x3558($s3)
    ctx->pc = 0x16b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953640)));
    // 0x16b140: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16b140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b144: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16b144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b148: 0xc059104  jal         func_164410
    ctx->pc = 0x16B148u;
    SET_GPR_U32(ctx, 31, 0x16B150u);
    ctx->pc = 0x16B14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B148u;
    // 0x16b14c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164410u, 0x16B148u, 0x16B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B150u;
label_16b150:
    // 0x16b150: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x16b150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x16b154: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16B154u;
    {
        const bool branch_taken_0x16b154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b154) {
            ctx->pc = 0x16B158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B154u;
            // 0x16b158: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b138;
        }
    }
    ctx->pc = 0x16B15Cu;
    // 0x16b15c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16b15cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b160: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16b160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b168: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16b168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b16c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b170: 0x3e00008  jr          $ra
    ctx->pc = 0x16B170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B170u;
        // 0x16b174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B178u;
}
