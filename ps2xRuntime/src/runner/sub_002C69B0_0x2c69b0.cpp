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

// Function: sub_002C69B0
// Address: 0x2c69b0 - 0x2c6c88
void sub_002C69B0_0x2c69b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C69B0_0x2c69b0");
#endif

    switch (ctx->pc) {
        case 0x2c69f0u: goto label_2c69f0;
        case 0x2c6a08u: goto label_2c6a08;
        case 0x2c6a18u: goto label_2c6a18;
        case 0x2c6a2cu: goto label_2c6a2c;
        case 0x2c6a38u: goto label_2c6a38;
        case 0x2c6a64u: goto label_2c6a64;
        case 0x2c6a94u: goto label_2c6a94;
        case 0x2c6a9cu: goto label_2c6a9c;
        case 0x2c6ab0u: goto label_2c6ab0;
        case 0x2c6ac8u: goto label_2c6ac8;
        case 0x2c6ae8u: goto label_2c6ae8;
        case 0x2c6b04u: goto label_2c6b04;
        case 0x2c6b34u: goto label_2c6b34;
        case 0x2c6b54u: goto label_2c6b54;
        case 0x2c6b74u: goto label_2c6b74;
        case 0x2c6b80u: goto label_2c6b80;
        case 0x2c6b8cu: goto label_2c6b8c;
        case 0x2c6bb4u: goto label_2c6bb4;
        case 0x2c6bc8u: goto label_2c6bc8;
        case 0x2c6bd4u: goto label_2c6bd4;
        case 0x2c6becu: goto label_2c6bec;
        case 0x2c6c14u: goto label_2c6c14;
        case 0x2c6c30u: goto label_2c6c30;
        case 0x2c6c48u: goto label_2c6c48;
        default: break;
    }

    ctx->pc = 0x2c69b0u;

    // 0x2c69b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c69b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c69b4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2c69b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2c69b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2c69b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2c69bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c69bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69c0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2c69c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2c69c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c69c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c69cc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2c69ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2c69d0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2c69d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2c69d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c69d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c69d8: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x2c69d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2c69dc: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2c69dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c69e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c69e4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2c69e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c69e8: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2C69E8u;
    SET_GPR_U32(ctx, 31, 0x2C69F0u);
    ctx->pc = 0x2C69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C69E8u;
    // 0x2c69ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2C69E8u, 0x2C69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69F0u;
label_2c69f0:
    // 0x2c69f0: 0x10510095  beq         $v0, $s1, . + 4 + (0x95 << 2)
    ctx->pc = 0x2C69F0u;
    {
        const bool branch_taken_0x2c69f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C69F0u;
        // 0x2c69f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c69f0) {
            ctx->pc = 0x2C6C48u;
            goto label_2c6c48;
        }
    }
    ctx->pc = 0x2C69F8u;
    // 0x2c69f8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2c69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c69fc: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2c69fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c6a00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C6A00u;
    SET_GPR_U32(ctx, 31, 0x2C6A08u);
    ctx->pc = 0x2C6A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A00u;
    // 0x2c6a04: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C6A00u, 0x2C6A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A08u;
label_2c6a08:
    // 0x2c6a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c6a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a10: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C6A10u;
    SET_GPR_U32(ctx, 31, 0x2C6A18u);
    ctx->pc = 0x2C6A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A10u;
    // 0x2c6a14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C6A10u, 0x2C6A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A18u;
label_2c6a18:
    // 0x2c6a18: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c6a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a1c: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6A1Cu;
    {
        const bool branch_taken_0x2c6a1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a1c) {
            ctx->pc = 0x2C6A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6A1Cu;
            // 0x2c6a20: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6A44u;
            goto label_2c6a44;
        }
    }
    ctx->pc = 0x2C6A24u;
    // 0x2c6a24: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C6A24u;
    SET_GPR_U32(ctx, 31, 0x2C6A2Cu);
    ctx->pc = 0x2C6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A24u;
    // 0x2c6a28: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C6A24u, 0x2C6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A2Cu;
label_2c6a2c:
    // 0x2c6a2c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c6a30: 0xc0a404e  jal         func_290138
    ctx->pc = 0x2C6A30u;
    SET_GPR_U32(ctx, 31, 0x2C6A38u);
    ctx->pc = 0x2C6A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A30u;
    // 0x2c6a34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2C6A30u, 0x2C6A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A38u;
