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

// Function: sub_0039BE28
// Address: 0x39be28 - 0x39bfb0
void sub_0039BE28_0x39be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BE28_0x39be28");
#endif

    switch (ctx->pc) {
        case 0x39be9cu: goto label_39be9c;
        case 0x39beb0u: goto label_39beb0;
        case 0x39bee0u: goto label_39bee0;
        case 0x39beecu: goto label_39beec;
        case 0x39bef8u: goto label_39bef8;
        case 0x39bf1cu: goto label_39bf1c;
        case 0x39bf48u: goto label_39bf48;
        case 0x39bf54u: goto label_39bf54;
        case 0x39bf64u: goto label_39bf64;
        case 0x39bf6cu: goto label_39bf6c;
        default: break;
    }

    ctx->pc = 0x39be28u;

    // 0x39be28: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x39be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x39be2c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x39be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x39be30: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x39be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x39be34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39be34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be38: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x39be38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x39be3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39be3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be40: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x39be40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x39be44: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39be44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be48: 0xe7ba00d0  swc1        $f26, 0xD0($sp)
    ctx->pc = 0x39be48u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x39be4c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x39be4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be50: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x39be50u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x39be54: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x39be54u;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x39be58: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x39be58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x39be5c: 0x46008646  mov.s       $f25, $f16
    ctx->pc = 0x39be5cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
    // 0x39be60: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x39be60u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x39be64: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x39be64u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x39be68: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x39be68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x39be6c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x39be6cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x39be70: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x39be70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x39be74: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x39be74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x39be78: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x39be78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x39be7c: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x39be7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
    // 0x39be80: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x39be80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x39be84: 0x46008d06  mov.s       $f20, $f17
    ctx->pc = 0x39be84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[17]);
    // 0x39be88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x39be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x39be8c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x39be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x39be90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x39be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x39be94: 0xc0e4092  jal         func_390248
    ctx->pc = 0x39BE94u;
    SET_GPR_U32(ctx, 31, 0x39BE9Cu);
    ctx->pc = 0x39BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE94u;
    // 0x39be98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390248u, 0x39BE94u, 0x39BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE9Cu;
label_39be9c:
    // 0x39be9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x39be9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bea0: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x39BEA0u;
    {
        const bool branch_taken_0x39bea0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BEA0u;
        // 0x39bea4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bea0) {
            ctx->pc = 0x39BF6Cu;
            goto label_39bf6c;
        }
    }
    ctx->pc = 0x39BEA8u;
    // 0x39bea8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x39BEA8u;
    SET_GPR_U32(ctx, 31, 0x39BEB0u);
    ctx->pc = 0x39BEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEA8u;
    // 0x39beac: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x39BEA8u, 0x39BEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEB0u;
label_39beb0:
    // 0x39beb0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x39beb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x39beb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x39beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x39beb8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x39beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x39bebc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x39bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x39bec0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x39bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x39bec4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x39bec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x39bec8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x39bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x39becc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x39beccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x39bed0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x39bed0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39bed4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bed8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BED8u;
    SET_GPR_U32(ctx, 31, 0x39BEE0u);
    ctx->pc = 0x39BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BED8u;
    // 0x39bedc: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BED8u, 0x39BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEE0u;
label_39bee0:
    // 0x39bee0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bee4: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BEE4u;
    SET_GPR_U32(ctx, 31, 0x39BEECu);
    ctx->pc = 0x39BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEE4u;
    // 0x39bee8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BEE4u, 0x39BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEECu;
label_39beec:
    // 0x39beec: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39beecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bef0: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BEF0u;
    SET_GPR_U32(ctx, 31, 0x39BEF8u);
    ctx->pc = 0x39BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BEF0u;
    // 0x39bef4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BEF0u, 0x39BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BEF8u;
label_39bef8:
    // 0x39bef8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x39bef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x39befc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39befcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf00: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x39bf00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x39bf04: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x39bf04u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x39bf08: 0xe7b7001c  swc1        $f23, 0x1C($sp)
    ctx->pc = 0x39bf08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x39bf0c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bf10: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x39bf10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bf14: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x39BF14u;
    SET_GPR_U32(ctx, 31, 0x39BF1Cu);
    ctx->pc = 0x39BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF14u;
    // 0x39bf18: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39BF14u, 0x39BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF1Cu;
label_39bf1c:
    // 0x39bf1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x39bf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x39bf20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39bf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39bf24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39bf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf28: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x39bf28u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x39bf2c: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x39bf2cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x39bf30: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x39bf30u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x39bf34: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x39bf34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x39bf38: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bf3c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x39bf3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bf40: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x39BF40u;
    SET_GPR_U32(ctx, 31, 0x39BF48u);
    ctx->pc = 0x39BF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF40u;
    // 0x39bf44: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x39BF40u, 0x39BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF48u;
label_39bf48:
    // 0x39bf48: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bf48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bf4c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x39BF4Cu;
    SET_GPR_U32(ctx, 31, 0x39BF54u);
    ctx->pc = 0x39BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF4Cu;
    // 0x39bf50: 0x15282b  sltu        $a1, $zero, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x39BF4Cu, 0x39BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF54u;
label_39bf54:
    // 0x39bf54: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x39bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x39bf58: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x39bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x39bf5c: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x39BF5Cu;
    SET_GPR_U32(ctx, 31, 0x39BF64u);
    ctx->pc = 0x39BF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF5Cu;
    // 0x39bf60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x39BF5Cu, 0x39BF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF64u;
label_39bf64:
    // 0x39bf64: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x39BF64u;
    SET_GPR_U32(ctx, 31, 0x39BF6Cu);
    ctx->pc = 0x39BF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF64u;
    // 0x39bf68: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x39BF64u, 0x39BF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BF6Cu;
label_39bf6c:
    // 0x39bf6c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x39bf6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x39bf70: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x39bf70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x39bf74: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x39bf74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x39bf78: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x39bf78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39bf7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x39bf7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39bf80: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x39bf80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bf84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39bf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bf88: 0xc7ba00d0  lwc1        $f26, 0xD0($sp)
    ctx->pc = 0x39bf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x39bf8c: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x39bf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x39bf90: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x39bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x39bf94: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x39bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x39bf98: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x39bf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x39bf9c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x39bf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x39bfa0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x39bfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x39BFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFA4u;
        // 0x39bfa8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BFACu;
    // 0x39bfac: 0x0  nop
    ctx->pc = 0x39bfacu;
    // NOP
    ctx->pc = 0x39bfb0u;
}
