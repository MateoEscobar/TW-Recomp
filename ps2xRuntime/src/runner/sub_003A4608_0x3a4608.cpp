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

// Function: sub_003A4608
// Address: 0x3a4608 - 0x3a4668
void sub_003A4608_0x3a4608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4608_0x3a4608");
#endif

    switch (ctx->pc) {
        case 0x3a4608u: goto label_3a4608;
        case 0x3a460cu: goto label_3a460c;
        case 0x3a4610u: goto label_3a4610;
        case 0x3a4614u: goto label_3a4614;
        case 0x3a4618u: goto label_3a4618;
        case 0x3a461cu: goto label_3a461c;
        case 0x3a4620u: goto label_3a4620;
        case 0x3a4624u: goto label_3a4624;
        case 0x3a4628u: goto label_3a4628;
        case 0x3a462cu: goto label_3a462c;
        case 0x3a4630u: goto label_3a4630;
        case 0x3a4634u: goto label_3a4634;
        case 0x3a4638u: goto label_3a4638;
        case 0x3a463cu: goto label_3a463c;
        case 0x3a4640u: goto label_3a4640;
        case 0x3a4644u: goto label_3a4644;
        case 0x3a4648u: goto label_3a4648;
        case 0x3a464cu: goto label_3a464c;
        case 0x3a4650u: goto label_3a4650;
        case 0x3a4654u: goto label_3a4654;
        case 0x3a4658u: goto label_3a4658;
        case 0x3a465cu: goto label_3a465c;
        case 0x3a4660u: goto label_3a4660;
        case 0x3a4664u: goto label_3a4664;
        default: break;
    }

    ctx->pc = 0x3a4608u;

label_3a4608:
    // 0x3a4608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a460c:
    // 0x3a460c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a4610:
    // 0x3a4610: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3a4610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a4614:
    // 0x3a4614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4618:
    // 0x3a4618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a461c:
    // 0x3a461c: 0xc047e6c  jal         func_11F9B0
label_3a4620:
    if (ctx->pc == 0x3A4620u) {
        ctx->pc = 0x3A4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A461Cu;
        // 0x3a4620: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4624u;
        goto label_3a4624;
    }
    ctx->pc = 0x3A461Cu;
    SET_GPR_U32(ctx, 31, 0x3A4624u);
    ctx->pc = 0x3A4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A461Cu;
    // 0x3a4620: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A461Cu, 0x3A4624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4624u;
label_3a4624:
    // 0x3a4624: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3a4628:
    if (ctx->pc == 0x3A4628u) {
        ctx->pc = 0x3A4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4624u;
        // 0x3a4628: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A462Cu;
        goto label_3a462c;
    }
    ctx->pc = 0x3A4624u;
    {
        const bool branch_taken_0x3a4624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4624) {
            ctx->pc = 0x3A4628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4624u;
            // 0x3a4628: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4650u;
            goto label_3a4650;
        }
    }
    ctx->pc = 0x3A462Cu;
label_3a462c:
    // 0x3a462c: 0xc047e6c  jal         func_11F9B0
label_3a4630:
    if (ctx->pc == 0x3A4630u) {
        ctx->pc = 0x3A4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A462Cu;
        // 0x3a4630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4634u;
        goto label_3a4634;
    }
    ctx->pc = 0x3A462Cu;
    SET_GPR_U32(ctx, 31, 0x3A4634u);
    ctx->pc = 0x3A4630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A462Cu;
    // 0x3a4630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A462Cu, 0x3A4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4634u;
label_3a4634:
    // 0x3a4634: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a4634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4638:
    // 0x3a4638: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a4638u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a463c:
    // 0x3a463c: 0x846401d0  lh          $a0, 0x1D0($v1)
    ctx->pc = 0x3a463cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 464)));
label_3a4640:
    // 0x3a4640: 0x8c6501d4  lw          $a1, 0x1D4($v1)
    ctx->pc = 0x3a4640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_3a4644:
    // 0x3a4644: 0xa0f809  jalr        $a1
label_3a4648:
    if (ctx->pc == 0x3A4648u) {
        ctx->pc = 0x3A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4644u;
        // 0x3a4648: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A464Cu;
        goto label_3a464c;
    }
    ctx->pc = 0x3A4644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A464Cu);
        ctx->pc = 0x3A4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4644u;
        // 0x3a4648: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4644u, 0x3A464Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A464Cu;
label_3a464c:
    // 0x3a464c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a464cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a4650:
    // 0x3a4650: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4654:
    // 0x3a4654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a4658:
    // 0x3a4658: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3a4658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a465c:
    // 0x3a465c: 0x3e00008  jr          $ra
label_3a4660:
    if (ctx->pc == 0x3A4660u) {
        ctx->pc = 0x3A4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A465Cu;
        // 0x3a4660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4664u;
        goto label_3a4664;
    }
    ctx->pc = 0x3A465Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A465Cu;
        // 0x3a4660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A465Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4664u;
label_3a4664:
    // 0x3a4664: 0x0  nop
    ctx->pc = 0x3a4664u;
    // NOP
    ctx->pc = 0x3a4668u;
}
