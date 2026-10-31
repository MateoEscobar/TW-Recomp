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

// Function: sub_00353A10
// Address: 0x353a10 - 0x353af0
void sub_00353A10_0x353a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353A10_0x353a10");
#endif

    switch (ctx->pc) {
        case 0x353a30u: goto label_353a30;
        case 0x353aa0u: goto label_353aa0;
        case 0x353ab8u: goto label_353ab8;
        default: break;
    }

    ctx->pc = 0x353a10u;

    // 0x353a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x353a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x353a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x353a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x353a18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x353a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x353a1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x353a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a20: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x353a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x353a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353a28: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x353A28u;
    SET_GPR_U32(ctx, 31, 0x353A30u);
    ctx->pc = 0x353A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353A28u;
    // 0x353a2c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x353A28u, 0x353A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353A30u;
label_353a30:
    // 0x353a30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x353a30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353a34: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x353A34u;
    {
        const bool branch_taken_0x353a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a34) {
            ctx->pc = 0x353A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A34u;
            // 0x353a38: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353A3Cu;
    // 0x353a3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x353a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x353a40: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x353A40u;
    {
        const bool branch_taken_0x353a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a40) {
            ctx->pc = 0x353A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A40u;
            // 0x353a44: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353A48u;
    // 0x353a48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353a4c: 0x54510023  bnel        $v0, $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x353A4Cu;
    {
        const bool branch_taken_0x353a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x353a4c) {
            ctx->pc = 0x353A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A4Cu;
            // 0x353a50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353A54u;
    // 0x353a54: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x353a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x353a58: 0x50800020  beql        $a0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x353A58u;
    {
        const bool branch_taken_0x353a58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a58) {
            ctx->pc = 0x353A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A58u;
            // 0x353a5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353A60u;
    // 0x353a60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x353a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353a64: 0x9465001c  lhu         $a1, 0x1C($v1)
    ctx->pc = 0x353a64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x353a68: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x353a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x353a6c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x353a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x353a70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x353A70u;
    {
        const bool branch_taken_0x353a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A70u;
        // 0x353a74: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a70) {
            ctx->pc = 0x353AD8u;
            goto label_353ad8;
        }
    }
    ctx->pc = 0x353A78u;
    // 0x353a78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x353a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x353a7c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x353A7Cu;
    {
        const bool branch_taken_0x353a7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x353A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353A7Cu;
        // 0x353a80: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353a7c) {
            ctx->pc = 0x353AD4u;
            goto label_353ad4;
        }
    }
    ctx->pc = 0x353A84u;
    // 0x353a84: 0x908200ec  lbu         $v0, 0xEC($a0)
    ctx->pc = 0x353a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x353a88: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x353A88u;
    {
        const bool branch_taken_0x353a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353a88) {
            ctx->pc = 0x353A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A88u;
            // 0x353a8c: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353AA8u;
            goto label_353aa8;
        }
    }
    ctx->pc = 0x353A90u;
    // 0x353a90: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x353A90u;
    {
        const bool branch_taken_0x353a90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x353a90) {
            ctx->pc = 0x353A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353A90u;
            // 0x353a94: 0x90c20020  lbu         $v0, 0x20($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353AA8u;
            goto label_353aa8;
        }
    }
    ctx->pc = 0x353A98u;
    // 0x353a98: 0xc0e82fa  jal         func_3A0BE8
    ctx->pc = 0x353A98u;
    SET_GPR_U32(ctx, 31, 0x353AA0u);
    ctx->pc = 0x3A0BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BE8u, 0x353A98u, 0x353AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AA0u;
label_353aa0:
    // 0x353aa0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x353AA0u;
    {
        const bool branch_taken_0x353aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AA0u;
        // 0x353aa4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353aa0) {
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353AA8u;
label_353aa8:
    // 0x353aa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x353AA8u;
    {
        const bool branch_taken_0x353aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AA8u;
        // 0x353aac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353aa8) {
            ctx->pc = 0x353ACCu;
            goto label_353acc;
        }
    }
    ctx->pc = 0x353AB0u;
    // 0x353ab0: 0xc0e829a  jal         func_3A0A68
    ctx->pc = 0x353AB0u;
    SET_GPR_U32(ctx, 31, 0x353AB8u);
    ctx->pc = 0x353AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353AB0u;
    // 0x353ab4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0A68u, 0x353AB0u, 0x353AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353AB8u;
label_353ab8:
    // 0x353ab8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x353AB8u;
    {
        const bool branch_taken_0x353ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353ab8) {
            ctx->pc = 0x353ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353AB8u;
            // 0x353abc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353ADCu;
            goto label_353adc;
        }
    }
    ctx->pc = 0x353AC0u;
    // 0x353ac0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x353ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x353ac4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x353AC4u;
    {
        const bool branch_taken_0x353ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AC4u;
        // 0x353ac8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ac4) {
            ctx->pc = 0x353AD4u;
            goto label_353ad4;
        }
    }
    ctx->pc = 0x353ACCu;
label_353acc:
    // 0x353acc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353ACCu;
    {
        const bool branch_taken_0x353acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353ACCu;
        // 0x353ad0: 0xa4c2001c  sh          $v0, 0x1C($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353acc) {
            ctx->pc = 0x353AD8u;
            goto label_353ad8;
        }
    }
    ctx->pc = 0x353AD4u;
label_353ad4:
    // 0x353ad4: 0xa462001c  sh          $v0, 0x1C($v1)
    ctx->pc = 0x353ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
label_353ad8:
    // 0x353ad8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x353ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_353adc:
    // 0x353adc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x353adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353ae0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x353ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x353AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353AE8u;
        // 0x353aec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353AF0u;
}
