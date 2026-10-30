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

// Function: sub_00424A20
// Address: 0x424a20 - 0x424b90
void sub_00424A20_0x424a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424A20_0x424a20");
#endif

    switch (ctx->pc) {
        case 0x424a20u: goto label_424a20;
        case 0x424a24u: goto label_424a24;
        case 0x424a28u: goto label_424a28;
        case 0x424a2cu: goto label_424a2c;
        case 0x424a30u: goto label_424a30;
        case 0x424a34u: goto label_424a34;
        case 0x424a38u: goto label_424a38;
        case 0x424a3cu: goto label_424a3c;
        case 0x424a40u: goto label_424a40;
        case 0x424a44u: goto label_424a44;
        case 0x424a48u: goto label_424a48;
        case 0x424a4cu: goto label_424a4c;
        case 0x424a50u: goto label_424a50;
        case 0x424a54u: goto label_424a54;
        case 0x424a58u: goto label_424a58;
        case 0x424a5cu: goto label_424a5c;
        case 0x424a60u: goto label_424a60;
        case 0x424a64u: goto label_424a64;
        case 0x424a68u: goto label_424a68;
        case 0x424a6cu: goto label_424a6c;
        case 0x424a70u: goto label_424a70;
        case 0x424a74u: goto label_424a74;
        case 0x424a78u: goto label_424a78;
        case 0x424a7cu: goto label_424a7c;
        case 0x424a80u: goto label_424a80;
        case 0x424a84u: goto label_424a84;
        case 0x424a88u: goto label_424a88;
        case 0x424a8cu: goto label_424a8c;
        case 0x424a90u: goto label_424a90;
        case 0x424a94u: goto label_424a94;
        case 0x424a98u: goto label_424a98;
        case 0x424a9cu: goto label_424a9c;
        case 0x424aa0u: goto label_424aa0;
        case 0x424aa4u: goto label_424aa4;
        case 0x424aa8u: goto label_424aa8;
        case 0x424aacu: goto label_424aac;
        case 0x424ab0u: goto label_424ab0;
        case 0x424ab4u: goto label_424ab4;
        case 0x424ab8u: goto label_424ab8;
        case 0x424abcu: goto label_424abc;
        case 0x424ac0u: goto label_424ac0;
        case 0x424ac4u: goto label_424ac4;
        case 0x424ac8u: goto label_424ac8;
        case 0x424accu: goto label_424acc;
        case 0x424ad0u: goto label_424ad0;
        case 0x424ad4u: goto label_424ad4;
        case 0x424ad8u: goto label_424ad8;
        case 0x424adcu: goto label_424adc;
        case 0x424ae0u: goto label_424ae0;
        case 0x424ae4u: goto label_424ae4;
        case 0x424ae8u: goto label_424ae8;
        case 0x424aecu: goto label_424aec;
        case 0x424af0u: goto label_424af0;
        case 0x424af4u: goto label_424af4;
        case 0x424af8u: goto label_424af8;
        case 0x424afcu: goto label_424afc;
        case 0x424b00u: goto label_424b00;
        case 0x424b04u: goto label_424b04;
        case 0x424b08u: goto label_424b08;
        case 0x424b0cu: goto label_424b0c;
        case 0x424b10u: goto label_424b10;
        case 0x424b14u: goto label_424b14;
        case 0x424b18u: goto label_424b18;
        case 0x424b1cu: goto label_424b1c;
        case 0x424b20u: goto label_424b20;
        case 0x424b24u: goto label_424b24;
        case 0x424b28u: goto label_424b28;
        case 0x424b2cu: goto label_424b2c;
        case 0x424b30u: goto label_424b30;
        case 0x424b34u: goto label_424b34;
        case 0x424b38u: goto label_424b38;
        case 0x424b3cu: goto label_424b3c;
        case 0x424b40u: goto label_424b40;
        case 0x424b44u: goto label_424b44;
        case 0x424b48u: goto label_424b48;
        case 0x424b4cu: goto label_424b4c;
        case 0x424b50u: goto label_424b50;
        case 0x424b54u: goto label_424b54;
        case 0x424b58u: goto label_424b58;
        case 0x424b5cu: goto label_424b5c;
        case 0x424b60u: goto label_424b60;
        case 0x424b64u: goto label_424b64;
        case 0x424b68u: goto label_424b68;
        case 0x424b6cu: goto label_424b6c;
        case 0x424b70u: goto label_424b70;
        case 0x424b74u: goto label_424b74;
        case 0x424b78u: goto label_424b78;
        case 0x424b7cu: goto label_424b7c;
        case 0x424b80u: goto label_424b80;
        case 0x424b84u: goto label_424b84;
        case 0x424b88u: goto label_424b88;
        case 0x424b8cu: goto label_424b8c;
        default: break;
    }

    ctx->pc = 0x424a20u;