label_2c6a38:
    // 0x2c6a38: 0x10510086  beq         $v0, $s1, . + 4 + (0x86 << 2)
    ctx->pc = 0x2C6A38u;
    {
        const bool branch_taken_0x2c6a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C6A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A38u;
        // 0x2c6a3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a38) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6A40u;
    // 0x2c6a40: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c6a44:
    // 0x2c6a44: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2c6a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2c6a48: 0x1c400081  bgtz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2C6A48u;
    {
        const bool branch_taken_0x2c6a48 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A48u;
        // 0x2c6a4c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a48) {
            ctx->pc = 0x2C6C50u;
            goto label_2c6c50;
        }
    }
    ctx->pc = 0x2C6A50u;
    // 0x2c6a50: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2c6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2c6a54: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C6A54u;
    {
        const bool branch_taken_0x2c6a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6a54) {
            ctx->pc = 0x2C6AD0u;
            goto label_2c6ad0;
        }
    }
    ctx->pc = 0x2C6A5Cu;
    // 0x2c6a5c: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2C6A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A64u);
    ctx->pc = 0x2C6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A5Cu;
    // 0x2c6a60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C6A5Cu, 0x2C6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A64u;
label_2c6a64:
    // 0x2c6a64: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2C6A64u;
    {
        const bool branch_taken_0x2c6a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6A64u;
        // 0x2c6a68: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6a64) {
            ctx->pc = 0x2C6A94u;
            goto label_2c6a94;
        }
    }
    ctx->pc = 0x2C6A6Cu;
    // 0x2c6a6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6a70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6a74: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2c6a74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2c6a78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c6a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a7c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2c6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2c6a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6a8c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2C6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A94u);
    ctx->pc = 0x2C6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A8Cu;
    // 0x2c6a90: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C6A8Cu, 0x2C6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A94u;
label_2c6a94:
    // 0x2c6a94: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C6A94u;
    SET_GPR_U32(ctx, 31, 0x2C6A9Cu);
    ctx->pc = 0x2C6A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6A94u;
    // 0x2c6a98: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C6A94u, 0x2C6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A9Cu;
label_2c6a9c:
    // 0x2c6a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6aa0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6AA0u;
    {
        const bool branch_taken_0x2c6aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AA0u;
        // 0x2c6aa4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aa0) {
            ctx->pc = 0x2C6AC8u;
            goto label_2c6ac8;
        }
    }
    ctx->pc = 0x2C6AA8u;
    // 0x2c6aa8: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2C6AA8u;
    SET_GPR_U32(ctx, 31, 0x2C6AB0u);
    ctx->pc = 0x2C6AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AA8u;
    // 0x2c6aac: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C6AA8u, 0x2C6AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AB0u;
label_2c6ab0:
    // 0x2c6ab0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c6ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c6ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6abc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6ac0: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2C6AC0u;
    SET_GPR_U32(ctx, 31, 0x2C6AC8u);
    ctx->pc = 0x2C6AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AC0u;
    // 0x2c6ac4: 0x240700fa  addiu       $a3, $zero, 0xFA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C6AC0u, 0x2C6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AC8u;
label_2c6ac8:
    // 0x2c6ac8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2C6AC8u;
    {
        const bool branch_taken_0x2c6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AC8u;
        // 0x2c6acc: 0xae550024  sw          $s5, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ac8) {
            ctx->pc = 0x2C6C50u;
            goto label_2c6c50;
        }
    }
    ctx->pc = 0x2C6AD0u;
label_2c6ad0:
    // 0x2c6ad0: 0x1475004a  bne         $v1, $s5, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C6AD0u;
    {
        const bool branch_taken_0x2c6ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AD0u;
        // 0x2c6ad4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ad0) {
            ctx->pc = 0x2C6BFCu;
            goto label_2c6bfc;
        }
    }
    ctx->pc = 0x2C6AD8u;
    // 0x2c6ad8: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x2c6adc: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c6adcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2c6ae0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2C6AE0u;
    SET_GPR_U32(ctx, 31, 0x2C6AE8u);
    ctx->pc = 0x2C6AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AE0u;
    // 0x2c6ae4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C6AE0u, 0x2C6AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AE8u;
