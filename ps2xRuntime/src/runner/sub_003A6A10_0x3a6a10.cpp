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

// Function: sub_003A6A10
// Address: 0x3a6a10 - 0x3a6e48
void sub_003A6A10_0x3a6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6A10_0x3a6a10");
#endif

    switch (ctx->pc) {
        case 0x3a6aa4u: goto label_3a6aa4;
        case 0x3a6ab8u: goto label_3a6ab8;
        case 0x3a6accu: goto label_3a6acc;
        case 0x3a6ae0u: goto label_3a6ae0;
        case 0x3a6aecu: goto label_3a6aec;
        case 0x3a6b08u: goto label_3a6b08;
        case 0x3a6b24u: goto label_3a6b24;
        case 0x3a6b60u: goto label_3a6b60;
        case 0x3a6bb0u: goto label_3a6bb0;
        case 0x3a6bdcu: goto label_3a6bdc;
        case 0x3a6c1cu: goto label_3a6c1c;
        case 0x3a6c2cu: goto label_3a6c2c;
        case 0x3a6c38u: goto label_3a6c38;
        case 0x3a6c44u: goto label_3a6c44;
        case 0x3a6c50u: goto label_3a6c50;
        case 0x3a6c5cu: goto label_3a6c5c;
        case 0x3a6c68u: goto label_3a6c68;
        case 0x3a6c78u: goto label_3a6c78;
        case 0x3a6c84u: goto label_3a6c84;
        case 0x3a6c90u: goto label_3a6c90;
        case 0x3a6c9cu: goto label_3a6c9c;
        case 0x3a6cacu: goto label_3a6cac;
        case 0x3a6cb4u: goto label_3a6cb4;
        case 0x3a6cdcu: goto label_3a6cdc;
        case 0x3a6d18u: goto label_3a6d18;
        case 0x3a6d30u: goto label_3a6d30;
        case 0x3a6d4cu: goto label_3a6d4c;
        case 0x3a6d68u: goto label_3a6d68;
        case 0x3a6d90u: goto label_3a6d90;
        case 0x3a6da0u: goto label_3a6da0;
        case 0x3a6db0u: goto label_3a6db0;
        case 0x3a6dbcu: goto label_3a6dbc;
        case 0x3a6dc8u: goto label_3a6dc8;
        case 0x3a6dd4u: goto label_3a6dd4;
        case 0x3a6de0u: goto label_3a6de0;
        case 0x3a6de8u: goto label_3a6de8;
        default: break;
    }

    ctx->pc = 0x3a6a10u;

    // 0x3a6a10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3a6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3a6a14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a6a18: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3a6a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x3a6a1c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3a6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a6a20: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3a6a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x3a6a24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3a6a28: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3a6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x3a6a2c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a6a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a30: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3a6a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x3a6a34: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3a6a34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3a6a38: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3a6a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x3a6a3c: 0x2473b8b8  addiu       $s3, $v1, -0x4748
    ctx->pc = 0x3a6a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949048));
    // 0x3a6a40: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x3a6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x3a6a44: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x3a6a44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a48: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3a6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x3a6a4c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3a6a4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a50: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3a6a50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3a6a54: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3a6a54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a58: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3a6a58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3a6a5c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3a6a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x3a6a60: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3a6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x3a6a64: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a6a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3a6a68: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3a6a68u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3a6a6c: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3a6a6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3a6a70: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a6a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a6a74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a6a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a6a78: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x3a6a78u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a6a7c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x3a6a7cu;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x5116C0u));
    // 0x3a6a80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a6a80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6a84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6a88: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a6a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3a6a8c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x3a6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x3a6a90: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x3a6a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x3a6a94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a6a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6a98: 0x7fa90000  sq          $t1, 0x0($sp)
    ctx->pc = 0x3a6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 9));
    // 0x3a6a9c: 0xc0cd508  jal         func_335420
    ctx->pc = 0x3A6A9Cu;
    SET_GPR_U32(ctx, 31, 0x3A6AA4u);
    ctx->pc = 0x3A6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6A9Cu;
    // 0x3a6aa0: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3A6A9Cu, 0x3A6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6AA4u;