label_424a20:
    // 0x424a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x424a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_424a24:
    // 0x424a24: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x424a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_424a28:
    // 0x424a28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x424a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_424a2c:
    // 0x424a2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x424a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424a30:
    // 0x424a30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x424a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_424a34:
    // 0x424a34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x424a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424a38:
    // 0x424a38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x424a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_424a3c:
    // 0x424a3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424a40:
    // 0x424a40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x424a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_424a44:
    // 0x424a44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x424a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424a48:
    // 0x424a48: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x424a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_424a4c:
    // 0x424a4c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x424a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_424a50:
    // 0x424a50: 0x40f809  jalr        $v0
label_424a54:
    if (ctx->pc == 0x424A54u) {
        ctx->pc = 0x424A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424A50u;
        // 0x424a54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424A58u;
        goto label_424a58;
    }
    ctx->pc = 0x424A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424A58u);
        ctx->pc = 0x424A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424A50u;
        // 0x424a54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424A50u, 0x424A58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424A58u;
label_424a58:
    // 0x424a58: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x424a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_424a5c:
    // 0x424a5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x424a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424a60:
    // 0x424a60: 0x2473e8f8  addiu       $s3, $v1, -0x1708
    ctx->pc = 0x424a60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961400));
label_424a64:
    // 0x424a64: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x424a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_424a68:
    // 0x424a68: 0x43940  sll         $a3, $a0, 5
    ctx->pc = 0x424a68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_424a6c:
    // 0x424a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424a70:
    // 0x424a70: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x424a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_424a74:
    // 0x424a74: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x424a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_424a78:
    // 0x424a78: 0xb23004  sllv        $a2, $s2, $a1
    ctx->pc = 0x424a78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
label_424a7c:
    // 0x424a7c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x424a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_424a80:
    // 0x424a80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x424a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_424a84:
    // 0x424a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x424a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_424a88:
    // 0x424a88: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x424a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_424a8c:
    // 0x424a8c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x424a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_424a90:
    // 0x424a90: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x424a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
label_424a94:
    // 0x424a94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x424a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_424a98:
    // 0x424a98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x424a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_424a9c:
    // 0x424a9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_424aa0:
    if (ctx->pc == 0x424AA0u) {
        ctx->pc = 0x424AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424A9Cu;
        // 0x424aa0: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424AA4u;
        goto label_424aa4;
    }
    ctx->pc = 0x424A9Cu;
    {
        const bool branch_taken_0x424a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x424AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424A9Cu;
        // 0x424aa0: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424a9c) {
            ctx->pc = 0x424AB0u;
            goto label_424ab0;
        }
    }
    ctx->pc = 0x424AA4u;
label_424aa4:
    // 0x424aa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x424aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424aa8:
    // 0x424aa8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x424aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_424aac:
    // 0x424aac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x424aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_424ab0:
    // 0x424ab0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_424ab4:
    if (ctx->pc == 0x424AB4u) {
        ctx->pc = 0x424AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424AB0u;
        // 0x424ab4: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424AB8u;
        goto label_424ab8;
    }
    ctx->pc = 0x424AB0u;
    {
        const bool branch_taken_0x424ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424AB0u;
        // 0x424ab4: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424ab0) {
            ctx->pc = 0x424A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424a78;
        }
    }
    ctx->pc = 0x424AB8u;
label_424ab8:
    // 0x424ab8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x424ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424abc:
    // 0x424abc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x424abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424ac0:
    // 0x424ac0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x424ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_424ac4:
    // 0x424ac4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x424ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_424ac8:
    // 0x424ac8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x424ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_424acc:
    // 0x424acc: 0x40f809  jalr        $v0
label_424ad0:
    if (ctx->pc == 0x424AD0u) {
        ctx->pc = 0x424AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424ACCu;
        // 0x424ad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424AD4u;
        goto label_424ad4;
    }
    ctx->pc = 0x424ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424AD4u);
        ctx->pc = 0x424AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424ACCu;
        // 0x424ad0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424ACCu, 0x424AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424AD4u;
label_424ad4:
    // 0x424ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424ad8:
    // 0x424ad8: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x424ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_424adc:
    // 0x424adc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_424ae0:
    if (ctx->pc == 0x424AE0u) {
        ctx->pc = 0x424AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424ADCu;
        // 0x424ae0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424AE4u;
        goto label_424ae4;
    }
    ctx->pc = 0x424ADCu;
    {
        const bool branch_taken_0x424adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424ADCu;
        // 0x424ae0: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424adc) {
            ctx->pc = 0x424A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424a68;
        }
    }
    ctx->pc = 0x424AE4u;
