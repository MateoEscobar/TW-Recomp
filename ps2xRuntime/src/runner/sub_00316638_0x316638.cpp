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

// Function: sub_00316638
// Address: 0x316638 - 0x3166e8
void sub_00316638_0x316638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316638_0x316638");
#endif

    switch (ctx->pc) {
        case 0x316674u: goto label_316674;
        case 0x316688u: goto label_316688;
        case 0x3166b4u: goto label_3166b4;
        case 0x3166c0u: goto label_3166c0;
        default: break;
    }

    ctx->pc = 0x316638u;

    // 0x316638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31663c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31663cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316640: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x316644: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316644u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316648: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x316648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x31664c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31664cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316650: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x316650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x316654: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x316654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316658: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x316658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x31665c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x31665cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316660: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x316660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x316664: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x316664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x316668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31666c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x31666Cu;
    SET_GPR_U32(ctx, 31, 0x316674u);
    ctx->pc = 0x316670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31666Cu;
    // 0x316670: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x31666Cu, 0x316674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316674u;
label_316674:
    // 0x316674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316678: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x316678u;
    {
        const bool branch_taken_0x316678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316678u;
        // 0x31667c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316678) {
            ctx->pc = 0x3166C4u;
            goto label_3166c4;
        }
    }
    ctx->pc = 0x316680u;
    // 0x316680: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316680u;
    SET_GPR_U32(ctx, 31, 0x316688u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316680u, 0x316688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316688u;
label_316688:
    // 0x316688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31668c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31668Cu;
    {
        const bool branch_taken_0x31668c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31668Cu;
        // 0x316690: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31668c) {
            ctx->pc = 0x3166B4u;
            goto label_3166b4;
        }
    }
    ctx->pc = 0x316694u;
    // 0x316694: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x316698: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x316698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31669c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x31669cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3166a0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3166a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3166a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3166a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166ac: 0xc0c700c  jal         func_31C030
    ctx->pc = 0x3166ACu;
    SET_GPR_U32(ctx, 31, 0x3166B4u);
    ctx->pc = 0x3166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166ACu;
    // 0x3166b0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C030u, 0x3166ACu, 0x3166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166B4u;
label_3166b4:
    // 0x3166b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3166b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3166b8: 0xc059590  jal         func_165640
    ctx->pc = 0x3166B8u;
    SET_GPR_U32(ctx, 31, 0x3166C0u);
    ctx->pc = 0x3166BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3166B8u;
    // 0x3166bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3166B8u, 0x3166C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3166C0u;
label_3166c0:
    // 0x3166c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3166c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3166c4:
    // 0x3166c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3166c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3166c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3166c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3166cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3166ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3166d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3166d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3166d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3166d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3166d8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3166d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3166dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3166DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3166E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166DCu;
        // 0x3166e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3166DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3166E4u;
    // 0x3166e4: 0x0  nop
    ctx->pc = 0x3166e4u;
    // NOP
    ctx->pc = 0x3166e8u;
}
