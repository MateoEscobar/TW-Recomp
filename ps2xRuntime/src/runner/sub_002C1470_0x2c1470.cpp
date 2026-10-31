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

// Function: sub_002C1470
// Address: 0x2c1470 - 0x2c14f8
void sub_002C1470_0x2c1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1470_0x2c1470");
#endif

    switch (ctx->pc) {
        case 0x2c1494u: goto label_2c1494;
        default: break;
    }

    ctx->pc = 0x2c1470u;

    // 0x2c1470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c1478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c147c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c147cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c1480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c1484: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1488: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c148c: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2C148Cu;
    SET_GPR_U32(ctx, 31, 0x2C1494u);
    ctx->pc = 0x2C1490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C148Cu;
    // 0x2c1490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2C148Cu, 0x2C1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1494u;
label_2c1494:
    // 0x2c1494: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x2c1494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2c1498: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c149c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c14a0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2c14a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2c14a8: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2c14a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c14ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c14acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c14b0: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2c14b4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2c14b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c14b8: 0xa2200051  sb          $zero, 0x51($s1)
    ctx->pc = 0x2c14b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c14bc: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2c14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2c14c0: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2c14c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2c14c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c14c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c14c8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2c14c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c14cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c14ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c14d0: 0x244261a8  addiu       $v0, $v0, 0x61A8
    ctx->pc = 0x2c14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
    // 0x2c14d4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2c14d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2c14d8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c14dc: 0x24631f40  addiu       $v1, $v1, 0x1F40
    ctx->pc = 0x2c14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x2c14e0: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x2c14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x2c14e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c14e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c14e8: 0xa4e600f4  sh          $a2, 0xF4($a3)
    ctx->pc = 0x2c14e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 244), (uint16_t)GPR_U32(ctx, 6));
    // 0x2c14ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C14ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C14ECu;
        // 0x2c14f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C14ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C14F4u;
    // 0x2c14f4: 0x0  nop
    ctx->pc = 0x2c14f4u;
    // NOP
    ctx->pc = 0x2c14f8u;
}