label_2c6ae8:
    // 0x2c6ae8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6aec: 0x10550059  beq         $v0, $s5, . + 4 + (0x59 << 2)
    ctx->pc = 0x2C6AECu;
    {
        const bool branch_taken_0x2c6aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2C6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AECu;
        // 0x2c6af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6aec) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6AF4u;
    // 0x2c6af4: 0x1280003f  beqz        $s4, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C6AF4u;
    {
        const bool branch_taken_0x2c6af4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6AF4u;
        // 0x2c6af8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6af4) {
            ctx->pc = 0x2C6BF4u;
            goto label_2c6bf4;
        }
    }
    ctx->pc = 0x2C6AFCu;
    // 0x2c6afc: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2C6AFCu;
    SET_GPR_U32(ctx, 31, 0x2C6B04u);
    ctx->pc = 0x2C6B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6AFCu;
    // 0x2c6b00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2C6AFCu, 0x2C6B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B04u;
label_2c6b04:
    // 0x2c6b04: 0x1455000c  bne         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6B04u;
    {
        const bool branch_taken_0x2c6b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2C6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6B04u;
        // 0x2c6b08: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6b04) {
            ctx->pc = 0x2C6B38u;
            goto label_2c6b38;
        }
    }
    ctx->pc = 0x2C6B0Cu;
    // 0x2c6b0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6b10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6b10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6b14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c6b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b18: 0x8e490020  lw          $t1, 0x20($s2)
    ctx->pc = 0x2c6b18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2c6b1c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2c6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2c6b20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c6b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6b2c: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2C6B2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6B34u);
    ctx->pc = 0x2C6B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B2Cu;
    // 0x2c6b30: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2C6B2Cu, 0x2C6B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B34u;
label_2c6b34:
    // 0x2c6b34: 0x26710090  addiu       $s1, $s3, 0x90
    ctx->pc = 0x2c6b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_2c6b38:
    // 0x2c6b38: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x2c6b38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x2c6b3c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c6b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c6b40: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x2c6b40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x2c6b44: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c6b48: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2c6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c6b4c: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2C6B4Cu;
    SET_GPR_U32(ctx, 31, 0x2C6B54u);
    ctx->pc = 0x2C6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B4Cu;
    // 0x2c6b50: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2C6B4Cu, 0x2C6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B54u;
label_2c6b54:
    // 0x2c6b54: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2c6b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c6b58: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2c6b58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b5c: 0x86850092  lh          $a1, 0x92($s4)
    ctx->pc = 0x2c6b5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
    // 0x2c6b60: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c6b64: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c6b68: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2c6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c6b6c: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x2C6B6Cu;
    SET_GPR_U32(ctx, 31, 0x2C6B74u);
    ctx->pc = 0x2C6B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B6Cu;
    // 0x2c6b70: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2C6B6Cu, 0x2C6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B74u;
label_2c6b74:
    // 0x2c6b74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c6b74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b78: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2C6B78u;
    SET_GPR_U32(ctx, 31, 0x2C6B80u);
    ctx->pc = 0x2C6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B78u;
    // 0x2c6b7c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2C6B78u, 0x2C6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B80u;
label_2c6b80:
    // 0x2c6b80: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6b80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6b84: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x2C6B84u;
    SET_GPR_U32(ctx, 31, 0x2C6B8Cu);
    ctx->pc = 0x2C6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6B84u;
    // 0x2c6b88: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2C6B84u, 0x2C6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B8Cu;
label_2c6b8c:
    // 0x2c6b8c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c6b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2c6b90: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c6b90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2c6b94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6b98: 0x0  nop
    ctx->pc = 0x2c6b98u;
    // NOP
    // 0x2c6b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6ba0: 0x0  nop
    ctx->pc = 0x2c6ba0u;
    // NOP
    // 0x2c6ba4: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2C6BA4u;
    {
        const bool branch_taken_0x2c6ba4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BA4u;
        // 0x2c6ba8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ba4) {
            ctx->pc = 0x2C6BF0u;
            goto label_2c6bf0;
        }
    }
    ctx->pc = 0x2C6BACu;
    // 0x2c6bac: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C6BACu;
    SET_GPR_U32(ctx, 31, 0x2C6BB4u);
    ctx->pc = 0x2C6BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BACu;
    // 0x2c6bb0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C6BACu, 0x2C6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BB4u;
