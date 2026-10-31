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

// Function: sub_0020A460
// Address: 0x20a460 - 0x20a4b8
void sub_0020A460_0x20a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A460_0x20a460");
#endif

    switch (ctx->pc) {
        case 0x20a460u: goto label_20a460;
        case 0x20a464u: goto label_20a464;
        case 0x20a468u: goto label_20a468;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a470u: goto label_20a470;
        case 0x20a474u: goto label_20a474;
        case 0x20a478u: goto label_20a478;
        case 0x20a47cu: goto label_20a47c;
        case 0x20a480u: goto label_20a480;
        case 0x20a484u: goto label_20a484;
        case 0x20a488u: goto label_20a488;
        case 0x20a48cu: goto label_20a48c;
        case 0x20a490u: goto label_20a490;
        case 0x20a494u: goto label_20a494;
        case 0x20a498u: goto label_20a498;
        case 0x20a49cu: goto label_20a49c;
        case 0x20a4a0u: goto label_20a4a0;
        case 0x20a4a4u: goto label_20a4a4;
        case 0x20a4a8u: goto label_20a4a8;
        case 0x20a4acu: goto label_20a4ac;
        case 0x20a4b0u: goto label_20a4b0;
        case 0x20a4b4u: goto label_20a4b4;
        default: break;
    }

    ctx->pc = 0x20a460u;

label_20a460:
    // 0x20a460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20a464:
    // 0x20a464: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_20a468:
    // 0x20a468: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20a46c:
    // 0x20a46c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_20a470:
    // 0x20a470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a474:
    // 0x20a474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a478:
    // 0x20a478: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20a47c:
    // 0x20a47c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a480:
    // 0x20a480: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_20a484:
    // 0x20a484: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x20a484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_20a488:
    // 0x20a488: 0xa0f809  jalr        $a1
label_20a48c:
    if (ctx->pc == 0x20A48Cu) {
        ctx->pc = 0x20A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A488u;
        // 0x20a48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A490u;
        goto label_20a490;
    }
    ctx->pc = 0x20A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x20A490u);
        ctx->pc = 0x20A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A488u;
        // 0x20a48c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A488u, 0x20A490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A490u;
label_20a490:
    // 0x20a490: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20a494:
    // 0x20a494: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20a498:
    // 0x20a498: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20a49c:
    // 0x20a49c: 0x60f809  jalr        $v1
label_20a4a0:
    if (ctx->pc == 0x20A4A0u) {
        ctx->pc = 0x20A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A49Cu;
        // 0x20a4a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4A4u;
        goto label_20a4a4;
    }
    ctx->pc = 0x20A49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20A4A4u);
        ctx->pc = 0x20A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A49Cu;
        // 0x20a4a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A49Cu, 0x20A4A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A4A4u;
label_20a4a4:
    // 0x20a4a4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x20a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_20a4a8:
    // 0x20a4a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20a4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a4ac:
    // 0x20a4ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a4b0:
    // 0x20a4b0: 0x3e00008  jr          $ra
label_20a4b4:
    if (ctx->pc == 0x20A4B4u) {
        ctx->pc = 0x20A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B0u;
        // 0x20a4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4B8u;
        goto label_fallthrough_0x20a4b0;
    }
    ctx->pc = 0x20A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4B0u;
        // 0x20a4b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20a4b0:
    ctx->pc = 0x20A4B8u;
}
