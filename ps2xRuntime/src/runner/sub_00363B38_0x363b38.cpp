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

// Function: sub_00363B38
// Address: 0x363b38 - 0x363d70
void sub_00363B38_0x363b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363B38_0x363b38");
#endif

    switch (ctx->pc) {
        case 0x363b74u: goto label_363b74;
        case 0x363b7cu: goto label_363b7c;
        case 0x363b98u: goto label_363b98;
        case 0x363bc4u: goto label_363bc4;
        case 0x363bccu: goto label_363bcc;
        case 0x363be0u: goto label_363be0;
        case 0x363be8u: goto label_363be8;
        case 0x363bfcu: goto label_363bfc;
        case 0x363c10u: goto label_363c10;
        case 0x363c20u: goto label_363c20;
        case 0x363c38u: goto label_363c38;
        case 0x363c40u: goto label_363c40;
        case 0x363c58u: goto label_363c58;
        case 0x363c70u: goto label_363c70;
        case 0x363c78u: goto label_363c78;
        case 0x363ca8u: goto label_363ca8;
        case 0x363cb0u: goto label_363cb0;
        case 0x363cc4u: goto label_363cc4;
        case 0x363cdcu: goto label_363cdc;
        case 0x363cf0u: goto label_363cf0;
        case 0x363d08u: goto label_363d08;
        case 0x363d18u: goto label_363d18;
        case 0x363d2cu: goto label_363d2c;
        default: break;
    }

    ctx->pc = 0x363b38u;

    // 0x363b38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x363b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x363b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x363b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363b40: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x363b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x363b44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b48: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x363b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x363b4c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x363b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x363b50: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x363b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x363b54: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x363b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x363b58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x363b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x363b5c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x363b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x363b60: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x363b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x363b64: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x363b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x363b68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x363b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x363b6c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363B6Cu;
    SET_GPR_U32(ctx, 31, 0x363B74u);
    ctx->pc = 0x363B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B6Cu;
    // 0x363b70: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363B6Cu, 0x363B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B74u;
label_363b74:
    // 0x363b74: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363B74u;
    SET_GPR_U32(ctx, 31, 0x363B7Cu);
    ctx->pc = 0x363B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B74u;
    // 0x363b78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363B74u, 0x363B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B7Cu;
label_363b7c:
    // 0x363b7c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x363b7cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x363b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x363b84: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x363b84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x363b88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x363b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363b8c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x363b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b90: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x363b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363b94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x363b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_363b98:
    // 0x363b98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x363b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x363b9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x363b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x363ba0: 0x0  nop
    ctx->pc = 0x363ba0u;
    // NOP
    // 0x363ba4: 0x0  nop
    ctx->pc = 0x363ba4u;
    // NOP
    // 0x363ba8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x363BA8u;
    {
        const bool branch_taken_0x363ba8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x363BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363BA8u;
        // 0x363bac: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ba8) {
            ctx->pc = 0x363B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363b98;
        }
    }
    ctx->pc = 0x363BB0u;
    // 0x363bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x363bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x363bb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363bb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363BBCu;
    SET_GPR_U32(ctx, 31, 0x363BC4u);
    ctx->pc = 0x363BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BBCu;
    // 0x363bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363BBCu, 0x363BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BC4u;
label_363bc4:
    // 0x363bc4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363BC4u;
    SET_GPR_U32(ctx, 31, 0x363BCCu);
    ctx->pc = 0x363BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BC4u;
    // 0x363bc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363BC4u, 0x363BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BCCu;
label_363bcc:
    // 0x363bcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x363bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x363bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x363BD8u;
    SET_GPR_U32(ctx, 31, 0x363BE0u);
    ctx->pc = 0x363BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BD8u;
    // 0x363bdc: 0x3057ffff  andi        $s7, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x363BD8u, 0x363BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BE0u;
label_363be0:
    // 0x363be0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363BE0u;
    SET_GPR_U32(ctx, 31, 0x363BE8u);
    ctx->pc = 0x363BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BE0u;
    // 0x363be4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363BE0u, 0x363BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BE8u;
label_363be8:
    // 0x363be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x363becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x363bf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363bf4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x363BF4u;
    SET_GPR_U32(ctx, 31, 0x363BFCu);
    ctx->pc = 0x363BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363BF4u;
    // 0x363bf8: 0x3056ffff  andi        $s6, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x363BF4u, 0x363BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363BFCu;
label_363bfc:
    // 0x363bfc: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x363bfcu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x363c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x363c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x363c08: 0xc102488  jal         func_409220
    ctx->pc = 0x363C08u;
    SET_GPR_U32(ctx, 31, 0x363C10u);
    ctx->pc = 0x363C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C08u;
    // 0x363c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x363C08u, 0x363C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C10u;
label_363c10:
    // 0x363c10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x363c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c18: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x363c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c1c: 0x0  nop
    ctx->pc = 0x363c1cu;
    // NOP
label_363c20:
    // 0x363c20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x363c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x363c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x363c2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c30: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x363C30u;
    SET_GPR_U32(ctx, 31, 0x363C38u);
    ctx->pc = 0x363C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C30u;
    // 0x363c34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x363C30u, 0x363C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C38u;
