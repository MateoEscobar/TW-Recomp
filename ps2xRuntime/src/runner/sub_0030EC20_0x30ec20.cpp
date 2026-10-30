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

// Function: sub_0030EC20
// Address: 0x30ec20 - 0x30ecd0
void sub_0030EC20_0x30ec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030EC20_0x30ec20");
#endif

    switch (ctx->pc) {
        case 0x30ec48u: goto label_30ec48;
        case 0x30ec58u: goto label_30ec58;
        case 0x30ec94u: goto label_30ec94;
        case 0x30ecacu: goto label_30ecac;
        case 0x30ecbcu: goto label_30ecbc;
        default: break;
    }

    ctx->pc = 0x30ec20u;

    // 0x30ec20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30ec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30ec24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ec28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30ec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30ec2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ec30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30ec30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ec34: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x30ec34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x30ec38: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30EC38u;
    {
        const bool branch_taken_0x30ec38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30ec38) {
            ctx->pc = 0x30EC50u;
            goto label_30ec50;
        }
    }
    ctx->pc = 0x30EC40u;
    // 0x30ec40: 0xc0c3ae4  jal         func_30EB90
    ctx->pc = 0x30EC40u;
    SET_GPR_U32(ctx, 31, 0x30EC48u);
    ctx->pc = 0x30EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EB90u, 0x30EC40u, 0x30EC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC48u;
label_30ec48:
    // 0x30ec48: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x30EC48u;
    {
        const bool branch_taken_0x30ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ec48) {
            ctx->pc = 0x30EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EC48u;
            // 0x30ec4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30ECC0u;
            goto label_30ecc0;
        }
    }
    ctx->pc = 0x30EC50u;
label_30ec50:
    // 0x30ec50: 0xc0c3a66  jal         func_30E998
    ctx->pc = 0x30EC50u;
    SET_GPR_U32(ctx, 31, 0x30EC58u);
    ctx->pc = 0x30EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EC50u;
    // 0x30ec54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E998u, 0x30EC50u, 0x30EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC58u;
label_30ec58:
    // 0x30ec58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x30ec5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ec60: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x30ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x30ec64: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x30ec64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x30ec68: 0x92070050  lbu         $a3, 0x50($s0)
    ctx->pc = 0x30ec68u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x30ec6c: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x30ec6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x30ec70: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x30ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x30ec74: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x30ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x30ec78: 0x244300fa  addiu       $v1, $v0, 0xFA
    ctx->pc = 0x30ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 250));
    // 0x30ec7c: 0x244801f4  addiu       $t0, $v0, 0x1F4
    ctx->pc = 0x30ec7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x30ec80: 0x244202ee  addiu       $v0, $v0, 0x2EE
    ctx->pc = 0x30ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 750));
    // 0x30ec84: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x30ec84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x30ec88: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x30ec88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x30ec8c: 0xc05905e  jal         func_164178
    ctx->pc = 0x30EC8Cu;
    SET_GPR_U32(ctx, 31, 0x30EC94u);
    ctx->pc = 0x30EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EC8Cu;
    // 0x30ec90: 0xae080034  sw          $t0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x30EC8Cu, 0x30EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EC94u;
label_30ec94:
    // 0x30ec94: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x30ec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x30ec98: 0x24020087  addiu       $v0, $zero, 0x87
    ctx->pc = 0x30ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x30ec9c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30EC9Cu;
    {
        const bool branch_taken_0x30ec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EC9Cu;
        // 0x30eca0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ec9c) {
            ctx->pc = 0x30ECB4u;
            goto label_30ecb4;
        }
    }
    ctx->pc = 0x30ECA4u;
    // 0x30eca4: 0xc059750  jal         func_165D40
    ctx->pc = 0x30ECA4u;
    SET_GPR_U32(ctx, 31, 0x30ECACu);
    ctx->pc = 0x30ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ECA4u;
    // 0x30eca8: 0x24050088  addiu       $a1, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x30ECA4u, 0x30ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ECACu;
label_30ecac:
    // 0x30ecac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30ECACu;
    {
        const bool branch_taken_0x30ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECACu;
        // 0x30ecb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ecac) {
            ctx->pc = 0x30ECC0u;
            goto label_30ecc0;
        }
    }
    ctx->pc = 0x30ECB4u;
label_30ecb4:
    // 0x30ecb4: 0xc059750  jal         func_165D40
    ctx->pc = 0x30ECB4u;
    SET_GPR_U32(ctx, 31, 0x30ECBCu);
    ctx->pc = 0x30ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ECB4u;
    // 0x30ecb8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D40u, 0x30ECB4u, 0x30ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ECBCu;
label_30ecbc:
    // 0x30ecbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30ecbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_30ecc0:
    // 0x30ecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x30ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECC4u;
        // 0x30ecc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30ECCCu;
    // 0x30eccc: 0x0  nop
    ctx->pc = 0x30ecccu;
    // NOP
    ctx->pc = 0x30ecd0u;
}
