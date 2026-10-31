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

// Function: sub_002057C0
// Address: 0x2057c0 - 0x205818
void sub_002057C0_0x2057c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002057C0_0x2057c0");
#endif

    switch (ctx->pc) {
        case 0x2057c0u: goto label_2057c0;
        case 0x2057c4u: goto label_2057c4;
        case 0x2057c8u: goto label_2057c8;
        case 0x2057ccu: goto label_2057cc;
        case 0x2057d0u: goto label_2057d0;
        case 0x2057d4u: goto label_2057d4;
        case 0x2057d8u: goto label_2057d8;
        case 0x2057dcu: goto label_2057dc;
        case 0x2057e0u: goto label_2057e0;
        case 0x2057e4u: goto label_2057e4;
        case 0x2057e8u: goto label_2057e8;
        case 0x2057ecu: goto label_2057ec;
        case 0x2057f0u: goto label_2057f0;
        case 0x2057f4u: goto label_2057f4;
        case 0x2057f8u: goto label_2057f8;
        case 0x2057fcu: goto label_2057fc;
        case 0x205800u: goto label_205800;
        case 0x205804u: goto label_205804;
        case 0x205808u: goto label_205808;
        case 0x20580cu: goto label_20580c;
        case 0x205810u: goto label_205810;
        case 0x205814u: goto label_205814;
        default: break;
    }

    ctx->pc = 0x2057c0u;

label_2057c0:
    // 0x2057c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2057c4:
    // 0x2057c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2057c8:
    // 0x2057c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2057c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2057cc:
    // 0x2057cc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x2057ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_2057d0:
    // 0x2057d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2057d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2057d4:
    // 0x2057d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2057d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2057d8:
    // 0x2057d8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x2057d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_2057dc:
    // 0x2057dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2057dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2057e0:
    // 0x2057e0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2057e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2057e4:
    // 0x2057e4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x2057e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2057e8:
    // 0x2057e8: 0xa0f809  jalr        $a1
label_2057ec:
    if (ctx->pc == 0x2057ECu) {
        ctx->pc = 0x2057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E8u;
        // 0x2057ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2057F0u;
        goto label_2057f0;
    }
    ctx->pc = 0x2057E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2057F0u);
        ctx->pc = 0x2057ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057E8u;
        // 0x2057ec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057E8u, 0x2057F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2057F0u;
label_2057f0:
    // 0x2057f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2057f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2057f4:
    // 0x2057f4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2057f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2057f8:
    // 0x2057f8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2057f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2057fc:
    // 0x2057fc: 0x60f809  jalr        $v1
label_205800:
    if (ctx->pc == 0x205800u) {
        ctx->pc = 0x205800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057FCu;
        // 0x205800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205804u;
        goto label_205804;
    }
    ctx->pc = 0x2057FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x205804u);
        ctx->pc = 0x205800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057FCu;
        // 0x205800: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057FCu, 0x205804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x205804u;
label_205804:
    // 0x205804: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x205804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_205808:
    // 0x205808: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x205808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20580c:
    // 0x20580c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20580cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205810:
    // 0x205810: 0x3e00008  jr          $ra
label_205814:
    if (ctx->pc == 0x205814u) {
        ctx->pc = 0x205814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205810u;
        // 0x205814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205818u;
        goto label_fallthrough_0x205810;
    }
    ctx->pc = 0x205810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205810u;
        // 0x205814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x205810:
    ctx->pc = 0x205818u;
}
