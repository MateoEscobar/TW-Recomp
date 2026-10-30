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

// Function: sub_00105810
// Address: 0x105810 - 0x105860
void sub_00105810_0x105810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105810_0x105810");
#endif

    switch (ctx->pc) {
        case 0x105810u: goto label_105810;
        case 0x105814u: goto label_105814;
        case 0x105818u: goto label_105818;
        case 0x10581cu: goto label_10581c;
        case 0x105820u: goto label_105820;
        case 0x105824u: goto label_105824;
        case 0x105828u: goto label_105828;
        case 0x10582cu: goto label_10582c;
        case 0x105830u: goto label_105830;
        case 0x105834u: goto label_105834;
        case 0x105838u: goto label_105838;
        case 0x10583cu: goto label_10583c;
        case 0x105840u: goto label_105840;
        case 0x105844u: goto label_105844;
        case 0x105848u: goto label_105848;
        case 0x10584cu: goto label_10584c;
        case 0x105850u: goto label_105850;
        case 0x105854u: goto label_105854;
        case 0x105858u: goto label_105858;
        case 0x10585cu: goto label_10585c;
        default: break;
    }

    ctx->pc = 0x105810u;

label_105810:
    // 0x105810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_105814:
    // 0x105814: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_105818:
    // 0x105818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10581c:
    // 0x10581c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10581cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105820:
    // 0x105820: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x105820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_105824:
    // 0x105824: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_105828:
    // 0x105828: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x105828u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10582c:
    // 0x10582c: 0xc05d4e0  jal         func_175380
label_105830:
    if (ctx->pc == 0x105830u) {
        ctx->pc = 0x105830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10582Cu;
        // 0x105830: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105834u;
        goto label_105834;
    }
    ctx->pc = 0x10582Cu;
    SET_GPR_U32(ctx, 31, 0x105834u);
    ctx->pc = 0x105830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10582Cu;
    // 0x105830: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x10582Cu, 0x105834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105834u;
label_105834:
    // 0x105834: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105838:
    // 0x105838: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x105838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10583c:
    // 0x10583c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x10583cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_105840:
    // 0x105840: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x105840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_105844:
    // 0x105844: 0x60f809  jalr        $v1
label_105848:
    if (ctx->pc == 0x105848u) {
        ctx->pc = 0x105848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105844u;
        // 0x105848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10584Cu;
        goto label_10584c;
    }
    ctx->pc = 0x105844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10584Cu);
        ctx->pc = 0x105848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105844u;
        // 0x105848: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105844u, 0x10584Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10584Cu;
label_10584c:
    // 0x10584c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10584cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105850:
    // 0x105850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105854:
    // 0x105854: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x105854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_105858:
    // 0x105858: 0x3e00008  jr          $ra
label_10585c:
    if (ctx->pc == 0x10585Cu) {
        ctx->pc = 0x10585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105858u;
        // 0x10585c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105860u;
        goto label_fallthrough_0x105858;
    }
    ctx->pc = 0x105858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105858u;
        // 0x10585c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x105858:
    ctx->pc = 0x105860u;
}