label_3a6aa4:
    // 0x3a6aa4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3a6aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3a6aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a6aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6aac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a6aacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6ab0: 0xc0cd508  jal         func_335420
    ctx->pc = 0x3A6AB0u;
    SET_GPR_U32(ctx, 31, 0x3A6AB8u);
    ctx->pc = 0x3A6AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6AB0u;
    // 0x3a6ab4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3A6AB0u, 0x3A6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6AB8u;
label_3a6ab8:
    // 0x3a6ab8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3a6ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3a6abc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a6abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6ac0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3a6ac0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x3a6ac4: 0xc0cd508  jal         func_335420
    ctx->pc = 0x3A6AC4u;
    SET_GPR_U32(ctx, 31, 0x3A6ACCu);
    ctx->pc = 0x3A6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6AC4u;
    // 0x3a6ac8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x3A6AC4u, 0x3A6ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6ACCu;
label_3a6acc:
    // 0x3a6acc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3a6accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a6ad0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3a6ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3a6ad4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a6ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ad8: 0xc0e97e0  jal         func_3A5F80
    ctx->pc = 0x3A6AD8u;
    SET_GPR_U32(ctx, 31, 0x3A6AE0u);
    ctx->pc = 0x3A6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6AD8u;
    // 0x3a6adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5F80u, 0x3A6AD8u, 0x3A6AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6AE0u;
label_3a6ae0:
    // 0x3a6ae0: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x3a6ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x3a6ae4: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A6AE4u;
    SET_GPR_U32(ctx, 31, 0x3A6AECu);
    ctx->pc = 0x3A6AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6AE4u;
    // 0x3a6ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A6AE4u, 0x3A6AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6AECu;
label_3a6aec:
    // 0x3a6aec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a6af0: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A6AF0u;
    {
        const bool branch_taken_0x3a6af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AF0u;
        // 0x3a6af4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6af0) {
            ctx->pc = 0x3A6CC8u;
            goto label_3a6cc8;
        }
    }
    ctx->pc = 0x3A6AF8u;
    // 0x3a6af8: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x3a6af8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6afc: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3a6afcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a6b00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b04: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a6b04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_3a6b08:
    // 0x3a6b08: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x3a6b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3a6b0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a6b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3a6b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6b14: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a6b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a6b18: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6b1c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6B1Cu;
    SET_GPR_U32(ctx, 31, 0x3A6B24u);
    ctx->pc = 0x3A6B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B1Cu;
    // 0x3a6b20: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6B1Cu, 0x3A6B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B24u;
label_3a6b24:
    // 0x3a6b24: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3a6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6b28: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x3a6b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a6b2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a6b2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a6b30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A6B30u;
    {
        const bool branch_taken_0x3a6b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B30u;
        // 0x3a6b34: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b30) {
            ctx->pc = 0x3A6B88u;
            goto label_3a6b88;
        }
    }
    ctx->pc = 0x3A6B38u;
    // 0x3a6b38: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3a6b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x3a6b3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6b40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a6b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b44: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3a6b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3a6b48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6b4c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3a6b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3a6b50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a6b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a6b54: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3a6b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3a6b58: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6B58u;
    SET_GPR_U32(ctx, 31, 0x3A6B60u);
    ctx->pc = 0x3A6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B58u;
    // 0x3a6b5c: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6B58u, 0x3A6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6B60u;
label_3a6b60:
    // 0x3a6b60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6b64: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a6b64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a6b68: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3a6b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3a6b6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a6b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3a6b70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6b74: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3a6b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x3a6b78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a6b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a6b7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6b80: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3A6B80u;
    {
        const bool branch_taken_0x3a6b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B80u;
        // 0x3a6b84: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b80) {
            ctx->pc = 0x3A6BD4u;
            goto label_3a6bd4;
        }
    }
    ctx->pc = 0x3A6B88u;
label_3a6b88:
    // 0x3a6b88: 0x3c01bf40  lui         $at, 0xBF40
    ctx->pc = 0x3a6b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48960 << 16));
    // 0x3a6b8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a6b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b94: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3a6b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x3a6b98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6b9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3a6b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x3a6ba0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3a6ba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x3a6ba4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3a6ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3a6ba8: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6BA8u;
    SET_GPR_U32(ctx, 31, 0x3A6BB0u);
    ctx->pc = 0x3A6BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6BA8u;
    // 0x3a6bac: 0x2412fff8  addiu       $s2, $zero, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6BA8u, 0x3A6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6BB0u;
