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

// Function: sub_002C6F98
// Address: 0x2c6f98 - 0x2c7020
void sub_002C6F98_0x2c6f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6F98_0x2c6f98");
#endif

    switch (ctx->pc) {
        case 0x2c6f98u: goto label_2c6f98;
        case 0x2c6f9cu: goto label_2c6f9c;
        case 0x2c6fa0u: goto label_2c6fa0;
        case 0x2c6fa4u: goto label_2c6fa4;
        case 0x2c6fa8u: goto label_2c6fa8;
        case 0x2c6facu: goto label_2c6fac;
        case 0x2c6fb0u: goto label_2c6fb0;
        case 0x2c6fb4u: goto label_2c6fb4;
        case 0x2c6fb8u: goto label_2c6fb8;
        case 0x2c6fbcu: goto label_2c6fbc;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6fc4u: goto label_2c6fc4;
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c6fccu: goto label_2c6fcc;
        case 0x2c6fd0u: goto label_2c6fd0;
        case 0x2c6fd4u: goto label_2c6fd4;
        case 0x2c6fd8u: goto label_2c6fd8;
        case 0x2c6fdcu: goto label_2c6fdc;
        case 0x2c6fe0u: goto label_2c6fe0;
        case 0x2c6fe4u: goto label_2c6fe4;
        case 0x2c6fe8u: goto label_2c6fe8;
        case 0x2c6fecu: goto label_2c6fec;
        case 0x2c6ff0u: goto label_2c6ff0;
        case 0x2c6ff4u: goto label_2c6ff4;
        case 0x2c6ff8u: goto label_2c6ff8;
        case 0x2c6ffcu: goto label_2c6ffc;
        case 0x2c7000u: goto label_2c7000;
        case 0x2c7004u: goto label_2c7004;
        case 0x2c7008u: goto label_2c7008;
        case 0x2c700cu: goto label_2c700c;
        case 0x2c7010u: goto label_2c7010;
        case 0x2c7014u: goto label_2c7014;
        case 0x2c7018u: goto label_2c7018;
        case 0x2c701cu: goto label_2c701c;
        default: break;
    }

    ctx->pc = 0x2c6f98u;

label_2c6f98:
    // 0x2c6f98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6f9c:
    // 0x2c6f9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c6f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2c6fa0:
    // 0x2c6fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c6fa4:
    // 0x2c6fa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c6fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fa8:
    // 0x2c6fa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c6fac:
    // 0x2c6fac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c6fb0:
    // 0x2c6fb0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2c6fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c6fb4:
    // 0x2c6fb4: 0xc08bfbc  jal         func_22FEF0
label_2c6fb8:
    if (ctx->pc == 0x2C6FB8u) {
        ctx->pc = 0x2C6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FB4u;
        // 0x2c6fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6FBCu;
        goto label_2c6fbc;
    }
    ctx->pc = 0x2C6FB4u;
    SET_GPR_U32(ctx, 31, 0x2C6FBCu);
    ctx->pc = 0x2C6FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FB4u;
    // 0x2c6fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2C6FB4u, 0x2C6FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FBCu;
label_2c6fbc:
    // 0x2c6fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c6fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fc0:
    // 0x2c6fc0: 0xc087612  jal         func_21D848
label_2c6fc4:
    if (ctx->pc == 0x2C6FC4u) {
        ctx->pc = 0x2C6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FC0u;
        // 0x2c6fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6FC8u;
        goto label_2c6fc8;
    }
    ctx->pc = 0x2C6FC0u;
    SET_GPR_U32(ctx, 31, 0x2C6FC8u);
    ctx->pc = 0x2C6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FC0u;
    // 0x2c6fc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2C6FC0u, 0x2C6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FC8u;
label_2c6fc8:
    // 0x2c6fc8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2c6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2c6fcc:
    // 0x2c6fcc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c6fd0:
    // 0x2c6fd0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c6fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c6fd4:
    // 0x2c6fd4: 0x244210f8  addiu       $v0, $v0, 0x10F8
    ctx->pc = 0x2c6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4344));
label_2c6fd8:
    // 0x2c6fd8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2c6fdc:
    // 0x2c6fdc: 0x86050120  lh          $a1, 0x120($s0)
    ctx->pc = 0x2c6fdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 288)));
label_2c6fe0:
    // 0x2c6fe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c6fe4:
    // 0x2c6fe4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c6fe8:
    // 0x2c6fe8: 0x26100120  addiu       $s0, $s0, 0x120
    ctx->pc = 0x2c6fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
label_2c6fec:
    // 0x2c6fec: 0xc067b9c  jal         func_19EE70
label_2c6ff0:
    if (ctx->pc == 0x2C6FF0u) {
        ctx->pc = 0x2C6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6FECu;
        // 0x2c6ff0: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C6FF4u;
        goto label_2c6ff4;
    }
    ctx->pc = 0x2C6FECu;
    SET_GPR_U32(ctx, 31, 0x2C6FF4u);
    ctx->pc = 0x2C6FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6FECu;
    // 0x2c6ff0: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x2C6FECu, 0x2C6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FF4u;
label_2c6ff4:
    // 0x2c6ff4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c6ff8:
    // 0x2c6ff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ffc:
    // 0x2c6ffc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c6ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7000:
    // 0x2c7000: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c7004:
    // 0x2c7004: 0x60f809  jalr        $v1
label_2c7008:
    if (ctx->pc == 0x2C7008u) {
        ctx->pc = 0x2C7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7004u;
        // 0x2c7008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C700Cu;
        goto label_2c700c;
    }
    ctx->pc = 0x2C7004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C700Cu);
        ctx->pc = 0x2C7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7004u;
        // 0x2c7008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7004u, 0x2C700Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C700Cu;
label_2c700c:
    // 0x2c700c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c700cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7010:
    // 0x2c7010: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7014:
    // 0x2c7014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c7014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7018:
    // 0x2c7018: 0x3e00008  jr          $ra
label_2c701c:
    if (ctx->pc == 0x2C701Cu) {
        ctx->pc = 0x2C701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7018u;
        // 0x2c701c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7020u;
        goto label_fallthrough_0x2c7018;
    }
    ctx->pc = 0x2C7018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7018u;
        // 0x2c701c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7018:
    ctx->pc = 0x2C7020u;
}
