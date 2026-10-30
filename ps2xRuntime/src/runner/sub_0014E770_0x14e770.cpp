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

// Function: sub_0014E770
// Address: 0x14e770 - 0x14e7d0
void sub_0014E770_0x14e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E770_0x14e770");
#endif

    switch (ctx->pc) {
        case 0x14e790u: goto label_14e790;
        case 0x14e798u: goto label_14e798;
        case 0x14e7a4u: goto label_14e7a4;
        case 0x14e7acu: goto label_14e7ac;
        case 0x14e7b4u: goto label_14e7b4;
        default: break;
    }

    ctx->pc = 0x14e770u;

    // 0x14e770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e77c: 0x2e020030  sltiu       $v0, $s0, 0x30
    ctx->pc = 0x14e77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x14e780: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14E780u;
    {
        const bool branch_taken_0x14e780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E780u;
        // 0x14e784: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e780) {
            ctx->pc = 0x14E7BCu;
            goto label_14e7bc;
        }
    }
    ctx->pc = 0x14E788u;
    // 0x14e788: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E788u;
    SET_GPR_U32(ctx, 31, 0x14E790u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E788u, 0x14E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E790u;
label_14e790:
    // 0x14e790: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E790u;
    SET_GPR_U32(ctx, 31, 0x14E798u);
    ctx->pc = 0x14E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E790u;
    // 0x14e794: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E790u, 0x14E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E798u;
label_14e798:
    // 0x14e798: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14e798u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e79c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E79Cu;
    SET_GPR_U32(ctx, 31, 0x14E7A4u);
    ctx->pc = 0x14E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E79Cu;
    // 0x14e7a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E79Cu, 0x14E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7A4u;
label_14e7a4:
    // 0x14e7a4: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E7A4u;
    SET_GPR_U32(ctx, 31, 0x14E7ACu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E7A4u, 0x14E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7ACu;
label_14e7ac:
    // 0x14e7ac: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E7ACu;
    SET_GPR_U32(ctx, 31, 0x14E7B4u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E7ACu, 0x14E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7B4u;
label_14e7b4:
    // 0x14e7b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14E7B4u;
    {
        const bool branch_taken_0x14e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7B4u;
        // 0x14e7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7b4) {
            ctx->pc = 0x14E7C0u;
            goto label_14e7c0;
        }
    }
    ctx->pc = 0x14E7BCu;
label_14e7bc:
    // 0x14e7bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14e7c0:
    // 0x14e7c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7C8u;
        // 0x14e7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E7D0u;
}
