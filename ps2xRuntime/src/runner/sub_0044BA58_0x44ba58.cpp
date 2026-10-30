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

// Function: sub_0044BA58
// Address: 0x44ba58 - 0x44bd70
void sub_0044BA58_0x44ba58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BA58_0x44ba58");
#endif

    switch (ctx->pc) {
        case 0x44bb38u: goto label_44bb38;
        case 0x44bb4cu: goto label_44bb4c;
        case 0x44bb64u: goto label_44bb64;
        case 0x44bb7cu: goto label_44bb7c;
        default: break;
    }

    ctx->pc = 0x44ba58u;

    // 0x44ba58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x44ba58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x44ba5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44ba60: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x44ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x44ba64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x44ba64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44ba68: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x44ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x44ba6c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44ba70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44ba70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44ba74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44ba78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44ba7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44ba80: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x44ba80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x44ba84: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x44ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x44ba88: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x44BA88u;
    {
        const bool branch_taken_0x44ba88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x44ba88) {
            ctx->pc = 0x44BA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44BA88u;
            // 0x44ba8c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44BAB8u;
            goto label_44bab8;
        }
    }
    ctx->pc = 0x44BA90u;
    // 0x44ba90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44ba94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x44ba98: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x44ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x44ba9c: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x44ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x44baa0: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x44baa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x44baa4: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x44baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x44baa8: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x44baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x44baac: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x44baacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x44bab0: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x44bab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x44bab4: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x44bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_44bab8:
    // 0x44bab8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44babc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x44babcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x44bac0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x44BAC0u;
    {
        const bool branch_taken_0x44bac0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BAC0u;
        // 0x44bac4: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bac0) {
            ctx->pc = 0x44BAE4u;
            goto label_44bae4;
        }
    }
    ctx->pc = 0x44BAC8u;
    // 0x44bac8: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x44bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
    // 0x44bacc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44BACCu;
    {
        const bool branch_taken_0x44bacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BACCu;
        // 0x44bad0: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bacc) {
            ctx->pc = 0x44BAE8u;
            goto label_44bae8;
        }
    }
    ctx->pc = 0x44BAD4u;
    // 0x44bad4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x44bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x44bad8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x44bad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x44badc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44BADCu;
    {
        const bool branch_taken_0x44badc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BADCu;
        // 0x44bae0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44badc) {
            ctx->pc = 0x44BAF0u;
            goto label_44baf0;
        }
    }
    ctx->pc = 0x44BAE4u;
label_44bae4:
    // 0x44bae4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x44bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_44bae8:
    // 0x44bae8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44baec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x44baecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_44baf0:
    // 0x44baf0: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x44baf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x44baf4: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x44baf4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x44baf8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x44baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x44bafc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x44bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44bb00: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x44bb00u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x44bb04: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x44BB04u;
    {
        const bool branch_taken_0x44bb04 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x44BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB04u;
        // 0x44bb08: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb04) {
            ctx->pc = 0x44BB18u;
            goto label_44bb18;
        }
    }
    ctx->pc = 0x44BB0Cu;
    // 0x44bb0c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x44bb10: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x44BB10u;
    {
        const bool branch_taken_0x44bb10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x44BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB10u;
        // 0x44bb14: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb10) {
            ctx->pc = 0x44BD48u;
            goto label_44bd48;
        }
    }
    ctx->pc = 0x44BB18u;
label_44bb18:
    // 0x44bb18: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x44bb18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x44bb1c: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x44bb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x44bb20: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x44bb20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x44bb24: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x44bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x44bb28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb2c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x44bb2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x44bb30: 0xc111a14  jal         func_446850
    ctx->pc = 0x44BB30u;
    SET_GPR_U32(ctx, 31, 0x44BB38u);
    ctx->pc = 0x44BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BB30u;
    // 0x44bb34: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446850u, 0x44BB30u, 0x44BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BB38u;
label_44bb38:
    // 0x44bb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44bb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44bb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44bb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb44: 0xc111a18  jal         func_446860
    ctx->pc = 0x44BB44u;
    SET_GPR_U32(ctx, 31, 0x44BB4Cu);
    ctx->pc = 0x44BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BB44u;
    // 0x44bb48: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446860u, 0x44BB44u, 0x44BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BB4Cu;
label_44bb4c:
    // 0x44bb4c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x44bb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x44bb50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44bb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44bb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44bb58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb5c: 0xc111a18  jal         func_446860
    ctx->pc = 0x44BB5Cu;
    SET_GPR_U32(ctx, 31, 0x44BB64u);
    ctx->pc = 0x44BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BB5Cu;
    // 0x44bb60: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446860u, 0x44BB5Cu, 0x44BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BB64u;
label_44bb64:
    // 0x44bb64: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x44bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x44bb68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44bb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44bb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x44bb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb74: 0xc111a18  jal         func_446860
    ctx->pc = 0x44BB74u;
    SET_GPR_U32(ctx, 31, 0x44BB7Cu);
    ctx->pc = 0x44BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44BB74u;
    // 0x44bb78: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446860u, 0x44BB74u, 0x44BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44BB7Cu;
