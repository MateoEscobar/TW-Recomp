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

// Function: sub_00408A28
// Address: 0x408a28 - 0x408ac8
void sub_00408A28_0x408a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408A28_0x408a28");
#endif

    switch (ctx->pc) {
        case 0x408a28u: goto label_408a28;
        case 0x408a2cu: goto label_408a2c;
        case 0x408a30u: goto label_408a30;
        case 0x408a34u: goto label_408a34;
        case 0x408a38u: goto label_408a38;
        case 0x408a3cu: goto label_408a3c;
        case 0x408a40u: goto label_408a40;
        case 0x408a44u: goto label_408a44;
        case 0x408a48u: goto label_408a48;
        case 0x408a4cu: goto label_408a4c;
        case 0x408a50u: goto label_408a50;
        case 0x408a54u: goto label_408a54;
        case 0x408a58u: goto label_408a58;
        case 0x408a5cu: goto label_408a5c;
        case 0x408a60u: goto label_408a60;
        case 0x408a64u: goto label_408a64;
        case 0x408a68u: goto label_408a68;
        case 0x408a6cu: goto label_408a6c;
        case 0x408a70u: goto label_408a70;
        case 0x408a74u: goto label_408a74;
        case 0x408a78u: goto label_408a78;
        case 0x408a7cu: goto label_408a7c;
        case 0x408a80u: goto label_408a80;
        case 0x408a84u: goto label_408a84;
        case 0x408a88u: goto label_408a88;
        case 0x408a8cu: goto label_408a8c;
        case 0x408a90u: goto label_408a90;
        case 0x408a94u: goto label_408a94;
        case 0x408a98u: goto label_408a98;
        case 0x408a9cu: goto label_408a9c;
        case 0x408aa0u: goto label_408aa0;
        case 0x408aa4u: goto label_408aa4;
        case 0x408aa8u: goto label_408aa8;
        case 0x408aacu: goto label_408aac;
        case 0x408ab0u: goto label_408ab0;
        case 0x408ab4u: goto label_408ab4;
        case 0x408ab8u: goto label_408ab8;
        case 0x408abcu: goto label_408abc;
        case 0x408ac0u: goto label_408ac0;
        case 0x408ac4u: goto label_408ac4;
        default: break;
    }

    ctx->pc = 0x408a28u;

label_408a28:
    // 0x408a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x408a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_408a2c:
    // 0x408a2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x408a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_408a30:
    // 0x408a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x408a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_408a34:
    // 0x408a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x408a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_408a38:
    // 0x408a38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408a3c:
    // 0x408a3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x408a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_408a40:
    // 0x408a40: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x408a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_408a44:
    // 0x408a44: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x408a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_408a48:
    // 0x408a48: 0x40f809  jalr        $v0
label_408a4c:
    if (ctx->pc == 0x408A4Cu) {
        ctx->pc = 0x408A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A48u;
        // 0x408a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A50u;
        goto label_408a50;
    }
    ctx->pc = 0x408A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x408A50u);
        ctx->pc = 0x408A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A48u;
        // 0x408a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408A48u, 0x408A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x408A50u;
label_408a50:
    // 0x408a50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x408a50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408a54:
    // 0x408a54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x408a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_408a58:
    // 0x408a58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x408a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_408a5c:
    // 0x408a5c: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
label_408a60:
    if (ctx->pc == 0x408A60u) {
        ctx->pc = 0x408A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A5Cu;
        // 0x408a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A64u;
        goto label_408a64;
    }
    ctx->pc = 0x408A5Cu;
    {
        const bool branch_taken_0x408a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x408A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A5Cu;
        // 0x408a60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a5c) {
            ctx->pc = 0x408AB4u;
            goto label_408ab4;
        }
    }
    ctx->pc = 0x408A64u;
label_408a64:
    // 0x408a64: 0xc0e9694  jal         func_3A5A50
label_408a68:
    if (ctx->pc == 0x408A68u) {
        ctx->pc = 0x408A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A64u;
        // 0x408a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A6Cu;
        goto label_408a6c;
    }
    ctx->pc = 0x408A64u;
    SET_GPR_U32(ctx, 31, 0x408A6Cu);
    ctx->pc = 0x408A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x408A64u;
    // 0x408a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x408A64u, 0x408A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408A6Cu;
label_408a6c:
    // 0x408a6c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_408a70:
    if (ctx->pc == 0x408A70u) {
        ctx->pc = 0x408A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A6Cu;
        // 0x408a70: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A74u;
        goto label_408a74;
    }
    ctx->pc = 0x408A6Cu;
    {
        const bool branch_taken_0x408a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408a6c) {
            ctx->pc = 0x408A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408A6Cu;
            // 0x408a70: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x408A7Cu;
            goto label_408a7c;
        }
    }
    ctx->pc = 0x408A74u;
label_408a74:
    // 0x408a74: 0x1000000f  b           . + 4 + (0xF << 2)
label_408a78:
    if (ctx->pc == 0x408A78u) {
        ctx->pc = 0x408A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A74u;
        // 0x408a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408A7Cu;
        goto label_408a7c;
    }
    ctx->pc = 0x408A74u;
    {
        const bool branch_taken_0x408a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408A74u;
        // 0x408a78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408a74) {
            ctx->pc = 0x408AB4u;
            goto label_408ab4;
        }
    }
    ctx->pc = 0x408A7Cu;
label_408a7c:
    // 0x408a7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x408a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_408a80:
    // 0x408a80: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x408a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_408a84:
    // 0x408a84: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x408a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_408a88:
    // 0x408a88: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x408a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_408a8c:
    // 0x408a8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x408a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408a90:
    // 0x408a90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x408a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_408a94:
    // 0x408a94: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x408a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_408a98:
    // 0x408a98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408a9c:
    // 0x408a9c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x408a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408aa0:
    // 0x408aa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_408aa4:
    // 0x408aa4: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x408aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_408aa8:
    // 0x408aa8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x408aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_408aac:
    // 0x408aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x408aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_408ab0:
    // 0x408ab0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x408ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_408ab4:
    // 0x408ab4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x408ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_408ab8:
    // 0x408ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_408abc:
    // 0x408abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_408ac0:
    // 0x408ac0: 0x3e00008  jr          $ra
label_408ac4:
    if (ctx->pc == 0x408AC4u) {
        ctx->pc = 0x408AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408AC0u;
        // 0x408ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408AC8u;
        goto label_fallthrough_0x408ac0;
    }
    ctx->pc = 0x408AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408AC0u;
        // 0x408ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x408ac0:
    ctx->pc = 0x408AC8u;
}
