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

// Function: sub_0030E998
// Address: 0x30e998 - 0x30eb90
void sub_0030E998_0x30e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E998_0x30e998");
#endif

    switch (ctx->pc) {
        case 0x30e9dcu: goto label_30e9dc;
        case 0x30e9f0u: goto label_30e9f0;
        case 0x30ea04u: goto label_30ea04;
        case 0x30ea28u: goto label_30ea28;
        case 0x30ea40u: goto label_30ea40;
        case 0x30ea58u: goto label_30ea58;
        case 0x30ea6cu: goto label_30ea6c;
        case 0x30ea7cu: goto label_30ea7c;
        case 0x30eaa0u: goto label_30eaa0;
        case 0x30eaa8u: goto label_30eaa8;
        case 0x30eab0u: goto label_30eab0;
        case 0x30ead4u: goto label_30ead4;
        case 0x30eae4u: goto label_30eae4;
        case 0x30eafcu: goto label_30eafc;
        case 0x30eb04u: goto label_30eb04;
        case 0x30eb10u: goto label_30eb10;
        case 0x30eb18u: goto label_30eb18;
        case 0x30eb20u: goto label_30eb20;
        case 0x30eb48u: goto label_30eb48;
        case 0x30eb54u: goto label_30eb54;
        default: break;
    }

    ctx->pc = 0x30e998u;

    // 0x30e998: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30e99c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30e99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30e9a0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30e9a4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x30e9a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e9a8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30e9ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30e9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e9b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30e9b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30e9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30e9b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x30e9bc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30e9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x30e9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30e9c4: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x30e9c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30e9c8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x30e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30e9cc: 0x10510066  beq         $v0, $s1, . + 4 + (0x66 << 2)
    ctx->pc = 0x30E9CCu;
    {
        const bool branch_taken_0x30e9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x30E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9CCu;
        // 0x30e9d0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9cc) {
            ctx->pc = 0x30EB68u;
            goto label_30eb68;
        }
    }
    ctx->pc = 0x30E9D4u;
    // 0x30e9d4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x30E9D4u;
    SET_GPR_U32(ctx, 31, 0x30E9DCu);
    ctx->pc = 0x30E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E9D4u;
    // 0x30e9d8: 0x86440020  lh          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x30E9D4u, 0x30E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9DCu;
label_30e9dc:
    // 0x30e9dc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x30e9e0: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x30E9E0u;
    {
        const bool branch_taken_0x30e9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9E0u;
        // 0x30e9e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9e0) {
            ctx->pc = 0x30EB68u;
            goto label_30eb68;
        }
    }
    ctx->pc = 0x30E9E8u;
    // 0x30e9e8: 0xc05959e  jal         func_165678
    ctx->pc = 0x30E9E8u;
    SET_GPR_U32(ctx, 31, 0x30E9F0u);
    ctx->pc = 0x30E9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E9E8u;
    // 0x30e9ec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x30E9E8u, 0x30E9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E9F0u;
label_30e9f0:
    // 0x30e9f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30e9f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e9f4: 0x12a0005b  beqz        $s5, . + 4 + (0x5B << 2)
    ctx->pc = 0x30E9F4u;
    {
        const bool branch_taken_0x30e9f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9F4u;
        // 0x30e9f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9f4) {
            ctx->pc = 0x30EB64u;
            goto label_30eb64;
        }
    }
    ctx->pc = 0x30E9FCu;
    // 0x30e9fc: 0xc08750a  jal         func_21D428
    ctx->pc = 0x30E9FCu;
    SET_GPR_U32(ctx, 31, 0x30EA04u);
    ctx->pc = 0x30EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E9FCu;
    // 0x30ea00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x30E9FCu, 0x30EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA04u;
label_30ea04:
    // 0x30ea04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30ea04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea08: 0x8642004c  lh          $v0, 0x4C($s2)
    ctx->pc = 0x30ea08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x30ea0c: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EA0Cu;
    {
        const bool branch_taken_0x30ea0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x30ea0c) {
            ctx->pc = 0x30EA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EA0Cu;
            // 0x30ea10: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EA20u;
            goto label_30ea20;
        }
    }
    ctx->pc = 0x30EA14u;
    // 0x30ea14: 0x92620270  lbu         $v0, 0x270($s3)
    ctx->pc = 0x30ea14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 624)));
    // 0x30ea18: 0xa642004c  sh          $v0, 0x4C($s2)
    ctx->pc = 0x30ea18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x30ea1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x30ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_30ea20:
    // 0x30ea20: 0xc059856  jal         func_166158
    ctx->pc = 0x30EA20u;
    SET_GPR_U32(ctx, 31, 0x30EA28u);
    ctx->pc = 0x30EA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA20u;
    // 0x30ea24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x30EA20u, 0x30EA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA28u;
