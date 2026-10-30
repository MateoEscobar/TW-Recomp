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

// Function: sub_003C5CB8
// Address: 0x3c5cb8 - 0x3c5d70
void sub_003C5CB8_0x3c5cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5CB8_0x3c5cb8");
#endif

    switch (ctx->pc) {
        case 0x3c5cf8u: goto label_3c5cf8;
        case 0x3c5d04u: goto label_3c5d04;
        case 0x3c5d10u: goto label_3c5d10;
        case 0x3c5d1cu: goto label_3c5d1c;
        case 0x3c5d28u: goto label_3c5d28;
        case 0x3c5d34u: goto label_3c5d34;
        case 0x3c5d44u: goto label_3c5d44;
        case 0x3c5d4cu: goto label_3c5d4c;
        default: break;
    }

    ctx->pc = 0x3c5cb8u;

    // 0x3c5cb8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c5cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c5cbc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c5cc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c5cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c5cc4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3c5cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3c5cc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5ccc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c5cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c5cd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c5cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c5cd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c5cd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5cd8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c5cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c5cdc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3c5cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5ce0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5ce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3c5ce4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c5ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5ce8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5cf0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5CF0u;
    SET_GPR_U32(ctx, 31, 0x3C5CF8u);
    ctx->pc = 0x3C5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5CF0u;
    // 0x3c5cf4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5CF0u, 0x3C5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5CF8u;
label_3c5cf8:
    // 0x3c5cf8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5cfc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5CFCu;
    SET_GPR_U32(ctx, 31, 0x3C5D04u);
    ctx->pc = 0x3C5D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5CFCu;
    // 0x3c5d00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5CFCu, 0x3C5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D04u;
label_3c5d04:
    // 0x3c5d04: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d08: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5D08u;
    SET_GPR_U32(ctx, 31, 0x3C5D10u);
    ctx->pc = 0x3C5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D08u;
    // 0x3c5d0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5D08u, 0x3C5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D10u;
label_3c5d10:
    // 0x3c5d10: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d14: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5D14u;
    SET_GPR_U32(ctx, 31, 0x3C5D1Cu);
    ctx->pc = 0x3C5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D14u;
    // 0x3c5d18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5D14u, 0x3C5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D1Cu;
label_3c5d1c:
    // 0x3c5d1c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d20: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5D20u;
    SET_GPR_U32(ctx, 31, 0x3C5D28u);
    ctx->pc = 0x3C5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D20u;
    // 0x3c5d24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5D20u, 0x3C5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D28u;
label_3c5d28:
    // 0x3c5d28: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d2c: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5D2Cu;
    SET_GPR_U32(ctx, 31, 0x3C5D34u);
    ctx->pc = 0x3C5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D2Cu;
    // 0x3c5d30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5D2Cu, 0x3C5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D34u;
label_3c5d34:
    // 0x3c5d34: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3c5d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3c5d38: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c5d3c: 0xc0e8b90  jal         func_3A2E40
    ctx->pc = 0x3C5D3Cu;
    SET_GPR_U32(ctx, 31, 0x3C5D44u);
    ctx->pc = 0x3C5D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D3Cu;
    // 0x3c5d40: 0x24a53a28  addiu       $a1, $a1, 0x3A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x3C5D3Cu, 0x3C5D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D44u;
label_3c5d44:
    // 0x3c5d44: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C5D44u;
    SET_GPR_U32(ctx, 31, 0x3C5D4Cu);
    ctx->pc = 0x3C5D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D44u;
    // 0x3c5d48: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C5D44u, 0x3C5D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D4Cu;
label_3c5d4c:
    // 0x3c5d4c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c5d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c5d50: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c5d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c5d54: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c5d54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c5d58: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c5d58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5d5c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c5d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5d64: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3c5d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c5d68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D68u;
        // 0x3c5d6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5D70u;
}
