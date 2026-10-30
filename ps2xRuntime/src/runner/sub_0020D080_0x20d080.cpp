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

// Function: sub_0020D080
// Address: 0x20d080 - 0x20d118
void sub_0020D080_0x20d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D080_0x20d080");
#endif

    switch (ctx->pc) {
        case 0x20d080u: goto label_20d080;
        case 0x20d084u: goto label_20d084;
        case 0x20d088u: goto label_20d088;
        case 0x20d08cu: goto label_20d08c;
        case 0x20d090u: goto label_20d090;
        case 0x20d094u: goto label_20d094;
        case 0x20d098u: goto label_20d098;
        case 0x20d09cu: goto label_20d09c;
        case 0x20d0a0u: goto label_20d0a0;
        case 0x20d0a4u: goto label_20d0a4;
        case 0x20d0a8u: goto label_20d0a8;
        case 0x20d0acu: goto label_20d0ac;
        case 0x20d0b0u: goto label_20d0b0;
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0b8u: goto label_20d0b8;
        case 0x20d0bcu: goto label_20d0bc;
        case 0x20d0c0u: goto label_20d0c0;
        case 0x20d0c4u: goto label_20d0c4;
        case 0x20d0c8u: goto label_20d0c8;
        case 0x20d0ccu: goto label_20d0cc;
        case 0x20d0d0u: goto label_20d0d0;
        case 0x20d0d4u: goto label_20d0d4;
        case 0x20d0d8u: goto label_20d0d8;
        case 0x20d0dcu: goto label_20d0dc;
        case 0x20d0e0u: goto label_20d0e0;
        case 0x20d0e4u: goto label_20d0e4;
        case 0x20d0e8u: goto label_20d0e8;
        case 0x20d0ecu: goto label_20d0ec;
        case 0x20d0f0u: goto label_20d0f0;
        case 0x20d0f4u: goto label_20d0f4;
        case 0x20d0f8u: goto label_20d0f8;
        case 0x20d0fcu: goto label_20d0fc;
        case 0x20d100u: goto label_20d100;
        case 0x20d104u: goto label_20d104;
        case 0x20d108u: goto label_20d108;
        case 0x20d10cu: goto label_20d10c;
        case 0x20d110u: goto label_20d110;
        case 0x20d114u: goto label_20d114;
        default: break;
    }

    ctx->pc = 0x20d080u;

label_20d080:
    // 0x20d080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20d080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20d084:
    // 0x20d084: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20d088:
    // 0x20d088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20d08c:
    // 0x20d08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20d090:
    // 0x20d090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20d090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20d094:
    // 0x20d094: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20d094u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20d098:
    // 0x20d098: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20d09c:
    // 0x20d09c: 0x40f809  jalr        $v0
label_20d0a0:
    if (ctx->pc == 0x20D0A0u) {
        ctx->pc = 0x20D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D09Cu;
        // 0x20d0a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0A4u;
        goto label_20d0a4;
    }
    ctx->pc = 0x20D09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20D0A4u);
        ctx->pc = 0x20D0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D09Cu;
        // 0x20d0a0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D09Cu, 0x20D0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D0A4u;
label_20d0a4:
    // 0x20d0a4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_20d0a8:
    if (ctx->pc == 0x20D0A8u) {
        ctx->pc = 0x20D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0A4u;
        // 0x20d0a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0ACu;
        goto label_20d0ac;
    }
    ctx->pc = 0x20D0A4u;
    {
        const bool branch_taken_0x20d0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d0a4) {
            ctx->pc = 0x20D0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D0A4u;
            // 0x20d0a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D108u;
            goto label_20d108;
        }
    }
    ctx->pc = 0x20D0ACu;
label_20d0ac:
    // 0x20d0ac: 0xc080ffa  jal         func_203FE8
label_20d0b0:
    if (ctx->pc == 0x20D0B0u) {
        ctx->pc = 0x20D0B4u;
        goto label_20d0b4;
    }
    ctx->pc = 0x20D0ACu;
    SET_GPR_U32(ctx, 31, 0x20D0B4u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20D0ACu, 0x20D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0B4u;
label_20d0b4:
    // 0x20d0b4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_20d0b8:
    if (ctx->pc == 0x20D0B8u) {
        ctx->pc = 0x20D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0B4u;
        // 0x20d0b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0BCu;
        goto label_20d0bc;
    }
    ctx->pc = 0x20D0B4u;
    {
        const bool branch_taken_0x20d0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d0b4) {
            ctx->pc = 0x20D0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D0B4u;
            // 0x20d0b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D108u;
            goto label_20d108;
        }
    }
    ctx->pc = 0x20D0BCu;
label_20d0bc:
    // 0x20d0bc: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20d0c0:
    // 0x20d0c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d0c4:
    // 0x20d0c4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20d0c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20d0c8:
    // 0x20d0c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20d0cc:
    // 0x20d0cc: 0x60f809  jalr        $v1
label_20d0d0:
    if (ctx->pc == 0x20D0D0u) {
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0D4u;
        goto label_20d0d4;
    }
    ctx->pc = 0x20D0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D0D4u);
        ctx->pc = 0x20D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0CCu;
        // 0x20d0d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D0CCu, 0x20D0D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D0D4u;
label_20d0d4:
    // 0x20d0d4: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20d0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20d0d8:
    // 0x20d0d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d0dc:
    // 0x20d0dc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20d0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20d0e0:
    // 0x20d0e0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20d0e4:
    // 0x20d0e4: 0x60f809  jalr        $v1
label_20d0e8:
    if (ctx->pc == 0x20D0E8u) {
        ctx->pc = 0x20D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0E4u;
        // 0x20d0e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D0ECu;
        goto label_20d0ec;
    }
    ctx->pc = 0x20D0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D0ECu);
        ctx->pc = 0x20D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0E4u;
        // 0x20d0e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D0E4u, 0x20D0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D0ECu;
label_20d0ec:
    // 0x20d0ec: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20d0f0:
    // 0x20d0f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20d0f4:
    // 0x20d0f4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20d0f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20d0f8:
    // 0x20d0f8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20d0fc:
    // 0x20d0fc: 0x60f809  jalr        $v1
label_20d100:
    if (ctx->pc == 0x20D100u) {
        ctx->pc = 0x20D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0FCu;
        // 0x20d100: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D104u;
        goto label_20d104;
    }
    ctx->pc = 0x20D0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20D104u);
        ctx->pc = 0x20D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0FCu;
        // 0x20d100: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D0FCu, 0x20D104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20D104u;
label_20d104:
    // 0x20d104: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20d104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20d108:
    // 0x20d108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20d10c:
    // 0x20d10c: 0x3e00008  jr          $ra
label_20d110:
    if (ctx->pc == 0x20D110u) {
        ctx->pc = 0x20D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D10Cu;
        // 0x20d110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20D114u;
        goto label_20d114;
    }
    ctx->pc = 0x20D10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D10Cu;
        // 0x20d110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D114u;
label_20d114:
    // 0x20d114: 0x0  nop
    ctx->pc = 0x20d114u;
    // NOP
    ctx->pc = 0x20d118u;
}
