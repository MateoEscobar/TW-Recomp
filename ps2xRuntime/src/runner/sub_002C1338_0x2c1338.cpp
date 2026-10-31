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

// Function: sub_002C1338
// Address: 0x2c1338 - 0x2c13d8
void sub_002C1338_0x2c1338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1338_0x2c1338");
#endif

    switch (ctx->pc) {
        case 0x2c13c4u: goto label_2c13c4;
        default: break;
    }

    ctx->pc = 0x2c1338u;

    // 0x2c1338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c133c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c1340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c1340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c1344: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c1344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c1348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c134c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c134cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1350: 0x24630990  addiu       $v1, $v1, 0x990
    ctx->pc = 0x2c1350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2448));
    // 0x2c1354: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c1358: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c1358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c135c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x2c135cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2c1360: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2c1360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2c1364: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x2c1364u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x2c1368: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c1368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c136c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2c136cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2c1370: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2c1370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1374: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2c1374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2c1378: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2c1378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c137c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2c137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1380: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c1380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c1384: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2c1384u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2c1388: 0x8d02bd30  lw          $v0, -0x42D0($t0)
    ctx->pc = 0x2c1388u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2c138c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x2c138cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x2c1390: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2c1390u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2c1394: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c1394u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c1398: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x2c1398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x2c139c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c139cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2c13a0: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x2c13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x2c13a4: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x2c13a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x2c13a8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2c13a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2c13ac: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2c13acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2c13b0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2c13b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2c13b4: 0xa2000050  sb          $zero, 0x50($s0)
    ctx->pc = 0x2c13b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c13b8: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x2c13b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c13bc: 0xc0a682c  jal         func_29A0B0
    ctx->pc = 0x2C13BCu;
    SET_GPR_U32(ctx, 31, 0x2C13C4u);
    ctx->pc = 0x2C13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C13BCu;
    // 0x2c13c0: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A0B0u, 0x2C13BCu, 0x2C13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C13C4u;
label_2c13c4:
    // 0x2c13c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c13c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c13c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c13c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c13cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c13ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c13d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C13D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C13D0u;
        // 0x2c13d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C13D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C13D8u;
}
