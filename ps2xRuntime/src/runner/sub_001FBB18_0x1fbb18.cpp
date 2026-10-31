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

// Function: sub_001FBB18
// Address: 0x1fbb18 - 0x1fbbc8
void sub_001FBB18_0x1fbb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBB18_0x1fbb18");
#endif

    switch (ctx->pc) {
        case 0x1fbb18u: goto label_1fbb18;
        case 0x1fbb1cu: goto label_1fbb1c;
        case 0x1fbb20u: goto label_1fbb20;
        case 0x1fbb24u: goto label_1fbb24;
        case 0x1fbb28u: goto label_1fbb28;
        case 0x1fbb2cu: goto label_1fbb2c;
        case 0x1fbb30u: goto label_1fbb30;
        case 0x1fbb34u: goto label_1fbb34;
        case 0x1fbb38u: goto label_1fbb38;
        case 0x1fbb3cu: goto label_1fbb3c;
        case 0x1fbb40u: goto label_1fbb40;
        case 0x1fbb44u: goto label_1fbb44;
        case 0x1fbb48u: goto label_1fbb48;
        case 0x1fbb4cu: goto label_1fbb4c;
        case 0x1fbb50u: goto label_1fbb50;
        case 0x1fbb54u: goto label_1fbb54;
        case 0x1fbb58u: goto label_1fbb58;
        case 0x1fbb5cu: goto label_1fbb5c;
        case 0x1fbb60u: goto label_1fbb60;
        case 0x1fbb64u: goto label_1fbb64;
        case 0x1fbb68u: goto label_1fbb68;
        case 0x1fbb6cu: goto label_1fbb6c;
        case 0x1fbb70u: goto label_1fbb70;
        case 0x1fbb74u: goto label_1fbb74;
        case 0x1fbb78u: goto label_1fbb78;
        case 0x1fbb7cu: goto label_1fbb7c;
        case 0x1fbb80u: goto label_1fbb80;
        case 0x1fbb84u: goto label_1fbb84;
        case 0x1fbb88u: goto label_1fbb88;
        case 0x1fbb8cu: goto label_1fbb8c;
        case 0x1fbb90u: goto label_1fbb90;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbb98u: goto label_1fbb98;
        case 0x1fbb9cu: goto label_1fbb9c;
        case 0x1fbba0u: goto label_1fbba0;
        case 0x1fbba4u: goto label_1fbba4;
        case 0x1fbba8u: goto label_1fbba8;
        case 0x1fbbacu: goto label_1fbbac;
        case 0x1fbbb0u: goto label_1fbbb0;
        case 0x1fbbb4u: goto label_1fbbb4;
        case 0x1fbbb8u: goto label_1fbbb8;
        case 0x1fbbbcu: goto label_1fbbbc;
        case 0x1fbbc0u: goto label_1fbbc0;
        case 0x1fbbc4u: goto label_1fbbc4;
        default: break;
    }

    ctx->pc = 0x1fbb18u;

label_1fbb18:
    // 0x1fbb18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbb1c:
    // 0x1fbb1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fbb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fbb20:
    // 0x1fbb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbb24:
    // 0x1fbb24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbb28:
    // 0x1fbb28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbb2c:
    // 0x1fbb2c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1fbb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1fbb30:
    // 0x1fbb30: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1fbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1fbb34:
    // 0x1fbb34: 0x40f809  jalr        $v0
label_1fbb38:
    if (ctx->pc == 0x1FBB38u) {
        ctx->pc = 0x1FBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB34u;
        // 0x1fbb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB3Cu;
        goto label_1fbb3c;
    }
    ctx->pc = 0x1FBB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBB3Cu);
        ctx->pc = 0x1FBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB34u;
        // 0x1fbb38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB34u, 0x1FBB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBB3Cu;
