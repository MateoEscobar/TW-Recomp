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

// Function: sub_0029ED58
// Address: 0x29ed58 - 0x29edd8
void sub_0029ED58_0x29ed58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED58_0x29ed58");
#endif

    switch (ctx->pc) {
        case 0x29ed58u: goto label_29ed58;
        case 0x29ed5cu: goto label_29ed5c;
        case 0x29ed60u: goto label_29ed60;
        case 0x29ed64u: goto label_29ed64;
        case 0x29ed68u: goto label_29ed68;
        case 0x29ed6cu: goto label_29ed6c;
        case 0x29ed70u: goto label_29ed70;
        case 0x29ed74u: goto label_29ed74;
        case 0x29ed78u: goto label_29ed78;
        case 0x29ed7cu: goto label_29ed7c;
        case 0x29ed80u: goto label_29ed80;
        case 0x29ed84u: goto label_29ed84;
        case 0x29ed88u: goto label_29ed88;
        case 0x29ed8cu: goto label_29ed8c;
        case 0x29ed90u: goto label_29ed90;
        case 0x29ed94u: goto label_29ed94;
        case 0x29ed98u: goto label_29ed98;
        case 0x29ed9cu: goto label_29ed9c;
        case 0x29eda0u: goto label_29eda0;
        case 0x29eda4u: goto label_29eda4;
        case 0x29eda8u: goto label_29eda8;
        case 0x29edacu: goto label_29edac;
        case 0x29edb0u: goto label_29edb0;
        case 0x29edb4u: goto label_29edb4;
        case 0x29edb8u: goto label_29edb8;
        case 0x29edbcu: goto label_29edbc;
        case 0x29edc0u: goto label_29edc0;
        case 0x29edc4u: goto label_29edc4;
        case 0x29edc8u: goto label_29edc8;
        case 0x29edccu: goto label_29edcc;
        case 0x29edd0u: goto label_29edd0;
        case 0x29edd4u: goto label_29edd4;
        default: break;
    }

    ctx->pc = 0x29ed58u;

label_29ed58:
    // 0x29ed58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ed58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29ed5c:
    // 0x29ed5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29ed5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_29ed60:
    // 0x29ed60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ed60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29ed64:
    // 0x29ed64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ed64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ed68:
    // 0x29ed68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ed6c:
    // 0x29ed6c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x29ed6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ed70:
    // 0x29ed70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29ed74:
    // 0x29ed74: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x29ed74u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_29ed78:
    // 0x29ed78: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_29ed7c:
    if (ctx->pc == 0x29ED7Cu) {
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED80u;
        goto label_29ed80;
    }
    ctx->pc = 0x29ED78u;
    {
        const bool branch_taken_0x29ed78 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x29ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED78u;
        // 0x29ed7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed78) {
            ctx->pc = 0x29EDC0u;
            goto label_29edc0;
        }
    }
    ctx->pc = 0x29ED80u;
label_29ed80:
    // 0x29ed80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_29ed84:
    // 0x29ed84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x29ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29ed88:
    // 0x29ed88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_29ed8c:
    // 0x29ed8c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_29ed90:
    if (ctx->pc == 0x29ED90u) {
        ctx->pc = 0x29ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED8Cu;
        // 0x29ed90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ED94u;
        goto label_29ed94;
    }
    ctx->pc = 0x29ED8Cu;
    {
        const bool branch_taken_0x29ed8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x29ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ED8Cu;
        // 0x29ed90: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ed8c) {
            ctx->pc = 0x29EDA4u;
            goto label_29eda4;
        }
    }
    ctx->pc = 0x29ED94u;
label_29ed94:
    // 0x29ed94: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x29ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_29ed98:
    // 0x29ed98: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x29ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_29ed9c:
    // 0x29ed9c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x29ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_29eda0:
    // 0x29eda0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x29eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_29eda4:
    // 0x29eda4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29eda8:
    // 0x29eda8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x29eda8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_29edac:
    // 0x29edac: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x29edacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_29edb0:
    // 0x29edb0: 0x60f809  jalr        $v1
label_29edb4:
    if (ctx->pc == 0x29EDB4u) {
        ctx->pc = 0x29EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB0u;
        // 0x29edb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDB8u;
        goto label_29edb8;
    }
    ctx->pc = 0x29EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29EDB8u);
        ctx->pc = 0x29EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDB0u;
        // 0x29edb4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EDB0u, 0x29EDB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EDB8u;
label_29edb8:
    // 0x29edb8: 0xa2110004  sb          $s1, 0x4($s0)
    ctx->pc = 0x29edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 17));
label_29edbc:
    // 0x29edbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29edc0:
    // 0x29edc0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29edc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29edc4:
    // 0x29edc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29edc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29edc8:
    // 0x29edc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29edc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29edcc:
    // 0x29edcc: 0x3e00008  jr          $ra
label_29edd0:
    if (ctx->pc == 0x29EDD0u) {
        ctx->pc = 0x29EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDCCu;
        // 0x29edd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EDD4u;
        goto label_29edd4;
    }
    ctx->pc = 0x29EDCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EDCCu;
        // 0x29edd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EDCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EDD4u;
label_29edd4:
    // 0x29edd4: 0x0  nop
    ctx->pc = 0x29edd4u;
    // NOP
    ctx->pc = 0x29edd8u;
}
