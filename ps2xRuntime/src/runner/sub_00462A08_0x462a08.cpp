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

// Function: sub_00462A08
// Address: 0x462a08 - 0x462ad8
void sub_00462A08_0x462a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462A08_0x462a08");
#endif

    switch (ctx->pc) {
        case 0x462a3cu: goto label_462a3c;
        case 0x462ac4u: goto label_462ac4;
        default: break;
    }

    ctx->pc = 0x462a08u;

    // 0x462a08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x462a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x462a0c: 0x8f85846c  lw          $a1, -0x7B94($gp)
    ctx->pc = 0x462a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935660)));
    // 0x462a10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x462a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x462a14: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x462a14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x462a18: 0x8f878470  lw          $a3, -0x7B90($gp)
    ctx->pc = 0x462a18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935664)));
    // 0x462a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x462a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462a20: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x462a20u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x462a24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x462a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x462a28: 0x25089f80  addiu       $t0, $t0, -0x6080
    ctx->pc = 0x462a28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294942592));
    // 0x462a2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x462a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x462a30: 0x3529011e  ori         $t1, $t1, 0x11E
    ctx->pc = 0x462a30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)286);
    // 0x462a34: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x462A34u;
    SET_GPR_U32(ctx, 31, 0x462A3Cu);
    ctx->pc = 0x462A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462A34u;
    // 0x462a38: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x462A34u, 0x462A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462A3Cu;
label_462a3c:
    // 0x462a3c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x462a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x462a40: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x462a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x462a44: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x462a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x462a48: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x462a48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x462a4c: 0x3c090046  lui         $t1, 0x46
    ctx->pc = 0x462a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)70 << 16));
    // 0x462a50: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x462a50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x462a54: 0x3c0b0046  lui         $t3, 0x46
    ctx->pc = 0x462a54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)70 << 16));
    // 0x462a58: 0x3c0c0046  lui         $t4, 0x46
    ctx->pc = 0x462a58u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)70 << 16));
    // 0x462a5c: 0x240d0024  addiu       $t5, $zero, 0x24
    ctx->pc = 0x462a5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x462a60: 0x24a52d38  addiu       $a1, $a1, 0x2D38
    ctx->pc = 0x462a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11576));
    // 0x462a64: 0x24c63318  addiu       $a2, $a2, 0x3318
    ctx->pc = 0x462a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13080));
    // 0x462a68: 0x24e72e48  addiu       $a3, $a3, 0x2E48
    ctx->pc = 0x462a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 11848));
    // 0x462a6c: 0x25083940  addiu       $t0, $t0, 0x3940
    ctx->pc = 0x462a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14656));
    // 0x462a70: 0x252937d8  addiu       $t1, $t1, 0x37D8
    ctx->pc = 0x462a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 14296));
    // 0x462a74: 0x254a3a90  addiu       $t2, $t2, 0x3A90
    ctx->pc = 0x462a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 14992));
    // 0x462a78: 0x256b3b70  addiu       $t3, $t3, 0x3B70
    ctx->pc = 0x462a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 15216));
    // 0x462a7c: 0x258c3c30  addiu       $t4, $t4, 0x3C30
    ctx->pc = 0x462a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 15408));
    // 0x462a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x462a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x462a84: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x462a84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x462a88: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x462a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x462a8c: 0xafad0008  sw          $t5, 0x8($sp)
    ctx->pc = 0x462a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    // 0x462a90: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x462a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x462a94: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x462a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x462a98: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x462a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x462a9c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x462a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
    // 0x462aa0: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x462aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
    // 0x462aa4: 0xafaa0020  sw          $t2, 0x20($sp)
    ctx->pc = 0x462aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 10));
    // 0x462aa8: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x462aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x462aac: 0xafac0028  sw          $t4, 0x28($sp)
    ctx->pc = 0x462aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 12));
    // 0x462ab0: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x462ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x462ab4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x462ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x462ab8: 0xaf828894  sw          $v0, -0x776C($gp)
    ctx->pc = 0x462ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 2));
    // 0x462abc: 0xc118f1c  jal         func_463C70
    ctx->pc = 0x462ABCu;
    SET_GPR_U32(ctx, 31, 0x462AC4u);
    ctx->pc = 0x462AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x462ABCu;
    // 0x462ac0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x463C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463C70u, 0x462ABCu, 0x462AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x462AC4u;
label_462ac4:
    // 0x462ac4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x462ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x462ac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x462ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x462acc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x462accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x462ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x462AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462AD0u;
        // 0x462ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462AD8u;
}
