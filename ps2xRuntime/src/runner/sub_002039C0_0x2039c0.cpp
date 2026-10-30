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

// Function: sub_002039C0
// Address: 0x2039c0 - 0x203a58
void sub_002039C0_0x2039c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002039C0_0x2039c0");
#endif

    switch (ctx->pc) {
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        default: break;
    }

    ctx->pc = 0x2039c0u;

label_2039c0:
    // 0x2039c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2039c4:
    // 0x2039c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2039c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2039c8:
    // 0x2039c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2039c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2039cc:
    // 0x2039cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2039ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2039d0:
    // 0x2039d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2039d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2039d4:
    // 0x2039d4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2039d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2039d8:
    // 0x2039d8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2039d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2039dc:
    // 0x2039dc: 0x40f809  jalr        $v0
label_2039e0:
    if (ctx->pc == 0x2039E0u) {
        ctx->pc = 0x2039E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039DCu;
        // 0x2039e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039E4u;
        goto label_2039e4;
    }
    ctx->pc = 0x2039DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2039E4u);
        ctx->pc = 0x2039E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039DCu;
        // 0x2039e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2039DCu, 0x2039E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2039E4u;
label_2039e4:
    // 0x2039e4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_2039e8:
    if (ctx->pc == 0x2039E8u) {
        ctx->pc = 0x2039E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039E4u;
        // 0x2039e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039ECu;
        goto label_2039ec;
    }
    ctx->pc = 0x2039E4u;
    {
        const bool branch_taken_0x2039e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2039e4) {
            ctx->pc = 0x2039E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039E4u;
            // 0x2039e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A48u;
            goto label_203a48;
        }
    }
    ctx->pc = 0x2039ECu;
label_2039ec:
    // 0x2039ec: 0xc080ffa  jal         func_203FE8
label_2039f0:
    if (ctx->pc == 0x2039F0u) {
        ctx->pc = 0x2039F4u;
        goto label_2039f4;
    }
    ctx->pc = 0x2039ECu;
    SET_GPR_U32(ctx, 31, 0x2039F4u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x2039ECu, 0x2039F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2039F4u;
label_2039f4:
    // 0x2039f4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2039f8:
    if (ctx->pc == 0x2039F8u) {
        ctx->pc = 0x2039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2039F4u;
        // 0x2039f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2039FCu;
        goto label_2039fc;
    }
    ctx->pc = 0x2039F4u;
    {
        const bool branch_taken_0x2039f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2039f4) {
            ctx->pc = 0x2039F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2039F4u;
            // 0x2039f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203A48u;
            goto label_203a48;
        }
    }
    ctx->pc = 0x2039FCu;
label_2039fc:
    // 0x2039fc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x2039fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_203a00:
    // 0x203a00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203a04:
    // 0x203a04: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_203a08:
    // 0x203a08: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x203a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_203a0c:
    // 0x203a0c: 0x60f809  jalr        $v1
label_203a10:
    if (ctx->pc == 0x203A10u) {
        ctx->pc = 0x203A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A0Cu;
        // 0x203a10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A14u;
        goto label_203a14;
    }
    ctx->pc = 0x203A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203A14u);
        ctx->pc = 0x203A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A0Cu;
        // 0x203a10: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A0Cu, 0x203A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203A14u;
label_203a14:
    // 0x203a14: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x203a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_203a18:
    // 0x203a18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203a1c:
    // 0x203a1c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x203a1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_203a20:
    // 0x203a20: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x203a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_203a24:
    // 0x203a24: 0x60f809  jalr        $v1
label_203a28:
    if (ctx->pc == 0x203A28u) {
        ctx->pc = 0x203A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A24u;
        // 0x203a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A2Cu;
        goto label_203a2c;
    }
    ctx->pc = 0x203A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203A2Cu);
        ctx->pc = 0x203A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A24u;
        // 0x203a28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A24u, 0x203A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203A2Cu;
label_203a2c:
    // 0x203a2c: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x203a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_203a30:
    // 0x203a30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203a34:
    // 0x203a34: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_203a38:
    // 0x203a38: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x203a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_203a3c:
    // 0x203a3c: 0x60f809  jalr        $v1
label_203a40:
    if (ctx->pc == 0x203A40u) {
        ctx->pc = 0x203A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A3Cu;
        // 0x203a40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A44u;
        goto label_203a44;
    }
    ctx->pc = 0x203A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x203A44u);
        ctx->pc = 0x203A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A3Cu;
        // 0x203a40: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A3Cu, 0x203A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x203A44u;
label_203a44:
    // 0x203a44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203a48:
    // 0x203a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x203a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_203a4c:
    // 0x203a4c: 0x3e00008  jr          $ra
label_203a50:
    if (ctx->pc == 0x203A50u) {
        ctx->pc = 0x203A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A4Cu;
        // 0x203a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203A54u;
        goto label_203a54;
    }
    ctx->pc = 0x203A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203A4Cu;
        // 0x203a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203A54u;
label_203a54:
    // 0x203a54: 0x0  nop
    ctx->pc = 0x203a54u;
    // NOP
    ctx->pc = 0x203a58u;
}
