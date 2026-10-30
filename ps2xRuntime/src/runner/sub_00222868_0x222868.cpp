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

// Function: sub_00222868
// Address: 0x222868 - 0x222908
void sub_00222868_0x222868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222868_0x222868");
#endif

    switch (ctx->pc) {
        case 0x2228bcu: goto label_2228bc;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228f4u: goto label_2228f4;
        default: break;
    }

    ctx->pc = 0x222868u;

    // 0x222868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22286c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x222870: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x222870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x222874: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22287c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x222880: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x222880u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222884: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x222884u;
    {
        const bool branch_taken_0x222884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222884u;
        // 0x222888: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222884) {
            ctx->pc = 0x2228C4u;
            goto label_2228c4;
        }
    }
    ctx->pc = 0x22288Cu;
    // 0x22288c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x22288cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x222890: 0x0  nop
    ctx->pc = 0x222890u;
    // NOP
    // 0x222894: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x222894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x222898: 0xc6200374  lwc1        $f0, 0x374($s1)
    ctx->pc = 0x222898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22289c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2228a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2228a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2228a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2228a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2228a8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2228a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2228ac: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x2228acu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x2228b0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2228b0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2228b4: 0xc088a06  jal         func_222818
    ctx->pc = 0x2228B4u;
    SET_GPR_U32(ctx, 31, 0x2228BCu);
    ctx->pc = 0x2228B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228B4u;
    // 0x2228b8: 0xe6200374  swc1        $f0, 0x374($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 884), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x222818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222818u, 0x2228B4u, 0x2228BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228BCu;
label_2228bc:
    // 0x2228bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2228BCu;
    {
        const bool branch_taken_0x2228bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228BCu;
        // 0x2228c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228bc) {
            ctx->pc = 0x2228F8u;
            goto label_2228f8;
        }
    }
    ctx->pc = 0x2228C4u;
label_2228c4:
    // 0x2228c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2228c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228c8: 0x8c50489c  lw          $s0, 0x489C($v0)
    ctx->pc = 0x2228c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x2228cc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2228ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2228d0: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2228d4: 0x7402a  slt         $t0, $zero, $a3
    ctx->pc = 0x2228d4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2228d8: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x2228dc: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2228DCu;
    SET_GPR_U32(ctx, 31, 0x2228E4u);
    ctx->pc = 0x2228E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228DCu;
    // 0x2228e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2228DCu, 0x2228E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228E4u;
label_2228e4:
    // 0x2228e4: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x2228e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2228e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228ec: 0xc107908  jal         func_41E420
    ctx->pc = 0x2228ECu;
    SET_GPR_U32(ctx, 31, 0x2228F4u);
    ctx->pc = 0x2228F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228ECu;
    // 0x2228f0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2228ECu, 0x2228F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228F4u;
label_2228f4:
    // 0x2228f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2228f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2228f8:
    // 0x2228f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2228f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2228fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2228fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222900: 0x3e00008  jr          $ra
    ctx->pc = 0x222900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222900u;
        // 0x222904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222908u;
}