label_3a6bb0:
    // 0x3a6bb0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3a6bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x3a6bb4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a6bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a6bb8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3a6bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x3a6bbc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a6bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x3a6bc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6bc4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a6bc4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6bc8: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x3a6bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x3a6bcc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x3a6bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x3a6bd0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3a6bd4:
    // 0x3a6bd4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6BD4u;
    SET_GPR_U32(ctx, 31, 0x3A6BDCu);
    ctx->pc = 0x3A6BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6BD4u;
    // 0x3a6bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6BD4u, 0x3A6BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6BDCu;
label_3a6bdc:
    // 0x3a6bdc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a6bdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6be0: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x3a6be0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3a6be4: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x3a6be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3a6be8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3a6be8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a6bec: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x3a6becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6bf0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a6bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3a6bf4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a6bf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3a6bf8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a6bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3a6bfc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a6bfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3a6c00: 0x2e3800b  movn        $s0, $s7, $v1
    ctx->pc = 0x3a6c00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
    // 0x3a6c04: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a6c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x3a6c08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a6c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6c0c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3a6c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x3a6c10: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a6c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x3a6c14: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x3A6C14u;
    SET_GPR_U32(ctx, 31, 0x3A6C1Cu);
    ctx->pc = 0x3A6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C14u;
    // 0x3a6c18: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3A6C14u, 0x3A6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C1Cu;
label_3a6c1c:
    // 0x3a6c1c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A6C1Cu;
    {
        const bool branch_taken_0x3a6c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a6c1c) {
            ctx->pc = 0x3A6C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6C1Cu;
            // 0x3a6c20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6CB8u;
            goto label_3a6cb8;
        }
    }
    ctx->pc = 0x3A6C24u;
    // 0x3a6c24: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A6C24u;
    SET_GPR_U32(ctx, 31, 0x3A6C2Cu);
    ctx->pc = 0x3A6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C24u;
    // 0x3a6c28: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A6C24u, 0x3A6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C2Cu;
label_3a6c2c:
    // 0x3a6c2c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c30: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6C30u;
    SET_GPR_U32(ctx, 31, 0x3A6C38u);
    ctx->pc = 0x3A6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C30u;
    // 0x3a6c34: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6C30u, 0x3A6C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C38u;
label_3a6c38:
    // 0x3a6c38: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c3c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6C3Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C44u);
    ctx->pc = 0x3A6C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C3Cu;
    // 0x3a6c40: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6C3Cu, 0x3A6C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C44u;
label_3a6c44:
    // 0x3a6c44: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c48: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6C48u;
    SET_GPR_U32(ctx, 31, 0x3A6C50u);
    ctx->pc = 0x3A6C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C48u;
    // 0x3a6c4c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6C48u, 0x3A6C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C50u;
label_3a6c50:
    // 0x3a6c50: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c54: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6C54u;
    SET_GPR_U32(ctx, 31, 0x3A6C5Cu);
    ctx->pc = 0x3A6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C54u;
    // 0x3a6c58: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6C54u, 0x3A6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C5Cu;
label_3a6c5c:
    // 0x3a6c5c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c60: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6C60u;
    SET_GPR_U32(ctx, 31, 0x3A6C68u);
    ctx->pc = 0x3A6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C60u;
    // 0x3a6c64: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6C60u, 0x3A6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C68u;
label_3a6c68:
    // 0x3a6c68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a6c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a6c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6c70: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6C70u;
    SET_GPR_U32(ctx, 31, 0x3A6C78u);
    ctx->pc = 0x3A6C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C70u;
    // 0x3a6c74: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6C70u, 0x3A6C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C78u;
label_3a6c78:
    // 0x3a6c78: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c7c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6C7Cu;
    SET_GPR_U32(ctx, 31, 0x3A6C84u);
    ctx->pc = 0x3A6C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C7Cu;
    // 0x3a6c80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6C7Cu, 0x3A6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C84u;
