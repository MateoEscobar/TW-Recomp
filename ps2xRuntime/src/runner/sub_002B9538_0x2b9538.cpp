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

// Function: sub_002B9538
// Address: 0x2b9538 - 0x2b95d0
void sub_002B9538_0x2b9538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9538_0x2b9538");
#endif

    switch (ctx->pc) {
        case 0x2b9564u: goto label_2b9564;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95b4u: goto label_2b95b4;
        default: break;
    }

    ctx->pc = 0x2b9538u;

    // 0x2b9538: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b953c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b953cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b9540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b9544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9548: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2b9548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2b954c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b954cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9550: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b9550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b9554: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b9554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b9558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b955c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2B955Cu;
    SET_GPR_U32(ctx, 31, 0x2B9564u);
    ctx->pc = 0x2B9560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B955Cu;
    // 0x2b9560: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2B955Cu, 0x2B9564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9564u;
label_2b9564:
    // 0x2b9564: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2B9564u;
    SET_GPR_U32(ctx, 31, 0x2B956Cu);
    ctx->pc = 0x2B9568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9564u;
    // 0x2b9568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2B9564u, 0x2B956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B956Cu;
label_2b956c:
    // 0x2b956c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B956Cu;
    {
        const bool branch_taken_0x2b956c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B956Cu;
        // 0x2b9570: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b956c) {
            ctx->pc = 0x2B95B8u;
            goto label_2b95b8;
        }
    }
    ctx->pc = 0x2B9574u;
    // 0x2b9574: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B9574u;
    SET_GPR_U32(ctx, 31, 0x2B957Cu);
    ctx->pc = 0x2B9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9574u;
    // 0x2b9578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B9574u, 0x2B957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B957Cu;
label_2b957c:
    // 0x2b957c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B957Cu;
    SET_GPR_U32(ctx, 31, 0x2B9584u);
    ctx->pc = 0x2B9580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B957Cu;
    // 0x2b9580: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B957Cu, 0x2B9584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9584u;
label_2b9584:
    // 0x2b9584: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9588: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9588u;
    {
        const bool branch_taken_0x2b9588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9588u;
        // 0x2b958c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9588) {
            ctx->pc = 0x2B95A8u;
            goto label_2b95a8;
        }
    }
    ctx->pc = 0x2B9590u;
    // 0x2b9590: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2b9594: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b9594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b9598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b959c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95a0: 0xc0ae574  jal         func_2B95D0
    ctx->pc = 0x2B95A0u;
    SET_GPR_U32(ctx, 31, 0x2B95A8u);
    ctx->pc = 0x2B95A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95A0u;
    // 0x2b95a4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B95D0u, 0x2B95A0u, 0x2B95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95A8u;
label_2b95a8:
    // 0x2b95a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b95a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b95ac: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B95ACu;
    SET_GPR_U32(ctx, 31, 0x2B95B4u);
    ctx->pc = 0x2B95B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95ACu;
    // 0x2b95b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B95ACu, 0x2B95B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95B4u;
label_2b95b4:
    // 0x2b95b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b95b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b95b8:
    // 0x2b95b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b95b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b95bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b95bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b95c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b95c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b95c4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2b95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b95c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B95C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B95CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95C8u;
        // 0x2b95cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B95D0u;
}
