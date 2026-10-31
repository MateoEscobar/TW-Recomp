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

// Function: sub_004DC848
// Address: 0x4dc848 - 0x4dc8a0
void sub_004DC848_0x4dc848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC848_0x4dc848");
#endif

    switch (ctx->pc) {
        case 0x4dc848u: goto label_4dc848;
        case 0x4dc84cu: goto label_4dc84c;
        case 0x4dc850u: goto label_4dc850;
        case 0x4dc854u: goto label_4dc854;
        case 0x4dc858u: goto label_4dc858;
        case 0x4dc85cu: goto label_4dc85c;
        case 0x4dc860u: goto label_4dc860;
        case 0x4dc864u: goto label_4dc864;
        case 0x4dc868u: goto label_4dc868;
        case 0x4dc86cu: goto label_4dc86c;
        case 0x4dc870u: goto label_4dc870;
        case 0x4dc874u: goto label_4dc874;
        case 0x4dc878u: goto label_4dc878;
        case 0x4dc87cu: goto label_4dc87c;
        case 0x4dc880u: goto label_4dc880;
        case 0x4dc884u: goto label_4dc884;
        case 0x4dc888u: goto label_4dc888;
        case 0x4dc88cu: goto label_4dc88c;
        case 0x4dc890u: goto label_4dc890;
        case 0x4dc894u: goto label_4dc894;
        case 0x4dc898u: goto label_4dc898;
        case 0x4dc89cu: goto label_4dc89c;
        default: break;
    }

    ctx->pc = 0x4dc848u;

label_4dc848:
    // 0x4dc848: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4dc848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4dc84c:
    // 0x4dc84c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dc84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dc850:
    // 0x4dc850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc854:
    // 0x4dc854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc858:
    // 0x4dc858: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x4dc858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc85c:
    // 0x4dc85c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc860:
    // 0x4dc860: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x4dc860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_4dc864:
    // 0x4dc864: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x4dc864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_4dc868:
    // 0x4dc868: 0x60f809  jalr        $v1
label_4dc86c:
    if (ctx->pc == 0x4DC86Cu) {
        ctx->pc = 0x4DC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC868u;
        // 0x4dc86c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC870u;
        goto label_4dc870;
    }
    ctx->pc = 0x4DC868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC870u);
        ctx->pc = 0x4DC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC868u;
        // 0x4dc86c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC868u, 0x4DC870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC870u;
label_4dc870:
    // 0x4dc870: 0xc6030220  lwc1        $f3, 0x220($s0)
    ctx->pc = 0x4dc870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4dc874:
    // 0x4dc874: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4dc874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_4dc878:
    // 0x4dc878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4dc878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4dc87c:
    // 0x4dc87c: 0xc6020224  lwc1        $f2, 0x224($s0)
    ctx->pc = 0x4dc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4dc880:
    // 0x4dc880: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x4dc880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4dc884:
    // 0x4dc884: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x4dc884u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_4dc888:
    // 0x4dc888: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dc888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc88c:
    // 0x4dc88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc890:
    // 0x4dc890: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x4dc890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4dc894:
    // 0x4dc894: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4dc894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4dc898:
    // 0x4dc898: 0x3e00008  jr          $ra
label_4dc89c:
    if (ctx->pc == 0x4DC89Cu) {
        ctx->pc = 0x4DC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC898u;
        // 0x4dc89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC8A0u;
        goto label_fallthrough_0x4dc898;
    }
    ctx->pc = 0x4DC898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC898u;
        // 0x4dc89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4dc898:
    ctx->pc = 0x4DC8A0u;
}
