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

// Function: sub_0031DC28
// Address: 0x31dc28 - 0x31dca8
void sub_0031DC28_0x31dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DC28_0x31dc28");
#endif

    switch (ctx->pc) {
        case 0x31dc50u: goto label_31dc50;
        case 0x31dc64u: goto label_31dc64;
        case 0x31dc6cu: goto label_31dc6c;
        case 0x31dc7cu: goto label_31dc7c;
        case 0x31dc84u: goto label_31dc84;
        case 0x31dc90u: goto label_31dc90;
        default: break;
    }

    ctx->pc = 0x31dc28u;

    // 0x31dc28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31dc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31dc2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31dc30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31dc34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31dc3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31dc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31dc44: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31dc48: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x31dc48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31dc4c: 0x0  nop
    ctx->pc = 0x31dc4cu;
    // NOP
label_31dc50:
    // 0x31dc50: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x31dc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31dc54: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31DC54u;
    {
        const bool branch_taken_0x31dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC54u;
        // 0x31dc58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc54) {
            ctx->pc = 0x31DC88u;
            goto label_31dc88;
        }
    }
    ctx->pc = 0x31DC5Cu;
    // 0x31dc5c: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31DC5Cu;
    SET_GPR_U32(ctx, 31, 0x31DC64u);
    ctx->pc = 0x31DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC5Cu;
    // 0x31dc60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31DC5Cu, 0x31DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC64u;
label_31dc64:
    // 0x31dc64: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31DC64u;
    SET_GPR_U32(ctx, 31, 0x31DC6Cu);
    ctx->pc = 0x31DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC64u;
    // 0x31dc68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31DC64u, 0x31DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC6Cu;
label_31dc6c:
    // 0x31dc6c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31DC6Cu;
    {
        const bool branch_taken_0x31dc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC6Cu;
        // 0x31dc70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dc6c) {
            ctx->pc = 0x31DC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dc50;
        }
    }
    ctx->pc = 0x31DC74u;
    // 0x31dc74: 0xc087502  jal         func_21D408
    ctx->pc = 0x31DC74u;
    SET_GPR_U32(ctx, 31, 0x31DC7Cu);
    ctx->pc = 0x31DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC74u;
    // 0x31dc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31DC74u, 0x31DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC7Cu;
label_31dc7c:
    // 0x31dc7c: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x31DC7Cu;
    SET_GPR_U32(ctx, 31, 0x31DC84u);
    ctx->pc = 0x31DC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC7Cu;
    // 0x31dc80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x31DC7Cu, 0x31DC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC84u;
label_31dc84:
    // 0x31dc84: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x31dc84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_31dc88:
    // 0x31dc88: 0xc0c7654  jal         func_31D950
    ctx->pc = 0x31DC88u;
    SET_GPR_U32(ctx, 31, 0x31DC90u);
    ctx->pc = 0x31DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DC88u;
    // 0x31dc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D950u, 0x31DC88u, 0x31DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DC90u;
label_31dc90:
    // 0x31dc90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31dc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31dc94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31dc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31dc98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31dc98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dc9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31dc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dca0: 0x3e00008  jr          $ra
    ctx->pc = 0x31DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCA0u;
        // 0x31dca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DCA8u;
}
