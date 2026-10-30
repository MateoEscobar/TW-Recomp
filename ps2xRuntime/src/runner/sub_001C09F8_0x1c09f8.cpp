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

// Function: sub_001C09F8
// Address: 0x1c09f8 - 0x1c0bb0
void sub_001C09F8_0x1c09f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C09F8_0x1c09f8");
#endif

    switch (ctx->pc) {
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c09fcu: goto label_1c09fc;
        case 0x1c0a00u: goto label_1c0a00;
        case 0x1c0a04u: goto label_1c0a04;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a0cu: goto label_1c0a0c;
        case 0x1c0a10u: goto label_1c0a10;
        case 0x1c0a14u: goto label_1c0a14;
        case 0x1c0a18u: goto label_1c0a18;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0a20u: goto label_1c0a20;
        case 0x1c0a24u: goto label_1c0a24;
        case 0x1c0a28u: goto label_1c0a28;
        case 0x1c0a2cu: goto label_1c0a2c;
        case 0x1c0a30u: goto label_1c0a30;
        case 0x1c0a34u: goto label_1c0a34;
        case 0x1c0a38u: goto label_1c0a38;
        case 0x1c0a3cu: goto label_1c0a3c;
        case 0x1c0a40u: goto label_1c0a40;
        case 0x1c0a44u: goto label_1c0a44;
        case 0x1c0a48u: goto label_1c0a48;
        case 0x1c0a4cu: goto label_1c0a4c;
        case 0x1c0a50u: goto label_1c0a50;
        case 0x1c0a54u: goto label_1c0a54;
        case 0x1c0a58u: goto label_1c0a58;
        case 0x1c0a5cu: goto label_1c0a5c;
        case 0x1c0a60u: goto label_1c0a60;
        case 0x1c0a64u: goto label_1c0a64;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0a6cu: goto label_1c0a6c;
        case 0x1c0a70u: goto label_1c0a70;
        case 0x1c0a74u: goto label_1c0a74;
        case 0x1c0a78u: goto label_1c0a78;
        case 0x1c0a7cu: goto label_1c0a7c;
        case 0x1c0a80u: goto label_1c0a80;
        case 0x1c0a84u: goto label_1c0a84;
        case 0x1c0a88u: goto label_1c0a88;
        case 0x1c0a8cu: goto label_1c0a8c;
        case 0x1c0a90u: goto label_1c0a90;
        case 0x1c0a94u: goto label_1c0a94;
        case 0x1c0a98u: goto label_1c0a98;
        case 0x1c0a9cu: goto label_1c0a9c;
        case 0x1c0aa0u: goto label_1c0aa0;
        case 0x1c0aa4u: goto label_1c0aa4;
        case 0x1c0aa8u: goto label_1c0aa8;
        case 0x1c0aacu: goto label_1c0aac;
        case 0x1c0ab0u: goto label_1c0ab0;
        case 0x1c0ab4u: goto label_1c0ab4;
        case 0x1c0ab8u: goto label_1c0ab8;
        case 0x1c0abcu: goto label_1c0abc;
        case 0x1c0ac0u: goto label_1c0ac0;
        case 0x1c0ac4u: goto label_1c0ac4;
        case 0x1c0ac8u: goto label_1c0ac8;
        case 0x1c0accu: goto label_1c0acc;
        case 0x1c0ad0u: goto label_1c0ad0;
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ad8u: goto label_1c0ad8;
        case 0x1c0adcu: goto label_1c0adc;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0ae8u: goto label_1c0ae8;
        case 0x1c0aecu: goto label_1c0aec;
        case 0x1c0af0u: goto label_1c0af0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0af8u: goto label_1c0af8;
        case 0x1c0afcu: goto label_1c0afc;
        case 0x1c0b00u: goto label_1c0b00;
        case 0x1c0b04u: goto label_1c0b04;
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b0cu: goto label_1c0b0c;
        case 0x1c0b10u: goto label_1c0b10;
        case 0x1c0b14u: goto label_1c0b14;
        case 0x1c0b18u: goto label_1c0b18;
        case 0x1c0b1cu: goto label_1c0b1c;
        case 0x1c0b20u: goto label_1c0b20;
        case 0x1c0b24u: goto label_1c0b24;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b2cu: goto label_1c0b2c;
        case 0x1c0b30u: goto label_1c0b30;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b38u: goto label_1c0b38;
        case 0x1c0b3cu: goto label_1c0b3c;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b44u: goto label_1c0b44;
        case 0x1c0b48u: goto label_1c0b48;
        case 0x1c0b4cu: goto label_1c0b4c;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b54u: goto label_1c0b54;
        case 0x1c0b58u: goto label_1c0b58;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b64u: goto label_1c0b64;
        case 0x1c0b68u: goto label_1c0b68;
        case 0x1c0b6cu: goto label_1c0b6c;
        case 0x1c0b70u: goto label_1c0b70;
        case 0x1c0b74u: goto label_1c0b74;
        case 0x1c0b78u: goto label_1c0b78;
        case 0x1c0b7cu: goto label_1c0b7c;
        case 0x1c0b80u: goto label_1c0b80;
        case 0x1c0b84u: goto label_1c0b84;
        case 0x1c0b88u: goto label_1c0b88;
        case 0x1c0b8cu: goto label_1c0b8c;
        case 0x1c0b90u: goto label_1c0b90;
        case 0x1c0b94u: goto label_1c0b94;
        case 0x1c0b98u: goto label_1c0b98;
        case 0x1c0b9cu: goto label_1c0b9c;
        case 0x1c0ba0u: goto label_1c0ba0;
        case 0x1c0ba4u: goto label_1c0ba4;
        case 0x1c0ba8u: goto label_1c0ba8;
        case 0x1c0bacu: goto label_1c0bac;
        default: break;
    }

    ctx->pc = 0x1c09f8u;

