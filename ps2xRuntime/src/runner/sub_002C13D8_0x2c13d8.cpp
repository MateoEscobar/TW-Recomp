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

// Function: sub_002C13D8
// Address: 0x2c13d8 - 0x2c1470
void sub_002C13D8_0x2c13d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C13D8_0x2c13d8");
#endif

    switch (ctx->pc) {
        case 0x2c1420u: goto label_2c1420;
        case 0x2c142cu: goto label_2c142c;
        default: break;
    }

    ctx->pc = 0x2c13d8u;

    // 0x2c13d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c13d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c13dc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2c13e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c13e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c13e4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2c13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2c13e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c13e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c13ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c13ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c13f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c13f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c13f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c13f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c13f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c13fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c13fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c1400: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1404: 0x84500092  lh          $s0, 0x92($v0)
    ctx->pc = 0x2c1404u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2c1408: 0x8c4600cc  lw          $a2, 0xCC($v0)
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x2c140c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c140cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c1410: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2c1414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1418: 0xc0ab6b0  jal         func_2ADAC0
    ctx->pc = 0x2C1418u;
    SET_GPR_U32(ctx, 31, 0x2C1420u);
    ctx->pc = 0x2C141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1418u;
    // 0x2c141c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ADAC0u, 0x2C1418u, 0x2C1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1420u;
label_2c1420:
    // 0x2c1420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c1420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1424: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C1424u;
    SET_GPR_U32(ctx, 31, 0x2C142Cu);
    ctx->pc = 0x2C1428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1424u;
    // 0x2c1428: 0xae220040  sw          $v0, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1424u, 0x2C142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C142Cu;
label_2c142c:
    // 0x2c142c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c142cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1430: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c1434: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1438: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c143c: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2c143cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2c1440: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2c1440u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1444: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c1444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1448: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2c1448u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2c144c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c1450: 0x246361a8  addiu       $v1, $v1, 0x61A8
    ctx->pc = 0x2c1450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
    // 0x2c1454: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2c1454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2c1458: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2c1458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c145c: 0x24421f40  addiu       $v0, $v0, 0x1F40
    ctx->pc = 0x2c145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x2c1460: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x2c1460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x2c1464: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1468: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1468u;
        // 0x2c146c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1470u;
}