label_424ae4:
    // 0x424ae4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x424ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_424ae8:
    // 0x424ae8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x424ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424aec:
    // 0x424aec: 0x2453e948  addiu       $s3, $v0, -0x16B8
    ctx->pc = 0x424aecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
label_424af0:
    // 0x424af0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x424af0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424af4:
    // 0x424af4: 0x0  nop
    ctx->pc = 0x424af4u;
    // NOP
label_424af8:
    // 0x424af8: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x424af8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_424afc:
    // 0x424afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424b00:
    // 0x424b00: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x424b00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_424b04:
    // 0x424b04: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x424b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_424b08:
    // 0x424b08: 0xb23004  sllv        $a2, $s2, $a1
    ctx->pc = 0x424b08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 5) & 0x1F));
label_424b0c:
    // 0x424b0c: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x424b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_424b10:
    // 0x424b10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x424b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_424b14:
    // 0x424b14: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x424b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_424b18:
    // 0x424b18: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x424b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_424b1c:
    // 0x424b1c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x424b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_424b20:
    // 0x424b20: 0x521004  sllv        $v0, $s2, $v0
    ctx->pc = 0x424b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
label_424b24:
    // 0x424b24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x424b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_424b28:
    // 0x424b28: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x424b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_424b2c:
    // 0x424b2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_424b30:
    if (ctx->pc == 0x424B30u) {
        ctx->pc = 0x424B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B2Cu;
        // 0x424b30: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x424B34u;
        goto label_424b34;
    }
    ctx->pc = 0x424B2Cu;
    {
        const bool branch_taken_0x424b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x424B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B2Cu;
        // 0x424b30: 0x2ca30020  sltiu       $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b2c) {
            ctx->pc = 0x424B40u;
            goto label_424b40;
        }
    }
    ctx->pc = 0x424B34u;
label_424b34:
    // 0x424b34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x424b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424b38:
    // 0x424b38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x424b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_424b3c:
    // 0x424b3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x424b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_424b40:
    // 0x424b40: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_424b44:
    if (ctx->pc == 0x424B44u) {
        ctx->pc = 0x424B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B40u;
        // 0x424b44: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424B48u;
        goto label_424b48;
    }
    ctx->pc = 0x424B40u;
    {
        const bool branch_taken_0x424b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B40u;
        // 0x424b44: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424b40) {
            ctx->pc = 0x424B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424b08;
        }
    }
    ctx->pc = 0x424B48u;
label_424b48:
    // 0x424b48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x424b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_424b4c:
    // 0x424b4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x424b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424b50:
    // 0x424b50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x424b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_424b54:
    // 0x424b54: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x424b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_424b58:
    // 0x424b58: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x424b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_424b5c:
    // 0x424b5c: 0x40f809  jalr        $v0
label_424b60:
    if (ctx->pc == 0x424B60u) {
        ctx->pc = 0x424B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B5Cu;
        // 0x424b60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424B64u;
        goto label_424b64;
    }
    ctx->pc = 0x424B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424B64u);
        ctx->pc = 0x424B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B5Cu;
        // 0x424b60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424B5Cu, 0x424B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424B64u;
label_424b64:
    // 0x424b64: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x424b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_424b68:
    // 0x424b68: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x424b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_424b6c:
    // 0x424b6c: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_424b70:
    if (ctx->pc == 0x424B70u) {
        ctx->pc = 0x424B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B6Cu;
        // 0x424b70: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424B74u;
        goto label_424b74;
    }
    ctx->pc = 0x424B6Cu;
    {
        const bool branch_taken_0x424b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x424b6c) {
            ctx->pc = 0x424B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424B6Cu;
            // 0x424b70: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424af8;
        }
    }
    ctx->pc = 0x424B74u;
label_424b74:
    // 0x424b74: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x424b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_424b78:
    // 0x424b78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x424b78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_424b7c:
    // 0x424b7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x424b7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_424b80:
    // 0x424b80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x424b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424b84:
    // 0x424b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424b88:
    // 0x424b88: 0x3e00008  jr          $ra
label_424b8c:
    if (ctx->pc == 0x424B8Cu) {
        ctx->pc = 0x424B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B88u;
        // 0x424b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424B90u;
        goto label_fallthrough_0x424b88;
    }
    ctx->pc = 0x424B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424B88u;
        // 0x424b8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x424b88:
    ctx->pc = 0x424B90u;
}
