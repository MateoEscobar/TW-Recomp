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

// Function: sub_0036C3D8
// Address: 0x36c3d8 - 0x36c440
void sub_0036C3D8_0x36c3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C3D8_0x36c3d8");
#endif

    switch (ctx->pc) {
        case 0x36c3f0u: goto label_36c3f0;
        case 0x36c400u: goto label_36c400;
        case 0x36c418u: goto label_36c418;
        case 0x36c424u: goto label_36c424;
        default: break;
    }

    ctx->pc = 0x36c3d8u;

    // 0x36c3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c3e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c3e8: 0xc107600  jal         func_41D800
    ctx->pc = 0x36C3E8u;
    SET_GPR_U32(ctx, 31, 0x36C3F0u);
    ctx->pc = 0x36C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3E8u;
    // 0x36c3ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D800u, 0x36C3E8u, 0x36C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C3F0u;
label_36c3f0:
    // 0x36c3f0: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x36c3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x36c3f4: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x36c3f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x36c3f8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36C3F8u;
    SET_GPR_U32(ctx, 31, 0x36C400u);
    ctx->pc = 0x36C3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C3F8u;
    // 0x36c3fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36C3F8u, 0x36C400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C400u;
label_36c400:
    // 0x36c400: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36C400u;
    {
        const bool branch_taken_0x36c400 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C400u;
        // 0x36c404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c400) {
            ctx->pc = 0x36C41Cu;
            goto label_36c41c;
        }
    }
    ctx->pc = 0x36C408u;
    // 0x36c408: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x36c408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x36c40c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36c40cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x36c410: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x36C410u;
    SET_GPR_U32(ctx, 31, 0x36C418u);
    ctx->pc = 0x36C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C410u;
    // 0x36c414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36C410u, 0x36C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C418u;
label_36c418:
    // 0x36c418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36c418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36c41c:
    // 0x36c41c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36C41Cu;
    SET_GPR_U32(ctx, 31, 0x36C424u);
    ctx->pc = 0x36C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C41Cu;
    // 0x36c420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36C41Cu, 0x36C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C424u;
label_36c424:
    // 0x36c424: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36c428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c434: 0x3e00008  jr          $ra
    ctx->pc = 0x36C434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C434u;
        // 0x36c438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C43Cu;
    // 0x36c43c: 0x0  nop
    ctx->pc = 0x36c43cu;
    // NOP
    ctx->pc = 0x36c440u;
}
