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

// Function: sub_001B39E0
// Address: 0x1b39e0 - 0x1b3b38
void sub_001B39E0_0x1b39e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B39E0_0x1b39e0");
#endif

    switch (ctx->pc) {
        case 0x1b3a54u: goto label_1b3a54;
        case 0x1b3ab8u: goto label_1b3ab8;
        case 0x1b3ac4u: goto label_1b3ac4;
        case 0x1b3af4u: goto label_1b3af4;
        case 0x1b3b00u: goto label_1b3b00;
        case 0x1b3b1cu: goto label_1b3b1c;
        default: break;
    }

    ctx->pc = 0x1b39e0u;

    // 0x1b39e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b39e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b39e4: 0x24020540  addiu       $v0, $zero, 0x540
    ctx->pc = 0x1b39e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
    // 0x1b39e8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1b39ec: 0x3403f420  ori         $v1, $zero, 0xF420
    ctx->pc = 0x1b39ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
    // 0x1b39f0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b39f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b39f4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1b39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1b39f8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1b39f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b39fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b39fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a00: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1b3a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1b3a04: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1b3a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1b3a08: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b3a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a0c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b3a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b3a10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b3a10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b3a14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b3a14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3a18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b3a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a1c: 0x3c013ee1  lui         $at, 0x3EE1
    ctx->pc = 0x1b3a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16097 << 16));
    // 0x1b3a20: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1b3a20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1b3a24: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b3a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b3a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b3a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b3a30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b3a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b3a34: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1b3a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b3a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b3a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b3a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b3a44: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b3a44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b3a48: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1b3a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b3a4c: 0xc06de86  jal         func_1B7A18
    ctx->pc = 0x1B3A4Cu;
    SET_GPR_U32(ctx, 31, 0x1B3A54u);
    ctx->pc = 0x1B3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3A4Cu;
    // 0x1b3a50: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A18u, 0x1B3A4Cu, 0x1B3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3A54u;
label_1b3a54:
    // 0x1b3a54: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B3A54u;
    {
        const bool branch_taken_0x1b3a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A54u;
        // 0x1b3a58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a54) {
            ctx->pc = 0x1B3A88u;
            goto label_1b3a88;
        }
    }
    ctx->pc = 0x1B3A5Cu;
    // 0x1b3a5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b3a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3a64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3a68: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1b3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1b3a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a70: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b3a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3a74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1b3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1b3a78: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1b3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1b3a7c: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x1b3a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3a80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B3A80u;
    {
        const bool branch_taken_0x1b3a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A80u;
        // 0x1b3a84: 0xa3a00011  sb          $zero, 0x11($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a80) {
            ctx->pc = 0x1B3AB0u;
            goto label_1b3ab0;
        }
    }
    ctx->pc = 0x1B3A88u;
label_1b3a88:
    // 0x1b3a88: 0x16060010  bne         $s0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B3A88u;
    {
        const bool branch_taken_0x1b3a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 6));
        ctx->pc = 0x1B3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3A88u;
        // 0x1b3a8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3a88) {
            ctx->pc = 0x1B3ACCu;
            goto label_1b3acc;
        }
    }
    ctx->pc = 0x1B3A90u;
    // 0x1b3a90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3a98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3a9c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1b3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1b3aa0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1b3aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1b3aa4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1b3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1b3aa8: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x1b3aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3aac: 0xa3a60011  sb          $a2, 0x11($sp)
    ctx->pc = 0x1b3aacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 6));
label_1b3ab0:
    // 0x1b3ab0: 0xc06deda  jal         func_1B7B68
    ctx->pc = 0x1B3AB0u;
    SET_GPR_U32(ctx, 31, 0x1B3AB8u);
    ctx->pc = 0x1B3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AB0u;
    // 0x1b3ab4: 0xa3a00012  sb          $zero, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B68u, 0x1B3AB0u, 0x1B3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AB8u;
label_1b3ab8:
    // 0x1b3ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3abc: 0xc06de7e  jal         func_1B79F8
    ctx->pc = 0x1B3ABCu;
    SET_GPR_U32(ctx, 31, 0x1B3AC4u);
    ctx->pc = 0x1B3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3ABCu;
    // 0x1b3ac0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79F8u, 0x1B3ABCu, 0x1B3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AC4u;
label_1b3ac4:
    // 0x1b3ac4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B3AC4u;
    {
        const bool branch_taken_0x1b3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3AC4u;
        // 0x1b3ac8: 0x24040540  addiu       $a0, $zero, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3ac4) {
            ctx->pc = 0x1B3B04u;
            goto label_1b3b04;
        }
    }
    ctx->pc = 0x1B3ACCu;
label_1b3acc:
    // 0x1b3acc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b3accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b3ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3ad4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b3ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3ad8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1b3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1b3adc: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1b3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1b3ae0: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1b3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1b3ae4: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x1b3ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b3ae8: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x1b3ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3aec: 0xc06deda  jal         func_1B7B68
    ctx->pc = 0x1B3AECu;
    SET_GPR_U32(ctx, 31, 0x1B3AF4u);
    ctx->pc = 0x1B3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AECu;
    // 0x1b3af0: 0xa3a60012  sb          $a2, 0x12($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7B68u, 0x1B3AECu, 0x1B3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3AF4u;
label_1b3af4:
    // 0x1b3af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3af8: 0xc06de7e  jal         func_1B79F8
    ctx->pc = 0x1B3AF8u;
    SET_GPR_U32(ctx, 31, 0x1B3B00u);
    ctx->pc = 0x1B3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3AF8u;
    // 0x1b3afc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B79F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79F8u, 0x1B3AF8u, 0x1B3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B00u;
label_1b3b00:
    // 0x1b3b00: 0x24040540  addiu       $a0, $zero, 0x540
    ctx->pc = 0x1b3b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
label_1b3b04:
    // 0x1b3b04: 0x3402f420  ori         $v0, $zero, 0xF420
    ctx->pc = 0x1b3b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62496);
    // 0x1b3b08: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x1b3b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b3b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b3b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3b10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b3b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b3b14: 0xc06e10a  jal         func_1B8428
    ctx->pc = 0x1B3B14u;
    SET_GPR_U32(ctx, 31, 0x1B3B1Cu);
    ctx->pc = 0x1B3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3B14u;
    // 0x1b3b18: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8428u, 0x1B3B14u, 0x1B3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3B1Cu;
label_1b3b1c:
    // 0x1b3b1c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1b3b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b3b20: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1b3b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b3b24: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1b3b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3b28: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b3b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b3b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3B30u;
        // 0x1b3b34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3B38u;
}
