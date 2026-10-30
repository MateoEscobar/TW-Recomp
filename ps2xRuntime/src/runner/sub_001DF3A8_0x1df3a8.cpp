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

// Function: sub_001DF3A8
// Address: 0x1df3a8 - 0x1df448
void sub_001DF3A8_0x1df3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF3A8_0x1df3a8");
#endif

    switch (ctx->pc) {
        case 0x1df3ccu: goto label_1df3cc;
        case 0x1df3d8u: goto label_1df3d8;
        case 0x1df3e8u: goto label_1df3e8;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df414u: goto label_1df414;
        case 0x1df420u: goto label_1df420;
        case 0x1df430u: goto label_1df430;
        default: break;
    }

    ctx->pc = 0x1df3a8u;

    // 0x1df3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1df3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1df3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1df3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1df3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1df3b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1df3b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df3b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3bc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x1df3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x1df3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1df3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1df3c4: 0xc1066b0  jal         func_419AC0
    ctx->pc = 0x1DF3C4u;
    SET_GPR_U32(ctx, 31, 0x1DF3CCu);
    ctx->pc = 0x1DF3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3C4u;
    // 0x1df3c8: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419AC0u, 0x1DF3C4u, 0x1DF3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3CCu;
label_1df3cc:
    // 0x1df3cc: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x1df3d0: 0xc106918  jal         func_41A460
    ctx->pc = 0x1DF3D0u;
    SET_GPR_U32(ctx, 31, 0x1DF3D8u);
    ctx->pc = 0x1DF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3D0u;
    // 0x1df3d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A460u, 0x1DF3D0u, 0x1DF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3D8u;
label_1df3d8:
    // 0x1df3d8: 0xae001b88  sw          $zero, 0x1B88($s0)
    ctx->pc = 0x1df3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7048), GPR_U32(ctx, 0));
    // 0x1df3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df3e0: 0xc077922  jal         func_1DE488
    ctx->pc = 0x1DF3E0u;
    SET_GPR_U32(ctx, 31, 0x1DF3E8u);
    ctx->pc = 0x1DF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3E0u;
    // 0x1df3e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE488u, 0x1DF3E0u, 0x1DF3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3E8u;
label_1df3e8:
    // 0x1df3e8: 0x8e042af0  lw          $a0, 0x2AF0($s0)
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10992)));
    // 0x1df3ec: 0xc079faa  jal         func_1E7EA8
    ctx->pc = 0x1DF3ECu;
    SET_GPR_U32(ctx, 31, 0x1DF3F4u);
    ctx->pc = 0x1DF3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF3ECu;
    // 0x1df3f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7EA8u, 0x1DF3ECu, 0x1DF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF3F4u;
label_1df3f4:
    // 0x1df3f4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1df3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1df3f8: 0xae001ba0  sw          $zero, 0x1BA0($s0)
    ctx->pc = 0x1df3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 0));
    // 0x1df3fc: 0x26310840  addiu       $s1, $s1, 0x840
    ctx->pc = 0x1df3fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x1df400: 0xae001b8c  sw          $zero, 0x1B8C($s0)
    ctx->pc = 0x1df400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7052), GPR_U32(ctx, 0));
    // 0x1df404: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1df404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df40c: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1DF40Cu;
    SET_GPR_U32(ctx, 31, 0x1DF414u);
    ctx->pc = 0x1DF410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF40Cu;
    // 0x1df410: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1DF40Cu, 0x1DF414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF414u;
label_1df414:
    // 0x1df414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df418: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1DF418u;
    SET_GPR_U32(ctx, 31, 0x1DF420u);
    ctx->pc = 0x1DF41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF418u;
    // 0x1df41c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1DF418u, 0x1DF420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF420u;
label_1df420:
    // 0x1df420: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x1df420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x1df424: 0x26042b00  addiu       $a0, $s0, 0x2B00
    ctx->pc = 0x1df424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11008));
    // 0x1df428: 0xc075080  jal         func_1D4200
    ctx->pc = 0x1DF428u;
    SET_GPR_U32(ctx, 31, 0x1DF430u);
    ctx->pc = 0x1DF42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF428u;
    // 0x1df42c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4200u, 0x1DF428u, 0x1DF430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF430u;
label_1df430:
    // 0x1df430: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1df430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1df434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1df438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df43c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF43Cu;
        // 0x1df440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF444u;
    // 0x1df444: 0x0  nop
    ctx->pc = 0x1df444u;
    // NOP
    ctx->pc = 0x1df448u;
}
