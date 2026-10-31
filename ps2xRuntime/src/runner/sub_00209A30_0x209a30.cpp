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

// Function: sub_00209A30
// Address: 0x209a30 - 0x209a88
void sub_00209A30_0x209a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A30_0x209a30");
#endif

    switch (ctx->pc) {
        case 0x209a30u: goto label_209a30;
        case 0x209a34u: goto label_209a34;
        case 0x209a38u: goto label_209a38;
        case 0x209a3cu: goto label_209a3c;
        case 0x209a40u: goto label_209a40;
        case 0x209a44u: goto label_209a44;
        case 0x209a48u: goto label_209a48;
        case 0x209a4cu: goto label_209a4c;
        case 0x209a50u: goto label_209a50;
        case 0x209a54u: goto label_209a54;
        case 0x209a58u: goto label_209a58;
        case 0x209a5cu: goto label_209a5c;
        case 0x209a60u: goto label_209a60;
        case 0x209a64u: goto label_209a64;
        case 0x209a68u: goto label_209a68;
        case 0x209a6cu: goto label_209a6c;
        case 0x209a70u: goto label_209a70;
        case 0x209a74u: goto label_209a74;
        case 0x209a78u: goto label_209a78;
        case 0x209a7cu: goto label_209a7c;
        case 0x209a80u: goto label_209a80;
        case 0x209a84u: goto label_209a84;
        default: break;
    }

    ctx->pc = 0x209a30u;

label_209a30:
    // 0x209a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209a34:
    // 0x209a34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x209a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_209a38:
    // 0x209a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_209a3c:
    // 0x209a3c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x209a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_209a40:
    // 0x209a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209a44:
    // 0x209a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209a48:
    // 0x209a48: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x209a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_209a4c:
    // 0x209a4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209a50:
    // 0x209a50: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x209a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_209a54:
    // 0x209a54: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_209a58:
    // 0x209a58: 0xa0f809  jalr        $a1
label_209a5c:
    if (ctx->pc == 0x209A5Cu) {
        ctx->pc = 0x209A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A58u;
        // 0x209a5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A60u;
        goto label_209a60;
    }
    ctx->pc = 0x209A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x209A60u);
        ctx->pc = 0x209A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A58u;
        // 0x209a5c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A58u, 0x209A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A60u;
label_209a60:
    // 0x209a60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x209a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209a64:
    // 0x209a64: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x209a64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_209a68:
    // 0x209a68: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_209a6c:
    // 0x209a6c: 0x60f809  jalr        $v1
label_209a70:
    if (ctx->pc == 0x209A70u) {
        ctx->pc = 0x209A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A6Cu;
        // 0x209a70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A74u;
        goto label_209a74;
    }
    ctx->pc = 0x209A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209A74u);
        ctx->pc = 0x209A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A6Cu;
        // 0x209a70: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A6Cu, 0x209A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209A74u;
label_209a74:
    // 0x209a74: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x209a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_209a78:
    // 0x209a78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209a7c:
    // 0x209a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209a80:
    // 0x209a80: 0x3e00008  jr          $ra
label_209a84:
    if (ctx->pc == 0x209A84u) {
        ctx->pc = 0x209A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A80u;
        // 0x209a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209A88u;
        goto label_fallthrough_0x209a80;
    }
    ctx->pc = 0x209A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A80u;
        // 0x209a84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x209a80:
    ctx->pc = 0x209A88u;
}
