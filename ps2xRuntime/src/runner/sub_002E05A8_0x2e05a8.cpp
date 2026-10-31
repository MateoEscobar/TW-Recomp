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

// Function: sub_002E05A8
// Address: 0x2e05a8 - 0x2e0670
void sub_002E05A8_0x2e05a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E05A8_0x2e05a8");
#endif

    switch (ctx->pc) {
        case 0x2e05ecu: goto label_2e05ec;
        case 0x2e05f4u: goto label_2e05f4;
        case 0x2e0604u: goto label_2e0604;
        case 0x2e060cu: goto label_2e060c;
        case 0x2e063cu: goto label_2e063c;
        case 0x2e0648u: goto label_2e0648;
        default: break;
    }

    ctx->pc = 0x2e05a8u;

    // 0x2e05a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e05a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e05ac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2e05acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2e05b0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2e05b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2e05b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e05b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e05b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e05bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e05bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05c0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2e05c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2e05c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e05c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05c8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2e05c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2e05cc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e05ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05d0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2e05d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e05d4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2e05d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e05d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2e05d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2e05dc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2e05dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2e05e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e05e4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E05E4u;
    SET_GPR_U32(ctx, 31, 0x2E05ECu);
    ctx->pc = 0x2E05E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05E4u;
    // 0x2e05e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E05E4u, 0x2E05ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05ECu;
label_2e05ec:
    // 0x2e05ec: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E05ECu;
    SET_GPR_U32(ctx, 31, 0x2E05F4u);
    ctx->pc = 0x2E05F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05ECu;
    // 0x2e05f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E05ECu, 0x2E05F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05F4u;
label_2e05f4:
    // 0x2e05f4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E05F4u;
    {
        const bool branch_taken_0x2e05f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05F4u;
        // 0x2e05f8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e05f4) {
            ctx->pc = 0x2E064Cu;
            goto label_2e064c;
        }
    }
    ctx->pc = 0x2E05FCu;
    // 0x2e05fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E05FCu;
    SET_GPR_U32(ctx, 31, 0x2E0604u);
    ctx->pc = 0x2E0600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E05FCu;
    // 0x2e0600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E05FCu, 0x2E0604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0604u;
label_2e0604:
    // 0x2e0604: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E0604u;
    SET_GPR_U32(ctx, 31, 0x2E060Cu);
    ctx->pc = 0x2E0608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0604u;
    // 0x2e0608: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E0604u, 0x2E060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E060Cu;
label_2e060c:
    // 0x2e060c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e060cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0610: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E0610u;
    {
        const bool branch_taken_0x2e0610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0610u;
        // 0x2e0614: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0610) {
            ctx->pc = 0x2E063Cu;
            goto label_2e063c;
        }
    }
    ctx->pc = 0x2E0618u;
    // 0x2e0618: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e0618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e061c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2e061cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0620: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2e0620u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0624: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e0624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e0628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e062c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e062cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0630: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2e0630u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0634: 0xc0b81d2  jal         func_2E0748
    ctx->pc = 0x2E0634u;
    SET_GPR_U32(ctx, 31, 0x2E063Cu);
    ctx->pc = 0x2E0638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0634u;
    // 0x2e0638: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0748u, 0x2E0634u, 0x2E063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E063Cu;
label_2e063c:
    // 0x2e063c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e063cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0640: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E0640u;
    SET_GPR_U32(ctx, 31, 0x2E0648u);
    ctx->pc = 0x2E0644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0640u;
    // 0x2e0644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E0640u, 0x2E0648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0648u;
label_2e0648:
    // 0x2e0648: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2e0648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e064c:
    // 0x2e064c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2e064cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e0650: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2e0650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0654: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e0654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0658: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2e0658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e065c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2e065cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e0660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0664: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2e0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e0668: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0668u;
        // 0x2e066c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0670u;
}
