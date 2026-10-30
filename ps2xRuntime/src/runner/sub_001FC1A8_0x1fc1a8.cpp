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

// Function: sub_001FC1A8
// Address: 0x1fc1a8 - 0x1fc200
void sub_001FC1A8_0x1fc1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC1A8_0x1fc1a8");
#endif

    switch (ctx->pc) {
        case 0x1fc1a8u: goto label_1fc1a8;
        case 0x1fc1acu: goto label_1fc1ac;
        case 0x1fc1b0u: goto label_1fc1b0;
        case 0x1fc1b4u: goto label_1fc1b4;
        case 0x1fc1b8u: goto label_1fc1b8;
        case 0x1fc1bcu: goto label_1fc1bc;
        case 0x1fc1c0u: goto label_1fc1c0;
        case 0x1fc1c4u: goto label_1fc1c4;
        case 0x1fc1c8u: goto label_1fc1c8;
        case 0x1fc1ccu: goto label_1fc1cc;
        case 0x1fc1d0u: goto label_1fc1d0;
        case 0x1fc1d4u: goto label_1fc1d4;
        case 0x1fc1d8u: goto label_1fc1d8;
        case 0x1fc1dcu: goto label_1fc1dc;
        case 0x1fc1e0u: goto label_1fc1e0;
        case 0x1fc1e4u: goto label_1fc1e4;
        case 0x1fc1e8u: goto label_1fc1e8;
        case 0x1fc1ecu: goto label_1fc1ec;
        case 0x1fc1f0u: goto label_1fc1f0;
        case 0x1fc1f4u: goto label_1fc1f4;
        case 0x1fc1f8u: goto label_1fc1f8;
        case 0x1fc1fcu: goto label_1fc1fc;
        default: break;
    }

    ctx->pc = 0x1fc1a8u;

label_1fc1a8:
    // 0x1fc1a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fc1ac:
    // 0x1fc1ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1fc1b0:
    // 0x1fc1b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fc1b4:
    // 0x1fc1b4: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fc1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1fc1b8:
    // 0x1fc1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc1bc:
    // 0x1fc1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc1c0:
    // 0x1fc1c0: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1fc1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1fc1c4:
    // 0x1fc1c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fc1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc1c8:
    // 0x1fc1c8: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fc1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fc1cc:
    // 0x1fc1cc: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1fc1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fc1d0:
    // 0x1fc1d0: 0xa0f809  jalr        $a1
label_1fc1d4:
    if (ctx->pc == 0x1FC1D4u) {
        ctx->pc = 0x1FC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1D0u;
        // 0x1fc1d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC1D8u;
        goto label_1fc1d8;
    }
    ctx->pc = 0x1FC1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FC1D8u);
        ctx->pc = 0x1FC1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1D0u;
        // 0x1fc1d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1D0u, 0x1FC1D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC1D8u;
label_1fc1d8:
    // 0x1fc1d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fc1dc:
    // 0x1fc1dc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fc1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fc1e0:
    // 0x1fc1e0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fc1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fc1e4:
    // 0x1fc1e4: 0x60f809  jalr        $v1
label_1fc1e8:
    if (ctx->pc == 0x1FC1E8u) {
        ctx->pc = 0x1FC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1E4u;
        // 0x1fc1e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC1ECu;
        goto label_1fc1ec;
    }
    ctx->pc = 0x1FC1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FC1ECu);
        ctx->pc = 0x1FC1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1E4u;
        // 0x1fc1e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1E4u, 0x1FC1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FC1ECu;
label_1fc1ec:
    // 0x1fc1ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1fc1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1fc1f0:
    // 0x1fc1f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc1f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc1f4:
    // 0x1fc1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc1f8:
    // 0x1fc1f8: 0x3e00008  jr          $ra
label_1fc1fc:
    if (ctx->pc == 0x1FC1FCu) {
        ctx->pc = 0x1FC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1F8u;
        // 0x1fc1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FC200u;
        goto label_fallthrough_0x1fc1f8;
    }
    ctx->pc = 0x1FC1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC1F8u;
        // 0x1fc1fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fc1f8:
    ctx->pc = 0x1FC200u;
}
