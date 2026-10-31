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

// Function: sub_00309B60
// Address: 0x309b60 - 0x309df8
void sub_00309B60_0x309b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309B60_0x309b60");
#endif

    switch (ctx->pc) {
        case 0x309be4u: goto label_309be4;
        case 0x309c08u: goto label_309c08;
        case 0x309c60u: goto label_309c60;
        case 0x309c98u: goto label_309c98;
        case 0x309d08u: goto label_309d08;
        case 0x309da8u: goto label_309da8;
        default: break;
    }

    ctx->pc = 0x309b60u;

    // 0x309b60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x309b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x309b64: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x309b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x309b68: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x309b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x309b6c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x309b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x309b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x309b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b74: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x309b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x309b78: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x309b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x309b7c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x309b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b80: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x309b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x309b84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x309b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x309b88: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x309b88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b8c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x309b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x309b90: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x309b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309b94: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x309b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x309b98: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x309b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x309b9c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x309b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x309ba0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x309ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x309ba4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x309ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x309ba8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x309ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x309bac: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x309bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x309bb0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x309bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x309bb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x309bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bb8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x309bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x309bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x309bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bc0: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x309bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x309bc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x309bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x309bc8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x309bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x309bcc: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x309bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x309bd0: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x309bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x309bd4: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x309bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x309bd8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x309bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x309bdc: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x309BDCu;
    SET_GPR_U32(ctx, 31, 0x309BE4u);
    ctx->pc = 0x309BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309BDCu;
    // 0x309be0: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x309BDCu, 0x309BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309BE4u;
label_309be4:
    // 0x309be4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x309be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x309be8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x309be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x309bec: 0x24423440  addiu       $v0, $v0, 0x3440
    ctx->pc = 0x309becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13376));
    // 0x309bf0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x309bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309bf4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x309bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x309bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x309bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309bfc: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x309bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x309c00: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x309c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x309c04: 0x0  nop
    ctx->pc = 0x309c04u;
    // NOP
label_309c08:
    // 0x309c08: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x309c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x309c0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x309c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x309c10: 0x0  nop
    ctx->pc = 0x309c10u;
    // NOP
    // 0x309c14: 0x0  nop
    ctx->pc = 0x309c14u;
    // NOP
    // 0x309c18: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x309C18u;
    {
        const bool branch_taken_0x309c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x309C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C18u;
        // 0x309c1c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c18) {
            ctx->pc = 0x309C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309c08;
        }
    }
    ctx->pc = 0x309C20u;
    // 0x309c20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x309c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x309c24: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x309c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x309c28: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x309c28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309c2c: 0x260e0030  addiu       $t6, $s0, 0x30
    ctx->pc = 0x309c2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x309c30: 0x260d0040  addiu       $t5, $s0, 0x40
    ctx->pc = 0x309c30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x309c34: 0x260f0050  addiu       $t7, $s0, 0x50
    ctx->pc = 0x309c34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x309c38: 0x26040053  addiu       $a0, $s0, 0x53
    ctx->pc = 0x309c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 83));
    // 0x309c3c: 0x26050056  addiu       $a1, $s0, 0x56
    ctx->pc = 0x309c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 86));
    // 0x309c40: 0x26060059  addiu       $a2, $s0, 0x59
    ctx->pc = 0x309c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 89));
    // 0x309c44: 0x2607005c  addiu       $a3, $s0, 0x5C
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x309c48: 0x2611005f  addiu       $s1, $s0, 0x5F
    ctx->pc = 0x309c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 95));
    // 0x309c4c: 0x26120062  addiu       $s2, $s0, 0x62
    ctx->pc = 0x309c4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 98));
    // 0x309c50: 0x260a0065  addiu       $t2, $s0, 0x65
    ctx->pc = 0x309c50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 101));
    // 0x309c54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x309c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x309c58: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x309c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309c5c: 0x0  nop
    ctx->pc = 0x309c5cu;
    // NOP
label_309c60:
    // 0x309c60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x309c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x309c64: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x309c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x309c68: 0x0  nop
    ctx->pc = 0x309c68u;
    // NOP
    // 0x309c6c: 0x0  nop
    ctx->pc = 0x309c6cu;
    // NOP
    // 0x309c70: 0x156cfffb  bne         $t3, $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x309C70u;
    {
        const bool branch_taken_0x309c70 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        ctx->pc = 0x309C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C70u;
        // 0x309c74: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c70) {
            ctx->pc = 0x309C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309c60;
        }
    }
    ctx->pc = 0x309C78u;
    // 0x309c78: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x309c78u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c7c: 0xa2140068  sb          $s4, 0x68($s0)
    ctx->pc = 0x309c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 20));
    // 0x309c80: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x309c80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x309c84: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x309c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c88: 0x1c0582d  daddu       $t3, $t6, $zero
    ctx->pc = 0x309c88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c8c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x309c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c90: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x309c90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c94: 0x0  nop
    ctx->pc = 0x309c94u;
    // NOP
