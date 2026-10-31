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

// Function: sub_00488C58
// Address: 0x488c58 - 0x488cf8
void sub_00488C58_0x488c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488C58_0x488c58");
#endif

    switch (ctx->pc) {
        case 0x488c58u: goto label_488c58;
        case 0x488c5cu: goto label_488c5c;
        case 0x488c60u: goto label_488c60;
        case 0x488c64u: goto label_488c64;
        case 0x488c68u: goto label_488c68;
        case 0x488c6cu: goto label_488c6c;
        case 0x488c70u: goto label_488c70;
        case 0x488c74u: goto label_488c74;
        case 0x488c78u: goto label_488c78;
        case 0x488c7cu: goto label_488c7c;
        case 0x488c80u: goto label_488c80;
        case 0x488c84u: goto label_488c84;
        case 0x488c88u: goto label_488c88;
        case 0x488c8cu: goto label_488c8c;
        case 0x488c90u: goto label_488c90;
        case 0x488c94u: goto label_488c94;
        case 0x488c98u: goto label_488c98;
        case 0x488c9cu: goto label_488c9c;
        case 0x488ca0u: goto label_488ca0;
        case 0x488ca4u: goto label_488ca4;
        case 0x488ca8u: goto label_488ca8;
        case 0x488cacu: goto label_488cac;
        case 0x488cb0u: goto label_488cb0;
        case 0x488cb4u: goto label_488cb4;
        case 0x488cb8u: goto label_488cb8;
        case 0x488cbcu: goto label_488cbc;
        case 0x488cc0u: goto label_488cc0;
        case 0x488cc4u: goto label_488cc4;
        case 0x488cc8u: goto label_488cc8;
        case 0x488cccu: goto label_488ccc;
        case 0x488cd0u: goto label_488cd0;
        case 0x488cd4u: goto label_488cd4;
        case 0x488cd8u: goto label_488cd8;
        case 0x488cdcu: goto label_488cdc;
        case 0x488ce0u: goto label_488ce0;
        case 0x488ce4u: goto label_488ce4;
        case 0x488ce8u: goto label_488ce8;
        case 0x488cecu: goto label_488cec;
        case 0x488cf0u: goto label_488cf0;
        case 0x488cf4u: goto label_488cf4;
        default: break;
    }

    ctx->pc = 0x488c58u;

label_488c58:
    // 0x488c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x488c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_488c5c:
    // 0x488c5c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x488c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_488c60:
    // 0x488c60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_488c64:
    // 0x488c64: 0x8f828978  lw          $v0, -0x7688($gp)
    ctx->pc = 0x488c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488c68:
    // 0x488c68: 0x2471ad18  addiu       $s1, $v1, -0x52E8
    ctx->pc = 0x488c68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_488c6c:
    // 0x488c6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x488c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_488c70:
    // 0x488c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_488c74:
    // 0x488c74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x488c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_488c78:
    // 0x488c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488c7c:
    // 0x488c7c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x488c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_488c80:
    // 0x488c80: 0x50700001  beql        $v1, $s0, . + 4 + (0x1 << 2)
label_488c84:
    if (ctx->pc == 0x488C84u) {
        ctx->pc = 0x488C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C80u;
        // 0x488c84: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C88u;
        goto label_488c88;
    }
    ctx->pc = 0x488C80u;
    {
        const bool branch_taken_0x488c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x488c80) {
            ctx->pc = 0x488C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488C80u;
            // 0x488c84: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488C88u;
            goto label_488c88;
        }
    }
    ctx->pc = 0x488C88u;
label_488c88:
    // 0x488c88: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x488c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_488c8c:
    // 0x488c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x488c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_488c90:
    // 0x488c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x488c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488c94:
    // 0x488c94: 0xc1223ec  jal         func_488FB0
label_488c98:
    if (ctx->pc == 0x488C98u) {
        ctx->pc = 0x488C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488C94u;
        // 0x488c98: 0x24a58d90  addiu       $a1, $a1, -0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488C9Cu;
        goto label_488c9c;
    }
    ctx->pc = 0x488C94u;
    SET_GPR_U32(ctx, 31, 0x488C9Cu);
    ctx->pc = 0x488C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488C94u;
    // 0x488c98: 0x24a58d90  addiu       $a1, $a1, -0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x488C94u, 0x488C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488C9Cu;
label_488c9c:
    // 0x488c9c: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x488c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_488ca0:
    // 0x488ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488ca4:
    // 0x488ca4: 0xc11ffb4  jal         func_47FED0
label_488ca8:
    if (ctx->pc == 0x488CA8u) {
        ctx->pc = 0x488CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CA4u;
        // 0x488ca8: 0x2484ec20  addiu       $a0, $a0, -0x13E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488CACu;
        goto label_488cac;
    }
    ctx->pc = 0x488CA4u;
    SET_GPR_U32(ctx, 31, 0x488CACu);
    ctx->pc = 0x488CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488CA4u;
    // 0x488ca8: 0x2484ec20  addiu       $a0, $a0, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x488CA4u, 0x488CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488CACu;
label_488cac:
    // 0x488cac: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x488cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_488cb0:
    // 0x488cb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x488cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_488cb4:
    // 0x488cb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x488cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_488cb8:
    // 0x488cb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x488cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_488cbc:
    // 0x488cbc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x488cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_488cc0:
    // 0x488cc0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x488cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_488cc4:
    // 0x488cc4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x488cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_488cc8:
    // 0x488cc8: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488ccc:
    // 0x488ccc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x488cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_488cd0:
    // 0x488cd0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x488cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_488cd4:
    // 0x488cd4: 0x40f809  jalr        $v0
label_488cd8:
    if (ctx->pc == 0x488CD8u) {
        ctx->pc = 0x488CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CD4u;
        // 0x488cd8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488CDCu;
        goto label_488cdc;
    }
    ctx->pc = 0x488CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488CDCu);
        ctx->pc = 0x488CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CD4u;
        // 0x488cd8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488CD4u, 0x488CDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488CDCu;
label_488cdc:
    // 0x488cdc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x488cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488ce0:
    // 0x488ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_488ce4:
    // 0x488ce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488ce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_488ce8:
    // 0x488ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_488cec:
    // 0x488cec: 0x3e00008  jr          $ra
label_488cf0:
    if (ctx->pc == 0x488CF0u) {
        ctx->pc = 0x488CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CECu;
        // 0x488cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488CF4u;
        goto label_488cf4;
    }
    ctx->pc = 0x488CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488CECu;
        // 0x488cf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488CF4u;
label_488cf4:
    // 0x488cf4: 0x0  nop
    ctx->pc = 0x488cf4u;
    // NOP
    ctx->pc = 0x488cf8u;
}