label_3a6c84:
    // 0x3a6c84: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c88: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6C88u;
    SET_GPR_U32(ctx, 31, 0x3A6C90u);
    ctx->pc = 0x3A6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C88u;
    // 0x3a6c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6C88u, 0x3A6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C90u;
label_3a6c90:
    // 0x3a6c90: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6c94: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6C94u;
    SET_GPR_U32(ctx, 31, 0x3A6C9Cu);
    ctx->pc = 0x3A6C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6C94u;
    // 0x3a6c98: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6C94u, 0x3A6C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6C9Cu;
label_3a6c9c:
    // 0x3a6c9c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6ca0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3a6ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x3a6ca4: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A6CA4u;
    SET_GPR_U32(ctx, 31, 0x3A6CACu);
    ctx->pc = 0x3A6CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CA4u;
    // 0x3a6ca8: 0x24451ad0  addiu       $a1, $v0, 0x1AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A6CA4u, 0x3A6CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CACu;
label_3a6cac:
    // 0x3a6cac: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A6CACu;
    SET_GPR_U32(ctx, 31, 0x3A6CB4u);
    ctx->pc = 0x3A6CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CACu;
    // 0x3a6cb0: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A6CACu, 0x3A6CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CB4u;
label_3a6cb4:
    // 0x3a6cb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a6cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a6cb8:
    // 0x3a6cb8: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x3a6cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3a6cbc: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x3A6CBCu;
    {
        const bool branch_taken_0x3a6cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CBCu;
        // 0x3a6cc0: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6cbc) {
            ctx->pc = 0x3A6B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6b08;
        }
    }
    ctx->pc = 0x3A6CC4u;
    // 0x3a6cc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a6cc8:
    // 0x3a6cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ccc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x3a6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x3a6cd0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x3a6cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a6cd4: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x3A6CD4u;
    SET_GPR_U32(ctx, 31, 0x3A6CDCu);
    ctx->pc = 0x3A6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6CD4u;
    // 0x3a6cd8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3A6CD4u, 0x3A6CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6CDCu;
label_3a6cdc:
    // 0x3a6cdc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a6cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a6ce0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6ce4: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x3a6ce4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x3a6ce8: 0x12a00042  beqz        $s5, . + 4 + (0x42 << 2)
    ctx->pc = 0x3A6CE8u;
    {
        const bool branch_taken_0x3a6ce8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6CE8u;
        // 0x3a6cec: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ce8) {
            ctx->pc = 0x3A6DF4u;
            goto label_3a6df4;
        }
    }
    ctx->pc = 0x3A6CF0u;
    // 0x3a6cf0: 0x3c148b7d  lui         $s4, 0x8B7D
    ctx->pc = 0x3a6cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)35709 << 16));
    // 0x3a6cf4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3a6cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3a6cf8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a6cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a6cfc: 0x2452b8b8  addiu       $s2, $v0, -0x4748
    ctx->pc = 0x3a6cfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x3a6d00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a6d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a6d04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a6d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a6d08: 0x36946900  ori         $s4, $s4, 0x6900
    ctx->pc = 0x3a6d08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)26880);
    // 0x3a6d0c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3a6d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3a6d10: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3a6d10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x3a6d14: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x3a6d14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_3a6d18:
    // 0x3a6d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d1c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6d1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6d20: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a6d20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6d24: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a6d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3a6d28: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6D28u;
    SET_GPR_U32(ctx, 31, 0x3A6D30u);
    ctx->pc = 0x3A6D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D28u;
    // 0x3a6d2c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6D28u, 0x3A6D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D30u;
label_3a6d30:
    // 0x3a6d30: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3a6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6d34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d38: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6d3c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a6d3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6d40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a6d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a6d44: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6D44u;
    SET_GPR_U32(ctx, 31, 0x3A6D4Cu);
    ctx->pc = 0x3A6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D44u;
    // 0x3a6d48: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6D44u, 0x3A6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D4Cu;
label_3a6d4c:
    // 0x3a6d4c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3a6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d54: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3a6d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3a6d58: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3a6d58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x3a6d5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a6d5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a6d60: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6D60u;
    SET_GPR_U32(ctx, 31, 0x3A6D68u);
    ctx->pc = 0x3A6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D60u;
    // 0x3a6d64: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6D60u, 0x3A6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D68u;