label_1fbb3c:
    // 0x1fbb3c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_1fbb40:
    if (ctx->pc == 0x1FBB40u) {
        ctx->pc = 0x1FBB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB3Cu;
        // 0x1fbb40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB44u;
        goto label_1fbb44;
    }
    ctx->pc = 0x1FBB3Cu;
    {
        const bool branch_taken_0x1fbb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb3c) {
            ctx->pc = 0x1FBB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB3Cu;
            // 0x1fbb40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBB44u;
label_1fbb44:
    // 0x1fbb44: 0xc07f88a  jal         func_1FE228
label_1fbb48:
    if (ctx->pc == 0x1FBB48u) {
        ctx->pc = 0x1FBB4Cu;
        goto label_1fbb4c;
    }
    ctx->pc = 0x1FBB44u;
    SET_GPR_U32(ctx, 31, 0x1FBB4Cu);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1FBB44u, 0x1FBB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB4Cu;
label_1fbb4c:
    // 0x1fbb4c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_1fbb50:
    if (ctx->pc == 0x1FBB50u) {
        ctx->pc = 0x1FBB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB4Cu;
        // 0x1fbb50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB54u;
        goto label_1fbb54;
    }
    ctx->pc = 0x1FBB4Cu;
    {
        const bool branch_taken_0x1fbb4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb4c) {
            ctx->pc = 0x1FBB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB4Cu;
            // 0x1fbb50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBB8u;
            goto label_1fbbb8;
        }
    }
    ctx->pc = 0x1FBB54u;
label_1fbb54:
    // 0x1fbb54: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1fbb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1fbb58:
    // 0x1fbb58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbb5c:
    // 0x1fbb5c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fbb5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fbb60:
    // 0x1fbb60: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fbb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fbb64:
    // 0x1fbb64: 0x60f809  jalr        $v1
label_1fbb68:
    if (ctx->pc == 0x1FBB68u) {
        ctx->pc = 0x1FBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB64u;
        // 0x1fbb68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB6Cu;
        goto label_1fbb6c;
    }
    ctx->pc = 0x1FBB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBB6Cu);
        ctx->pc = 0x1FBB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB64u;
        // 0x1fbb68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB64u, 0x1FBB6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBB6Cu;
label_1fbb6c:
    // 0x1fbb6c: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x1fbb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1fbb70:
    // 0x1fbb70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbb74:
    // 0x1fbb74: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fbb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fbb78:
    // 0x1fbb78: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fbb7c:
    // 0x1fbb7c: 0x60f809  jalr        $v1
label_1fbb80:
    if (ctx->pc == 0x1FBB80u) {
        ctx->pc = 0x1FBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB7Cu;
        // 0x1fbb80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB84u;
        goto label_1fbb84;
    }
    ctx->pc = 0x1FBB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBB84u);
        ctx->pc = 0x1FBB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB7Cu;
        // 0x1fbb80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB7Cu, 0x1FBB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBB84u;
label_1fbb84:
    // 0x1fbb84: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1fbb88:
    // 0x1fbb88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbb8c:
    // 0x1fbb8c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fbb90:
    // 0x1fbb90: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fbb94:
    // 0x1fbb94: 0x60f809  jalr        $v1
label_1fbb98:
    if (ctx->pc == 0x1FBB98u) {
        ctx->pc = 0x1FBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB94u;
        // 0x1fbb98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB9Cu;
        goto label_1fbb9c;
    }
    ctx->pc = 0x1FBB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBB9Cu);
        ctx->pc = 0x1FBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB94u;
        // 0x1fbb98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB94u, 0x1FBB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBB9Cu;
label_1fbb9c:
    // 0x1fbb9c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1fbb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1fbba0:
    // 0x1fbba0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1fbba4:
    // 0x1fbba4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fbba4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1fbba8:
    // 0x1fbba8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1fbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1fbbac:
    // 0x1fbbac: 0x60f809  jalr        $v1
label_1fbbb0:
    if (ctx->pc == 0x1FBBB0u) {
        ctx->pc = 0x1FBBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBACu;
        // 0x1fbbb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBBB4u;
        goto label_1fbbb4;
    }
    ctx->pc = 0x1FBBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBBB4u);
        ctx->pc = 0x1FBBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBACu;
        // 0x1fbbb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBACu, 0x1FBBB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBBB4u;
label_1fbbb4:
    // 0x1fbbb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbbb8:
    // 0x1fbbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbbbc:
    // 0x1fbbbc: 0x3e00008  jr          $ra
label_1fbbc0:
    if (ctx->pc == 0x1FBBC0u) {
        ctx->pc = 0x1FBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBBCu;
        // 0x1fbbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBBC4u;
        goto label_1fbbc4;
    }
    ctx->pc = 0x1FBBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBBCu;
        // 0x1fbbc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBBC4u;
label_1fbbc4:
    // 0x1fbbc4: 0x0  nop
    ctx->pc = 0x1fbbc4u;
    // NOP
    ctx->pc = 0x1fbbc8u;
}
