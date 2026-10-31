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

// Function: sub_003C87A0
// Address: 0x3c87a0 - 0x3c8808
void sub_003C87A0_0x3c87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C87A0_0x3c87a0");
#endif

    switch (ctx->pc) {
        case 0x3c87a0u: goto label_3c87a0;
        case 0x3c87a4u: goto label_3c87a4;
        case 0x3c87a8u: goto label_3c87a8;
        case 0x3c87acu: goto label_3c87ac;
        case 0x3c87b0u: goto label_3c87b0;
        case 0x3c87b4u: goto label_3c87b4;
        case 0x3c87b8u: goto label_3c87b8;
        case 0x3c87bcu: goto label_3c87bc;
        case 0x3c87c0u: goto label_3c87c0;
        case 0x3c87c4u: goto label_3c87c4;
        case 0x3c87c8u: goto label_3c87c8;
        case 0x3c87ccu: goto label_3c87cc;
        case 0x3c87d0u: goto label_3c87d0;
        case 0x3c87d4u: goto label_3c87d4;
        case 0x3c87d8u: goto label_3c87d8;
        case 0x3c87dcu: goto label_3c87dc;
        case 0x3c87e0u: goto label_3c87e0;
        case 0x3c87e4u: goto label_3c87e4;
        case 0x3c87e8u: goto label_3c87e8;
        case 0x3c87ecu: goto label_3c87ec;
        case 0x3c87f0u: goto label_3c87f0;
        case 0x3c87f4u: goto label_3c87f4;
        case 0x3c87f8u: goto label_3c87f8;
        case 0x3c87fcu: goto label_3c87fc;
        case 0x3c8800u: goto label_3c8800;
        case 0x3c8804u: goto label_3c8804;
        default: break;
    }

    ctx->pc = 0x3c87a0u;

label_3c87a0:
    // 0x3c87a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c87a4:
    // 0x3c87a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c87a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c87a8:
    // 0x3c87a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c87a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c87ac:
    // 0x3c87ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c87acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c87b0:
    // 0x3c87b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c87b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c87b4:
    // 0x3c87b4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c87b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c87b8:
    // 0x3c87b8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c87bc:
    // 0x3c87bc: 0x40f809  jalr        $v0
label_3c87c0:
    if (ctx->pc == 0x3C87C0u) {
        ctx->pc = 0x3C87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87BCu;
        // 0x3c87c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87C4u;
        goto label_3c87c4;
    }
    ctx->pc = 0x3C87BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C87C4u);
        ctx->pc = 0x3C87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87BCu;
        // 0x3c87c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C87BCu, 0x3C87C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C87C4u;
label_3c87c4:
    // 0x3c87c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c87c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c87c8:
    // 0x3c87c8: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x3c87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3c87cc:
    // 0x3c87cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3c87ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c87d0:
    // 0x3c87d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c87d4:
    // 0x3c87d4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3c87d8:
    if (ctx->pc == 0x3C87D8u) {
        ctx->pc = 0x3C87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87D4u;
        // 0x3c87d8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87DCu;
        goto label_3c87dc;
    }
    ctx->pc = 0x3C87D4u;
    {
        const bool branch_taken_0x3c87d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87D4u;
        // 0x3c87d8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87d4) {
            ctx->pc = 0x3C87E0u;
            goto label_3c87e0;
        }
    }
    ctx->pc = 0x3C87DCu;
label_3c87dc:
    // 0x3c87dc: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3c87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3c87e0:
    // 0x3c87e0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3c87e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3c87e4:
    // 0x3c87e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c87e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c87e8:
    // 0x3c87e8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3c87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3c87ec:
    // 0x3c87ec: 0xc0e6ec6  jal         func_39BB18
label_3c87f0:
    if (ctx->pc == 0x3C87F0u) {
        ctx->pc = 0x3C87F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87ECu;
        // 0x3c87f0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87F4u;
        goto label_3c87f4;
    }
    ctx->pc = 0x3C87ECu;
    SET_GPR_U32(ctx, 31, 0x3C87F4u);
    ctx->pc = 0x3C87F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87ECu;
    // 0x3c87f0: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3C87ECu, 0x3C87F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87F4u;
label_3c87f4:
    // 0x3c87f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c87f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c87f8:
    // 0x3c87f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c87f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c87fc:
    // 0x3c87fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c87fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8800:
    // 0x3c8800: 0x3e00008  jr          $ra
label_3c8804:
    if (ctx->pc == 0x3C8804u) {
        ctx->pc = 0x3C8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8800u;
        // 0x3c8804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8808u;
        goto label_fallthrough_0x3c8800;
    }
    ctx->pc = 0x3C8800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8800u;
        // 0x3c8804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8800:
    ctx->pc = 0x3C8808u;
}
