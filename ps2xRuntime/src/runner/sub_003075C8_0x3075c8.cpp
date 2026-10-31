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

// Function: sub_003075C8
// Address: 0x3075c8 - 0x307668
void sub_003075C8_0x3075c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003075C8_0x3075c8");
#endif

    switch (ctx->pc) {
        case 0x307608u: goto label_307608;
        default: break;
    }

    ctx->pc = 0x3075c8u;

    // 0x3075c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3075c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3075cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3075ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3075d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3075d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3075d4: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x3075d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x3075d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3075d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3075dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3075e0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x3075e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x3075e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3075e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3075e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3075e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3075ec: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3075ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3075f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3075f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x3075f4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3075f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3075f8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x3075f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x3075fc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x3075fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x307600: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x307600u;
    SET_GPR_U32(ctx, 31, 0x307608u);
    ctx->pc = 0x307604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307600u;
    // 0x307604: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x307600u, 0x307608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307608u;
label_307608:
    // 0x307608: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x307608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x30760c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x30760cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x307610: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x307610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x307614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x307614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307618: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x307618u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x30761c: 0x24633320  addiu       $v1, $v1, 0x3320
    ctx->pc = 0x30761cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13088));
    // 0x307620: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x307620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x307624: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x307624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307628: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x307628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x30762c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x30762cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x307630: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x307630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x307634: 0xa600002c  sh          $zero, 0x2C($s0)
    ctx->pc = 0x307634u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x307638: 0xa600002e  sh          $zero, 0x2E($s0)
    ctx->pc = 0x307638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x30763c: 0xa6000030  sh          $zero, 0x30($s0)
    ctx->pc = 0x30763cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x307640: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x307640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x307644: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x307644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x307648: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x307648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x30764c: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x30764cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x307650: 0x24840bb8  addiu       $a0, $a0, 0xBB8
    ctx->pc = 0x307650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
    // 0x307654: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x307654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x307658: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x307658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30765c: 0x3e00008  jr          $ra
    ctx->pc = 0x30765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30765Cu;
        // 0x307660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30765Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307664u;
    // 0x307664: 0x0  nop
    ctx->pc = 0x307664u;
    // NOP
    ctx->pc = 0x307668u;
}
