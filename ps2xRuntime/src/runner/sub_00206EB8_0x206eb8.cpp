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

// Function: sub_00206EB8
// Address: 0x206eb8 - 0x206f50
void sub_00206EB8_0x206eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206EB8_0x206eb8");
#endif

    switch (ctx->pc) {
        case 0x206eb8u: goto label_206eb8;
        case 0x206ebcu: goto label_206ebc;
        case 0x206ec0u: goto label_206ec0;
        case 0x206ec4u: goto label_206ec4;
        case 0x206ec8u: goto label_206ec8;
        case 0x206eccu: goto label_206ecc;
        case 0x206ed0u: goto label_206ed0;
        case 0x206ed4u: goto label_206ed4;
        case 0x206ed8u: goto label_206ed8;
        case 0x206edcu: goto label_206edc;
        case 0x206ee0u: goto label_206ee0;
        case 0x206ee4u: goto label_206ee4;
        case 0x206ee8u: goto label_206ee8;
        case 0x206eecu: goto label_206eec;
        case 0x206ef0u: goto label_206ef0;
        case 0x206ef4u: goto label_206ef4;
        case 0x206ef8u: goto label_206ef8;
        case 0x206efcu: goto label_206efc;
        case 0x206f00u: goto label_206f00;
        case 0x206f04u: goto label_206f04;
        case 0x206f08u: goto label_206f08;
        case 0x206f0cu: goto label_206f0c;
        case 0x206f10u: goto label_206f10;
        case 0x206f14u: goto label_206f14;
        case 0x206f18u: goto label_206f18;
        case 0x206f1cu: goto label_206f1c;
        case 0x206f20u: goto label_206f20;
        case 0x206f24u: goto label_206f24;
        case 0x206f28u: goto label_206f28;
        case 0x206f2cu: goto label_206f2c;
        case 0x206f30u: goto label_206f30;
        case 0x206f34u: goto label_206f34;
        case 0x206f38u: goto label_206f38;
        case 0x206f3cu: goto label_206f3c;
        case 0x206f40u: goto label_206f40;
        case 0x206f44u: goto label_206f44;
        case 0x206f48u: goto label_206f48;
        case 0x206f4cu: goto label_206f4c;
        default: break;
    }

    ctx->pc = 0x206eb8u;

label_206eb8:
    // 0x206eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_206ebc:
    // 0x206ebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_206ec0:
    // 0x206ec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206ec4:
    // 0x206ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206ec8:
    // 0x206ec8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206ecc:
    // 0x206ecc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x206eccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_206ed0:
    // 0x206ed0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x206ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206ed4:
    // 0x206ed4: 0x40f809  jalr        $v0
label_206ed8:
    if (ctx->pc == 0x206ED8u) {
        ctx->pc = 0x206ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ED4u;
        // 0x206ed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EDCu;
        goto label_206edc;
    }
    ctx->pc = 0x206ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206EDCu);
        ctx->pc = 0x206ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206ED4u;
        // 0x206ed8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206ED4u, 0x206EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206EDCu;
label_206edc:
    // 0x206edc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_206ee0:
    if (ctx->pc == 0x206EE0u) {
        ctx->pc = 0x206EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EDCu;
        // 0x206ee0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EE4u;
        goto label_206ee4;
    }
    ctx->pc = 0x206EDCu;
    {
        const bool branch_taken_0x206edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206edc) {
            ctx->pc = 0x206EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EDCu;
            // 0x206ee0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F40u;
            goto label_206f40;
        }
    }
    ctx->pc = 0x206EE4u;
label_206ee4:
    // 0x206ee4: 0xc080ffa  jal         func_203FE8
label_206ee8:
    if (ctx->pc == 0x206EE8u) {
        ctx->pc = 0x206EECu;
        goto label_206eec;
    }
    ctx->pc = 0x206EE4u;
    SET_GPR_U32(ctx, 31, 0x206EECu);
    ctx->pc = 0x203FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE8u, 0x206EE4u, 0x206EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206EECu;
label_206eec:
    // 0x206eec: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_206ef0:
    if (ctx->pc == 0x206EF0u) {
        ctx->pc = 0x206EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EECu;
        // 0x206ef0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206EF4u;
        goto label_206ef4;
    }
    ctx->pc = 0x206EECu;
    {
        const bool branch_taken_0x206eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206eec) {
            ctx->pc = 0x206EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206EECu;
            // 0x206ef0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206F40u;
            goto label_206f40;
        }
    }
    ctx->pc = 0x206EF4u;
label_206ef4:
    // 0x206ef4: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x206ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_206ef8:
    // 0x206ef8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206efc:
    // 0x206efc: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x206efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_206f00:
    // 0x206f00: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_206f04:
    // 0x206f04: 0x60f809  jalr        $v1
label_206f08:
    if (ctx->pc == 0x206F08u) {
        ctx->pc = 0x206F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F04u;
        // 0x206f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F0Cu;
        goto label_206f0c;
    }
    ctx->pc = 0x206F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206F0Cu);
        ctx->pc = 0x206F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F04u;
        // 0x206f08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F04u, 0x206F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206F0Cu;
label_206f0c:
    // 0x206f0c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x206f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_206f10:
    // 0x206f10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206f14:
    // 0x206f14: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x206f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_206f18:
    // 0x206f18: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x206f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_206f1c:
    // 0x206f1c: 0x60f809  jalr        $v1
label_206f20:
    if (ctx->pc == 0x206F20u) {
        ctx->pc = 0x206F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F1Cu;
        // 0x206f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F24u;
        goto label_206f24;
    }
    ctx->pc = 0x206F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206F24u);
        ctx->pc = 0x206F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F1Cu;
        // 0x206f20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F1Cu, 0x206F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206F24u;
label_206f24:
    // 0x206f24: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x206f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_206f28:
    // 0x206f28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206f2c:
    // 0x206f2c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x206f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_206f30:
    // 0x206f30: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x206f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_206f34:
    // 0x206f34: 0x60f809  jalr        $v1
label_206f38:
    if (ctx->pc == 0x206F38u) {
        ctx->pc = 0x206F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F34u;
        // 0x206f38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F3Cu;
        goto label_206f3c;
    }
    ctx->pc = 0x206F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206F3Cu);
        ctx->pc = 0x206F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F34u;
        // 0x206f38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F34u, 0x206F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206F3Cu;
label_206f3c:
    // 0x206f3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206f40:
    // 0x206f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206f44:
    // 0x206f44: 0x3e00008  jr          $ra
label_206f48:
    if (ctx->pc == 0x206F48u) {
        ctx->pc = 0x206F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F44u;
        // 0x206f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206F4Cu;
        goto label_206f4c;
    }
    ctx->pc = 0x206F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F44u;
        // 0x206f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206F4Cu;
label_206f4c:
    // 0x206f4c: 0x0  nop
    ctx->pc = 0x206f4cu;
    // NOP
    ctx->pc = 0x206f50u;
}