label_3a6d68:
    // 0x3a6d68: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3a6d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a6d6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6d70: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3a6d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x3a6d74: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3a6d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a6d78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a6d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3a6d7c: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x3a6d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x3a6d80: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x3a6d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x3a6d84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a6d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3a6d88: 0xc0cd518  jal         func_335460
    ctx->pc = 0x3A6D88u;
    SET_GPR_U32(ctx, 31, 0x3A6D90u);
    ctx->pc = 0x3A6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D88u;
    // 0x3a6d8c: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3A6D88u, 0x3A6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6D90u;
label_3a6d90:
    // 0x3a6d90: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3a6d90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3a6d94: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3a6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3a6d98: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x3A6D98u;
    SET_GPR_U32(ctx, 31, 0x3A6DA0u);
    ctx->pc = 0x3A6D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6D98u;
    // 0x3a6d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3A6D98u, 0x3A6DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DA0u;
label_3a6da0:
    // 0x3a6da0: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x3a6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a6da4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6da8: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3A6DA8u;
    SET_GPR_U32(ctx, 31, 0x3A6DB0u);
    ctx->pc = 0x3A6DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DA8u;
    // 0x3a6dac: 0x548025  or          $s0, $v0, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3A6DA8u, 0x3A6DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DB0u;
label_3a6db0:
    // 0x3a6db0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6db4: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3A6DB4u;
    SET_GPR_U32(ctx, 31, 0x3A6DBCu);
    ctx->pc = 0x3A6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DB4u;
    // 0x3a6db8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3A6DB4u, 0x3A6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DBCu;
label_3a6dbc:
    // 0x3a6dbc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6dc0: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3A6DC0u;
    SET_GPR_U32(ctx, 31, 0x3A6DC8u);
    ctx->pc = 0x3A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DC0u;
    // 0x3a6dc4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3A6DC0u, 0x3A6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DC8u;
label_3a6dc8:
    // 0x3a6dc8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6dcc: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3A6DCCu;
    SET_GPR_U32(ctx, 31, 0x3A6DD4u);
    ctx->pc = 0x3A6DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DCCu;
    // 0x3a6dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3A6DCCu, 0x3A6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DD4u;
label_3a6dd4:
    // 0x3a6dd4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3a6dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3a6dd8: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3A6DD8u;
    SET_GPR_U32(ctx, 31, 0x3A6DE0u);
    ctx->pc = 0x3A6DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DD8u;
    // 0x3a6ddc: 0x26e51ae8  addiu       $a1, $s7, 0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 6888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3A6DD8u, 0x3A6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DE0u;
label_3a6de0:
    // 0x3a6de0: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3A6DE0u;
    SET_GPR_U32(ctx, 31, 0x3A6DE8u);
    ctx->pc = 0x3A6DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DE0u;
    // 0x3a6de4: 0x8e242c7c  lw          $a0, 0x2C7C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3A6DE0u, 0x3A6DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DE8u;
label_3a6de8:
    // 0x3a6de8: 0x275102b  sltu        $v0, $s3, $s5
    ctx->pc = 0x3a6de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x3a6dec: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x3A6DECu;
    {
        const bool branch_taken_0x3a6dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6dec) {
            ctx->pc = 0x3A6DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6DECu;
            // 0x3a6df0: 0x7ac20000  lq          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6d18;
        }
    }
    ctx->pc = 0x3A6DF4u;
label_3a6df4:
    // 0x3a6df4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a6df8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3a6df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3a6dfc: 0x244416c0  addiu       $a0, $v0, 0x16C0
    ctx->pc = 0x3a6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x3a6e00: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3a6e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3a6e04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x3a6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a6e08: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a6e08u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x3a6e0c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3a6e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3a6e10: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3a6e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3a6e14: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3a6e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a6e18: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3a6e18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a6e1c: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3a6e1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a6e20: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x3a6e20u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a6e24: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3a6e24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a6e28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a6e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a6e2c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x3a6e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a6e30: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x3a6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a6e34: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3a6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a6e38: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3a6e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a6e3c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3a6e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3a6e40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E40u;
        // 0x3a6e44: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6E48u;
}
