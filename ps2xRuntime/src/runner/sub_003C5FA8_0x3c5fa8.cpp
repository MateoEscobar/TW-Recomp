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

// Function: sub_003C5FA8
// Address: 0x3c5fa8 - 0x3c6038
void sub_003C5FA8_0x3c5fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5FA8_0x3c5fa8");
#endif

    switch (ctx->pc) {
        case 0x3c5fd8u: goto label_3c5fd8;
        case 0x3c5fe4u: goto label_3c5fe4;
        case 0x3c5ff0u: goto label_3c5ff0;
        case 0x3c5ffcu: goto label_3c5ffc;
        case 0x3c600cu: goto label_3c600c;
        case 0x3c6018u: goto label_3c6018;
        default: break;
    }

    ctx->pc = 0x3c5fa8u;

    // 0x3c5fa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3c5fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3c5fac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c5facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c5fb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c5fb4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x3c5fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3c5fb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c5fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5fbc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c5fc0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3c5fc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c5fc4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c5fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5fc8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3c5fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5fd0: 0xc0e8b48  jal         func_3A2D20
    ctx->pc = 0x3C5FD0u;
    SET_GPR_U32(ctx, 31, 0x3C5FD8u);
    ctx->pc = 0x3C5FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5FD0u;
    // 0x3c5fd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3C5FD0u, 0x3C5FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5FD8u;
label_3c5fd8:
    // 0x3c5fd8: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c5fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3c5fdc: 0xc0e8b58  jal         func_3A2D60
    ctx->pc = 0x3C5FDCu;
    SET_GPR_U32(ctx, 31, 0x3C5FE4u);
    ctx->pc = 0x3C5FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5FDCu;
    // 0x3c5fe0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x3C5FDCu, 0x3C5FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5FE4u;
label_3c5fe4:
    // 0x3c5fe4: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3c5fe8: 0xc0e8b68  jal         func_3A2DA0
    ctx->pc = 0x3C5FE8u;
    SET_GPR_U32(ctx, 31, 0x3C5FF0u);
    ctx->pc = 0x3C5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5FE8u;
    // 0x3c5fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x3C5FE8u, 0x3C5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5FF0u;
label_3c5ff0:
    // 0x3c5ff0: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3c5ff4: 0xc0e8b78  jal         func_3A2DE0
    ctx->pc = 0x3C5FF4u;
    SET_GPR_U32(ctx, 31, 0x3C5FFCu);
    ctx->pc = 0x3C5FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5FF4u;
    // 0x3c5ff8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DE0u, 0x3C5FF4u, 0x3C5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5FFCu;
label_3c5ffc:
    // 0x3c5ffc: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3c6000: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c6000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3c6004: 0xc0e8ba0  jal         func_3A2E80
    ctx->pc = 0x3C6004u;
    SET_GPR_U32(ctx, 31, 0x3C600Cu);
    ctx->pc = 0x3C6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6004u;
    // 0x3c6008: 0x24a53ad8  addiu       $a1, $a1, 0x3AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E80u, 0x3C6004u, 0x3C600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C600Cu;
label_3c600c:
    // 0x3c600c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x3c600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
    // 0x3c6010: 0xc0e8b50  jal         func_3A2D40
    ctx->pc = 0x3C6010u;
    SET_GPR_U32(ctx, 31, 0x3C6018u);
    ctx->pc = 0x3C6014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C6010u;
    // 0x3c6014: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3C6010u, 0x3C6018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C6018u;
label_3c6018:
    // 0x3c6018: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c6018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c601c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c601cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6020: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c6020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c6024: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c6024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c602c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3c602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c6030: 0x3e00008  jr          $ra
    ctx->pc = 0x3C6030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6030u;
        // 0x3c6034: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6038u;
}
