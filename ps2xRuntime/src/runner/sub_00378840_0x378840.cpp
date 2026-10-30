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

// Function: sub_00378840
// Address: 0x378840 - 0x3788b8
void sub_00378840_0x378840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378840_0x378840");
#endif

    switch (ctx->pc) {
        case 0x378868u: goto label_378868;
        case 0x378870u: goto label_378870;
        case 0x378884u: goto label_378884;
        case 0x37888cu: goto label_37888c;
        case 0x378898u: goto label_378898;
        default: break;
    }

    ctx->pc = 0x378840u;

    // 0x378840: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378848: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x378848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37884c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x378850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x378850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378854: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x378854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378858: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x378858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37885c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37885cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378860: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378860u;
    SET_GPR_U32(ctx, 31, 0x378868u);
    ctx->pc = 0x378864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378860u;
    // 0x378864: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378860u, 0x378868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378868u;
label_378868:
    // 0x378868: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378868u;
    SET_GPR_U32(ctx, 31, 0x378870u);
    ctx->pc = 0x37886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378868u;
    // 0x37886c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378868u, 0x378870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378870u;
label_378870:
    // 0x378870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x378870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378874: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x378874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37887c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37887Cu;
    SET_GPR_U32(ctx, 31, 0x378884u);
    ctx->pc = 0x378880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37887Cu;
    // 0x378880: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37887Cu, 0x378884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378884u;
label_378884:
    // 0x378884: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378884u;
    SET_GPR_U32(ctx, 31, 0x37888Cu);
    ctx->pc = 0x378888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378884u;
    // 0x378888: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378884u, 0x37888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37888Cu;
label_37888c:
    // 0x37888c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37888cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378890: 0xc0e3826  jal         func_38E098
    ctx->pc = 0x378890u;
    SET_GPR_U32(ctx, 31, 0x378898u);
    ctx->pc = 0x378894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378890u;
    // 0x378894: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E098u, 0x378890u, 0x378898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378898u;
label_378898:
    // 0x378898: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x378898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37889c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37889cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3788a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3788a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3788a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3788a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3788a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3788a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3788ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3788ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3788B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3788ACu;
        // 0x3788b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3788ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3788B4u;
    // 0x3788b4: 0x0  nop
    ctx->pc = 0x3788b4u;
    // NOP
    ctx->pc = 0x3788b8u;
}