label_44bb7c:
    // 0x44bb7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x44bb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bb80: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x44bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x44bb84: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x44BB84u;
    {
        const bool branch_taken_0x44bb84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BB84u;
        // 0x44bb88: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bb84) {
            ctx->pc = 0x44BC10u;
            goto label_44bc10;
        }
    }
    ctx->pc = 0x44BB8Cu;
    // 0x44bb8c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x44bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x44bb90: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x44bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x44bb94: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x44bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44bb98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x44bb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x44bb9c: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x44bb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x44bba0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x44bba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x44bba4: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x44bba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x44bba8: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x44bba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x44bbac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x44bbacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x44bbb0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x44bbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44bbb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x44bbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x44bbb8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x44bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x44bbbc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x44bbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x44bbc0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x44bbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x44bbc4: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x44bbc4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x44bbc8: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x44bbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x44bbcc: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x44bbccu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x44bbd0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x44bbd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x44bbd4: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x44bbd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x44bbd8: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x44bbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x44bbdc: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x44bbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44bbe0: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x44bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x44bbe4: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x44bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x44bbe8: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x44bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x44bbec: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x44bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x44bbf0: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x44bbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x44bbf4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x44bbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x44bbf8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44bbfc: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x44bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x44bc00: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x44bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x44bc04: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x44bc04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x44bc08: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x44BC08u;
    {
        const bool branch_taken_0x44bc08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC08u;
        // 0x44bc0c: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc08) {
            ctx->pc = 0x44BC78u;
            goto label_44bc78;
        }
    }
    ctx->pc = 0x44BC10u;
label_44bc10:
    // 0x44bc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44bc14: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x44BC14u;
    {
        const bool branch_taken_0x44bc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x44BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BC14u;
        // 0x44bc18: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bc14) {
            ctx->pc = 0x44BC7Cu;
            goto label_44bc7c;
        }
    }
    ctx->pc = 0x44BC1Cu;
    // 0x44bc1c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x44bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x44bc20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x44bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44bc24: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x44bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44bc28: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x44bc28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x44bc2c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x44bc2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44bc30: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x44bc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x44bc34: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x44bc34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x44bc38: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x44bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x44bc3c: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x44bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x44bc40: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x44bc40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x44bc44: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x44bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x44bc48: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x44bc48u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x44bc4c: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x44bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x44bc50: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x44bc50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x44bc54: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x44bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x44bc58: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x44bc58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44bc5c: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x44bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x44bc60: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x44bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x44bc64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44bc64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x44bc68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x44bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x44bc6c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x44bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x44bc70: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x44bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x44bc74: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x44bc74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_44bc78:
    // 0x44bc78: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x44bc78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_44bc7c:
    // 0x44bc7c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x44bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x44bc80: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x44bc80u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x44bc84: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x44bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x44bc88: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x44bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x44bc8c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x44bc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x44bc90: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x44bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x44bc94: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x44bc94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x44bc98: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x44bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x44bc9c: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x44bc9cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x44bca0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x44bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x44bca4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x44bca4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x44bca8: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x44bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x44bcac: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x44bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x44bcb0: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x44bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x44bcb4: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x44bcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x44bcb8: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x44bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x44bcbc: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x44bcbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x44bcc0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x44bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x44bcc4: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x44bcc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x44bcc8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x44bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x44bccc: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x44bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x44bcd0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x44bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x44bcd4: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x44bcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x44bcd8: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x44bcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x44bcdc: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x44bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x44bce0: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x44bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x44bce4: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x44bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x44bce8: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x44bce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x44bcec: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x44bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x44bcf0: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x44bcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x44bcf4: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x44bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x44bcf8: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x44bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x44bcfc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x44bcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x44bd00: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x44bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x44bd04: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x44bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x44bd08: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x44bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x44bd0c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x44bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x44bd10: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x44bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x44bd14: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x44bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x44bd18: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x44bd18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x44bd1c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x44bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x44bd20: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x44bd20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x44bd24: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x44bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x44bd28: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x44bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x44bd2c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x44bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x44bd30: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x44bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x44bd34: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x44bd34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x44bd38: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x44bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x44bd3c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x44bd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x44bd40: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x44bd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x44bd44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x44bd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_44bd48:
    // 0x44bd48: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x44bd48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44bd4c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44bd4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44bd50: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44bd50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44bd54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44bd54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44bd58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44bd58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44bd5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44bd5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44bd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44bd64: 0x3e00008  jr          $ra
    ctx->pc = 0x44BD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44BD64u;
        // 0x44bd68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44BD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44BD6Cu;
    // 0x44bd6c: 0x0  nop
    ctx->pc = 0x44bd6cu;
    // NOP
    ctx->pc = 0x44bd70u;
}
