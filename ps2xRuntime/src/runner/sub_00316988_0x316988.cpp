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

// Function: sub_00316988
// Address: 0x316988 - 0x316a68
void sub_00316988_0x316988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316988_0x316988");
#endif

    switch (ctx->pc) {
        case 0x3169dcu: goto label_3169dc;
        case 0x3169f0u: goto label_3169f0;
        case 0x316a28u: goto label_316a28;
        case 0x316a34u: goto label_316a34;
        default: break;
    }

    ctx->pc = 0x316988u;

    // 0x316988: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x316988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31698c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31698cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316990: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x316994: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316994u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316998: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x316998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31699c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31699cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169a0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3169a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3169a4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3169a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169a8: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x3169a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3169ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3169acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169b0: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x3169b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3169b4: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x3169b4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x3169b8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3169b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3169bc: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x3169bcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x3169c0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3169c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3169c4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x3169c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x3169c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3169c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3169cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3169ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3169d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3169d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3169d4: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x3169D4u;
    SET_GPR_U32(ctx, 31, 0x3169DCu);
    ctx->pc = 0x3169D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3169D4u;
    // 0x3169d8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x3169D4u, 0x3169DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169DCu;
label_3169dc:
    // 0x3169dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3169dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169e0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3169E0u;
    {
        const bool branch_taken_0x3169e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169E0u;
        // 0x3169e4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169e0) {
            ctx->pc = 0x316A38u;
            goto label_316a38;
        }
    }
    ctx->pc = 0x3169E8u;
    // 0x3169e8: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3169E8u;
    SET_GPR_U32(ctx, 31, 0x3169F0u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3169E8u, 0x3169F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3169F0u;
label_3169f0:
    // 0x3169f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3169f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3169f4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3169F4u;
    {
        const bool branch_taken_0x3169f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3169F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3169F4u;
        // 0x3169f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3169f4) {
            ctx->pc = 0x316A28u;
            goto label_316a28;
        }
    }
    ctx->pc = 0x3169FCu;
    // 0x3169fc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x3169fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x316a00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316a00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316a04: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x316a04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x316a08: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x316a08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x316a0c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x316a0cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x316a10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x316a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a14: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x316a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a20: 0xc0c2176  jal         func_3085D8
    ctx->pc = 0x316A20u;
    SET_GPR_U32(ctx, 31, 0x316A28u);
    ctx->pc = 0x316A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A20u;
    // 0x316a24: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3085D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3085D8u, 0x316A20u, 0x316A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A28u;
label_316a28:
    // 0x316a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316a2c: 0xc059590  jal         func_165640
    ctx->pc = 0x316A2Cu;
    SET_GPR_U32(ctx, 31, 0x316A34u);
    ctx->pc = 0x316A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316A2Cu;
    // 0x316a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316A2Cu, 0x316A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316A34u;
label_316a34:
    // 0x316a34: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x316a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_316a38:
    // 0x316a38: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x316a38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316a3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316a40: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x316a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316a44: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x316a44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316a4c: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x316a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x316a50: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x316a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x316a54: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x316a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316a58: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x316a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x316A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316A5Cu;
        // 0x316a60: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316A64u;
    // 0x316a64: 0x0  nop
    ctx->pc = 0x316a64u;
    // NOP
    ctx->pc = 0x316a68u;
}
