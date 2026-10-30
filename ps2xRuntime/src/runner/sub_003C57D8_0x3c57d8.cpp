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

// Function: sub_003C57D8
// Address: 0x3c57d8 - 0x3c5860
void sub_003C57D8_0x3c57d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C57D8_0x3c57d8");
#endif

    switch (ctx->pc) {
        case 0x3c5808u: goto label_3c5808;
        case 0x3c5814u: goto label_3c5814;
        case 0x3c5820u: goto label_3c5820;
        case 0x3c582cu: goto label_3c582c;
        case 0x3c583cu: goto label_3c583c;
        case 0x3c5844u: goto label_3c5844;
        default: break;
    }

    ctx->pc = 0x3c57d8u;

    // 0x3c57d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c57d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c57dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c57dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c57e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c57e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c57e4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c57e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c57e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c57e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c57ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c57ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c57f0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3c57f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c57f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c57f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c57f8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c57f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c57fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c57fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5800: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5800u;
    SET_GPR_U32(ctx, 31, 0x3C5808u);
    ctx->pc = 0x3C5804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5800u;
    // 0x3c5804: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5800u, 0x3C5808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5808u;
label_3c5808:
    // 0x3c5808: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c580c: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C580Cu;
    SET_GPR_U32(ctx, 31, 0x3C5814u);
    ctx->pc = 0x3C5810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C580Cu;
    // 0x3c5810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C580Cu, 0x3C5814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5814u;
label_3c5814:
    // 0x3c5814: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5818: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5818u;
    SET_GPR_U32(ctx, 31, 0x3C5820u);
    ctx->pc = 0x3C581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5818u;
    // 0x3c581c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5818u, 0x3C5820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5820u;
label_3c5820:
    // 0x3c5820: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5824: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5824u;
    SET_GPR_U32(ctx, 31, 0x3C582Cu);
    ctx->pc = 0x3C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5824u;
    // 0x3c5828: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5824u, 0x3C582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C582Cu;
label_3c582c:
    // 0x3c582c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5830: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5834: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5834u;
    SET_GPR_U32(ctx, 31, 0x3C583Cu);
    ctx->pc = 0x3C5838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5834u;
    // 0x3c5838: 0x24a53f70  addiu       $a1, $a1, 0x3F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5834u, 0x3C583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C583Cu;
label_3c583c:
    // 0x3c583c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C583Cu;
    SET_GPR_U32(ctx, 31, 0x3C5844u);
    ctx->pc = 0x3C5840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C583Cu;
    // 0x3c5840: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C583Cu, 0x3C5844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5844u;
label_3c5844:
    // 0x3c5844: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c5844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5848: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c5848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c584c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c584cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5854: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3c5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5858: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5858u;
        // 0x3c585c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5860u;
}
