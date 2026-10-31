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

// Function: sub_001D6060
// Address: 0x1d6060 - 0x1d60e8
void sub_001D6060_0x1d6060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6060_0x1d6060");
#endif

    switch (ctx->pc) {
        case 0x1d6060u: goto label_1d6060;
        case 0x1d6064u: goto label_1d6064;
        case 0x1d6068u: goto label_1d6068;
        case 0x1d606cu: goto label_1d606c;
        case 0x1d6070u: goto label_1d6070;
        case 0x1d6074u: goto label_1d6074;
        case 0x1d6078u: goto label_1d6078;
        case 0x1d607cu: goto label_1d607c;
        case 0x1d6080u: goto label_1d6080;
        case 0x1d6084u: goto label_1d6084;
        case 0x1d6088u: goto label_1d6088;
        case 0x1d608cu: goto label_1d608c;
        case 0x1d6090u: goto label_1d6090;
        case 0x1d6094u: goto label_1d6094;
        case 0x1d6098u: goto label_1d6098;
        case 0x1d609cu: goto label_1d609c;
        case 0x1d60a0u: goto label_1d60a0;
        case 0x1d60a4u: goto label_1d60a4;
        case 0x1d60a8u: goto label_1d60a8;
        case 0x1d60acu: goto label_1d60ac;
        case 0x1d60b0u: goto label_1d60b0;
        case 0x1d60b4u: goto label_1d60b4;
        case 0x1d60b8u: goto label_1d60b8;
        case 0x1d60bcu: goto label_1d60bc;
        case 0x1d60c0u: goto label_1d60c0;
        case 0x1d60c4u: goto label_1d60c4;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60ccu: goto label_1d60cc;
        case 0x1d60d0u: goto label_1d60d0;
        case 0x1d60d4u: goto label_1d60d4;
        case 0x1d60d8u: goto label_1d60d8;
        case 0x1d60dcu: goto label_1d60dc;
        case 0x1d60e0u: goto label_1d60e0;
        case 0x1d60e4u: goto label_1d60e4;
        default: break;
    }

    ctx->pc = 0x1d6060u;

label_1d6060:
    // 0x1d6060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d6060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d6064:
    // 0x1d6064: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d6064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d6068:
    // 0x1d6068: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d6068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d606c:
    // 0x1d606c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d6070:
    // 0x1d6070: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d6070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6074:
    // 0x1d6074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6078:
    // 0x1d6078: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d607c:
    // 0x1d607c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1d6080:
    if (ctx->pc == 0x1D6080u) {
        ctx->pc = 0x1D6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D607Cu;
        // 0x1d6080: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6084u;
        goto label_1d6084;
    }
    ctx->pc = 0x1D607Cu;
    {
        const bool branch_taken_0x1d607c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D607Cu;
        // 0x1d6080: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d607c) {
            ctx->pc = 0x1D60C8u;
            goto label_1d60c8;
        }
    }
    ctx->pc = 0x1D6084u;
label_1d6084:
    // 0x1d6084: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1d6084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1d6088:
    // 0x1d6088: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d6088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d608c:
    // 0x1d608c: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_1d6090:
    if (ctx->pc == 0x1D6090u) {
        ctx->pc = 0x1D6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D608Cu;
        // 0x1d6090: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6094u;
        goto label_1d6094;
    }
    ctx->pc = 0x1D608Cu;
    {
        const bool branch_taken_0x1d608c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d608c) {
            ctx->pc = 0x1D6090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D608Cu;
            // 0x1d6090: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D60B8u;
            goto label_1d60b8;
        }
    }
    ctx->pc = 0x1D6094u;
label_1d6094:
    // 0x1d6094: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6098:
    // 0x1d6098: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1d609c:
    // 0x1d609c: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1d60a0:
    // 0x1d60a0: 0x40f809  jalr        $v0
label_1d60a4:
    if (ctx->pc == 0x1D60A4u) {
        ctx->pc = 0x1D60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60A0u;
        // 0x1d60a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60A8u;
        goto label_1d60a8;
    }
    ctx->pc = 0x1D60A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D60A8u);
        ctx->pc = 0x1D60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60A0u;
        // 0x1d60a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60A0u, 0x1D60A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D60A8u;
label_1d60a8:
    // 0x1d60a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1d60ac:
    if (ctx->pc == 0x1D60ACu) {
        ctx->pc = 0x1D60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60A8u;
        // 0x1d60ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60B0u;
        goto label_1d60b0;
    }
    ctx->pc = 0x1D60A8u;
    {
        const bool branch_taken_0x1d60a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d60a8) {
            ctx->pc = 0x1D60ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D60A8u;
            // 0x1d60ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D60B8u;
            goto label_1d60b8;
        }
    }
    ctx->pc = 0x1D60B0u;
label_1d60b0:
    // 0x1d60b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d60b4:
    if (ctx->pc == 0x1D60B4u) {
        ctx->pc = 0x1D60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60B0u;
        // 0x1d60b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60B8u;
        goto label_1d60b8;
    }
    ctx->pc = 0x1D60B0u;
    {
        const bool branch_taken_0x1d60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60B0u;
        // 0x1d60b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60b0) {
            ctx->pc = 0x1D60CCu;
            goto label_1d60cc;
        }
    }
    ctx->pc = 0x1D60B8u;
label_1d60b8:
    // 0x1d60b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d60bc:
    // 0x1d60bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1d60bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d60c0:
    // 0x1d60c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1d60c4:
    if (ctx->pc == 0x1D60C4u) {
        ctx->pc = 0x1D60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60C0u;
        // 0x1d60c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60C8u;
        goto label_1d60c8;
    }
    ctx->pc = 0x1D60C0u;
    {
        const bool branch_taken_0x1d60c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60C0u;
        // 0x1d60c4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60c0) {
            ctx->pc = 0x1D6088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6088;
        }
    }
    ctx->pc = 0x1D60C8u;
label_1d60c8:
    // 0x1d60c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d60cc:
    // 0x1d60cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d60ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d60d0:
    // 0x1d60d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d60d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d60d4:
    // 0x1d60d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d60d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d60d8:
    // 0x1d60d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d60dc:
    // 0x1d60dc: 0x3e00008  jr          $ra
label_1d60e0:
    if (ctx->pc == 0x1D60E0u) {
        ctx->pc = 0x1D60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60DCu;
        // 0x1d60e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D60E4u;
        goto label_1d60e4;
    }
    ctx->pc = 0x1D60DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60DCu;
        // 0x1d60e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D60DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D60E4u;
label_1d60e4:
    // 0x1d60e4: 0x0  nop
    ctx->pc = 0x1d60e4u;
    // NOP
    ctx->pc = 0x1d60e8u;
}
