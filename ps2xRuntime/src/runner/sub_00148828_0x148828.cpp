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

// Function: sub_00148828
// Address: 0x148828 - 0x148898
void sub_00148828_0x148828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148828_0x148828");
#endif

    switch (ctx->pc) {
        case 0x148874u: goto label_148874;
        case 0x148884u: goto label_148884;
        default: break;
    }

    ctx->pc = 0x148828u;

    // 0x148828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14882c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x14882cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x148830: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x148830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x148834: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x148834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x148838: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x148838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14883c: 0x24635b5c  addiu       $v1, $v1, 0x5B5C
    ctx->pc = 0x14883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23388));
    // 0x148840: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x148840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x148844: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x148844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x148848: 0x3c1001ff  lui         $s0, 0x1FF
    ctx->pc = 0x148848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)511 << 16));
    // 0x14884c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148850: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x148850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148854: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x148854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x148858: 0x3610f000  ori         $s0, $s0, 0xF000
    ctx->pc = 0x148858u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)61440);
    // 0x14885c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x148860: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x148860u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x148864: 0x240500cd  addiu       $a1, $zero, 0xCD
    ctx->pc = 0x148864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
    // 0x148868: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x148868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x14886c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x14886Cu;
    SET_GPR_U32(ctx, 31, 0x148874u);
    ctx->pc = 0x148870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14886Cu;
    // 0x148870: 0x2484f800  addiu       $a0, $a0, -0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x14886Cu, 0x148874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148874u;
label_148874:
    // 0x148874: 0x2610f7f0  addiu       $s0, $s0, -0x810
    ctx->pc = 0x148874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965232));
    // 0x148878: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x148878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x14887c: 0xc10ced8  jal         func_433B60
    ctx->pc = 0x14887Cu;
    SET_GPR_U32(ctx, 31, 0x148884u);
    ctx->pc = 0x148880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14887Cu;
    // 0x148880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433B60u, 0x14887Cu, 0x148884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148884u;
label_148884:
    // 0x148884: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x148884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14888c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148890: 0x3e00008  jr          $ra
    ctx->pc = 0x148890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148890u;
        // 0x148894: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148898u;
}
