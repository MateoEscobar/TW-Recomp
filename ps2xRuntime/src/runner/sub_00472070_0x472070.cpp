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

// Function: sub_00472070
// Address: 0x472070 - 0x472100
void sub_00472070_0x472070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472070_0x472070");
#endif

    switch (ctx->pc) {
        case 0x472088u: goto label_472088;
        case 0x4720b0u: goto label_4720b0;
        default: break;
    }

    ctx->pc = 0x472070u;

    // 0x472070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x472070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x472074: 0xaf8588f8  sw          $a1, -0x7708($gp)
    ctx->pc = 0x472074u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936824), GPR_U32(ctx, 5));
    // 0x472078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x472078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47207c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47207cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x472080: 0xc11cf62  jal         func_473D88
    ctx->pc = 0x472080u;
    SET_GPR_U32(ctx, 31, 0x472088u);
    ctx->pc = 0x472084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472080u;
    // 0x472084: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473D88u, 0x472080u, 0x472088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472088u;
label_472088:
    // 0x472088: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x472088u;
    {
        const bool branch_taken_0x472088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472088u;
        // 0x47208c: 0x3c080071  lui         $t0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472088) {
            ctx->pc = 0x4720ECu;
            goto label_4720ec;
        }
    }
    ctx->pc = 0x472090u;
    // 0x472090: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x472090u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x472094: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x472094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x472098: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x472098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47209c: 0x2508a3c0  addiu       $t0, $t0, -0x5C40
    ctx->pc = 0x47209cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943680));
    // 0x4720a0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4720a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4720a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4720a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4720a8: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4720A8u;
    SET_GPR_U32(ctx, 31, 0x4720B0u);
    ctx->pc = 0x4720ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4720A8u;
    // 0x4720ac: 0x3529000b  ori         $t1, $t1, 0xB (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4720A8u, 0x4720B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4720B0u;
label_4720b0:
    // 0x4720b0: 0x8f8588f8  lw          $a1, -0x7708($gp)
    ctx->pc = 0x4720b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
    // 0x4720b4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4720b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4720b8: 0x2466ad18  addiu       $a2, $v1, -0x52E8
    ctx->pc = 0x4720b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4720bc: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x4720bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4720c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4720C0u;
    {
        const bool branch_taken_0x4720c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4720C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4720C0u;
        // 0x4720c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4720c0) {
            ctx->pc = 0x4720ECu;
            goto label_4720ec;
        }
    }
    ctx->pc = 0x4720C8u;
    // 0x4720c8: 0x8f8488fc  lw          $a0, -0x7704($gp)
    ctx->pc = 0x4720c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936828)));
    // 0x4720cc: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x4720ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4720d0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4720d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4720d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4720d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4720d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4720d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4720dc: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x4720dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x4720e0: 0xaf8488fc  sw          $a0, -0x7704($gp)
    ctx->pc = 0x4720e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936828), GPR_U32(ctx, 4));
    // 0x4720e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4720E4u;
    {
        const bool branch_taken_0x4720e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4720E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4720E4u;
        // 0x4720e8: 0xac630000  sw          $v1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4720e4) {
            ctx->pc = 0x4720F0u;
            goto label_4720f0;
        }
    }
    ctx->pc = 0x4720ECu;
label_4720ec:
    // 0x4720ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4720ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4720f0:
    // 0x4720f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4720f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4720f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4720f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4720f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4720F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4720FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4720F8u;
        // 0x4720fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4720F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472100u;
}
