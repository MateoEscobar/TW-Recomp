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

// Function: sub_002E0670
// Address: 0x2e0670 - 0x2e0748
void sub_002E0670_0x2e0670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0670_0x2e0670");
#endif

    switch (ctx->pc) {
        case 0x2e06c0u: goto label_2e06c0;
        case 0x2e06c8u: goto label_2e06c8;
        case 0x2e06d8u: goto label_2e06d8;
        case 0x2e06e0u: goto label_2e06e0;
        case 0x2e0710u: goto label_2e0710;
        case 0x2e071cu: goto label_2e071c;
        default: break;
    }

    ctx->pc = 0x2e0670u;

    // 0x2e0670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e0674: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2e0674u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x2e0678: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e0678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e067c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2e067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2e0680: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0684: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2e0684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2e0688: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e0688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e068c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e0690: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e0690u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0694: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2e0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2e0698: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e0698u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e069c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2e069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2e06a0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e06a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06a4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2e06a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2e06a8: 0x9b403  sra         $s6, $t1, 16
    ctx->pc = 0x2e06a8u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 9), 16));
    // 0x2e06ac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2e06acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2e06b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2e06b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2e06b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e06b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e06b8: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E06B8u;
    SET_GPR_U32(ctx, 31, 0x2E06C0u);
    ctx->pc = 0x2E06BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06B8u;
    // 0x2e06bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E06B8u, 0x2E06C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06C0u;
label_2e06c0:
    // 0x2e06c0: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E06C0u;
    SET_GPR_U32(ctx, 31, 0x2E06C8u);
    ctx->pc = 0x2E06C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06C0u;
    // 0x2e06c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E06C0u, 0x2E06C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06C8u;
label_2e06c8:
    // 0x2e06c8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E06C8u;
    {
        const bool branch_taken_0x2e06c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06C8u;
        // 0x2e06cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06c8) {
            ctx->pc = 0x2E0720u;
            goto label_2e0720;
        }
    }
    ctx->pc = 0x2E06D0u;
    // 0x2e06d0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E06D0u;
    SET_GPR_U32(ctx, 31, 0x2E06D8u);
    ctx->pc = 0x2E06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06D0u;
    // 0x2e06d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E06D0u, 0x2E06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06D8u;
label_2e06d8:
    // 0x2e06d8: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E06D8u;
    SET_GPR_U32(ctx, 31, 0x2E06E0u);
    ctx->pc = 0x2E06DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E06D8u;
    // 0x2e06dc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E06D8u, 0x2E06E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E06E0u;
label_2e06e0:
    // 0x2e06e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e06e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06e4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E06E4u;
    {
        const bool branch_taken_0x2e06e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E06E4u;
        // 0x2e06e8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e06e4) {
            ctx->pc = 0x2E0710u;
            goto label_2e0710;
        }
    }
    ctx->pc = 0x2E06ECu;
    // 0x2e06ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e06ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e06f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e06f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e06f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e06f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e06fc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2e06fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0704: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e0704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0708: 0xc0b81d2  jal         func_2E0748
    ctx->pc = 0x2E0708u;
    SET_GPR_U32(ctx, 31, 0x2E0710u);
    ctx->pc = 0x2E070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0708u;
    // 0x2e070c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2E0708u, 0x2E0710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0710u;
label_2e0710:
    // 0x2e0710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0714: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E0714u;
    SET_GPR_U32(ctx, 31, 0x2E071Cu);
    ctx->pc = 0x2E0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0714u;
    // 0x2e0718: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E0714u, 0x2E071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E071Cu;
label_2e071c:
    // 0x2e071c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2e071cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e0720:
    // 0x2e0720: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2e0720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e0724: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2e0724u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0728: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2e0728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e072c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e072cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0730: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2e0730u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0734: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2e0734u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0738: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e073c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2e073cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0740: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0740u;
        // 0x2e0744: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0748u;
}
