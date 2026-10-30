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

// Function: sub_0036A7F0
// Address: 0x36a7f0 - 0x36a868
void sub_0036A7F0_0x36a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A7F0_0x36a7f0");
#endif

    switch (ctx->pc) {
        case 0x36a818u: goto label_36a818;
        case 0x36a820u: goto label_36a820;
        case 0x36a834u: goto label_36a834;
        case 0x36a83cu: goto label_36a83c;
        case 0x36a848u: goto label_36a848;
        default: break;
    }

    ctx->pc = 0x36a7f0u;

    // 0x36a7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36a7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a7f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36a7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36a800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a804: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36a804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36a80c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x36a80cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x36a810: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A810u;
    SET_GPR_U32(ctx, 31, 0x36A818u);
    ctx->pc = 0x36A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A810u;
    // 0x36a814: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A810u, 0x36A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A818u;
label_36a818:
    // 0x36a818: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A818u;
    SET_GPR_U32(ctx, 31, 0x36A820u);
    ctx->pc = 0x36A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A818u;
    // 0x36a81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A818u, 0x36A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A820u;
label_36a820:
    // 0x36a820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36a820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36a824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36a828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36a82c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36A82Cu;
    SET_GPR_U32(ctx, 31, 0x36A834u);
    ctx->pc = 0x36A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A82Cu;
    // 0x36a830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36A82Cu, 0x36A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A834u;
label_36a834:
    // 0x36a834: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36A834u;
    SET_GPR_U32(ctx, 31, 0x36A83Cu);
    ctx->pc = 0x36A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A834u;
    // 0x36a838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36A834u, 0x36A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A83Cu;
label_36a83c:
    // 0x36a83c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36a83cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36a840: 0xc0a51a4  jal         func_294690
    ctx->pc = 0x36A840u;
    SET_GPR_U32(ctx, 31, 0x36A848u);
    ctx->pc = 0x36A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A840u;
    // 0x36a844: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x294690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294690u, 0x36A840u, 0x36A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A848u;
label_36a848:
    // 0x36a848: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36a848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a84c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36a84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36a854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a858: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a85c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A85Cu;
        // 0x36a860: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A864u;
    // 0x36a864: 0x0  nop
    ctx->pc = 0x36a864u;
    // NOP
    ctx->pc = 0x36a868u;
}
