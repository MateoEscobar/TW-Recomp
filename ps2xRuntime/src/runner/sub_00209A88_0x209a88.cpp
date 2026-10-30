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

// Function: sub_00209A88
// Address: 0x209a88 - 0x209b20
void sub_00209A88_0x209a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A88_0x209a88");
#endif

    switch (ctx->pc) {
        case 0x209a88u: goto label_209a88;
        case 0x209a8cu: goto label_209a8c;
        case 0x209a90u: goto label_209a90;
        case 0x209a94u: goto label_209a94;
        case 0x209a98u: goto label_209a98;
        case 0x209a9cu: goto label_209a9c;
        case 0x209aa0u: goto label_209aa0;
        case 0x209aa4u: goto label_209aa4;
        case 0x209aa8u: goto label_209aa8;
        case 0x209aacu: goto label_209aac;
        case 0x209ab0u: goto label_209ab0;
        case 0x209ab4u: goto label_209ab4;
        case 0x209ab8u: goto label_209ab8;
        case 0x209abcu: goto label_209abc;
        case 0x209ac0u: goto label_209ac0;
        case 0x209ac4u: goto label_209ac4;
        case 0x209ac8u: goto label_209ac8;
        case 0x209accu: goto label_209acc;
        case 0x209ad0u: goto label_209ad0;
        case 0x209ad4u: goto label_209ad4;
        case 0x209ad8u: goto label_209ad8;
        case 0x209adcu: goto label_209adc;
        case 0x209ae0u: goto label_209ae0;
        case 0x209ae4u: goto label_209ae4;
        case 0x209ae8u: goto label_209ae8;
        case 0x209aecu: goto label_209aec;
        case 0x209af0u: goto label_209af0;
        case 0x209af4u: goto label_209af4;
        case 0x209af8u: goto label_209af8;
        case 0x209afcu: goto label_209afc;
        case 0x209b00u: goto label_209b00;
        case 0x209b04u: goto label_209b04;
        case 0x209b08u: goto label_209b08;
        case 0x209b0cu: goto label_209b0c;
        case 0x209b10u: goto label_209b10;
        case 0x209b14u: goto label_209b14;
        case 0x209b18u: goto label_209b18;
        case 0x209b1cu: goto label_209b1c;
        default: break;
    }

    ctx->pc = 0x209a88u;

label_209a88:
    // 0x209a88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_209a8c:
    // 0x209a8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_209a90:
    // 0x209a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_209a94:
    // 0x209a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209a98:
    // 0x209a98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_209a9c:
    // 0x209a9c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x209a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_209aa0:
    // 0x209aa0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x209aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_209aa4:
    // 0x209aa4: 0x40f809  jalr        $v0
label_209aa8:
    if (ctx->pc == 0x209AA8u) {
        ctx->pc = 0x209AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AA4u;
        // 0x209aa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AACu;
        goto label_209aac;
    }
    ctx->pc = 0x209AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209AACu);
        ctx->pc = 0x209AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AA4u;
        // 0x209aa8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AA4u, 0x209AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209AACu;
label_209aac:
    // 0x209aac: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_209ab0:
    if (ctx->pc == 0x209AB0u) {
        ctx->pc = 0x209AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AACu;
        // 0x209ab0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AB4u;
        goto label_209ab4;
    }
    ctx->pc = 0x209AACu;
    {
        const bool branch_taken_0x209aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209aac) {
            ctx->pc = 0x209AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209AACu;
            // 0x209ab0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B10u;
            goto label_209b10;
        }
    }
    ctx->pc = 0x209AB4u;
label_209ab4:
    // 0x209ab4: 0xc080ffa  jal         func_203FE8
label_209ab8:
    if (ctx->pc == 0x209AB8u) {
        ctx->pc = 0x209ABCu;
        goto label_209abc;
    }
    ctx->pc = 0x209AB4u;
    SET_GPR_U32(ctx, 31, 0x209ABCu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x209AB4u, 0x209ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209ABCu;
label_209abc:
    // 0x209abc: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_209ac0:
    if (ctx->pc == 0x209AC0u) {
        ctx->pc = 0x209AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209ABCu;
        // 0x209ac0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AC4u;
        goto label_209ac4;
    }
    ctx->pc = 0x209ABCu;
    {
        const bool branch_taken_0x209abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209abc) {
            ctx->pc = 0x209AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209ABCu;
            // 0x209ac0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209B10u;
            goto label_209b10;
        }
    }
    ctx->pc = 0x209AC4u;
label_209ac4:
    // 0x209ac4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x209ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_209ac8:
    // 0x209ac8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209acc:
    // 0x209acc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x209accu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_209ad0:
    // 0x209ad0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x209ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_209ad4:
    // 0x209ad4: 0x60f809  jalr        $v1
label_209ad8:
    if (ctx->pc == 0x209AD8u) {
        ctx->pc = 0x209AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AD4u;
        // 0x209ad8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209ADCu;
        goto label_209adc;
    }
    ctx->pc = 0x209AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209ADCu);
        ctx->pc = 0x209AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AD4u;
        // 0x209ad8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AD4u, 0x209ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209ADCu;
label_209adc:
    // 0x209adc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x209adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_209ae0:
    // 0x209ae0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209ae4:
    // 0x209ae4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x209ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_209ae8:
    // 0x209ae8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_209aec:
    // 0x209aec: 0x60f809  jalr        $v1
label_209af0:
    if (ctx->pc == 0x209AF0u) {
        ctx->pc = 0x209AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AECu;
        // 0x209af0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209AF4u;
        goto label_209af4;
    }
    ctx->pc = 0x209AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209AF4u);
        ctx->pc = 0x209AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209AECu;
        // 0x209af0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209AECu, 0x209AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209AF4u;
label_209af4:
    // 0x209af4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x209af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_209af8:
    // 0x209af8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x209af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_209afc:
    // 0x209afc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x209afcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_209b00:
    // 0x209b00: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_209b04:
    // 0x209b04: 0x60f809  jalr        $v1
label_209b08:
    if (ctx->pc == 0x209B08u) {
        ctx->pc = 0x209B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B04u;
        // 0x209b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B0Cu;
        goto label_209b0c;
    }
    ctx->pc = 0x209B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209B0Cu);
        ctx->pc = 0x209B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B04u;
        // 0x209b08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B04u, 0x209B0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209B0Cu;
label_209b0c:
    // 0x209b0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209b10:
    // 0x209b10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209b14:
    // 0x209b14: 0x3e00008  jr          $ra
label_209b18:
    if (ctx->pc == 0x209B18u) {
        ctx->pc = 0x209B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B14u;
        // 0x209b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209B1Cu;
        goto label_209b1c;
    }
    ctx->pc = 0x209B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209B14u;
        // 0x209b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209B1Cu;
label_209b1c:
    // 0x209b1c: 0x0  nop
    ctx->pc = 0x209b1cu;
    // NOP
    ctx->pc = 0x209b20u;
}