label_30ea28:
    // 0x30ea28: 0x8645004e  lh          $a1, 0x4E($s2)
    ctx->pc = 0x30ea28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x30ea2c: 0x14b10011  bne         $a1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30EA2Cu;
    {
        const bool branch_taken_0x30ea2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x30EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA2Cu;
        // 0x30ea30: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea2c) {
            ctx->pc = 0x30EA74u;
            goto label_30ea74;
        }
    }
    ctx->pc = 0x30EA34u;
    // 0x30ea34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x30ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30ea38: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x30EA38u;
    SET_GPR_U32(ctx, 31, 0x30EA40u);
    ctx->pc = 0x30EA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA38u;
    // 0x30ea3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x30EA38u, 0x30EA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA40u;
label_30ea40:
    // 0x30ea40: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x30ea40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x30ea44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30ea48: 0x202280b  movn        $a1, $s0, $v0
    ctx->pc = 0x30ea48u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x30ea4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea50: 0xc0a5776  jal         func_295DD8
    ctx->pc = 0x30EA50u;
    SET_GPR_U32(ctx, 31, 0x30EA58u);
    ctx->pc = 0x30EA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA50u;
    // 0x30ea54: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DD8u, 0x30EA50u, 0x30EA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA58u;
label_30ea58:
    // 0x30ea58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ea58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30ea5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30ea5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ea60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea64: 0xc0a5922  jal         func_296488
    ctx->pc = 0x30EA64u;
    SET_GPR_U32(ctx, 31, 0x30EA6Cu);
    ctx->pc = 0x30EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA64u;
    // 0x30ea68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296488u, 0x30EA64u, 0x30EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA6Cu;
label_30ea6c:
    // 0x30ea6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30EA6Cu;
    {
        const bool branch_taken_0x30ea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA6Cu;
        // 0x30ea70: 0x92420051  lbu         $v0, 0x51($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea6c) {
            ctx->pc = 0x30EA80u;
            goto label_30ea80;
        }
    }
    ctx->pc = 0x30EA74u;
label_30ea74:
    // 0x30ea74: 0xc0a576c  jal         func_295DB0
    ctx->pc = 0x30EA74u;
    SET_GPR_U32(ctx, 31, 0x30EA7Cu);
    ctx->pc = 0x30EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EA74u;
    // 0x30ea78: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295DB0u, 0x30EA74u, 0x30EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EA7Cu;
label_30ea7c:
    // 0x30ea7c: 0x92420051  lbu         $v0, 0x51($s2)
    ctx->pc = 0x30ea7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
label_30ea80:
    // 0x30ea80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30EA80u;
    {
        const bool branch_taken_0x30ea80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA80u;
        // 0x30ea84: 0xc6540028  lwc1        $f20, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea80) {
            ctx->pc = 0x30EA8Cu;
            goto label_30ea8c;
        }
    }
    ctx->pc = 0x30EA88u;
    // 0x30ea88: 0xc6540024  lwc1        $f20, 0x24($s2)
    ctx->pc = 0x30ea88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30ea8c:
    // 0x30ea8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30ea90: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x30ea90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea94: 0x24560048  addiu       $s6, $v0, 0x48
    ctx->pc = 0x30ea94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30ea98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ea9c: 0x0  nop
    ctx->pc = 0x30ea9cu;
    // NOP
label_30eaa0:
    // 0x30eaa0: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30EAA0u;
    SET_GPR_U32(ctx, 31, 0x30EAA8u);
    ctx->pc = 0x30EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAA0u;
    // 0x30eaa4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30EAA0u, 0x30EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAA8u;
label_30eaa8:
    // 0x30eaa8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30EAA8u;
    SET_GPR_U32(ctx, 31, 0x30EAB0u);
    ctx->pc = 0x30EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAA8u;
    // 0x30eaac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30EAA8u, 0x30EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAB0u;
label_30eab0:
    // 0x30eab0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30eab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eab4: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x30EAB4u;
    {
        const bool branch_taken_0x30eab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30eab4) {
            ctx->pc = 0x30EAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EAB4u;
            // 0x30eab8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB58u;
            goto label_30eb58;
        }
    }
    ctx->pc = 0x30EABCu;
    // 0x30eabc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x30eabcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x30eac0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30eac0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30eac4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x30EAC4u;
    {
        const bool branch_taken_0x30eac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAC4u;
        // 0x30eac8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eac4) {
            ctx->pc = 0x30EB54u;
            goto label_30eb54;
        }
    }
    ctx->pc = 0x30EACCu;
    // 0x30eacc: 0xc088edc  jal         func_223B70
    ctx->pc = 0x30EACCu;
    SET_GPR_U32(ctx, 31, 0x30EAD4u);
    ctx->pc = 0x30EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EACCu;
    // 0x30ead0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x30EACCu, 0x30EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAD4u;
