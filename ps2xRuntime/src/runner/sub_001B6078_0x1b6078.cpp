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

// Function: sub_001B6078
// Address: 0x1b6078 - 0x1b6100
void sub_001B6078_0x1b6078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6078_0x1b6078");
#endif

    switch (ctx->pc) {
        case 0x1b6078u: goto label_1b6078;
        case 0x1b607cu: goto label_1b607c;
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6084u: goto label_1b6084;
        case 0x1b6088u: goto label_1b6088;
        case 0x1b608cu: goto label_1b608c;
        case 0x1b6090u: goto label_1b6090;
        case 0x1b6094u: goto label_1b6094;
        case 0x1b6098u: goto label_1b6098;
        case 0x1b609cu: goto label_1b609c;
        case 0x1b60a0u: goto label_1b60a0;
        case 0x1b60a4u: goto label_1b60a4;
        case 0x1b60a8u: goto label_1b60a8;
        case 0x1b60acu: goto label_1b60ac;
        case 0x1b60b0u: goto label_1b60b0;
        case 0x1b60b4u: goto label_1b60b4;
        case 0x1b60b8u: goto label_1b60b8;
        case 0x1b60bcu: goto label_1b60bc;
        case 0x1b60c0u: goto label_1b60c0;
        case 0x1b60c4u: goto label_1b60c4;
        case 0x1b60c8u: goto label_1b60c8;
        case 0x1b60ccu: goto label_1b60cc;
        case 0x1b60d0u: goto label_1b60d0;
        case 0x1b60d4u: goto label_1b60d4;
        case 0x1b60d8u: goto label_1b60d8;
        case 0x1b60dcu: goto label_1b60dc;
        case 0x1b60e0u: goto label_1b60e0;
        case 0x1b60e4u: goto label_1b60e4;
        case 0x1b60e8u: goto label_1b60e8;
        case 0x1b60ecu: goto label_1b60ec;
        case 0x1b60f0u: goto label_1b60f0;
        case 0x1b60f4u: goto label_1b60f4;
        case 0x1b60f8u: goto label_1b60f8;
        case 0x1b60fcu: goto label_1b60fc;
        default: break;
    }

    ctx->pc = 0x1b6078u;

label_1b6078:
    // 0x1b6078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b607c:
    // 0x1b607c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b6080:
    // 0x1b6080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b6080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b6084:
    // 0x1b6084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6088:
    // 0x1b6088: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1b6088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b608c:
    // 0x1b608c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_1b6090:
    if (ctx->pc == 0x1B6090u) {
        ctx->pc = 0x1B6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B608Cu;
        // 0x1b6090: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6094u;
        goto label_1b6094;
    }
    ctx->pc = 0x1B608Cu;
    {
        const bool branch_taken_0x1b608c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b608c) {
            ctx->pc = 0x1B6090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B608Cu;
            // 0x1b6090: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B60B0u;
            goto label_1b60b0;
        }
    }
    ctx->pc = 0x1B6094u;
label_1b6094:
    // 0x1b6094: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b6094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b6098:
    // 0x1b6098: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1b6098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_1b609c:
    // 0x1b609c: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1b609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1b60a0:
    // 0x1b60a0: 0x60f809  jalr        $v1
label_1b60a4:
    if (ctx->pc == 0x1B60A4u) {
        ctx->pc = 0x1B60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60A0u;
        // 0x1b60a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60A8u;
        goto label_1b60a8;
    }
    ctx->pc = 0x1B60A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B60A8u);
        ctx->pc = 0x1B60A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60A0u;
        // 0x1b60a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60A0u, 0x1B60A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B60A8u;
label_1b60a8:
    // 0x1b60a8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1b60ac:
    // 0x1b60ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b60acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b60b0:
    // 0x1b60b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b60b4:
    if (ctx->pc == 0x1B60B4u) {
        ctx->pc = 0x1B60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60B0u;
        // 0x1b60b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60B8u;
        goto label_1b60b8;
    }
    ctx->pc = 0x1B60B0u;
    {
        const bool branch_taken_0x1b60b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60b0) {
            ctx->pc = 0x1B60B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60B0u;
            // 0x1b60b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B60D0u;
            goto label_1b60d0;
        }
    }
    ctx->pc = 0x1B60B8u;
label_1b60b8:
    // 0x1b60b8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1b60b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b60bc:
    // 0x1b60bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b60c0:
    if (ctx->pc == 0x1B60C0u) {
        ctx->pc = 0x1B60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60BCu;
        // 0x1b60c0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60C4u;
        goto label_1b60c4;
    }
    ctx->pc = 0x1B60BCu;
    {
        const bool branch_taken_0x1b60bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b60bc) {
            ctx->pc = 0x1B60C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B60BCu;
            // 0x1b60c0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B60D0u;
            goto label_1b60d0;
        }
    }
    ctx->pc = 0x1B60C4u;
label_1b60c4:
    // 0x1b60c4: 0xc0e70f4  jal         func_39C3D0
label_1b60c8:
    if (ctx->pc == 0x1B60C8u) {
        ctx->pc = 0x1B60CCu;
        goto label_1b60cc;
    }
    ctx->pc = 0x1B60C4u;
    SET_GPR_U32(ctx, 31, 0x1B60CCu);
    ctx->pc = 0x39C3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3D0u, 0x1B60C4u, 0x1B60CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60CCu;
label_1b60cc:
    // 0x1b60cc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1b60ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1b60d0:
    // 0x1b60d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1b60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1b60d4:
    // 0x1b60d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b60d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b60d8:
    // 0x1b60d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b60d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b60dc:
    // 0x1b60dc: 0x3e00008  jr          $ra
label_1b60e0:
    if (ctx->pc == 0x1B60E0u) {
        ctx->pc = 0x1B60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60DCu;
        // 0x1b60e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B60E4u;
        goto label_1b60e4;
    }
    ctx->pc = 0x1B60DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60DCu;
        // 0x1b60e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60E4u;
label_1b60e4:
    // 0x1b60e4: 0x0  nop
    ctx->pc = 0x1b60e4u;
    // NOP
label_1b60e8:
    // 0x1b60e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b60e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b60ec:
    // 0x1b60ec: 0x0  nop
    ctx->pc = 0x1b60ecu;
    // NOP
label_1b60f0:
    // 0x1b60f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b60f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b60f4:
    // 0x1b60f4: 0x0  nop
    ctx->pc = 0x1b60f4u;
    // NOP
label_1b60f8:
    // 0x1b60f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b60f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b60fc:
    // 0x1b60fc: 0x0  nop
    ctx->pc = 0x1b60fcu;
    // NOP
    ctx->pc = 0x1b6100u;
}