label_363c38:
    // 0x363c38: 0xc10b108  jal         func_42C420
    ctx->pc = 0x363C38u;
    SET_GPR_U32(ctx, 31, 0x363C40u);
    ctx->pc = 0x363C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C38u;
    // 0x363c3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x363C38u, 0x363C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C40u;
label_363c40:
    // 0x363c40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x363c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x363c44: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x363c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x363c48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x363C48u;
    {
        const bool branch_taken_0x363c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C48u;
        // 0x363c4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c48) {
            ctx->pc = 0x363C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363c20;
        }
    }
    ctx->pc = 0x363C50u;
    // 0x363c50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c54: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x363c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_363c58:
    // 0x363c58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x363c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363c64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x363c64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c68: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x363C68u;
    SET_GPR_U32(ctx, 31, 0x363C70u);
    ctx->pc = 0x363C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C68u;
    // 0x363c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x363C68u, 0x363C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C70u;
label_363c70:
    // 0x363c70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x363C70u;
    SET_GPR_U32(ctx, 31, 0x363C78u);
    ctx->pc = 0x363C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C70u;
    // 0x363c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x363C70u, 0x363C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C78u;
label_363c78:
    // 0x363c78: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x363c78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x363c7c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x363c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x363c80: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x363C80u;
    {
        const bool branch_taken_0x363c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C80u;
        // 0x363c84: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c80) {
            ctx->pc = 0x363C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363c58;
        }
    }
    ctx->pc = 0x363C88u;
    // 0x363c88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c8c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x363c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c90: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x363c90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c94: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x363c94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c98: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x363c98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c9c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x363c9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ca0: 0xc0bb7c8  jal         func_2EDF20
    ctx->pc = 0x363CA0u;
    SET_GPR_U32(ctx, 31, 0x363CA8u);
    ctx->pc = 0x363CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363CA0u;
    // 0x363ca4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF20u, 0x363CA0u, 0x363CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CA8u;
label_363ca8:
    // 0x363ca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363cac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x363cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_363cb0:
    // 0x363cb0: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x363cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x363cb4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x363cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x363cb8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x363cb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363cbc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x363CBCu;
    SET_GPR_U32(ctx, 31, 0x363CC4u);
    ctx->pc = 0x363CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363CBCu;
    // 0x363cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x363CBCu, 0x363CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CC4u;
label_363cc4:
    // 0x363cc4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x363CC4u;
    {
        const bool branch_taken_0x363cc4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x363CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CC4u;
        // 0x363cc8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cc4) {
            ctx->pc = 0x363CE0u;
            goto label_363ce0;
        }
    }
    ctx->pc = 0x363CCCu;
    // 0x363ccc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x363cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x363cd0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x363cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x363cd4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x363CD4u;
    SET_GPR_U32(ctx, 31, 0x363CDCu);
    ctx->pc = 0x363CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363CD4u;
    // 0x363cd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x363CD4u, 0x363CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CDCu;
label_363cdc:
    // 0x363cdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x363cdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363ce0:
    // 0x363ce0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ce4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363ce8: 0xc102576  jal         func_4095D8
    ctx->pc = 0x363CE8u;
    SET_GPR_U32(ctx, 31, 0x363CF0u);
    ctx->pc = 0x363CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363CE8u;
    // 0x363cec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x363CE8u, 0x363CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363CF0u;
label_363cf0:
    // 0x363cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x363cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363cf4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x363cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x363cf8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x363CF8u;
    {
        const bool branch_taken_0x363cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CF8u;
        // 0x363cfc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cf8) {
            ctx->pc = 0x363CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363cb0;
        }
    }
    ctx->pc = 0x363D00u;
    // 0x363d00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d04: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x363d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_363d08:
    // 0x363d08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x363d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x363d0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x363d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x363d10: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x363D10u;
    SET_GPR_U32(ctx, 31, 0x363D18u);
    ctx->pc = 0x363D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D10u;
    // 0x363d14: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x363D10u, 0x363D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D18u;
label_363d18:
    // 0x363d18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x363d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x363d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x363d24: 0xc102576  jal         func_4095D8
    ctx->pc = 0x363D24u;
    SET_GPR_U32(ctx, 31, 0x363D2Cu);
    ctx->pc = 0x363D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D24u;
    // 0x363d28: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x363D24u, 0x363D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D2Cu;
label_363d2c:
    // 0x363d2c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x363d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x363d30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x363D30u;
    {
        const bool branch_taken_0x363d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x363D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D30u;
        // 0x363d34: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363d30) {
            ctx->pc = 0x363D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363d08;
        }
    }
    ctx->pc = 0x363D38u;
    // 0x363d38: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x363d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x363d3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x363d3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d40: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x363d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x363d44: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x363d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x363d48: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x363d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x363d4c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x363d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x363d50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x363d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x363d54: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x363d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363d58: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x363d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363d5c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x363d5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x363d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x363d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363d64: 0x3e00008  jr          $ra
    ctx->pc = 0x363D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D64u;
        // 0x363d68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D6Cu;
    // 0x363d6c: 0x0  nop
    ctx->pc = 0x363d6cu;
    // NOP
    ctx->pc = 0x363d70u;
}