label_30ead4:
    // 0x30ead4: 0x50510020  beql        $v0, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x30EAD4u;
    {
        const bool branch_taken_0x30ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30ead4) {
            ctx->pc = 0x30EAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EAD4u;
            // 0x30ead8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB58u;
            goto label_30eb58;
        }
    }
    ctx->pc = 0x30EADCu;
    // 0x30eadc: 0xc089f98  jal         func_227E60
    ctx->pc = 0x30EADCu;
    SET_GPR_U32(ctx, 31, 0x30EAE4u);
    ctx->pc = 0x30EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EADCu;
    // 0x30eae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x30EADCu, 0x30EAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAE4u;
label_30eae4:
    // 0x30eae4: 0x5051001c  beql        $v0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x30EAE4u;
    {
        const bool branch_taken_0x30eae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30eae4) {
            ctx->pc = 0x30EAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EAE4u;
            // 0x30eae8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EB58u;
            goto label_30eb58;
        }
    }
    ctx->pc = 0x30EAECu;
    // 0x30eaec: 0x12150003  beq         $s0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x30EAECu;
    {
        const bool branch_taken_0x30eaec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x30EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAECu;
        // 0x30eaf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eaec) {
            ctx->pc = 0x30EAFCu;
            goto label_30eafc;
        }
    }
    ctx->pc = 0x30EAF4u;
    // 0x30eaf4: 0xc0a57ca  jal         func_295F28
    ctx->pc = 0x30EAF4u;
    SET_GPR_U32(ctx, 31, 0x30EAFCu);
    ctx->pc = 0x30EAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAF4u;
    // 0x30eaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F28u, 0x30EAF4u, 0x30EAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EAFCu;
label_30eafc:
    // 0x30eafc: 0xc087502  jal         func_21D408
    ctx->pc = 0x30EAFCu;
    SET_GPR_U32(ctx, 31, 0x30EB04u);
    ctx->pc = 0x30EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EAFCu;
    // 0x30eb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x30EAFCu, 0x30EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB04u;
label_30eb04:
    // 0x30eb04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30eb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb08: 0xc0a3630  jal         func_28D8C0
    ctx->pc = 0x30EB08u;
    SET_GPR_U32(ctx, 31, 0x30EB10u);
    ctx->pc = 0x30EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB08u;
    // 0x30eb0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x30EB08u, 0x30EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB10u;
label_30eb10:
    // 0x30eb10: 0xc0a3628  jal         func_28D8A0
    ctx->pc = 0x30EB10u;
    SET_GPR_U32(ctx, 31, 0x30EB18u);
    ctx->pc = 0x30EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB10u;
    // 0x30eb14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x30EB10u, 0x30EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB18u;
label_30eb18:
    // 0x30eb18: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x30EB18u;
    SET_GPR_U32(ctx, 31, 0x30EB20u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x30EB18u, 0x30EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB20u;
label_30eb20:
    // 0x30eb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30eb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb24: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30EB24u;
    {
        const bool branch_taken_0x30eb24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB24u;
        // 0x30eb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb24) {
            ctx->pc = 0x30EB48u;
            goto label_30eb48;
        }
    }
    ctx->pc = 0x30EB2Cu;
    // 0x30eb2c: 0x92470051  lbu         $a3, 0x51($s2)
    ctx->pc = 0x30eb2cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 81)));
    // 0x30eb30: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x30eb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x30eb34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30eb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb38: 0x38e70002  xori        $a3, $a3, 0x2
    ctx->pc = 0x30eb38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x30eb3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30eb3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30eb40: 0xc0b8ffa  jal         func_2E3FE8
    ctx->pc = 0x30EB40u;
    SET_GPR_U32(ctx, 31, 0x30EB48u);
    ctx->pc = 0x30EB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB40u;
    // 0x30eb44: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3FE8u, 0x30EB40u, 0x30EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB48u;
label_30eb48:
    // 0x30eb48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30eb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb4c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x30EB4Cu;
    SET_GPR_U32(ctx, 31, 0x30EB54u);
    ctx->pc = 0x30EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EB4Cu;
    // 0x30eb50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x30EB4Cu, 0x30EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EB54u;
label_30eb54:
    // 0x30eb54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x30eb54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_30eb58:
    // 0x30eb58: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x30eb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x30eb5c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x30EB5Cu;
    {
        const bool branch_taken_0x30eb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB5Cu;
        // 0x30eb60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb5c) {
            ctx->pc = 0x30EAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eaa0;
        }
    }
    ctx->pc = 0x30EB64u;
label_30eb64:
    // 0x30eb64: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30eb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_30eb68:
    // 0x30eb68: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30eb68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30eb6c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30eb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30eb70: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30eb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30eb74: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30eb74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30eb78: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30eb78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30eb7c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30eb7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30eb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30eb84: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x30eb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30eb88: 0x3e00008  jr          $ra
    ctx->pc = 0x30EB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB88u;
        // 0x30eb8c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30EB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30EB90u;
}
