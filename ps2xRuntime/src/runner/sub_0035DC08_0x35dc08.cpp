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

// Function: sub_0035DC08
// Address: 0x35dc08 - 0x35dc90
void sub_0035DC08_0x35dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DC08_0x35dc08");
#endif

    switch (ctx->pc) {
        case 0x35dc30u: goto label_35dc30;
        case 0x35dc38u: goto label_35dc38;
        case 0x35dc4cu: goto label_35dc4c;
        case 0x35dc54u: goto label_35dc54;
        case 0x35dc60u: goto label_35dc60;
        case 0x35dc68u: goto label_35dc68;
        case 0x35dc74u: goto label_35dc74;
        default: break;
    }

    ctx->pc = 0x35dc08u;

    // 0x35dc08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35dc0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35dc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35dc14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35dc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35dc18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35dc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35dc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35dc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35dc28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DC28u;
    SET_GPR_U32(ctx, 31, 0x35DC30u);
    ctx->pc = 0x35DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC28u;
    // 0x35dc2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DC28u, 0x35DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC30u;
label_35dc30:
    // 0x35dc30: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DC30u;
    SET_GPR_U32(ctx, 31, 0x35DC38u);
    ctx->pc = 0x35DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC30u;
    // 0x35dc34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DC30u, 0x35DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC38u;
label_35dc38:
    // 0x35dc38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35dc38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35dc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35dc44: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35DC44u;
    SET_GPR_U32(ctx, 31, 0x35DC4Cu);
    ctx->pc = 0x35DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC44u;
    // 0x35dc48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35DC44u, 0x35DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC4Cu;
label_35dc4c:
    // 0x35dc4c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35DC4Cu;
    SET_GPR_U32(ctx, 31, 0x35DC54u);
    ctx->pc = 0x35DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC4Cu;
    // 0x35dc50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35DC4Cu, 0x35DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC54u;
label_35dc54:
    // 0x35dc54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc58: 0xc0bfb8e  jal         func_2FEE38
    ctx->pc = 0x35DC58u;
    SET_GPR_U32(ctx, 31, 0x35DC60u);
    ctx->pc = 0x35DC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC58u;
    // 0x35dc5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEE38u, 0x35DC58u, 0x35DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC60u;
label_35dc60:
    // 0x35dc60: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35DC60u;
    SET_GPR_U32(ctx, 31, 0x35DC68u);
    ctx->pc = 0x35DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC60u;
    // 0x35dc64: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35DC60u, 0x35DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC68u;
label_35dc68:
    // 0x35dc68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35dc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc6c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x35DC6Cu;
    SET_GPR_U32(ctx, 31, 0x35DC74u);
    ctx->pc = 0x35DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC6Cu;
    // 0x35dc70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x35DC6Cu, 0x35DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC74u;
label_35dc74:
    // 0x35dc74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35dc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35dc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35dc7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35dc7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35dc80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35dc80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35dc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35dc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35dc88: 0x3e00008  jr          $ra
    ctx->pc = 0x35DC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC88u;
        // 0x35dc8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DC90u;
}
