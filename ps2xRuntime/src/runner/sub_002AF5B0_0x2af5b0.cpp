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

// Function: sub_002AF5B0
// Address: 0x2af5b0 - 0x2af670
void sub_002AF5B0_0x2af5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF5B0_0x2af5b0");
#endif

    switch (ctx->pc) {
        case 0x2af650u: goto label_2af650;
        default: break;
    }

    ctx->pc = 0x2af5b0u;

    // 0x2af5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2af5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2af5b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af5b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2af5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2af5bc: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2af5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2af5c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2af5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5c4: 0x3c014023  lui         $at, 0x4023
    ctx->pc = 0x2af5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16419 << 16));
    // 0x2af5c8: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2af5c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2af5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2af5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2af5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2af5d4: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x2af5d8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2af5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2af5e0: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2af5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2af5e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2af5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2af5e8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2af5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2af5ec: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2af5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2af5f0: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x2af5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x2af5f4: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x2af5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x2af5f8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2af5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2af5fc: 0xa2080036  sb          $t0, 0x36($s0)
    ctx->pc = 0x2af5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 8));
    // 0x2af600: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2af600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2af604: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2af604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af608: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2af608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af60c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2af60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2af610: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2af610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2af614: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2af614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2af618: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2af618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2af61c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2af61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2af620: 0xa2080034  sb          $t0, 0x34($s0)
    ctx->pc = 0x2af620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 8));
    // 0x2af624: 0xa2000035  sb          $zero, 0x35($s0)
    ctx->pc = 0x2af624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af628: 0xa2000037  sb          $zero, 0x37($s0)
    ctx->pc = 0x2af628u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af62c: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x2af62cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af630: 0xa2000039  sb          $zero, 0x39($s0)
    ctx->pc = 0x2af630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 0));
    // 0x2af634: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2af634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2af638: 0x8c8201a8  lw          $v0, 0x1A8($a0)
    ctx->pc = 0x2af638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 424)));
    // 0x2af63c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2af63cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2af640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AF640u;
    {
        const bool branch_taken_0x2af640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF640u;
        // 0x2af644: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af640) {
            ctx->pc = 0x2AF658u;
            goto label_2af658;
        }
    }
    ctx->pc = 0x2AF648u;
    // 0x2af648: 0xc088f88  jal         func_223E20
    ctx->pc = 0x2AF648u;
    SET_GPR_U32(ctx, 31, 0x2AF650u);
    ctx->pc = 0x223E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223E20u, 0x2AF648u, 0x2AF650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AF650u;
label_2af650:
    // 0x2af650: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2af650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2af654: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2af654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2af658:
    // 0x2af658: 0xa2030034  sb          $v1, 0x34($s0)
    ctx->pc = 0x2af658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 3));
    // 0x2af65c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2af65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af660: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2af660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2af664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2af664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2af668: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF668u;
        // 0x2af66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF670u;
}
