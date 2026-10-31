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

// Function: sub_00316A68
// Address: 0x316a68 - 0x316b30
void sub_00316A68_0x316a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316A68_0x316a68");
#endif

    switch (ctx->pc) {
        case 0x316ab4u: goto label_316ab4;
        case 0x316ac8u: goto label_316ac8;
        case 0x316af8u: goto label_316af8;
        case 0x316b04u: goto label_316b04;
        default: break;
    }

    ctx->pc = 0x316a68u;

    // 0x316a68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x316a6c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x316a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x316a70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x316a74: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x316a74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x316a78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x316a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x316a7c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316a80: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x316a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x316a84: 0x59c03  sra         $s3, $a1, 16
    ctx->pc = 0x316a84u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 16));
    // 0x316a88: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x316a88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x316a8c: 0x6a403  sra         $s4, $a2, 16
    ctx->pc = 0x316a8cu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 6), 16));
    // 0x316a90: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x316a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x316a94: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x316a94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x316a98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x316a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x316a9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x316a9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x316aa0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x316aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x316aa4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x316aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316aac: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316AACu;
    SET_GPR_U32(ctx, 31, 0x316AB4u);
    ctx->pc = 0x316AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AACu;
    // 0x316ab0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316AACu, 0x316AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AB4u;
label_316ab4:
    // 0x316ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ab8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x316AB8u;
    {
        const bool branch_taken_0x316ab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316AB8u;
        // 0x316abc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ab8) {
            ctx->pc = 0x316B08u;
            goto label_316b08;
        }
    }
    ctx->pc = 0x316AC0u;
    // 0x316ac0: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316AC0u;
    SET_GPR_U32(ctx, 31, 0x316AC8u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316AC0u, 0x316AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AC8u;
label_316ac8:
    // 0x316ac8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316acc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x316ACCu;
    {
        const bool branch_taken_0x316acc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316ACCu;
        // 0x316ad0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316acc) {
            ctx->pc = 0x316AF8u;
            goto label_316af8;
        }
    }
    ctx->pc = 0x316AD4u;
    // 0x316ad4: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x316ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x316ad8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x316ad8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x316adc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x316adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ae0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x316ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ae4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x316ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316af0: 0xc0c5c14  jal         func_317050
    ctx->pc = 0x316AF0u;
    SET_GPR_U32(ctx, 31, 0x316AF8u);
    ctx->pc = 0x316AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AF0u;
    // 0x316af4: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x317050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317050u, 0x316AF0u, 0x316AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316AF8u;
label_316af8:
    // 0x316af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316afc: 0xc059590  jal         func_165640
    ctx->pc = 0x316AFCu;
    SET_GPR_U32(ctx, 31, 0x316B04u);
    ctx->pc = 0x316B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316AFCu;
    // 0x316b00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316AFCu, 0x316B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316B04u;
label_316b04:
    // 0x316b04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x316b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_316b08:
    // 0x316b08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x316b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316b0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316b0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316b10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x316b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316b14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x316b14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316b1c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x316b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316b20: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x316b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316b24: 0x3e00008  jr          $ra
    ctx->pc = 0x316B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316B24u;
        // 0x316b28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316B2Cu;
    // 0x316b2c: 0x0  nop
    ctx->pc = 0x316b2cu;
    // NOP
    ctx->pc = 0x316b30u;
}
