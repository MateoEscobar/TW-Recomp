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

// Function: sub_002DF6C0
// Address: 0x2df6c0 - 0x2df760
void sub_002DF6C0_0x2df6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF6C0_0x2df6c0");
#endif

    switch (ctx->pc) {
        case 0x2df6f4u: goto label_2df6f4;
        case 0x2df6fcu: goto label_2df6fc;
        case 0x2df70cu: goto label_2df70c;
        case 0x2df714u: goto label_2df714;
        case 0x2df734u: goto label_2df734;
        case 0x2df740u: goto label_2df740;
        default: break;
    }

    ctx->pc = 0x2df6c0u;

    // 0x2df6c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2df6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2df6c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2df6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2df6c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2df6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2df6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2df6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6d0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2df6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2df6d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2df6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2df6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2df6dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2df6dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2df6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2df6e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2df6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2df6e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df6ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DF6ECu;
    SET_GPR_U32(ctx, 31, 0x2DF6F4u);
    ctx->pc = 0x2DF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6ECu;
    // 0x2df6f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DF6ECu, 0x2DF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6F4u;
label_2df6f4:
    // 0x2df6f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DF6F4u;
    SET_GPR_U32(ctx, 31, 0x2DF6FCu);
    ctx->pc = 0x2DF6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF6F4u;
    // 0x2df6f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DF6F4u, 0x2DF6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF6FCu;
label_2df6fc:
    // 0x2df6fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DF6FCu;
    {
        const bool branch_taken_0x2df6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6FCu;
        // 0x2df700: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6fc) {
            ctx->pc = 0x2DF744u;
            goto label_2df744;
        }
    }
    ctx->pc = 0x2DF704u;
    // 0x2df704: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DF704u;
    SET_GPR_U32(ctx, 31, 0x2DF70Cu);
    ctx->pc = 0x2DF708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF704u;
    // 0x2df708: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DF704u, 0x2DF70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF70Cu;
label_2df70c:
    // 0x2df70c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DF70Cu;
    SET_GPR_U32(ctx, 31, 0x2DF714u);
    ctx->pc = 0x2DF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF70Cu;
    // 0x2df710: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DF70Cu, 0x2DF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF714u;
label_2df714:
    // 0x2df714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df718: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF718u;
    {
        const bool branch_taken_0x2df718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF718u;
        // 0x2df71c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df718) {
            ctx->pc = 0x2DF734u;
            goto label_2df734;
        }
    }
    ctx->pc = 0x2DF720u;
    // 0x2df720: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2df720u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2df724: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2df724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df728: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df72c: 0xc0b7dd8  jal         func_2DF760
    ctx->pc = 0x2DF72Cu;
    SET_GPR_U32(ctx, 31, 0x2DF734u);
    ctx->pc = 0x2DF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF72Cu;
    // 0x2df730: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF760u, 0x2DF72Cu, 0x2DF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF734u;
label_2df734:
    // 0x2df734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2df734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df738: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DF738u;
    SET_GPR_U32(ctx, 31, 0x2DF740u);
    ctx->pc = 0x2DF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF738u;
    // 0x2df73c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DF738u, 0x2DF740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF740u;
label_2df740:
    // 0x2df740: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2df740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2df744:
    // 0x2df744: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2df744u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2df748: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2df748u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2df74c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2df74cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2df750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df754: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2df754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2df758: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF758u;
        // 0x2df75c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF760u;
}
