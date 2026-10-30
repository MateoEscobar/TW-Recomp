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

// Function: sub_003A4668
// Address: 0x3a4668 - 0x3a46c8
void sub_003A4668_0x3a4668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4668_0x3a4668");
#endif

    switch (ctx->pc) {
        case 0x3a4668u: goto label_3a4668;
        case 0x3a466cu: goto label_3a466c;
        case 0x3a4670u: goto label_3a4670;
        case 0x3a4674u: goto label_3a4674;
        case 0x3a4678u: goto label_3a4678;
        case 0x3a467cu: goto label_3a467c;
        case 0x3a4680u: goto label_3a4680;
        case 0x3a4684u: goto label_3a4684;
        case 0x3a4688u: goto label_3a4688;
        case 0x3a468cu: goto label_3a468c;
        case 0x3a4690u: goto label_3a4690;
        case 0x3a4694u: goto label_3a4694;
        case 0x3a4698u: goto label_3a4698;
        case 0x3a469cu: goto label_3a469c;
        case 0x3a46a0u: goto label_3a46a0;
        case 0x3a46a4u: goto label_3a46a4;
        case 0x3a46a8u: goto label_3a46a8;
        case 0x3a46acu: goto label_3a46ac;
        case 0x3a46b0u: goto label_3a46b0;
        case 0x3a46b4u: goto label_3a46b4;
        case 0x3a46b8u: goto label_3a46b8;
        case 0x3a46bcu: goto label_3a46bc;
        case 0x3a46c0u: goto label_3a46c0;
        case 0x3a46c4u: goto label_3a46c4;
        default: break;
    }

    ctx->pc = 0x3a4668u;

label_3a4668:
    // 0x3a4668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a4668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a466c:
    // 0x3a466c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a466cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a4670:
    // 0x3a4670: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3a4670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a4674:
    // 0x3a4674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a4678:
    // 0x3a4678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a467c:
    // 0x3a467c: 0xc047e6c  jal         func_11F9B0
label_3a4680:
    if (ctx->pc == 0x3A4680u) {
        ctx->pc = 0x3A4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A467Cu;
        // 0x3a4680: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4684u;
        goto label_3a4684;
    }
    ctx->pc = 0x3A467Cu;
    SET_GPR_U32(ctx, 31, 0x3A4684u);
    ctx->pc = 0x3A4680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A467Cu;
    // 0x3a4680: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A467Cu, 0x3A4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4684u;
label_3a4684:
    // 0x3a4684: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3a4688:
    if (ctx->pc == 0x3A4688u) {
        ctx->pc = 0x3A4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4684u;
        // 0x3a4688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A468Cu;
        goto label_3a468c;
    }
    ctx->pc = 0x3A4684u;
    {
        const bool branch_taken_0x3a4684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4684) {
            ctx->pc = 0x3A4688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4684u;
            // 0x3a4688: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A46B0u;
            goto label_3a46b0;
        }
    }
    ctx->pc = 0x3A468Cu;
label_3a468c:
    // 0x3a468c: 0xc047e6c  jal         func_11F9B0
label_3a4690:
    if (ctx->pc == 0x3A4690u) {
        ctx->pc = 0x3A4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A468Cu;
        // 0x3a4690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A4694u;
        goto label_3a4694;
    }
    ctx->pc = 0x3A468Cu;
    SET_GPR_U32(ctx, 31, 0x3A4694u);
    ctx->pc = 0x3A4690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A468Cu;
    // 0x3a4690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x3A468Cu, 0x3A4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4694u;
label_3a4694:
    // 0x3a4694: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a4694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a4698:
    // 0x3a4698: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a4698u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a469c:
    // 0x3a469c: 0x846401d8  lh          $a0, 0x1D8($v1)
    ctx->pc = 0x3a469cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 472)));
label_3a46a0:
    // 0x3a46a0: 0x8c6501dc  lw          $a1, 0x1DC($v1)
    ctx->pc = 0x3a46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
label_3a46a4:
    // 0x3a46a4: 0xa0f809  jalr        $a1
label_3a46a8:
    if (ctx->pc == 0x3A46A8u) {
        ctx->pc = 0x3A46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46A4u;
        // 0x3a46a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A46ACu;
        goto label_3a46ac;
    }
    ctx->pc = 0x3A46A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3A46ACu);
        ctx->pc = 0x3A46A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46A4u;
        // 0x3a46a8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A46A4u, 0x3A46ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A46ACu;
label_3a46ac:
    // 0x3a46ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a46acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a46b0:
    // 0x3a46b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a46b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a46b4:
    // 0x3a46b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a46b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a46b8:
    // 0x3a46b8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3a46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a46bc:
    // 0x3a46bc: 0x3e00008  jr          $ra
label_3a46c0:
    if (ctx->pc == 0x3A46C0u) {
        ctx->pc = 0x3A46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46BCu;
        // 0x3a46c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A46C4u;
        goto label_3a46c4;
    }
    ctx->pc = 0x3A46BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A46C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46BCu;
        // 0x3a46c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A46BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A46C4u;
label_3a46c4:
    // 0x3a46c4: 0x0  nop
    ctx->pc = 0x3a46c4u;
    // NOP
    ctx->pc = 0x3a46c8u;
}