label_2c6bb4:
    // 0x2c6bb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c6bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bb8: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6BB8u;
    {
        const bool branch_taken_0x2c6bb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BB8u;
        // 0x2c6bbc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bb8) {
            ctx->pc = 0x2C6BF0u;
            goto label_2c6bf0;
        }
    }
    ctx->pc = 0x2C6BC0u;
    // 0x2c6bc0: 0xc087420  jal         func_21D080
    ctx->pc = 0x2C6BC0u;
    SET_GPR_U32(ctx, 31, 0x2C6BC8u);
    ctx->pc = 0x2C6BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BC0u;
    // 0x2c6bc4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2C6BC0u, 0x2C6BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BC8u;
label_2c6bc8:
    // 0x2c6bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bcc: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2C6BCCu;
    SET_GPR_U32(ctx, 31, 0x2C6BD4u);
    ctx->pc = 0x2C6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BCCu;
    // 0x2c6bd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C6BCCu, 0x2C6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BD4u;
label_2c6bd4:
    // 0x2c6bd4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c6bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c6bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c6bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c6bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6be0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6be4: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2C6BE4u;
    SET_GPR_U32(ctx, 31, 0x2C6BECu);
    ctx->pc = 0x2C6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6BE4u;
    // 0x2c6be8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C6BE4u, 0x2C6BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BECu;
label_2c6bec:
    // 0x2c6bec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c6becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c6bf0:
    // 0x2c6bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6bf4:
    // 0x2c6bf4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2C6BF4u;
    {
        const bool branch_taken_0x2c6bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BF4u;
        // 0x2c6bf8: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bf4) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6BFCu;
label_2c6bfc:
    // 0x2c6bfc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6BFCu;
    {
        const bool branch_taken_0x2c6bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6BFCu;
        // 0x2c6c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6bfc) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6C04u;
    // 0x2c6c04: 0x8e620178  lw          $v0, 0x178($s3)
    ctx->pc = 0x2c6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 376)));
    // 0x2c6c08: 0x37a40008  ori         $a0, $sp, 0x8
    ctx->pc = 0x2c6c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x2c6c0c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x2C6C0Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C14u);
    ctx->pc = 0x2C6C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C0Cu;
    // 0x2c6c10: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x2C6C0Cu, 0x2C6C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C14u;
label_2c6c14:
    // 0x2c6c14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2c6c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c6c18: 0x1055000e  beq         $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2C6C18u;
    {
        const bool branch_taken_0x2c6c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2C6C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C18u;
        // 0x2c6c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c18) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6C20u;
    // 0x2c6c20: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6C20u;
    {
        const bool branch_taken_0x2c6c20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C20u;
        // 0x2c6c24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c20) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6C28u;
    // 0x2c6c28: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C6C28u;
    SET_GPR_U32(ctx, 31, 0x2C6C30u);
    ctx->pc = 0x2C6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C28u;
    // 0x2c6c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C6C28u, 0x2C6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C30u;
label_2c6c30:
    // 0x2c6c30: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2c6c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2c6c34: 0x8c8205ec  lw          $v0, 0x5EC($a0)
    ctx->pc = 0x2c6c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1516)));
    // 0x2c6c38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C6C38u;
    {
        const bool branch_taken_0x2c6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C38u;
        // 0x2c6c3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c38) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6C40u;
    // 0x2c6c40: 0xc05a628  jal         func_1698A0
    ctx->pc = 0x2C6C40u;
    SET_GPR_U32(ctx, 31, 0x2C6C48u);
    ctx->pc = 0x2C6C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6C40u;
    // 0x2c6c44: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698A0u, 0x2C6C40u, 0x2C6C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C48u;
label_2c6c48:
    // 0x2c6c48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6C48u;
    {
        const bool branch_taken_0x2c6c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C48u;
        // 0x2c6c4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6c48) {
            ctx->pc = 0x2C6C54u;
            goto label_2c6c54;
        }
    }
    ctx->pc = 0x2C6C50u;
label_2c6c50:
    // 0x2c6c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c54:
    // 0x2c6c54: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2c6c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c6c58: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2c6c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6c5c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2c6c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c6c60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c6c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6c64: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2c6c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6c68: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2c6c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6c6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6c70: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x2c6c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c6c74: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2c6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6C78u;
        // 0x2c6c7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6C80u;
    // 0x2c6c80: 0xa0860005  sb          $a2, 0x5($a0)
    ctx->pc = 0x2c6c80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c6c84: 0x0  nop
    ctx->pc = 0x2c6c84u;
    // NOP
    ctx->pc = 0x2c6c88u;
}