label_1c09f8:
    // 0x1c09f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c09f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c09fc:
    // 0x1c09fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c09fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c0a00:
    // 0x1c0a00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c0a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c0a04:
    // 0x1c0a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a08:
    // 0x1c0a08: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c0a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c0a0c:
    // 0x1c0a0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a10:
    // 0x1c0a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c0a14:
    // 0x1c0a14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c0a14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a18:
    // 0x1c0a18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0a1c:
    // 0x1c0a1c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1c0a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1c0a20:
    // 0x1c0a20: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1c0a20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_1c0a24:
    // 0x1c0a24: 0x0  nop
    ctx->pc = 0x1c0a24u;
    // NOP
label_1c0a28:
    // 0x1c0a28: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x1c0a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_1c0a2c:
    // 0x1c0a2c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_1c0a30:
    // 0x1c0a30: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1c0a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c0a34:
    // 0x1c0a34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1c0a38:
    if (ctx->pc == 0x1C0A38u) {
        ctx->pc = 0x1C0A3Cu;
        goto label_1c0a3c;
    }
    ctx->pc = 0x1C0A34u;
    {
        const bool branch_taken_0x1c0a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a34) {
            ctx->pc = 0x1C0A60u;
            goto label_1c0a60;
        }
    }
    ctx->pc = 0x1C0A3Cu;
label_1c0a3c:
    // 0x1c0a3c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1c0a40:
    // 0x1c0a40: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x1c0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_1c0a44:
    // 0x1c0a44: 0xc0e409a  jal         func_390268
label_1c0a48:
    if (ctx->pc == 0x1C0A48u) {
        ctx->pc = 0x1C0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A44u;
        // 0x1c0a48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A4Cu;
        goto label_1c0a4c;
    }
    ctx->pc = 0x1C0A44u;
    SET_GPR_U32(ctx, 31, 0x1C0A4Cu);
    ctx->pc = 0x1C0A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A44u;
    // 0x1c0a48: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1C0A44u, 0x1C0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A4Cu;
label_1c0a4c:
    // 0x1c0a4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c0a4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a50:
    // 0x1c0a50: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x1c0a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1c0a54:
    // 0x1c0a54: 0x8e220380  lw          $v0, 0x380($s1)
    ctx->pc = 0x1c0a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_1c0a58:
    // 0x1c0a58: 0x5443fff3  bnel        $v0, $v1, . + 4 + (-0xD << 2)
