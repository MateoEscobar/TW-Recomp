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

// Function: sub_001E7B70
// Address: 0x1e7b70 - 0x1e7d78
void sub_001E7B70_0x1e7b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7B70_0x1e7b70");
#endif

    switch (ctx->pc) {
        case 0x1e7be8u: goto label_1e7be8;
        case 0x1e7bfcu: goto label_1e7bfc;
        case 0x1e7c04u: goto label_1e7c04;
        case 0x1e7c18u: goto label_1e7c18;
        case 0x1e7c60u: goto label_1e7c60;
        case 0x1e7cbcu: goto label_1e7cbc;
        case 0x1e7cc4u: goto label_1e7cc4;
        case 0x1e7cd4u: goto label_1e7cd4;
        case 0x1e7d50u: goto label_1e7d50;
        default: break;
    }

    ctx->pc = 0x1e7b70u;

    // 0x1e7b70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1e7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1e7b74: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e7b78: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e7b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e7b7c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1e7b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7b80: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e7b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e7b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7b88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e7b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e7b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e7b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7b90: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e7b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e7b94: 0x26300260  addiu       $s0, $s1, 0x260
    ctx->pc = 0x1e7b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
    // 0x1e7b98: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e7b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e7b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ba0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e7ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e7ba4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1e7ba4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1e7ba8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1e7ba8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e7bac: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1e7bb0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e7bb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e7bb4: 0x26340070  addiu       $s4, $s1, 0x70
    ctx->pc = 0x1e7bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1e7bb8: 0xc461f2ec  lwc1        $f1, -0xD14($v1)
    ctx->pc = 0x1e7bb8u;
    { uint32_t bits = FAST_READ32(0x50F2ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7bbc: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x1e7bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1e7bc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e7bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e7bc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e7bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e7bc8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1e7bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1e7bcc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e7bd0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1e7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7bd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e7bd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1e7bd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e7bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e7bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e7be0: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1E7BE0u;
    SET_GPR_U32(ctx, 31, 0x1E7BE8u);
    ctx->pc = 0x1E7BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BE0u;
    // 0x1e7be4: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1E7BE0u, 0x1E7BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BE8u;
label_1e7be8:
    // 0x1e7be8: 0xc64cf2e4  lwc1        $f12, -0xD1C($s2)
    ctx->pc = 0x1e7be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7bf0: 0xc66df2e8  lwc1        $f13, -0xD18($s3)
    ctx->pc = 0x1e7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294963944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e7bf4: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1E7BF4u;
    SET_GPR_U32(ctx, 31, 0x1E7BFCu);
    ctx->pc = 0x1E7BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BF4u;
    // 0x1e7bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E7BF4u, 0x1E7BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7BFCu;
label_1e7bfc:
    // 0x1e7bfc: 0xc06886e  jal         func_1A21B8
    ctx->pc = 0x1E7BFCu;
    SET_GPR_U32(ctx, 31, 0x1E7C04u);
    ctx->pc = 0x1E7C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7BFCu;
    // 0x1e7c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B8u, 0x1E7BFCu, 0x1E7C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C04u;
label_1e7c04:
    // 0x1e7c04: 0xc64cf2e4  lwc1        $f12, -0xD1C($s2)
    ctx->pc = 0x1e7c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294963940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e7c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c0c: 0xc66df2e8  lwc1        $f13, -0xD18($s3)
    ctx->pc = 0x1e7c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294963944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e7c10: 0xc068848  jal         func_1A2120
    ctx->pc = 0x1E7C10u;
    SET_GPR_U32(ctx, 31, 0x1E7C18u);
    ctx->pc = 0x1E7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C10u;
    // 0x1e7c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1E7C10u, 0x1E7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C18u;
label_1e7c18:
    // 0x1e7c18: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x1e7c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7c1c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1e7c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e7c20: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e7c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c28: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e7c28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1e7c2c: 0xc6220360  lwc1        $f2, 0x360($s1)
    ctx->pc = 0x1e7c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7c30: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x1e7c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1e7c34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c38: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e7c38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7c3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e7c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e7c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e7c44: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1e7c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1e7c48: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1e7c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1e7c4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7c50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7c54: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e7c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e7c58: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1E7C58u;
    SET_GPR_U32(ctx, 31, 0x1E7C60u);
    ctx->pc = 0x1E7C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7C58u;
    // 0x1e7c5c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E7C58u, 0x1E7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C60u;
label_1e7c60:
    // 0x1e7c60: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1e7c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7c64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e7c68: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1e7c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7c6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e7c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c70: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1e7c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1e7c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7c78: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e7c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e7c7c: 0xc464f2f8  lwc1        $f4, -0xD08($v1)
    ctx->pc = 0x1e7c7cu;
    { uint32_t bits = FAST_READ32(0x50F2F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7c80: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1e7c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7c84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e7c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7c88: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1e7c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7c8c: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1e7c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7c90: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1e7c90u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1e7c94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e7c94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e7c98: 0xc6230368  lwc1        $f3, 0x368($s1)
    ctx->pc = 0x1e7c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7c9c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ca0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1e7ca0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1e7ca4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1e7ca4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x1e7ca8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1e7ca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1e7cac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1e7cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7cb0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e7cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e7cb4: 0xc06e4dc  jal         func_1B9370
    ctx->pc = 0x1E7CB4u;
    SET_GPR_U32(ctx, 31, 0x1E7CBCu);
    ctx->pc = 0x1E7CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CB4u;
    // 0x1e7cb8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1E7CB4u, 0x1E7CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CBCu;
label_1e7cbc:
    // 0x1e7cbc: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1E7CBCu;
    SET_GPR_U32(ctx, 31, 0x1E7CC4u);
    ctx->pc = 0x1E7CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CBCu;
    // 0x1e7cc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1E7CBCu, 0x1E7CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CC4u;
label_1e7cc4:
    // 0x1e7cc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e7cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e7cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7ccc: 0xc06e4ea  jal         func_1B93A8
    ctx->pc = 0x1E7CCCu;
    SET_GPR_U32(ctx, 31, 0x1E7CD4u);
    ctx->pc = 0x1E7CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7CCCu;
    // 0x1e7cd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B93A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B93A8u, 0x1E7CCCu, 0x1E7CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7CD4u;
label_1e7cd4:
    // 0x1e7cd4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1e7cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7cd8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e7cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1e7cdc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1e7cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7ce0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e7ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e7ce4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1e7ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7ce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e7ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7cec: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1e7cecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e7cf0: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1e7cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1e7cf4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1e7cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1e7cf8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e7cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e7cfc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e7cfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1e7d00: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x1e7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7d04: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x1e7d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1e7d08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e7d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7d0c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1e7d0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1e7d10: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e7d10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7d14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e7d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e7d18: 0xc4c3f2f4  lwc1        $f3, -0xD0C($a2)
    ctx->pc = 0x1e7d18u;
    { uint32_t bits = FAST_READ32(0x50F2F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7d1c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1e7d20: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e7d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e7d24: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1e7d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1e7d28: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1e7d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1e7d2c: 0xc462f2e0  lwc1        $f2, -0xD20($v1)
    ctx->pc = 0x1e7d2cu;
    { uint32_t bits = FAST_READ32(0x50F2E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e7d30: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1e7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7d34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e7d34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e7d38: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x1e7d38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e7d3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1e7d3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1e7d40: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e7d44: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e7d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e7d48: 0xc07a4da  jal         func_1E9368
    ctx->pc = 0x1E7D48u;
    SET_GPR_U32(ctx, 31, 0x1E7D50u);
    ctx->pc = 0x1E7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7D48u;
    // 0x1e7d4c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9368u, 0x1E7D48u, 0x1E7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D50u;
label_1e7d50:
    // 0x1e7d50: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e7d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e7d54: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e7d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e7d58: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e7d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e7d5c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e7d60: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e7d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e7d64: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e7d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e7d68: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1e7d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e7d6c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1e7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e7d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7D70u;
        // 0x1e7d74: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7D78u;
}
