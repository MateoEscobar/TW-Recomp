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

// Function: sub_002C89A8
// Address: 0x2c89a8 - 0x2c8ae0
void sub_002C89A8_0x2c89a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C89A8_0x2c89a8");
#endif

    switch (ctx->pc) {
        case 0x2c89e0u: goto label_2c89e0;
        case 0x2c89ecu: goto label_2c89ec;
        case 0x2c8a10u: goto label_2c8a10;
        case 0x2c8a2cu: goto label_2c8a2c;
        case 0x2c8a38u: goto label_2c8a38;
        case 0x2c8a68u: goto label_2c8a68;
        case 0x2c8a98u: goto label_2c8a98;
        case 0x2c8aacu: goto label_2c8aac;
        default: break;
    }

    ctx->pc = 0x2c89a8u;

    // 0x2c89a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c89ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c89acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c89b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c89b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c89b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c89b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c89b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2c89bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c89bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c89c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c89c4: 0x24120064  addiu       $s2, $zero, 0x64
    ctx->pc = 0x2c89c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c89c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c89c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c89cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c89ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c89d0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2c89d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c89d4: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2c89d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c89d8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C89D8u;
    SET_GPR_U32(ctx, 31, 0x2C89E0u);
    ctx->pc = 0x2C89DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89D8u;
    // 0x2c89dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C89D8u, 0x2C89E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89E0u;
label_2c89e0:
    // 0x2c89e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c89e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89e4: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2C89E4u;
    SET_GPR_U32(ctx, 31, 0x2C89ECu);
    ctx->pc = 0x2C89E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C89E4u;
    // 0x2c89e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C89E4u, 0x2C89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89ECu;
label_2c89ec:
    // 0x2c89ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c89ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c89f0: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2c89f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c89f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C89F4u;
    {
        const bool branch_taken_0x2c89f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89F4u;
        // 0x2c89f8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89f4) {
            ctx->pc = 0x2C8A1Cu;
            goto label_2c8a1c;
        }
    }
    ctx->pc = 0x2C89FCu;
    // 0x2c89fc: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C89FCu;
    {
        const bool branch_taken_0x2c89fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89FCu;
        // 0x2c8a00: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c89fc) {
            ctx->pc = 0x2C8A70u;
            goto label_2c8a70;
        }
    }
    ctx->pc = 0x2C8A04u;
    // 0x2c8a04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8a08: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2C8A08u;
    SET_GPR_U32(ctx, 31, 0x2C8A10u);
    ctx->pc = 0x2C8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A08u;
    // 0x2c8a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2C8A08u, 0x2C8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A10u;
label_2c8a10:
    // 0x2c8a10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8A10u;
    {
        const bool branch_taken_0x2c8a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A10u;
        // 0x2c8a14: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a10) {
            ctx->pc = 0x2C8A70u;
            goto label_2c8a70;
        }
    }
    ctx->pc = 0x2C8A18u;
    // 0x2c8a18: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c8a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2c8a1c:
    // 0x2c8a1c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2c8a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2c8a20: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c8a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c8a24: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2C8A24u;
    SET_GPR_U32(ctx, 31, 0x2C8A2Cu);
    ctx->pc = 0x2C8A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A24u;
    // 0x2c8a28: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C8A24u, 0x2C8A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A2Cu;
label_2c8a2c:
    // 0x2c8a2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8a30: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C8A30u;
    SET_GPR_U32(ctx, 31, 0x2C8A38u);
    ctx->pc = 0x2C8A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A30u;
    // 0x2c8a34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C8A30u, 0x2C8A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A38u;
label_2c8a38:
    // 0x2c8a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a3c: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C8A3Cu;
    {
        const bool branch_taken_0x2c8a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A3Cu;
        // 0x2c8a40: 0x3c060071  lui         $a2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a3c) {
            ctx->pc = 0x2C8AB0u;
            goto label_2c8ab0;
        }
    }
    ctx->pc = 0x2C8A44u;
    // 0x2c8a44: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x2c8a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2c8a48: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2c8a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2c8a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c8a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8a50: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c8a54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c8a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c8a58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8a5c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2c8a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c8a60: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2C8A60u;
    SET_GPR_U32(ctx, 31, 0x2C8A68u);
    ctx->pc = 0x2C8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A60u;
    // 0x2c8a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C8A60u, 0x2C8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A68u;
label_2c8a68:
    // 0x2c8a68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C8A68u;
    {
        const bool branch_taken_0x2c8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8A68u;
        // 0x2c8a6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8a68) {
            ctx->pc = 0x2C8AB4u;
            goto label_2c8ab4;
        }
    }
    ctx->pc = 0x2C8A70u;
label_2c8a70:
    // 0x2c8a70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c8a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c8a74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c8a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c8a78: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c8a7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c8a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a80: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c8a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c8a84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c8a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8a8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c8a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8a90: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2C8A90u;
    SET_GPR_U32(ctx, 31, 0x2C8A98u);
    ctx->pc = 0x2C8A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8A90u;
    // 0x2c8a94: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C8A90u, 0x2C8A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A98u;
label_2c8a98:
    // 0x2c8a98: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c8a9c: 0x123042  srl         $a2, $s2, 1
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x2c8aa0: 0x122882  srl         $a1, $s2, 2
    ctx->pc = 0x2c8aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 2));
    // 0x2c8aa4: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2C8AA4u;
    SET_GPR_U32(ctx, 31, 0x2C8AACu);
    ctx->pc = 0x2C8AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8AA4u;
    // 0x2c8aa8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C8AA4u, 0x2C8AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8AACu;
label_2c8aac:
    // 0x2c8aac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c8aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ab0:
    // 0x2c8ab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c8ab4:
    // 0x2c8ab4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c8ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c8ab8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c8ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2c8abc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c8abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c8ac0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c8ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c8ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8ac8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2c8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2c8acc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2c8accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x2c8ad0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c8ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c8ad4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c8ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c8ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8AD8u;
        // 0x2c8adc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8AE0u;
}
