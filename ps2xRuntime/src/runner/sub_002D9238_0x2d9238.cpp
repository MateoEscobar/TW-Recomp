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

// Function: sub_002D9238
// Address: 0x2d9238 - 0x2d92e8
void sub_002D9238_0x2d9238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9238_0x2d9238");
#endif

    switch (ctx->pc) {
        case 0x2d9274u: goto label_2d9274;
        case 0x2d927cu: goto label_2d927c;
        case 0x2d928cu: goto label_2d928c;
        case 0x2d9294u: goto label_2d9294;
        case 0x2d92b8u: goto label_2d92b8;
        case 0x2d92c4u: goto label_2d92c4;
        default: break;
    }

    ctx->pc = 0x2d9238u;

    // 0x2d9238: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d9238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d923c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d923cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d9240: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d9240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d9244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d9244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d9248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d924c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d924cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9250: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d9250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d9254: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d9254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9258: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2d9258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2d925c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d925cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9260: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d9260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d9264: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d9264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d9268: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d926c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D926Cu;
    SET_GPR_U32(ctx, 31, 0x2D9274u);
    ctx->pc = 0x2D9270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D926Cu;
    // 0x2d9270: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D926Cu, 0x2D9274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9274u;
label_2d9274:
    // 0x2d9274: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2D9274u;
    SET_GPR_U32(ctx, 31, 0x2D927Cu);
    ctx->pc = 0x2D9278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9274u;
    // 0x2d9278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2D9274u, 0x2D927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D927Cu;
label_2d927c:
    // 0x2d927c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D927Cu;
    {
        const bool branch_taken_0x2d927c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D927Cu;
        // 0x2d9280: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d927c) {
            ctx->pc = 0x2D92C8u;
            goto label_2d92c8;
        }
    }
    ctx->pc = 0x2D9284u;
    // 0x2d9284: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D9284u;
    SET_GPR_U32(ctx, 31, 0x2D928Cu);
    ctx->pc = 0x2D9288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9284u;
    // 0x2d9288: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D9284u, 0x2D928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D928Cu;
label_2d928c:
    // 0x2d928c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2D928Cu;
    SET_GPR_U32(ctx, 31, 0x2D9294u);
    ctx->pc = 0x2D9290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D928Cu;
    // 0x2d9290: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2D928Cu, 0x2D9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9294u;
label_2d9294:
    // 0x2d9294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9298: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9298u;
    {
        const bool branch_taken_0x2d9298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9298u;
        // 0x2d929c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9298) {
            ctx->pc = 0x2D92B8u;
            goto label_2d92b8;
        }
    }
    ctx->pc = 0x2D92A0u;
    // 0x2d92a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d92a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d92a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d92a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92a8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2d92a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d92acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92b0: 0xc0b64ba  jal         func_2D92E8
    ctx->pc = 0x2D92B0u;
    SET_GPR_U32(ctx, 31, 0x2D92B8u);
    ctx->pc = 0x2D92B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92B0u;
    // 0x2d92b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D92E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D92E8u, 0x2D92B0u, 0x2D92B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92B8u;
label_2d92b8:
    // 0x2d92b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d92b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d92bc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2D92BCu;
    SET_GPR_U32(ctx, 31, 0x2D92C4u);
    ctx->pc = 0x2D92C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D92BCu;
    // 0x2d92c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2D92BCu, 0x2D92C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92C4u;
label_2d92c4:
    // 0x2d92c4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d92c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2d92c8:
    // 0x2d92c8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d92c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d92cc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d92ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d92d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d92d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d92d4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d92d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d92d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d92d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d92dc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2d92dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d92e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D92E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D92E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92E0u;
        // 0x2d92e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D92E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D92E8u;
}
