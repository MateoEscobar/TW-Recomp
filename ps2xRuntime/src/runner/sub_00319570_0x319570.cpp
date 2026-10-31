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

// Function: sub_00319570
// Address: 0x319570 - 0x319600
void sub_00319570_0x319570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319570_0x319570");
#endif

    switch (ctx->pc) {
        case 0x31959cu: goto label_31959c;
        case 0x3195b0u: goto label_3195b0;
        case 0x3195d4u: goto label_3195d4;
        case 0x3195e0u: goto label_3195e0;
        default: break;
    }

    ctx->pc = 0x319570u;

    // 0x319570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x319570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x319574: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x319574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x319578: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x319578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31957c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31957cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x319580: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x319580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x319584: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x319584u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319588: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x319588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31958c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x319590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319594: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x319594u;
    SET_GPR_U32(ctx, 31, 0x31959Cu);
    ctx->pc = 0x319598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319594u;
    // 0x319598: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x319594u, 0x31959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31959Cu;
label_31959c:
    // 0x31959c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31959cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195a0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3195A0u;
    {
        const bool branch_taken_0x3195a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195A0u;
        // 0x3195a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195a0) {
            ctx->pc = 0x3195E4u;
            goto label_3195e4;
        }
    }
    ctx->pc = 0x3195A8u;
    // 0x3195a8: 0xc0c1956  jal         func_306558
    ctx->pc = 0x3195A8u;
    SET_GPR_U32(ctx, 31, 0x3195B0u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x3195A8u, 0x3195B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195B0u;
label_3195b0:
    // 0x3195b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3195b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195b4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3195B4u;
    {
        const bool branch_taken_0x3195b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3195B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195B4u;
        // 0x3195b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195b4) {
            ctx->pc = 0x3195D4u;
            goto label_3195d4;
        }
    }
    ctx->pc = 0x3195BCu;
    // 0x3195bc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x3195bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x3195c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3195c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3195c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3195c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195cc: 0xc0c6580  jal         func_319600
    ctx->pc = 0x3195CCu;
    SET_GPR_U32(ctx, 31, 0x3195D4u);
    ctx->pc = 0x3195D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195CCu;
    // 0x3195d0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x319600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319600u, 0x3195CCu, 0x3195D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195D4u;
label_3195d4:
    // 0x3195d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3195d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3195d8: 0xc059590  jal         func_165640
    ctx->pc = 0x3195D8u;
    SET_GPR_U32(ctx, 31, 0x3195E0u);
    ctx->pc = 0x3195DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3195D8u;
    // 0x3195dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x3195D8u, 0x3195E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3195E0u;
label_3195e0:
    // 0x3195e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3195e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3195e4:
    // 0x3195e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3195e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3195e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3195e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3195ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3195ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3195f0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3195f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3195f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3195F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3195F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195F4u;
        // 0x3195f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3195F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3195FCu;
    // 0x3195fc: 0x0  nop
    ctx->pc = 0x3195fcu;
    // NOP
    ctx->pc = 0x319600u;
}
