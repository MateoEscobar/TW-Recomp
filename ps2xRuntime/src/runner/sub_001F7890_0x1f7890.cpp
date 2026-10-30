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

// Function: sub_001F7890
// Address: 0x1f7890 - 0x1f78e8
void sub_001F7890_0x1f7890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7890_0x1f7890");
#endif

    switch (ctx->pc) {
        case 0x1f7890u: goto label_1f7890;
        case 0x1f7894u: goto label_1f7894;
        case 0x1f7898u: goto label_1f7898;
        case 0x1f789cu: goto label_1f789c;
        case 0x1f78a0u: goto label_1f78a0;
        case 0x1f78a4u: goto label_1f78a4;
        case 0x1f78a8u: goto label_1f78a8;
        case 0x1f78acu: goto label_1f78ac;
        case 0x1f78b0u: goto label_1f78b0;
        case 0x1f78b4u: goto label_1f78b4;
        case 0x1f78b8u: goto label_1f78b8;
        case 0x1f78bcu: goto label_1f78bc;
        case 0x1f78c0u: goto label_1f78c0;
        case 0x1f78c4u: goto label_1f78c4;
        case 0x1f78c8u: goto label_1f78c8;
        case 0x1f78ccu: goto label_1f78cc;
        case 0x1f78d0u: goto label_1f78d0;
        case 0x1f78d4u: goto label_1f78d4;
        case 0x1f78d8u: goto label_1f78d8;
        case 0x1f78dcu: goto label_1f78dc;
        case 0x1f78e0u: goto label_1f78e0;
        case 0x1f78e4u: goto label_1f78e4;
        default: break;
    }

    ctx->pc = 0x1f7890u;

label_1f7890:
    // 0x1f7890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f7894:
    // 0x1f7894: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f7894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f7898:
    // 0x1f7898: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f7898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f789c:
    // 0x1f789c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f78a0:
    // 0x1f78a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f78a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f78a4:
    // 0x1f78a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f78a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f78a8:
    // 0x1f78a8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1f78a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1f78ac:
    // 0x1f78ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f78b0:
    // 0x1f78b0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f78b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f78b4:
    // 0x1f78b4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1f78b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f78b8:
    // 0x1f78b8: 0xa0f809  jalr        $a1
label_1f78bc:
    if (ctx->pc == 0x1F78BCu) {
        ctx->pc = 0x1F78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78B8u;
        // 0x1f78bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F78C0u;
        goto label_1f78c0;
    }
    ctx->pc = 0x1F78B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F78C0u);
        ctx->pc = 0x1F78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78B8u;
        // 0x1f78bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F78B8u, 0x1F78C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F78C0u;
label_1f78c0:
    // 0x1f78c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f78c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f78c4:
    // 0x1f78c4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f78c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f78c8:
    // 0x1f78c8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f78cc:
    // 0x1f78cc: 0x60f809  jalr        $v1
label_1f78d0:
    if (ctx->pc == 0x1F78D0u) {
        ctx->pc = 0x1F78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78CCu;
        // 0x1f78d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F78D4u;
        goto label_1f78d4;
    }
    ctx->pc = 0x1F78CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F78D4u);
        ctx->pc = 0x1F78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78CCu;
        // 0x1f78d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F78CCu, 0x1F78D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F78D4u;
label_1f78d4:
    // 0x1f78d4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1f78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1f78d8:
    // 0x1f78d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f78dc:
    // 0x1f78dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f78dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f78e0:
    // 0x1f78e0: 0x3e00008  jr          $ra
label_1f78e4:
    if (ctx->pc == 0x1F78E4u) {
        ctx->pc = 0x1F78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78E0u;
        // 0x1f78e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F78E8u;
        goto label_fallthrough_0x1f78e0;
    }
    ctx->pc = 0x1F78E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78E0u;
        // 0x1f78e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F78E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f78e0:
    ctx->pc = 0x1F78E8u;
}