label_1c0a5c:
    if (ctx->pc == 0x1C0A5Cu) {
        ctx->pc = 0x1C0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A58u;
        // 0x1c0a5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A60u;
        goto label_1c0a60;
    }
    ctx->pc = 0x1C0A58u;
    {
        const bool branch_taken_0x1c0a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0a58) {
            ctx->pc = 0x1C0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A58u;
            // 0x1c0a5c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A60u;
label_1c0a60:
    // 0x1c0a60: 0x5220004b  beql        $s1, $zero, . + 4 + (0x4B << 2)
label_1c0a64:
    if (ctx->pc == 0x1C0A64u) {
        ctx->pc = 0x1C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A60u;
        // 0x1c0a64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A68u;
        goto label_1c0a68;
    }
    ctx->pc = 0x1C0A60u;
    {
        const bool branch_taken_0x1c0a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a60) {
            ctx->pc = 0x1C0A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A60u;
            // 0x1c0a64: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0A68u;
label_1c0a68:
    // 0x1c0a68: 0xc08a01c  jal         func_228070
label_1c0a6c:
    if (ctx->pc == 0x1C0A6Cu) {
        ctx->pc = 0x1C0A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A68u;
        // 0x1c0a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A70u;
        goto label_1c0a70;
    }
    ctx->pc = 0x1C0A68u;
    SET_GPR_U32(ctx, 31, 0x1C0A70u);
    ctx->pc = 0x1C0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A68u;
    // 0x1c0a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x1C0A68u, 0x1C0A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A70u;
label_1c0a70:
    // 0x1c0a70: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c0a74:
    if (ctx->pc == 0x1C0A74u) {
        ctx->pc = 0x1C0A78u;
        goto label_1c0a78;
    }
    ctx->pc = 0x1C0A70u;
    {
        const bool branch_taken_0x1c0a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a70) {
            ctx->pc = 0x1C0A98u;
            goto label_1c0a98;
        }
    }
    ctx->pc = 0x1C0A78u;
label_1c0a78:
    // 0x1c0a78: 0xc08a024  jal         func_228090
label_1c0a7c:
    if (ctx->pc == 0x1C0A7Cu) {
        ctx->pc = 0x1C0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A78u;
        // 0x1c0a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A80u;
        goto label_1c0a80;
    }
    ctx->pc = 0x1C0A78u;
    SET_GPR_U32(ctx, 31, 0x1C0A80u);
    ctx->pc = 0x1C0A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A78u;
    // 0x1c0a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x1C0A78u, 0x1C0A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A80u;
label_1c0a80:
    // 0x1c0a80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c0a84:
    if (ctx->pc == 0x1C0A84u) {
        ctx->pc = 0x1C0A88u;
        goto label_1c0a88;
    }
    ctx->pc = 0x1C0A80u;
    {
        const bool branch_taken_0x1c0a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a80) {
            ctx->pc = 0x1C0A98u;
            goto label_1c0a98;
        }
    }
    ctx->pc = 0x1C0A88u;
label_1c0a88:
    // 0x1c0a88: 0xc08a03c  jal         func_2280F0
label_1c0a8c:
    if (ctx->pc == 0x1C0A8Cu) {
        ctx->pc = 0x1C0A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A88u;
        // 0x1c0a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A90u;
        goto label_1c0a90;
    }
    ctx->pc = 0x1C0A88u;
    SET_GPR_U32(ctx, 31, 0x1C0A90u);
    ctx->pc = 0x1C0A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0A88u;
    // 0x1c0a8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2280F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2280F0u, 0x1C0A88u, 0x1C0A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0A90u;
