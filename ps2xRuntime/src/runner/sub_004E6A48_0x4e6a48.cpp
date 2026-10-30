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

// Function: sub_004E6A48
// Address: 0x4e6a48 - 0x4e6ae0
void sub_004E6A48_0x4e6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A48_0x4e6a48");
#endif

    switch (ctx->pc) {
        case 0x4e6a48u: goto label_4e6a48;
        case 0x4e6a4cu: goto label_4e6a4c;
        case 0x4e6a50u: goto label_4e6a50;
        case 0x4e6a54u: goto label_4e6a54;
        case 0x4e6a58u: goto label_4e6a58;
        case 0x4e6a5cu: goto label_4e6a5c;
        case 0x4e6a60u: goto label_4e6a60;
        case 0x4e6a64u: goto label_4e6a64;
        case 0x4e6a68u: goto label_4e6a68;
        case 0x4e6a6cu: goto label_4e6a6c;
        case 0x4e6a70u: goto label_4e6a70;
        case 0x4e6a74u: goto label_4e6a74;
        case 0x4e6a78u: goto label_4e6a78;
        case 0x4e6a7cu: goto label_4e6a7c;
        case 0x4e6a80u: goto label_4e6a80;
        case 0x4e6a84u: goto label_4e6a84;
        case 0x4e6a88u: goto label_4e6a88;
        case 0x4e6a8cu: goto label_4e6a8c;
        case 0x4e6a90u: goto label_4e6a90;
        case 0x4e6a94u: goto label_4e6a94;
        case 0x4e6a98u: goto label_4e6a98;
        case 0x4e6a9cu: goto label_4e6a9c;
        case 0x4e6aa0u: goto label_4e6aa0;
        case 0x4e6aa4u: goto label_4e6aa4;
        case 0x4e6aa8u: goto label_4e6aa8;
        case 0x4e6aacu: goto label_4e6aac;
        case 0x4e6ab0u: goto label_4e6ab0;
        case 0x4e6ab4u: goto label_4e6ab4;
        case 0x4e6ab8u: goto label_4e6ab8;
        case 0x4e6abcu: goto label_4e6abc;
        case 0x4e6ac0u: goto label_4e6ac0;
        case 0x4e6ac4u: goto label_4e6ac4;
        case 0x4e6ac8u: goto label_4e6ac8;
        case 0x4e6accu: goto label_4e6acc;
        case 0x4e6ad0u: goto label_4e6ad0;
        case 0x4e6ad4u: goto label_4e6ad4;
        case 0x4e6ad8u: goto label_4e6ad8;
        case 0x4e6adcu: goto label_4e6adc;
        default: break;
    }

    ctx->pc = 0x4e6a48u;

label_4e6a48:
    // 0x4e6a48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e6a4c:
    // 0x4e6a4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4e6a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4e6a50:
    // 0x4e6a50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e6a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e6a54:
    // 0x4e6a54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e6a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e6a58:
    // 0x4e6a58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4e6a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4e6a5c:
    // 0x4e6a5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e6a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e6a60:
    // 0x4e6a60: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4e6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4e6a64:
    // 0x4e6a64: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4e6a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_4e6a68:
    // 0x4e6a68: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_4e6a6c:
    if (ctx->pc == 0x4E6A6Cu) {
        ctx->pc = 0x4E6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A68u;
        // 0x4e6a6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A70u;
        goto label_4e6a70;
    }
    ctx->pc = 0x4E6A68u;
    {
        const bool branch_taken_0x4e6a68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A68u;
        // 0x4e6a6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a68) {
            ctx->pc = 0x4E6AC0u;
            goto label_4e6ac0;
        }
    }
    ctx->pc = 0x4E6A70u;
label_4e6a70:
    // 0x4e6a70: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x4e6a70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_4e6a74:
    // 0x4e6a74: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x4e6a74u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_4e6a78:
    // 0x4e6a78: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4e6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4e6a7c:
    // 0x4e6a7c: 0x0  nop
    ctx->pc = 0x4e6a7cu;
    // NOP
