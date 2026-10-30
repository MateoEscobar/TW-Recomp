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

// Function: sub_0043B990
// Address: 0x43b990 - 0x43bb10
void sub_0043B990_0x43b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043B990_0x43b990");
#endif

    switch (ctx->pc) {
        case 0x43b9c4u: goto label_43b9c4;
        case 0x43ba2cu: goto label_43ba2c;
        case 0x43ba90u: goto label_43ba90;
        case 0x43bad8u: goto label_43bad8;
        default: break;
    }

    ctx->pc = 0x43b990u;

    // 0x43b990: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43b990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x43b994: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x43b994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x43b998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43b998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b99c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x43b99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x43b9a0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x43b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x43b9a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x43b9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43b9a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x43b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x43b9ac: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x43b9acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b9b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x43b9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x43b9b4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43b9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x43b9b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43b9bc: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x43B9BCu;
    SET_GPR_U32(ctx, 31, 0x43B9C4u);
    ctx->pc = 0x43B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43B9BCu;
    // 0x43b9c0: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x43B9BCu, 0x43B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43B9C4u;
label_43b9c4:
    // 0x43b9c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43b9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43b9c8: 0x10283f  dsra32      $a1, $s0, 0
    ctx->pc = 0x43b9c8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x43b9cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x43b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x43b9d0: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x43b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x43b9d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43b9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43b9d8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43b9dc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43b9e0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x43b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x43b9e4: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x43b9e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x43b9e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43b9ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x43b9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x43b9f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x43b9f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x43b9f4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x43b9f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x43b9f8: 0x26330014  addiu       $s3, $s1, 0x14
    ctx->pc = 0x43b9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x43b9fc: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x43b9fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x43ba00: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x43BA00u;
    {
        const bool branch_taken_0x43ba00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA00u;
        // 0x43ba04: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ba00) {
            ctx->pc = 0x43BA14u;
            goto label_43ba14;
        }
    }
    ctx->pc = 0x43BA08u;
    // 0x43ba08: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x43ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x43ba0c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x43ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x43ba10: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x43ba10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_43ba14:
    // 0x43ba14: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x43ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43ba18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x43ba18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43ba1c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x43BA1Cu;
    {
        const bool branch_taken_0x43ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA1Cu;
        // 0x43ba20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ba1c) {
            ctx->pc = 0x43BA84u;
            goto label_43ba84;
        }
    }
    ctx->pc = 0x43BA24u;
    // 0x43ba24: 0xc10ebf8  jal         func_43AFE0
    ctx->pc = 0x43BA24u;
    SET_GPR_U32(ctx, 31, 0x43BA2Cu);
    ctx->pc = 0x43BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BA24u;
    // 0x43ba28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AFE0u, 0x43BA24u, 0x43BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BA2Cu;
label_43ba2c:
    // 0x43ba2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43ba2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ba30: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x43BA30u;
    {
        const bool branch_taken_0x43ba30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA30u;
        // 0x43ba34: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ba30) {
            ctx->pc = 0x43BA5Cu;
            goto label_43ba5c;
        }
    }
    ctx->pc = 0x43BA38u;
    // 0x43ba38: 0x52023  negu        $a0, $a1
    ctx->pc = 0x43ba38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x43ba3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x43ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ba40: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x43ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x43ba44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x43ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43ba48: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x43ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x43ba4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x43ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x43ba50: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x43ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x43ba54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43BA54u;
    {
        const bool branch_taken_0x43ba54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA54u;
        // 0x43ba58: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ba54) {
            ctx->pc = 0x43BA64u;
            goto label_43ba64;
        }
    }
    ctx->pc = 0x43BA5Cu;
label_43ba5c:
    // 0x43ba5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43ba60: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x43ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_43ba64:
    // 0x43ba64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x43ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x43ba68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43ba68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43ba6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x43ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43ba70: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x43ba70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x43ba74: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x43ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x43ba78: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x43ba78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43ba7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x43BA7Cu;
    {
        const bool branch_taken_0x43ba7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BA7Cu;
        // 0x43ba80: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43ba7c) {
            ctx->pc = 0x43BAA4u;
            goto label_43baa4;
        }
    }
    ctx->pc = 0x43BA84u;
label_43ba84:
    // 0x43ba84: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x43ba84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x43ba88: 0xc10ebf8  jal         func_43AFE0
    ctx->pc = 0x43BA88u;
    SET_GPR_U32(ctx, 31, 0x43BA90u);
    ctx->pc = 0x43BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BA88u;
    // 0x43ba8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AFE0u, 0x43BA88u, 0x43BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BA90u;
label_43ba90:
    // 0x43ba90: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x43ba90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x43ba94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x43ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43ba98: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x43ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x43ba9c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x43ba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x43baa0: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x43baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_43baa4:
    // 0x43baa4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x43BAA4u;
    {
        const bool branch_taken_0x43baa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BAA4u;
        // 0x43baa8: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43baa4) {
            ctx->pc = 0x43BAC0u;
            goto label_43bac0;
        }
    }
    ctx->pc = 0x43BAACu;
    // 0x43baac: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x43baacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x43bab0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x43bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x43bab4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x43bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x43bab8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x43BAB8u;
    {
        const bool branch_taken_0x43bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BAB8u;
        // 0x43babc: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bab8) {
            ctx->pc = 0x43BAE0u;
            goto label_43bae0;
        }
    }
    ctx->pc = 0x43BAC0u;
label_43bac0:
    // 0x43bac0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x43bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x43bac4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x43bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x43bac8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x43bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x43bacc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x43baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x43bad0: 0xc10ebd6  jal         func_43AF58
    ctx->pc = 0x43BAD0u;
    SET_GPR_U32(ctx, 31, 0x43BAD8u);
    ctx->pc = 0x43BAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BAD0u;
    // 0x43bad4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AF58u, 0x43BAD0u, 0x43BAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BAD8u;
label_43bad8:
    // 0x43bad8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x43bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x43badc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x43badcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_43bae0:
    // 0x43bae0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x43bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x43bae4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43bae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bae8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x43bae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43baec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x43baecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43baf0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x43baf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43baf4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x43baf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43baf8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x43baf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43bafc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x43bafcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43bb00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43bb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43bb04: 0x3e00008  jr          $ra
    ctx->pc = 0x43BB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB04u;
        // 0x43bb08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BB0Cu;
    // 0x43bb0c: 0x0  nop
    ctx->pc = 0x43bb0cu;
    // NOP
    ctx->pc = 0x43bb10u;
}