label_1c0a90:
    // 0x1c0a90: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1c0a94:
    if (ctx->pc == 0x1C0A94u) {
        ctx->pc = 0x1C0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A90u;
        // 0x1c0a94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A98u;
        goto label_1c0a98;
    }
    ctx->pc = 0x1C0A90u;
    {
        const bool branch_taken_0x1c0a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0a90) {
            ctx->pc = 0x1C0A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0A90u;
            // 0x1c0a94: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0A98u;
label_1c0a98:
    // 0x1c0a98: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c0a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1c0a9c:
    // 0x1c0a9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1c0a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1c0aa0:
    // 0x1c0aa0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1c0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1c0aa4:
    // 0x1c0aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0aa8:
    // 0x1c0aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0aac:
    // 0x1c0aac: 0xc06844e  jal         func_1A1138
label_1c0ab0:
    if (ctx->pc == 0x1C0AB0u) {
        ctx->pc = 0x1C0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AACu;
        // 0x1c0ab0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AB4u;
        goto label_1c0ab4;
    }
    ctx->pc = 0x1C0AACu;
    SET_GPR_U32(ctx, 31, 0x1C0AB4u);
    ctx->pc = 0x1C0AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AACu;
    // 0x1c0ab0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1C0AACu, 0x1C0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AB4u;
label_1c0ab4:
    // 0x1c0ab4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c0ab4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1c0ab8:
    // 0x1c0ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0abc:
    // 0x1c0abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ac0:
    // 0x1c0ac0: 0xc06844e  jal         func_1A1138
label_1c0ac4:
    if (ctx->pc == 0x1C0AC4u) {
        ctx->pc = 0x1C0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AC0u;
        // 0x1c0ac4: 0x26640080  addiu       $a0, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AC8u;
        goto label_1c0ac8;
    }
    ctx->pc = 0x1C0AC0u;
    SET_GPR_U32(ctx, 31, 0x1C0AC8u);
    ctx->pc = 0x1C0AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AC0u;
    // 0x1c0ac4: 0x26640080  addiu       $a0, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1138u, 0x1C0AC0u, 0x1C0AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AC8u;
label_1c0ac8:
    // 0x1c0ac8: 0xc068998  jal         func_1A2660
label_1c0acc:
    if (ctx->pc == 0x1C0ACCu) {
        ctx->pc = 0x1C0ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AC8u;
        // 0x1c0acc: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AD0u;
        goto label_1c0ad0;
    }
    ctx->pc = 0x1C0AC8u;
    SET_GPR_U32(ctx, 31, 0x1C0AD0u);
    ctx->pc = 0x1C0ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AC8u;
    // 0x1c0acc: 0x26640100  addiu       $a0, $s3, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1C0AC8u, 0x1C0AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD0u;
label_1c0ad0:
    // 0x1c0ad0: 0xc068998  jal         func_1A2660
label_1c0ad4:
    if (ctx->pc == 0x1C0AD4u) {
        ctx->pc = 0x1C0AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AD0u;
        // 0x1c0ad4: 0x26640200  addiu       $a0, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AD8u;
        goto label_1c0ad8;
    }
    ctx->pc = 0x1C0AD0u;
    SET_GPR_U32(ctx, 31, 0x1C0AD8u);
    ctx->pc = 0x1C0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AD0u;
    // 0x1c0ad4: 0x26640200  addiu       $a0, $s3, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1C0AD0u, 0x1C0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AD8u;
label_1c0ad8:
    // 0x1c0ad8: 0xc06ec70  jal         func_1BB1C0
label_1c0adc:
    if (ctx->pc == 0x1C0ADCu) {
        ctx->pc = 0x1C0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AD8u;
        // 0x1c0adc: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AE0u;
        goto label_1c0ae0;
    }
    ctx->pc = 0x1C0AD8u;
    SET_GPR_U32(ctx, 31, 0x1C0AE0u);
    ctx->pc = 0x1C0ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0AD8u;
    // 0x1c0adc: 0x26640640  addiu       $a0, $s3, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1C0AD8u, 0x1C0AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0AE0u;
label_1c0ae0:
    // 0x1c0ae0: 0x8e620850  lw          $v0, 0x850($s3)
    ctx->pc = 0x1c0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2128)));
