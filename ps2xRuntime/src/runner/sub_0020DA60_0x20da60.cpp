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

// Function: sub_0020DA60
// Address: 0x20da60 - 0x20daf8
void sub_0020DA60_0x20da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA60_0x20da60");
#endif

    switch (ctx->pc) {
        case 0x20da60u: goto label_20da60;
        case 0x20da64u: goto label_20da64;
        case 0x20da68u: goto label_20da68;
        case 0x20da6cu: goto label_20da6c;
        case 0x20da70u: goto label_20da70;
        case 0x20da74u: goto label_20da74;
        case 0x20da78u: goto label_20da78;
        case 0x20da7cu: goto label_20da7c;
        case 0x20da80u: goto label_20da80;
        case 0x20da84u: goto label_20da84;
        case 0x20da88u: goto label_20da88;
        case 0x20da8cu: goto label_20da8c;
        case 0x20da90u: goto label_20da90;
        case 0x20da94u: goto label_20da94;
        case 0x20da98u: goto label_20da98;
        case 0x20da9cu: goto label_20da9c;
        case 0x20daa0u: goto label_20daa0;
        case 0x20daa4u: goto label_20daa4;
        case 0x20daa8u: goto label_20daa8;
        case 0x20daacu: goto label_20daac;
        case 0x20dab0u: goto label_20dab0;
        case 0x20dab4u: goto label_20dab4;
        case 0x20dab8u: goto label_20dab8;
        case 0x20dabcu: goto label_20dabc;
        case 0x20dac0u: goto label_20dac0;
        case 0x20dac4u: goto label_20dac4;
        case 0x20dac8u: goto label_20dac8;
        case 0x20daccu: goto label_20dacc;
        case 0x20dad0u: goto label_20dad0;
        case 0x20dad4u: goto label_20dad4;
        case 0x20dad8u: goto label_20dad8;
        case 0x20dadcu: goto label_20dadc;
        case 0x20dae0u: goto label_20dae0;
        case 0x20dae4u: goto label_20dae4;
        case 0x20dae8u: goto label_20dae8;
        case 0x20daecu: goto label_20daec;
        case 0x20daf0u: goto label_20daf0;
        case 0x20daf4u: goto label_20daf4;
        default: break;
    }

    ctx->pc = 0x20da60u;

label_20da60:
    // 0x20da60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20da64:
    // 0x20da64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20da64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20da68:
    // 0x20da68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20da6c:
    // 0x20da6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20da6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20da70:
    // 0x20da70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20da74:
    // 0x20da74: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20da74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20da78:
    // 0x20da78: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20da7c:
    // 0x20da7c: 0x40f809  jalr        $v0
label_20da80:
    if (ctx->pc == 0x20DA80u) {
        ctx->pc = 0x20DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA7Cu;
        // 0x20da80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA84u;
        goto label_20da84;
    }
    ctx->pc = 0x20DA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DA84u);
        ctx->pc = 0x20DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA7Cu;
        // 0x20da80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA7Cu, 0x20DA84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA84u;
label_20da84:
    // 0x20da84: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_20da88:
    if (ctx->pc == 0x20DA88u) {
        ctx->pc = 0x20DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA84u;
        // 0x20da88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA8Cu;
        goto label_20da8c;
    }
    ctx->pc = 0x20DA84u;
    {
        const bool branch_taken_0x20da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20da84) {
            ctx->pc = 0x20DA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA84u;
            // 0x20da88: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAE8u;
            goto label_20dae8;
        }
    }
    ctx->pc = 0x20DA8Cu;
label_20da8c:
    // 0x20da8c: 0xc080ffa  jal         func_203FE8
label_20da90:
    if (ctx->pc == 0x20DA90u) {
        ctx->pc = 0x20DA94u;
        goto label_20da94;
    }
    ctx->pc = 0x20DA8Cu;
    SET_GPR_U32(ctx, 31, 0x20DA94u);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x20DA8Cu, 0x20DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DA94u;
label_20da94:
    // 0x20da94: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_20da98:
    if (ctx->pc == 0x20DA98u) {
        ctx->pc = 0x20DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA94u;
        // 0x20da98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA9Cu;
        goto label_20da9c;
    }
    ctx->pc = 0x20DA94u;
    {
        const bool branch_taken_0x20da94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20da94) {
            ctx->pc = 0x20DA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20DA94u;
            // 0x20da98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20DAE8u;
            goto label_20dae8;
        }
    }
    ctx->pc = 0x20DA9Cu;
label_20da9c:
    // 0x20da9c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20da9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20daa0:
    // 0x20daa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20daa4:
    // 0x20daa4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20daa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20daa8:
    // 0x20daa8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20daac:
    // 0x20daac: 0x60f809  jalr        $v1
label_20dab0:
    if (ctx->pc == 0x20DAB0u) {
        ctx->pc = 0x20DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAACu;
        // 0x20dab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAB4u;
        goto label_20dab4;
    }
    ctx->pc = 0x20DAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DAB4u);
        ctx->pc = 0x20DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAACu;
        // 0x20dab0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAACu, 0x20DAB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DAB4u;
label_20dab4:
    // 0x20dab4: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20dab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20dab8:
    // 0x20dab8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20dabc:
    // 0x20dabc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20dabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20dac0:
    // 0x20dac0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20dac4:
    // 0x20dac4: 0x60f809  jalr        $v1
label_20dac8:
    if (ctx->pc == 0x20DAC8u) {
        ctx->pc = 0x20DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAC4u;
        // 0x20dac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DACCu;
        goto label_20dacc;
    }
    ctx->pc = 0x20DAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DACCu);
        ctx->pc = 0x20DAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAC4u;
        // 0x20dac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAC4u, 0x20DACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DACCu;
label_20dacc:
    // 0x20dacc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20daccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20dad0:
    // 0x20dad0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20dad4:
    // 0x20dad4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20dad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20dad8:
    // 0x20dad8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x20dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_20dadc:
    // 0x20dadc: 0x60f809  jalr        $v1
label_20dae0:
    if (ctx->pc == 0x20DAE0u) {
        ctx->pc = 0x20DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DADCu;
        // 0x20dae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAE4u;
        goto label_20dae4;
    }
    ctx->pc = 0x20DADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20DAE4u);
        ctx->pc = 0x20DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DADCu;
        // 0x20dae0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DADCu, 0x20DAE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DAE4u;
label_20dae4:
    // 0x20dae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20dae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20dae8:
    // 0x20dae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20daec:
    // 0x20daec: 0x3e00008  jr          $ra
label_20daf0:
    if (ctx->pc == 0x20DAF0u) {
        ctx->pc = 0x20DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAECu;
        // 0x20daf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DAF4u;
        goto label_20daf4;
    }
    ctx->pc = 0x20DAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DAECu;
        // 0x20daf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DAF4u;
label_20daf4:
    // 0x20daf4: 0x0  nop
    ctx->pc = 0x20daf4u;
    // NOP
    ctx->pc = 0x20daf8u;
}