label_4e6a80:
    // 0x4e6a80: 0xc139a92  jal         func_4E6A48
label_4e6a84:
    if (ctx->pc == 0x4E6A84u) {
        ctx->pc = 0x4E6A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A80u;
        // 0x4e6a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A88u;
        goto label_4e6a88;
    }
    ctx->pc = 0x4E6A80u;
    SET_GPR_U32(ctx, 31, 0x4E6A88u);
    ctx->pc = 0x4E6A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6A80u;
    // 0x4e6a84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6A48u;
    goto label_4e6a48;
    ctx->pc = 0x4E6A88u;
label_4e6a88:
    // 0x4e6a88: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_4e6a8c:
    if (ctx->pc == 0x4E6A8Cu) {
        ctx->pc = 0x4E6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A88u;
        // 0x4e6a8c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6A90u;
        goto label_4e6a90;
    }
    ctx->pc = 0x4E6A88u;
    {
        const bool branch_taken_0x4e6a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6A88u;
        // 0x4e6a8c: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6a88) {
            ctx->pc = 0x4E6AB4u;
            goto label_4e6ab4;
        }
    }
    ctx->pc = 0x4E6A90u;
label_4e6a90:
    // 0x4e6a90: 0x8e88b9c0  lw          $t0, -0x4640($s4)
    ctx->pc = 0x4e6a90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949312)));
label_4e6a94:
    // 0x4e6a94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e6a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6a98:
    // 0x4e6a98: 0x266653e8  addiu       $a2, $s3, 0x53E8
    ctx->pc = 0x4e6a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 21480));
label_4e6a9c:
    // 0x4e6a9c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e6a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e6aa0:
    // 0x4e6aa0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e6aa4:
    // 0x4e6aa4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e6aa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e6aa8:
    // 0x4e6aa8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e6aac:
    // 0x4e6aac: 0x60f809  jalr        $v1
label_4e6ab0:
    if (ctx->pc == 0x4E6AB0u) {
        ctx->pc = 0x4E6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6AACu;
        // 0x4e6ab0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6AB4u;
        goto label_4e6ab4;
    }
    ctx->pc = 0x4E6AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E6AB4u);
        ctx->pc = 0x4E6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6AACu;
        // 0x4e6ab0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6AACu, 0x4E6AB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E6AB4u;
label_4e6ab4:
    // 0x4e6ab4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4e6ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e6ab8:
    // 0x4e6ab8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
label_4e6abc:
    if (ctx->pc == 0x4E6ABCu) {
        ctx->pc = 0x4E6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6AB8u;
        // 0x4e6abc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6AC0u;
        goto label_4e6ac0;
    }
    ctx->pc = 0x4E6AB8u;
    {
        const bool branch_taken_0x4e6ab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e6ab8) {
            ctx->pc = 0x4E6ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6AB8u;
            // 0x4e6abc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E6A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e6a80;
        }
    }
    ctx->pc = 0x4E6AC0u;
label_4e6ac0:
    // 0x4e6ac0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4e6ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e6ac4:
    // 0x4e6ac4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4e6ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e6ac8:
    // 0x4e6ac8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e6ac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6acc:
    // 0x4e6acc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4e6accu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6ad0:
    // 0x4e6ad0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4e6ad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6ad4:
    // 0x4e6ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6ad8:
    // 0x4e6ad8: 0x3e00008  jr          $ra
label_4e6adc:
    if (ctx->pc == 0x4E6ADCu) {
        ctx->pc = 0x4E6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6AD8u;
        // 0x4e6adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6AE0u;
        goto label_fallthrough_0x4e6ad8;
    }
    ctx->pc = 0x4E6AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6AD8u;
        // 0x4e6adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e6ad8:
    ctx->pc = 0x4E6AE0u;
}
