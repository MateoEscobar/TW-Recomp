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

// Function: sub_00396A08
// Address: 0x396a08 - 0x396a90
void sub_00396A08_0x396a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396A08_0x396a08");
#endif

    switch (ctx->pc) {
        case 0x396a2cu: goto label_396a2c;
        case 0x396a40u: goto label_396a40;
        case 0x396a4cu: goto label_396a4c;
        case 0x396a5cu: goto label_396a5c;
        case 0x396a64u: goto label_396a64;
        case 0x396a6cu: goto label_396a6c;
        default: break;
    }

    ctx->pc = 0x396a08u;

    // 0x396a08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x396a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x396a0c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x396a0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x396a10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x396a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x396a14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x396a14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x396a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x396a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x396a1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x396a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x396a20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396a24: 0xc0e4060  jal         func_390180
    ctx->pc = 0x396A24u;
    SET_GPR_U32(ctx, 31, 0x396A2Cu);
    ctx->pc = 0x396A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A24u;
    // 0x396a28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x396A24u, 0x396A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A2Cu;
label_396a2c:
    // 0x396a2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x396a2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396a30: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x396A30u;
    {
        const bool branch_taken_0x396a30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A30u;
        // 0x396a34: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a30) {
            ctx->pc = 0x396A74u;
            goto label_396a74;
        }
    }
    ctx->pc = 0x396A38u;
    // 0x396a38: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x396A38u;
    SET_GPR_U32(ctx, 31, 0x396A40u);
    ctx->pc = 0x396A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A38u;
    // 0x396a3c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x396A38u, 0x396A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A40u;
label_396a40:
    // 0x396a40: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396a44: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x396A44u;
    SET_GPR_U32(ctx, 31, 0x396A4Cu);
    ctx->pc = 0x396A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A44u;
    // 0x396a48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x396A44u, 0x396A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A4Cu;
label_396a4c:
    // 0x396a4c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x396a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x396a50: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x396a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x396a54: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x396A54u;
    SET_GPR_U32(ctx, 31, 0x396A5Cu);
    ctx->pc = 0x396A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A54u;
    // 0x396a58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x396A54u, 0x396A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A5Cu;
label_396a5c:
    // 0x396a5c: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x396A5Cu;
    SET_GPR_U32(ctx, 31, 0x396A64u);
    ctx->pc = 0x396A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A5Cu;
    // 0x396a60: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x396A5Cu, 0x396A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A64u;
label_396a64:
    // 0x396a64: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x396A64u;
    SET_GPR_U32(ctx, 31, 0x396A6Cu);
    ctx->pc = 0x396A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396A64u;
    // 0x396a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x396A64u, 0x396A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396A6Cu;
label_396a6c:
    // 0x396a6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x396A6Cu;
    {
        const bool branch_taken_0x396a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396a6c) {
            ctx->pc = 0x396A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396A6Cu;
            // 0x396a70: 0xe4540138  swc1        $f20, 0x138($v0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x396A74u;
            goto label_396a74;
        }
    }
    ctx->pc = 0x396A74u;
label_396a74:
    // 0x396a74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x396a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396a78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x396a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396a7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396a80: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x396a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x396a84: 0x3e00008  jr          $ra
    ctx->pc = 0x396A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A84u;
        // 0x396a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396A8Cu;
    // 0x396a8c: 0x0  nop
    ctx->pc = 0x396a8cu;
    // NOP
    ctx->pc = 0x396a90u;
}
