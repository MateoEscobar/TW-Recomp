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

// Function: sub_004E7FA0
// Address: 0x4e7fa0 - 0x4e8020
void sub_004E7FA0_0x4e7fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7FA0_0x4e7fa0");
#endif

    switch (ctx->pc) {
        case 0x4e7fa0u: goto label_4e7fa0;
        case 0x4e7fa4u: goto label_4e7fa4;
        case 0x4e7fa8u: goto label_4e7fa8;
        case 0x4e7facu: goto label_4e7fac;
        case 0x4e7fb0u: goto label_4e7fb0;
        case 0x4e7fb4u: goto label_4e7fb4;
        case 0x4e7fb8u: goto label_4e7fb8;
        case 0x4e7fbcu: goto label_4e7fbc;
        case 0x4e7fc0u: goto label_4e7fc0;
        case 0x4e7fc4u: goto label_4e7fc4;
        case 0x4e7fc8u: goto label_4e7fc8;
        case 0x4e7fccu: goto label_4e7fcc;
        case 0x4e7fd0u: goto label_4e7fd0;
        case 0x4e7fd4u: goto label_4e7fd4;
        case 0x4e7fd8u: goto label_4e7fd8;
        case 0x4e7fdcu: goto label_4e7fdc;
        case 0x4e7fe0u: goto label_4e7fe0;
        case 0x4e7fe4u: goto label_4e7fe4;
        case 0x4e7fe8u: goto label_4e7fe8;
        case 0x4e7fecu: goto label_4e7fec;
        case 0x4e7ff0u: goto label_4e7ff0;
        case 0x4e7ff4u: goto label_4e7ff4;
        case 0x4e7ff8u: goto label_4e7ff8;
        case 0x4e7ffcu: goto label_4e7ffc;
        case 0x4e8000u: goto label_4e8000;
        case 0x4e8004u: goto label_4e8004;
        case 0x4e8008u: goto label_4e8008;
        case 0x4e800cu: goto label_4e800c;
        case 0x4e8010u: goto label_4e8010;
        case 0x4e8014u: goto label_4e8014;
        case 0x4e8018u: goto label_4e8018;
        case 0x4e801cu: goto label_4e801c;
        default: break;
    }

    ctx->pc = 0x4e7fa0u;

label_4e7fa0:
    // 0x4e7fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e7fa4:
    // 0x4e7fa4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e7fa8:
    // 0x4e7fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e7fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e7fac:
    // 0x4e7fac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fb0:
    // 0x4e7fb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e7fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e7fb4:
    // 0x4e7fb4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e7fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fb8:
    // 0x4e7fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e7fbc:
    // 0x4e7fbc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e7fc0:
    if (ctx->pc == 0x4E7FC0u) {
        ctx->pc = 0x4E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FBCu;
        // 0x4e7fc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7FC4u;
        goto label_4e7fc4;
    }
    ctx->pc = 0x4E7FBCu;
    {
        const bool branch_taken_0x4e7fbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FBCu;
        // 0x4e7fc0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7fbc) {
            ctx->pc = 0x4E8004u;
            goto label_4e8004;
        }
    }
    ctx->pc = 0x4E7FC4u;
label_4e7fc4:
    // 0x4e7fc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7fc8:
    // 0x4e7fc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e7fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e7fcc:
    // 0x4e7fcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e7fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e7fd0:
    // 0x4e7fd0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e7fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e7fd4:
    // 0x4e7fd4: 0x60f809  jalr        $v1
label_4e7fd8:
    if (ctx->pc == 0x4E7FD8u) {
        ctx->pc = 0x4E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FD4u;
        // 0x4e7fd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7FDCu;
        goto label_4e7fdc;
    }
    ctx->pc = 0x4E7FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7FDCu);
        ctx->pc = 0x4E7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FD4u;
        // 0x4e7fd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7FD4u, 0x4E7FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7FDCu;
label_4e7fdc:
    // 0x4e7fdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e7fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e7fe0:
    // 0x4e7fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e7fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fe4:
    // 0x4e7fe4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e7fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e7fe8:
    // 0x4e7fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e7fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7fec:
    // 0x4e7fec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e7fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7ff0:
    // 0x4e7ff0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7ff4:
    // 0x4e7ff4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7ff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7ff8:
    // 0x4e7ff8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7ffc:
    // 0x4e7ffc: 0x60f809  jalr        $v1
label_4e8000:
    if (ctx->pc == 0x4E8000u) {
        ctx->pc = 0x4E8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FFCu;
        // 0x4e8000: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8004u;
        goto label_4e8004;
    }
    ctx->pc = 0x4E7FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E8004u);
        ctx->pc = 0x4E8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7FFCu;
        // 0x4e8000: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7FFCu, 0x4E8004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8004u;
label_4e8004:
    // 0x4e8004: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e8004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e8008:
    // 0x4e8008: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e8008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e800c:
    // 0x4e800c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e800cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8010:
    // 0x4e8010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8014:
    // 0x4e8014: 0x3e00008  jr          $ra
label_4e8018:
    if (ctx->pc == 0x4E8018u) {
        ctx->pc = 0x4E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8014u;
        // 0x4e8018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E801Cu;
        goto label_4e801c;
    }
    ctx->pc = 0x4E8014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8014u;
        // 0x4e8018: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E801Cu;
label_4e801c:
    // 0x4e801c: 0x0  nop
    ctx->pc = 0x4e801cu;
    // NOP
    ctx->pc = 0x4e8020u;
}
