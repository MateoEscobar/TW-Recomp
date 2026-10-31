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

// Function: sub_002D8848
// Address: 0x2d8848 - 0x2d88d8
void sub_002D8848_0x2d8848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8848_0x2d8848");
#endif

    switch (ctx->pc) {
        case 0x2d88b8u: goto label_2d88b8;
        case 0x2d88c0u: goto label_2d88c0;
        default: break;
    }

    ctx->pc = 0x2d8848u;

    // 0x2d8848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d8848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d884c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d884cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2d8850: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d8850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d8854: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x2d8854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x2d8858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d8858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d885c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8860: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d8860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d8864: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2d8864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2d8868: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x2d8868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x2d886c: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x2d886cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x2d8870: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2d8870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2d8874: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2d8874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2d8878: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d8878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d887c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d887cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8880: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d8880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d8884: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2d8884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2d8888: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d8888u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2d888c: 0xe60c0024  swc1        $f12, 0x24($s0)
    ctx->pc = 0x2d888cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2d8890: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x2d8890u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x2d8894: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2d8894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2d8898: 0x8ca2bd30  lw          $v0, -0x42D0($a1)
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d889c: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2d889cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88a0: 0xa200002d  sb          $zero, 0x2D($s0)
    ctx->pc = 0x2d88a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88a4: 0xa200002e  sb          $zero, 0x2E($s0)
    ctx->pc = 0x2d88a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88a8: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x2d88a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88ac: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x2d88acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d88b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2D88B0u;
    SET_GPR_U32(ctx, 31, 0x2D88B8u);
    ctx->pc = 0x2D88B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88B0u;
    // 0x2d88b4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2D88B0u, 0x2D88B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88B8u;
label_2d88b8:
    // 0x2d88b8: 0xc105e98  jal         func_417A60
    ctx->pc = 0x2D88B8u;
    SET_GPR_U32(ctx, 31, 0x2D88C0u);
    ctx->pc = 0x2D88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D88B8u;
    // 0x2d88bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417A60u, 0x2D88B8u, 0x2D88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D88C0u;
label_2d88c0:
    // 0x2d88c0: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2d88c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2d88c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d88c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d88c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d88cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d88ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d88d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D88D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D88D0u;
        // 0x2d88d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D88D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D88D8u;
}
