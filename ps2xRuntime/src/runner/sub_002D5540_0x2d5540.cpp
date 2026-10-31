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

// Function: sub_002D5540
// Address: 0x2d5540 - 0x2d55d8
void sub_002D5540_0x2d5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5540_0x2d5540");
#endif

    switch (ctx->pc) {
        case 0x2d556cu: goto label_2d556c;
        case 0x2d5574u: goto label_2d5574;
        case 0x2d5584u: goto label_2d5584;
        case 0x2d558cu: goto label_2d558c;
        case 0x2d55b0u: goto label_2d55b0;
        case 0x2d55bcu: goto label_2d55bc;
        default: break;
    }

    ctx->pc = 0x2d5540u;

    // 0x2d5540: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d5544: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d5544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d5548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d554c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5550: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d5550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d5554: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d5554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5558: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d5558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d555c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d555cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d5560: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d5560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d5564: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D5564u;
    SET_GPR_U32(ctx, 31, 0x2D556Cu);
    ctx->pc = 0x2D5568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5564u;
    // 0x2d5568: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D5564u, 0x2D556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D556Cu;
label_2d556c:
    // 0x2d556c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D556Cu;
    SET_GPR_U32(ctx, 31, 0x2D5574u);
    ctx->pc = 0x2D5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D556Cu;
    // 0x2d5570: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D556Cu, 0x2D5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5574u;
label_2d5574:
    // 0x2d5574: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D5574u;
    {
        const bool branch_taken_0x2d5574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5574u;
        // 0x2d5578: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5574) {
            ctx->pc = 0x2D55C0u;
            goto label_2d55c0;
        }
    }
    ctx->pc = 0x2D557Cu;
    // 0x2d557c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D557Cu;
    SET_GPR_U32(ctx, 31, 0x2D5584u);
    ctx->pc = 0x2D5580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D557Cu;
    // 0x2d5580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D557Cu, 0x2D5584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5584u;
label_2d5584:
    // 0x2d5584: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D5584u;
    SET_GPR_U32(ctx, 31, 0x2D558Cu);
    ctx->pc = 0x2D5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5584u;
    // 0x2d5588: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D5584u, 0x2D558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D558Cu;
label_2d558c:
    // 0x2d558c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d558cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5590: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D5590u;
    {
        const bool branch_taken_0x2d5590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5590u;
        // 0x2d5594: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5590) {
            ctx->pc = 0x2D55B0u;
            goto label_2d55b0;
        }
    }
    ctx->pc = 0x2D5598u;
    // 0x2d5598: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2d5598u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2d559c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d559cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d55a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d55a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d55a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55a8: 0xc0b5576  jal         func_2D55D8
    ctx->pc = 0x2D55A8u;
    SET_GPR_U32(ctx, 31, 0x2D55B0u);
    ctx->pc = 0x2D55ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55A8u;
    // 0x2d55ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D55D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D55D8u, 0x2D55A8u, 0x2D55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55B0u;
label_2d55b0:
    // 0x2d55b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d55b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d55b4: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D55B4u;
    SET_GPR_U32(ctx, 31, 0x2D55BCu);
    ctx->pc = 0x2D55B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D55B4u;
    // 0x2d55b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D55B4u, 0x2D55BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D55BCu;
label_2d55bc:
    // 0x2d55bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d55bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d55c0:
    // 0x2d55c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d55c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d55c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d55c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d55c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d55c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d55cc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d55d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D55D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D55D0u;
        // 0x2d55d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D55D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D55D8u;
}
