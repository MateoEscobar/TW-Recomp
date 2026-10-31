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

// Function: sub_00198808
// Address: 0x198808 - 0x198890
void sub_00198808_0x198808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198808_0x198808");
#endif

    switch (ctx->pc) {
        case 0x198808u: goto label_198808;
        case 0x19880cu: goto label_19880c;
        case 0x198810u: goto label_198810;
        case 0x198814u: goto label_198814;
        case 0x198818u: goto label_198818;
        case 0x19881cu: goto label_19881c;
        case 0x198820u: goto label_198820;
        case 0x198824u: goto label_198824;
        case 0x198828u: goto label_198828;
        case 0x19882cu: goto label_19882c;
        case 0x198830u: goto label_198830;
        case 0x198834u: goto label_198834;
        case 0x198838u: goto label_198838;
        case 0x19883cu: goto label_19883c;
        case 0x198840u: goto label_198840;
        case 0x198844u: goto label_198844;
        case 0x198848u: goto label_198848;
        case 0x19884cu: goto label_19884c;
        case 0x198850u: goto label_198850;
        case 0x198854u: goto label_198854;
        case 0x198858u: goto label_198858;
        case 0x19885cu: goto label_19885c;
        case 0x198860u: goto label_198860;
        case 0x198864u: goto label_198864;
        case 0x198868u: goto label_198868;
        case 0x19886cu: goto label_19886c;
        case 0x198870u: goto label_198870;
        case 0x198874u: goto label_198874;
        case 0x198878u: goto label_198878;
        case 0x19887cu: goto label_19887c;
        case 0x198880u: goto label_198880;
        case 0x198884u: goto label_198884;
        case 0x198888u: goto label_198888;
        case 0x19888cu: goto label_19888c;
        default: break;
    }

    ctx->pc = 0x198808u;

label_198808:
    // 0x198808: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x198808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_19880c:
    // 0x19880c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_198810:
    // 0x198810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198814:
    // 0x198814: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x198814u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_198818:
    // 0x198818: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x198818u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_19881c:
    // 0x19881c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x19881cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_198820:
    // 0x198820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x198820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_198824:
    // 0x198824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x198824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_198828:
    // 0x198828: 0xc0cda02  jal         func_336808
label_19882c:
    if (ctx->pc == 0x19882Cu) {
        ctx->pc = 0x19882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198828u;
        // 0x19882c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198830u;
        goto label_198830;
    }
    ctx->pc = 0x198828u;
    SET_GPR_U32(ctx, 31, 0x198830u);
    ctx->pc = 0x19882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198828u;
    // 0x19882c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x336808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336808u, 0x198828u, 0x198830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198830u;
label_198830:
    // 0x198830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198834:
    // 0x198834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_198838:
    // 0x198838: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x198838u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_19883c:
    // 0x19883c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x19883cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_198840:
    // 0x198840: 0x60f809  jalr        $v1
label_198844:
    if (ctx->pc == 0x198844u) {
        ctx->pc = 0x198844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198840u;
        // 0x198844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198848u;
        goto label_198848;
    }
    ctx->pc = 0x198840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198848u);
        ctx->pc = 0x198844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198840u;
        // 0x198844: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198840u, 0x198848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198848u;
label_198848:
    // 0x198848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19884c:
    // 0x19884c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19884cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_198850:
    // 0x198850: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x198850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_198854:
    // 0x198854: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x198854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_198858:
    // 0x198858: 0x60f809  jalr        $v1
label_19885c:
    if (ctx->pc == 0x19885Cu) {
        ctx->pc = 0x19885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198858u;
        // 0x19885c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198860u;
        goto label_198860;
    }
    ctx->pc = 0x198858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198860u);
        ctx->pc = 0x19885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198858u;
        // 0x19885c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198858u, 0x198860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198860u;
label_198860:
    // 0x198860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x198860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_198864:
    // 0x198864: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x198864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_198868:
    // 0x198868: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x198868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_19886c:
    // 0x19886c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x19886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_198870:
    // 0x198870: 0x60f809  jalr        $v1
label_198874:
    if (ctx->pc == 0x198874u) {
        ctx->pc = 0x198874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198870u;
        // 0x198874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198878u;
        goto label_198878;
    }
    ctx->pc = 0x198870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198878u);
        ctx->pc = 0x198874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198870u;
        // 0x198874: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198870u, 0x198878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198878u;
label_198878:
    // 0x198878: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x198878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19887c:
    // 0x19887c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19887cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198880:
    // 0x198880: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x198880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_198884:
    // 0x198884: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x198884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198888:
    // 0x198888: 0x3e00008  jr          $ra
label_19888c:
    if (ctx->pc == 0x19888Cu) {
        ctx->pc = 0x19888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198888u;
        // 0x19888c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198890u;
        goto label_fallthrough_0x198888;
    }
    ctx->pc = 0x198888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198888u;
        // 0x19888c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x198888:
    ctx->pc = 0x198890u;
}
