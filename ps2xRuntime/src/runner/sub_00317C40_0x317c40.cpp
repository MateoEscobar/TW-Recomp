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

// Function: sub_00317C40
// Address: 0x317c40 - 0x317d38
void sub_00317C40_0x317c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317C40_0x317c40");
#endif

    switch (ctx->pc) {
        case 0x317cb0u: goto label_317cb0;
        default: break;
    }

    ctx->pc = 0x317c40u;

    // 0x317c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x317c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x317c44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x317c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x317c48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x317c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x317c4c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x317c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x317c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x317c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x317c58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x317c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x317c5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x317c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c60: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x317c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x317c64: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x317c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x317c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317c6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x317c6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c70: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x317c70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x317c74: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x317c74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x317c78: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x317c78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x317c7c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x317c7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x317c80: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x317c80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x317c84: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x317c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x317c88: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x317c88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x317c8c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x317c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x317c90: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x317c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317c94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x317c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x317c98: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x317c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x317c9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x317c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x317ca0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x317ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x317ca4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x317ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x317ca8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x317CA8u;
    SET_GPR_U32(ctx, 31, 0x317CB0u);
    ctx->pc = 0x317CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CA8u;
    // 0x317cac: 0xae090008  sw          $t1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x317CA8u, 0x317CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CB0u;
label_317cb0:
    // 0x317cb0: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x317cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x317cb4: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x317cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x317cb8: 0xa200004f  sb          $zero, 0x4F($s0)
    ctx->pc = 0x317cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x317cbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x317cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x317cc0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x317cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x317cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317cc8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x317cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x317ccc: 0x24633c20  addiu       $v1, $v1, 0x3C20
    ctx->pc = 0x317cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15392));
    // 0x317cd0: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x317cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x317cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x317cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317cd8: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x317cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x317cdc: 0xe616002c  swc1        $f22, 0x2C($s0)
    ctx->pc = 0x317cdcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x317ce0: 0xe6150030  swc1        $f21, 0x30($s0)
    ctx->pc = 0x317ce0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x317ce4: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x317ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x317ce8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x317ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x317cec: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x317cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x317cf0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x317cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x317cf4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x317cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x317cf8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x317cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x317cfc: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x317cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x317d00: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x317d00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x317d04: 0xa600004c  sh          $zero, 0x4C($s0)
    ctx->pc = 0x317d04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 0));
    // 0x317d08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x317d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317d0c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x317d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x317d10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x317d10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317d14: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x317d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x317d18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x317d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317d1c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x317d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x317d20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x317d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x317d24: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x317d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x317d28: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x317d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x317d2c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x317d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x317d30: 0x3e00008  jr          $ra
    ctx->pc = 0x317D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317D30u;
        // 0x317d34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317D38u;
}
