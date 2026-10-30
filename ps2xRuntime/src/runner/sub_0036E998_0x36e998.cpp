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

// Function: sub_0036E998
// Address: 0x36e998 - 0x36ea40
void sub_0036E998_0x36e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E998_0x36e998");
#endif

    switch (ctx->pc) {
        case 0x36e9bcu: goto label_36e9bc;
        case 0x36e9c4u: goto label_36e9c4;
        case 0x36e9d8u: goto label_36e9d8;
        case 0x36e9f8u: goto label_36e9f8;
        case 0x36ea00u: goto label_36ea00;
        case 0x36ea10u: goto label_36ea10;
        case 0x36ea18u: goto label_36ea18;
        case 0x36ea24u: goto label_36ea24;
        default: break;
    }

    ctx->pc = 0x36e998u;

    // 0x36e998: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e99c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e9a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36e9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36e9a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36e9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e9a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36e9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36e9ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36e9b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e9b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E9B4u;
    SET_GPR_U32(ctx, 31, 0x36E9BCu);
    ctx->pc = 0x36E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9B4u;
    // 0x36e9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E9B4u, 0x36E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9BCu;
label_36e9bc:
    // 0x36e9bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36E9BCu;
    SET_GPR_U32(ctx, 31, 0x36E9C4u);
    ctx->pc = 0x36E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9BCu;
    // 0x36e9c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36E9BCu, 0x36E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9C4u;
label_36e9c4:
    // 0x36e9c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36e9c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e9cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e9d0: 0xc102488  jal         func_409220
    ctx->pc = 0x36E9D0u;
    SET_GPR_U32(ctx, 31, 0x36E9D8u);
    ctx->pc = 0x36E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9D0u;
    // 0x36e9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36E9D0u, 0x36E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9D8u;
label_36e9d8:
    // 0x36e9d8: 0x3406ff30  ori         $a2, $zero, 0xFF30
    ctx->pc = 0x36e9d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65328);
    // 0x36e9dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x36e9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x36e9e0: 0x34c6a3d7  ori         $a2, $a2, 0xA3D7
    ctx->pc = 0x36e9e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)41943);
    // 0x36e9e4: 0x637b8  dsll        $a2, $a2, 30
    ctx->pc = 0x36e9e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 30);
    // 0x36e9e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36e9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e9ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e9f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E9F0u;
    SET_GPR_U32(ctx, 31, 0x36E9F8u);
    ctx->pc = 0x36E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9F0u;
    // 0x36e9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E9F0u, 0x36E9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E9F8u;
label_36e9f8:
    // 0x36e9f8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E9F8u;
    SET_GPR_U32(ctx, 31, 0x36EA00u);
    ctx->pc = 0x36E9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E9F8u;
    // 0x36e9fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E9F8u, 0x36EA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA00u;
label_36ea00:
    // 0x36ea00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x36ea00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x36ea04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36ea04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea08: 0xc06d1e4  jal         func_1B4790
    ctx->pc = 0x36EA08u;
    SET_GPR_U32(ctx, 31, 0x36EA10u);
    ctx->pc = 0x36EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA08u;
    // 0x36ea0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4790u, 0x36EA08u, 0x36EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA10u;
label_36ea10:
    // 0x36ea10: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36EA10u;
    SET_GPR_U32(ctx, 31, 0x36EA18u);
    ctx->pc = 0x36EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA10u;
    // 0x36ea14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36EA10u, 0x36EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA18u;
label_36ea18:
    // 0x36ea18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36ea18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ea1c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36EA1Cu;
    SET_GPR_U32(ctx, 31, 0x36EA24u);
    ctx->pc = 0x36EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EA1Cu;
    // 0x36ea20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36EA1Cu, 0x36EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EA24u;
label_36ea24:
    // 0x36ea24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36ea24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ea28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ea2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36ea2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ea30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36ea30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ea34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ea34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ea38: 0x3e00008  jr          $ra
    ctx->pc = 0x36EA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EA38u;
        // 0x36ea3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EA40u;
}
