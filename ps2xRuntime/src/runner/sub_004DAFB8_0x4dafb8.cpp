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

// Function: sub_004DAFB8
// Address: 0x4dafb8 - 0x4db060
void sub_004DAFB8_0x4dafb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DAFB8_0x4dafb8");
#endif

    switch (ctx->pc) {
        case 0x4daff0u: goto label_4daff0;
        case 0x4db010u: goto label_4db010;
        default: break;
    }

    ctx->pc = 0x4dafb8u;

    // 0x4dafb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4dafb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4dafbc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4dafbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4dafc0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4dafc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4dafc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4dafc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dafc8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4dafc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4dafcc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x4dafccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dafd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4dafd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4dafd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4dafd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dafd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4dafd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4dafdc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4dafdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4dafe0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4dafe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4dafe4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4dafe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dafe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dafe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dafec: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4dafecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4daff0:
    // 0x4daff0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4daff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4daff4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4daff8: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DAFF8u;
    {
        const bool branch_taken_0x4daff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4daff8) {
            ctx->pc = 0x4DAFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DAFF8u;
            // 0x4daffc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB03Cu;
            goto label_4db03c;
        }
    }
    ctx->pc = 0x4DB000u;
    // 0x4db000: 0x56550005  bnel        $s2, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x4DB000u;
    {
        const bool branch_taken_0x4db000 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x4db000) {
            ctx->pc = 0x4DB004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DB000u;
            // 0x4db004: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DB018u;
            goto label_4db018;
        }
    }
    ctx->pc = 0x4DB008u;
    // 0x4db008: 0xc0e4060  jal         func_390180
    ctx->pc = 0x4DB008u;
    SET_GPR_U32(ctx, 31, 0x4DB010u);
    ctx->pc = 0x4DB00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB008u;
    // 0x4db00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x4DB008u, 0x4DB010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DB010u;
label_4db010:
    // 0x4db010: 0x222900a  movz        $s2, $s1, $v0
    ctx->pc = 0x4db010u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
    // 0x4db014: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4db014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4db018:
    // 0x4db018: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x4db018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4db01c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4DB01Cu;
    {
        const bool branch_taken_0x4db01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DB020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB01Cu;
        // 0x4db020: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db01c) {
            ctx->pc = 0x4DAFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4daff0;
        }
    }
    ctx->pc = 0x4DB024u;
    // 0x4db024: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DB024u;
    {
        const bool branch_taken_0x4db024 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x4DB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB024u;
        // 0x4db028: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db024) {
            ctx->pc = 0x4DB038u;
            goto label_4db038;
        }
    }
    ctx->pc = 0x4DB02Cu;
    // 0x4db02c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4db02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4db030: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4db030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4db034: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4db034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4db038:
    // 0x4db038: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4db038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4db03c:
    // 0x4db03c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4db03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4db040: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4db040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4db044: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4db044u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4db048: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4db048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4db04c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4db04cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db054: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB054u;
        // 0x4db058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DB054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DB05Cu;
    // 0x4db05c: 0x0  nop
    ctx->pc = 0x4db05cu;
    // NOP
    ctx->pc = 0x4db060u;
}