label_1c0ae4:
    // 0x1c0ae4: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_1c0ae8:
    if (ctx->pc == 0x1C0AE8u) {
        ctx->pc = 0x1C0AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AE4u;
        // 0x1c0ae8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AECu;
        goto label_1c0aec;
    }
    ctx->pc = 0x1C0AE4u;
    {
        const bool branch_taken_0x1c0ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0ae4) {
            ctx->pc = 0x1C0AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0AE4u;
            // 0x1c0ae8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B90u;
            goto label_1c0b90;
        }
    }
    ctx->pc = 0x1C0AECu;
label_1c0aec:
    // 0x1c0aec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c0aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c0af0:
    // 0x1c0af0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c0af4:
    if (ctx->pc == 0x1C0AF4u) {
        ctx->pc = 0x1C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AF0u;
        // 0x1c0af4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0AF8u;
        goto label_1c0af8;
    }
    ctx->pc = 0x1C0AF0u;
    {
        const bool branch_taken_0x1c0af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AF0u;
        // 0x1c0af4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0af0) {
            ctx->pc = 0x1C0B00u;
            goto label_1c0b00;
        }
    }
    ctx->pc = 0x1C0AF8u;
label_1c0af8:
    // 0x1c0af8: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_1c0afc:
    if (ctx->pc == 0x1C0AFCu) {
        ctx->pc = 0x1C0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0AF8u;
        // 0x1c0afc: 0x8e62084c  lw          $v0, 0x84C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B00u;
        goto label_1c0b00;
    }
    ctx->pc = 0x1C0AF8u;
    {
        const bool branch_taken_0x1c0af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0af8) {
            ctx->pc = 0x1C0AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0AF8u;
            // 0x1c0afc: 0x8e62084c  lw          $v0, 0x84C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B48u;
            goto label_1c0b48;
        }
    }
    ctx->pc = 0x1C0B00u;
label_1c0b00:
    // 0x1c0b00: 0x8e62084c  lw          $v0, 0x84C($s3)
    ctx->pc = 0x1c0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2124)));
label_1c0b04:
    // 0x1c0b04: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1c0b08:
    if (ctx->pc == 0x1C0B08u) {
        ctx->pc = 0x1C0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B04u;
        // 0x1c0b08: 0x26700300  addiu       $s0, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B0Cu;
        goto label_1c0b0c;
    }
    ctx->pc = 0x1C0B04u;
    {
        const bool branch_taken_0x1c0b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B04u;
        // 0x1c0b08: 0x26700300  addiu       $s0, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b04) {
            ctx->pc = 0x1C0B88u;
            goto label_1c0b88;
        }
    }
    ctx->pc = 0x1C0B0Cu;
label_1c0b0c:
    // 0x1c0b0c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b10:
    // 0x1c0b10: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c0b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b14:
    // 0x1c0b14: 0x0  nop
    ctx->pc = 0x1c0b14u;
    // NOP
label_1c0b18:
    // 0x1c0b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0b1c:
    // 0x1c0b1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c0b20:
    // 0x1c0b20: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1c0b20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1c0b24:
    // 0x1c0b24: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1c0b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1c0b28:
    // 0x1c0b28: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c0b2c:
    // 0x1c0b2c: 0x40f809  jalr        $v0
label_1c0b30:
    if (ctx->pc == 0x1C0B30u) {
        ctx->pc = 0x1C0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B2Cu;
        // 0x1c0b30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B34u;
        goto label_1c0b34;
    }
    ctx->pc = 0x1C0B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0B34u);
        ctx->pc = 0x1C0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B2Cu;
        // 0x1c0b30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B2Cu, 0x1C0B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0B34u;
label_1c0b34:
    // 0x1c0b34: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1c0b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c0b38:
    // 0x1c0b38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c0b3c:
    if (ctx->pc == 0x1C0B3Cu) {
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B38u;
        // 0x1c0b3c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B40u;
        goto label_1c0b40;
    }
    ctx->pc = 0x1C0B38u;
    {
        const bool branch_taken_0x1c0b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B38u;
        // 0x1c0b3c: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b38) {
            ctx->pc = 0x1C0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0b18;
        }
    }
    ctx->pc = 0x1C0B40u;
