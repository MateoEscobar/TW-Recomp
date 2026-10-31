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

// Function: sub_003C6EE0
// Address: 0x3c6ee0 - 0x3c6f58
void sub_003C6EE0_0x3c6ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6EE0_0x3c6ee0");
#endif

    switch (ctx->pc) {
        case 0x3c6f10u: goto label_3c6f10;
        case 0x3c6f1cu: goto label_3c6f1c;
        case 0x3c6f28u: goto label_3c6f28;
        case 0x3c6f34u: goto label_3c6f34;
        case 0x3c6f3cu: goto label_3c6f3c;
        default: break;
    }

    ctx->pc = 0x3c6ee0u;

    // 0x3c6ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c6ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c6ee4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c6ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c6ee8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c6ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c6eec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c6eecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c6ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c6ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c6ef4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c6ef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c6ef8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3c6ef8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c6efc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3c6efcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3c6f00: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3c6f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c6f04: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c6f08: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C6F08u;
    SET_GPR_U32(ctx, 31, 0x3C6F10u);
    ctx->pc = 0x3C6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F08u;
    // 0x3c6f0c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C6F08u, 0x3C6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F10u;
label_3c6f10:
    // 0x3c6f10: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6f14: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C6F14u;
    SET_GPR_U32(ctx, 31, 0x3C6F1Cu);
    ctx->pc = 0x3C6F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F14u;
    // 0x3c6f18: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C6F14u, 0x3C6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F1Cu;
label_3c6f1c:
    // 0x3c6f1c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6f20: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C6F20u;
    SET_GPR_U32(ctx, 31, 0x3C6F28u);
    ctx->pc = 0x3C6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F20u;
    // 0x3c6f24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C6F20u, 0x3C6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F28u;
label_3c6f28:
    // 0x3c6f28: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c6f2c: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C6F2Cu;
    SET_GPR_U32(ctx, 31, 0x3C6F34u);
    ctx->pc = 0x3C6F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F2Cu;
    // 0x3c6f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C6F2Cu, 0x3C6F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F34u;
label_3c6f34:
    // 0x3c6f34: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C6F34u;
    SET_GPR_U32(ctx, 31, 0x3C6F3Cu);
    ctx->pc = 0x3C6F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6F34u;
    // 0x3c6f38: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C6F34u, 0x3C6F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6F3Cu;
label_3c6f3c:
    // 0x3c6f3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c6f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6f40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c6f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c6f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6f48: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3c6f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c6f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F4Cu;
        // 0x3c6f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6F54u;
    // 0x3c6f54: 0x0  nop
    ctx->pc = 0x3c6f54u;
    // NOP
    ctx->pc = 0x3c6f58u;
}
