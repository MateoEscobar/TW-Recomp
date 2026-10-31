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

// Function: sub_002E0B48
// Address: 0x2e0b48 - 0x2e0c20
void sub_002E0B48_0x2e0b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B48_0x2e0b48");
#endif

    switch (ctx->pc) {
        case 0x2e0ba0u: goto label_2e0ba0;
        default: break;
    }

    ctx->pc = 0x2e0b48u;

    // 0x2e0b48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0b4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e0b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b50: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2e0b50u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2e0b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e0b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e0b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e0b5c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2e0b5cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2e0b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e0b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0b6c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2e0b6cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2e0b70: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2e0b70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e0b74: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x2e0b74u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x2e0b78: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2e0b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e0b7c: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2e0b7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2e0b80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e0b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e0b84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e0b84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e0b88: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2e0b88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2e0b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0b90: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2e0b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0b94: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2e0b94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0b98: 0xc0b81d2  jal         func_2E0748
    ctx->pc = 0x2E0B98u;
    SET_GPR_U32(ctx, 31, 0x2E0BA0u);
    ctx->pc = 0x2E0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0B98u;
    // 0x2e0b9c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2E0B98u, 0x2E0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BA0u;
label_2e0ba0:
    // 0x2e0ba0: 0x4617bdc2  mul.s       $f23, $f23, $f23
    ctx->pc = 0x2e0ba0u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x2e0ba4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2e0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2e0ba8: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2e0ba8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2e0bac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2e0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2e0bb0: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x2e0bb0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x2e0bb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e0bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2e0bb8: 0x4616b582  mul.s       $f22, $f22, $f22
    ctx->pc = 0x2e0bb8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x2e0bbc: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x2e0bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x2e0bc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2e0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e0bc4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e0bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2e0bc8: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x2e0bc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2e0bcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bd0: 0xe6140044  swc1        $f20, 0x44($s0)
    ctx->pc = 0x2e0bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2e0bd4: 0xe6150048  swc1        $f21, 0x48($s0)
    ctx->pc = 0x2e0bd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2e0bd8: 0xe616004c  swc1        $f22, 0x4C($s0)
    ctx->pc = 0x2e0bd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2e0bdc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2e0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2e0be0: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x2e0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x2e0be4: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2e0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x2e0be8: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x2e0be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e0bec: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x2e0becu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e0bf0: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x2e0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x2e0bf4: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x2e0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x2e0bf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e0bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c04: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2e0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e0c08: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2e0c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e0c0c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2e0c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e0c10: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2e0c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0C14u;
        // 0x2e0c18: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C1Cu;
    // 0x2e0c1c: 0x0  nop
    ctx->pc = 0x2e0c1cu;
    // NOP
    ctx->pc = 0x2e0c20u;
}
