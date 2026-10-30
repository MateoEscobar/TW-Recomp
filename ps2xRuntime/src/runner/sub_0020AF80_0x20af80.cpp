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

// Function: sub_0020AF80
// Address: 0x20af80 - 0x20b020
void sub_0020AF80_0x20af80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AF80_0x20af80");
#endif

    switch (ctx->pc) {
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        default: break;
    }

    ctx->pc = 0x20af80u;

label_20af80:
    // 0x20af80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20af80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20af84:
    // 0x20af84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20af88:
    // 0x20af88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20af8c:
    // 0x20af8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20af8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20af90:
    // 0x20af90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20af94:
    // 0x20af94: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20af98:
    // 0x20af98: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20af9c:
    // 0x20af9c: 0x40f809  jalr        $v0
label_20afa0:
    if (ctx->pc == 0x20AFA0u) {
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFA4u;
        goto label_20afa4;
    }
    ctx->pc = 0x20AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFA4u);
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF9Cu, 0x20AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20afa8:
    if (ctx->pc == 0x20AFA8u) {
        ctx->pc = 0x20AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFA4u;
        // 0x20afa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFACu;
        goto label_20afac;
    }
    ctx->pc = 0x20AFA4u;
    {
        const bool branch_taken_0x20afa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afa4) {
            ctx->pc = 0x20AFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFA4u;
            // 0x20afa8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B014u;
            goto label_20b014;
        }
    }
    ctx->pc = 0x20AFACu;
label_20afac:
    // 0x20afac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20afacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20afb0:
    // 0x20afb0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20afb4:
    // 0x20afb4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20afb8:
    // 0x20afb8: 0x40f809  jalr        $v0
label_20afbc:
    if (ctx->pc == 0x20AFBCu) {
        ctx->pc = 0x20AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB8u;
        // 0x20afbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFC0u;
        goto label_20afc0;
    }
    ctx->pc = 0x20AFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AFC0u);
        ctx->pc = 0x20AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFB8u;
        // 0x20afbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFB8u, 0x20AFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFC0u;
label_20afc0:
    // 0x20afc0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20afc4:
    if (ctx->pc == 0x20AFC4u) {
        ctx->pc = 0x20AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFC0u;
        // 0x20afc4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFC8u;
        goto label_20afc8;
    }
    ctx->pc = 0x20AFC0u;
    {
        const bool branch_taken_0x20afc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afc0) {
            ctx->pc = 0x20AFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20AFC0u;
            // 0x20afc4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B014u;
            goto label_20b014;
        }
    }
    ctx->pc = 0x20AFC8u;
label_20afc8:
    // 0x20afc8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20afc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20afcc:
    // 0x20afcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20afccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20afd0:
    // 0x20afd0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20afd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20afd4:
    // 0x20afd4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20afd8:
    // 0x20afd8: 0x60f809  jalr        $v1
label_20afdc:
    if (ctx->pc == 0x20AFDCu) {
        ctx->pc = 0x20AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD8u;
        // 0x20afdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFE0u;
        goto label_20afe0;
    }
    ctx->pc = 0x20AFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AFE0u);
        ctx->pc = 0x20AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFD8u;
        // 0x20afdc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFD8u, 0x20AFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFE0u;
label_20afe0:
    // 0x20afe0: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x20afe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20afe4:
    // 0x20afe4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20afe8:
    // 0x20afe8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20afe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20afec:
    // 0x20afec: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20afecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20aff0:
    // 0x20aff0: 0x60f809  jalr        $v1
label_20aff4:
    if (ctx->pc == 0x20AFF4u) {
        ctx->pc = 0x20AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFF0u;
        // 0x20aff4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFF8u;
        goto label_20aff8;
    }
    ctx->pc = 0x20AFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20AFF8u);
        ctx->pc = 0x20AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFF0u;
        // 0x20aff4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFF0u, 0x20AFF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AFF8u;
label_20aff8:
    // 0x20aff8: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x20aff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_20affc:
    // 0x20affc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b000:
    // 0x20b000: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20b004:
    // 0x20b004: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20b008:
    // 0x20b008: 0x60f809  jalr        $v1
label_20b00c:
    if (ctx->pc == 0x20B00Cu) {
        ctx->pc = 0x20B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B008u;
        // 0x20b00c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B010u;
        goto label_20b010;
    }
    ctx->pc = 0x20B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20B010u);
        ctx->pc = 0x20B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B008u;
        // 0x20b00c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B008u, 0x20B010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B010u;
label_20b010:
    // 0x20b010: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b014:
    // 0x20b014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b018:
    // 0x20b018: 0x3e00008  jr          $ra
label_20b01c:
    if (ctx->pc == 0x20B01Cu) {
        ctx->pc = 0x20B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B018u;
        // 0x20b01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B020u;
        goto label_fallthrough_0x20b018;
    }
    ctx->pc = 0x20B018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B018u;
        // 0x20b01c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b018:
    ctx->pc = 0x20B020u;
}
