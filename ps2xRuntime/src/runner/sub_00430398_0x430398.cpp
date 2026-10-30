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

// Function: sub_00430398
// Address: 0x430398 - 0x430438
void sub_00430398_0x430398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430398_0x430398");
#endif

    switch (ctx->pc) {
        case 0x4303d4u: goto label_4303d4;
        default: break;
    }

    ctx->pc = 0x430398u;

    // 0x430398: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x430398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x43039c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x43039cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4303a0: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x4303a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x4303a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4303a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4303a8: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4303a8u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x4303ac: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x4303acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x4303b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4303b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4303b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4303b4u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x4303b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4303b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4303bc: 0xf  sync
    ctx->pc = 0x4303bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4303c0: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x4303c0u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
    // 0x4303c4: 0x0  nop
    ctx->pc = 0x4303c4u;
    // NOP
    // 0x4303c8: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x4303c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x4303cc: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x4303ccu;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x4303d0: 0x40f  sync.p
    ctx->pc = 0x4303d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4303d4:
    // 0x4303d4: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x4303d4u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x4303d8: 0x0  nop
    ctx->pc = 0x4303d8u;
    // NOP
    // 0x4303dc: 0x0  nop
    ctx->pc = 0x4303dcu;
    // NOP
    // 0x4303e0: 0x0  nop
    ctx->pc = 0x4303e0u;
    // NOP
    // 0x4303e4: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x4303e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x4303e8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4303E8u;
    {
        const bool branch_taken_0x4303e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4303e8) {
            ctx->pc = 0x4303D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4303d4;
        }
    }
    ctx->pc = 0x4303F0u;
    // 0x4303f0: 0x24040404  addiu       $a0, $zero, 0x404
    ctx->pc = 0x4303f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x4303f4: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x4303f4u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x4303f8: 0x0  nop
    ctx->pc = 0x4303f8u;
    // NOP
    // 0x4303fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4303fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x430400: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x430400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x430404: 0x244266e0  addiu       $v0, $v0, 0x66E0
    ctx->pc = 0x430404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26336));
    // 0x430408: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x430408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x43040c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x43040cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x5166E0u));
    // 0x430410: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x430410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x430414: 0x246366f0  addiu       $v1, $v1, 0x66F0
    ctx->pc = 0x430414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26352));
    // 0x430418: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x430418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x43041c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x43041cu;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 6));
    // 0x430420: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x430420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x430424: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x430424u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5166F0u));
    // 0x430428: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x430428u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 2));
    // 0x43042c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x43042cu;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x430430: 0x3e00008  jr          $ra
    ctx->pc = 0x430430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430438u;
}
