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

// Function: sub_001FD3B0
// Address: 0x1fd3b0 - 0x1fd408
void sub_001FD3B0_0x1fd3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD3B0_0x1fd3b0");
#endif

    switch (ctx->pc) {
        case 0x1fd3b0u: goto label_1fd3b0;
        case 0x1fd3b4u: goto label_1fd3b4;
        case 0x1fd3b8u: goto label_1fd3b8;
        case 0x1fd3bcu: goto label_1fd3bc;
        case 0x1fd3c0u: goto label_1fd3c0;
        case 0x1fd3c4u: goto label_1fd3c4;
        case 0x1fd3c8u: goto label_1fd3c8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3d0u: goto label_1fd3d0;
        case 0x1fd3d4u: goto label_1fd3d4;
        case 0x1fd3d8u: goto label_1fd3d8;
        case 0x1fd3dcu: goto label_1fd3dc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3e4u: goto label_1fd3e4;
        case 0x1fd3e8u: goto label_1fd3e8;
        case 0x1fd3ecu: goto label_1fd3ec;
        case 0x1fd3f0u: goto label_1fd3f0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd3f8u: goto label_1fd3f8;
        case 0x1fd3fcu: goto label_1fd3fc;
        case 0x1fd400u: goto label_1fd400;
        case 0x1fd404u: goto label_1fd404;
        default: break;
    }

    ctx->pc = 0x1fd3b0u;

label_1fd3b0:
    // 0x1fd3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fd3b4:
    // 0x1fd3b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1fd3b8:
    // 0x1fd3b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fd3bc:
    // 0x1fd3bc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fd3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1fd3c0:
    // 0x1fd3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fd3c4:
    // 0x1fd3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fd3c8:
    // 0x1fd3c8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1fd3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1fd3cc:
    // 0x1fd3cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd3d0:
    // 0x1fd3d0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fd3d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fd3d4:
    // 0x1fd3d4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1fd3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fd3d8:
    // 0x1fd3d8: 0xa0f809  jalr        $a1
label_1fd3dc:
    if (ctx->pc == 0x1FD3DCu) {
        ctx->pc = 0x1FD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3D8u;
        // 0x1fd3dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3E0u;
        goto label_1fd3e0;
    }
    ctx->pc = 0x1FD3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FD3E0u);
        ctx->pc = 0x1FD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3D8u;
        // 0x1fd3dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3D8u, 0x1FD3E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD3E0u;
label_1fd3e0:
    // 0x1fd3e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fd3e4:
    // 0x1fd3e4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fd3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fd3e8:
    // 0x1fd3e8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fd3ec:
    // 0x1fd3ec: 0x60f809  jalr        $v1
label_1fd3f0:
    if (ctx->pc == 0x1FD3F0u) {
        ctx->pc = 0x1FD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ECu;
        // 0x1fd3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD3F4u;
        goto label_1fd3f4;
    }
    ctx->pc = 0x1FD3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FD3F4u);
        ctx->pc = 0x1FD3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3ECu;
        // 0x1fd3f0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD3ECu, 0x1FD3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FD3F4u;
label_1fd3f4:
    // 0x1fd3f4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1fd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1fd3f8:
    // 0x1fd3f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fd3fc:
    // 0x1fd3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd400:
    // 0x1fd400: 0x3e00008  jr          $ra
label_1fd404:
    if (ctx->pc == 0x1FD404u) {
        ctx->pc = 0x1FD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD400u;
        // 0x1fd404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FD408u;
        goto label_fallthrough_0x1fd400;
    }
    ctx->pc = 0x1FD400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD400u;
        // 0x1fd404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fd400:
    ctx->pc = 0x1FD408u;
}