label_1c0b40:
    // 0x1c0b40: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c0b44:
    if (ctx->pc == 0x1C0B44u) {
        ctx->pc = 0x1C0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B40u;
        // 0x1c0b44: 0xae600850  sw          $zero, 0x850($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B48u;
        goto label_1c0b48;
    }
    ctx->pc = 0x1C0B40u;
    {
        const bool branch_taken_0x1c0b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B40u;
        // 0x1c0b44: 0xae600850  sw          $zero, 0x850($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b40) {
            ctx->pc = 0x1C0B8Cu;
            goto label_1c0b8c;
        }
    }
    ctx->pc = 0x1C0B48u;
label_1c0b48:
    // 0x1c0b48: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1c0b4c:
    if (ctx->pc == 0x1C0B4Cu) {
        ctx->pc = 0x1C0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B48u;
        // 0x1c0b4c: 0xae600850  sw          $zero, 0x850($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B50u;
        goto label_1c0b50;
    }
    ctx->pc = 0x1C0B48u;
    {
        const bool branch_taken_0x1c0b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b48) {
            ctx->pc = 0x1C0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0B48u;
            // 0x1c0b4c: 0xae600850  sw          $zero, 0x850($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 2128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0B8Cu;
            goto label_1c0b8c;
        }
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0x26700300  addiu       $s0, $s3, 0x300
    ctx->pc = 0x1c0b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
label_1c0b54:
    // 0x1c0b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c0b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b58:
    // 0x1c0b58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c0b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b5c:
    // 0x1c0b5c: 0x0  nop
    ctx->pc = 0x1c0b5cu;
    // NOP
label_1c0b60:
    // 0x1c0b60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c0b64:
    // 0x1c0b64: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c0b64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c0b68:
    // 0x1c0b68: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1c0b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1c0b6c:
    // 0x1c0b6c: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1c0b6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1c0b70:
    // 0x1c0b70: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1c0b74:
    // 0x1c0b74: 0x40f809  jalr        $v0
label_1c0b78:
    if (ctx->pc == 0x1C0B78u) {
        ctx->pc = 0x1C0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B74u;
        // 0x1c0b78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B7Cu;
        goto label_1c0b7c;
    }
    ctx->pc = 0x1C0B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0B7Cu);
        ctx->pc = 0x1C0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B74u;
        // 0x1c0b78: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0B74u, 0x1C0B7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0B7Cu;
label_1c0b7c:
    // 0x1c0b7c: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1c0b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1c0b80:
    // 0x1c0b80: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1c0b84:
    if (ctx->pc == 0x1C0B84u) {
        ctx->pc = 0x1C0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B80u;
        // 0x1c0b84: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B88u;
        goto label_1c0b88;
    }
    ctx->pc = 0x1C0B80u;
    {
        const bool branch_taken_0x1c0b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B80u;
        // 0x1c0b84: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b80) {
            ctx->pc = 0x1C0B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0b60;
        }
    }
    ctx->pc = 0x1C0B88u;
label_1c0b88:
    // 0x1c0b88: 0xae600850  sw          $zero, 0x850($s3)
    ctx->pc = 0x1c0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2128), GPR_U32(ctx, 0));
label_1c0b8c:
    // 0x1c0b8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c0b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0b90:
    // 0x1c0b90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c0b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0b94:
    // 0x1c0b94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0b98:
    // 0x1c0b98: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c0b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0b9c:
    // 0x1c0b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0ba0:
    // 0x1c0ba0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1c0ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c0ba4:
    // 0x1c0ba4: 0x3e00008  jr          $ra
label_1c0ba8:
    if (ctx->pc == 0x1C0BA8u) {
        ctx->pc = 0x1C0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BA4u;
        // 0x1c0ba8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0BACu;
        goto label_1c0bac;
    }
    ctx->pc = 0x1C0BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0BA4u;
        // 0x1c0ba8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0BACu;
label_1c0bac:
    // 0x1c0bac: 0x0  nop
    ctx->pc = 0x1c0bacu;
    // NOP
    ctx->pc = 0x1c0bb0u;
}