label_309c98:
    // 0x309c98: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x309c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x309c9c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x309c9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x309ca0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x309ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x309ca4: 0x2da30008  sltiu       $v1, $t5, 0x8
    ctx->pc = 0x309ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x309ca8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x309ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x309cac: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x309cacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x309cb0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x309cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309cb4: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x309cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x309cb8: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x309cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x309cbc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x309CBCu;
    {
        const bool branch_taken_0x309cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CBCu;
        // 0x309cc0: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cbc) {
            ctx->pc = 0x309C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309c98;
        }
    }
    ctx->pc = 0x309CC4u;
    // 0x309cc4: 0xafaf000c  sw          $t7, 0xC($sp)
    ctx->pc = 0x309cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 15));
    // 0x309cc8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x309cc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ccc: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x309cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cd0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x309cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x309cd4: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x309cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x309cd8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x309cd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cdc: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x309cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x309ce0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x309ce0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309ce4: 0x8fb900d8  lw          $t9, 0xD8($sp)
    ctx->pc = 0x309ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x309ce8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x309ce8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cec: 0x8fb800d0  lw          $t8, 0xD0($sp)
    ctx->pc = 0x309cecu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x309cf0: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x309cf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cf4: 0x8faf00c8  lw          $t7, 0xC8($sp)
    ctx->pc = 0x309cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x309cf8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x309cf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309cfc: 0x8fae00c0  lw          $t6, 0xC0($sp)
    ctx->pc = 0x309cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x309d00: 0x8fab0008  lw          $t3, 0x8($sp)
    ctx->pc = 0x309d00u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309d04: 0x8fad0004  lw          $t5, 0x4($sp)
    ctx->pc = 0x309d04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_309d08:
    // 0x309d08: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x309d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x309d0c: 0x2ec3021  addu        $a2, $s7, $t4
    ctx->pc = 0x309d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 12)));
    // 0x309d10: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x309d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x309d14: 0x2cc3821  addu        $a3, $s6, $t4
    ctx->pc = 0x309d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 12)));
    // 0x309d18: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309d1c: 0x8c1021  addu        $v0, $a0, $t4
    ctx->pc = 0x309d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x309d20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x309d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x309d24: 0x2ac4021  addu        $t0, $s5, $t4
    ctx->pc = 0x309d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 12)));
    // 0x309d28: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x309d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x309d2c: 0x28c4821  addu        $t1, $s4, $t4
    ctx->pc = 0x309d2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
    // 0x309d30: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x309d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x309d34: 0x3cc2821  addu        $a1, $fp, $t4
    ctx->pc = 0x309d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x309d38: 0x26c5021  addu        $t2, $s3, $t4
    ctx->pc = 0x309d38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 12)));
    // 0x309d3c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x309d3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x309d40: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x309d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x309d44: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x309d44u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x309d48: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x309d48u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x309d4c: 0x2d840003  sltiu       $a0, $t4, 0x3
    ctx->pc = 0x309d4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x309d50: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x309d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x309d54: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x309d54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x309d58: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x309d58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x309d5c: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x309d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x309d60: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x309d60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x309d64: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x309d64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x309d68: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x309d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x309d6c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x309d6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x309d70: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x309d70u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x309d74: 0x93230000  lbu         $v1, 0x0($t9)
    ctx->pc = 0x309d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x309d78: 0x27390004  addiu       $t9, $t9, 0x4
    ctx->pc = 0x309d78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
    // 0x309d7c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x309d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x309d80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x309d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x309d84: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x309d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x309d88: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x309d88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x309d8c: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x309d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x309d90: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x309d90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x309d94: 0x1480ffdc  bnez        $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x309D94u;
    {
        const bool branch_taken_0x309d94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D94u;
        // 0x309d98: 0xa1430000  sb          $v1, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d94) {
            ctx->pc = 0x309D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309d08;
        }
    }
    ctx->pc = 0x309D9Cu;
    // 0x309d9c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x309d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309da0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x309da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309da4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x309da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_309da8:
    // 0x309da8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x309da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x309dac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x309dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x309db0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x309db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x309db4: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x309db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x309db8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x309db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x309dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x309DBCu;
    {
        const bool branch_taken_0x309dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DBCu;
        // 0x309dc0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dbc) {
            ctx->pc = 0x309DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309da8;
        }
    }
    ctx->pc = 0x309DC4u;
    // 0x309dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x309dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dc8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x309dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x309dcc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x309dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x309dd0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x309dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x309dd4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x309dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x309dd8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x309dd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x309ddc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x309ddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x309de0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x309de0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x309de4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x309de4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309de8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x309de8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x309decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309df0: 0x3e00008  jr          $ra
    ctx->pc = 0x309DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DF0u;
        // 0x309df4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309DF8u;
}
