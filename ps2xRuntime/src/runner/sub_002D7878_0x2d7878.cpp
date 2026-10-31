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

// Function: sub_002D7878
// Address: 0x2d7878 - 0x2d7938
void sub_002D7878_0x2d7878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7878_0x2d7878");
#endif

    switch (ctx->pc) {
        case 0x2d78d8u: goto label_2d78d8;
        default: break;
    }

    ctx->pc = 0x2d7878u;

    // 0x2d7878: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2d787c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2d787cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7880: 0x24421050  addiu       $v0, $v0, 0x1050
    ctx->pc = 0x2d7880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4176));
    // 0x2d7884: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7888: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x2d7888u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x2d788c: 0x25440010  addiu       $a0, $t2, 0x10
    ctx->pc = 0x2d788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x2d7890: 0xad490008  sw          $t1, 0x8($t2)
    ctx->pc = 0x2d7890u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 9));
    // 0x2d7894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7898: 0xad42000c  sw          $v0, 0xC($t2)
    ctx->pc = 0x2d7898u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 2));
    // 0x2d789c: 0xa147003f  sb          $a3, 0x3F($t2)
    ctx->pc = 0x2d789cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 63), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d78a0: 0xa1430041  sb          $v1, 0x41($t2)
    ctx->pc = 0x2d78a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d78a4: 0xa1480044  sb          $t0, 0x44($t2)
    ctx->pc = 0x2d78a4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 68), (uint8_t)GPR_U32(ctx, 8));
    // 0x2d78a8: 0xa1400004  sb          $zero, 0x4($t2)
    ctx->pc = 0x2d78a8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78ac: 0xa1400005  sb          $zero, 0x5($t2)
    ctx->pc = 0x2d78acu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78b0: 0xad400030  sw          $zero, 0x30($t2)
    ctx->pc = 0x2d78b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 0));
    // 0x2d78b4: 0xad400034  sw          $zero, 0x34($t2)
    ctx->pc = 0x2d78b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 0));
    // 0x2d78b8: 0xa140003a  sb          $zero, 0x3A($t2)
    ctx->pc = 0x2d78b8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78bc: 0xa140003b  sb          $zero, 0x3B($t2)
    ctx->pc = 0x2d78bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78c0: 0xa140003c  sb          $zero, 0x3C($t2)
    ctx->pc = 0x2d78c0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78c4: 0xa1400040  sb          $zero, 0x40($t2)
    ctx->pc = 0x2d78c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78c8: 0xa1400042  sb          $zero, 0x42($t2)
    ctx->pc = 0x2d78c8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78cc: 0xa1400045  sb          $zero, 0x45($t2)
    ctx->pc = 0x2d78ccu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78d0: 0xa1400046  sb          $zero, 0x46($t2)
    ctx->pc = 0x2d78d0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d78d4: 0x0  nop
    ctx->pc = 0x2d78d4u;
    // NOP
label_2d78d8:
    // 0x2d78d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x2d78d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d78dc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d78e0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D78E0u;
    {
        const bool branch_taken_0x2d78e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2D78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D78E0u;
        // 0x2d78e4: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d78e0) {
            ctx->pc = 0x2D78F4u;
            goto label_2d78f4;
        }
    }
    ctx->pc = 0x2D78E8u;
    // 0x2d78e8: 0x9142003a  lbu         $v0, 0x3A($t2)
    ctx->pc = 0x2d78e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 58)));
    // 0x2d78ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d78ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d78f0: 0xa142003a  sb          $v0, 0x3A($t2)
    ctx->pc = 0x2d78f0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 58), (uint8_t)GPR_U32(ctx, 2));
label_2d78f4:
    // 0x2d78f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2d78f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2d78f8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2d78f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2d78fc: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x2d78fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d7900: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D7900u;
    {
        const bool branch_taken_0x2d7900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7900u;
        // 0x2d7904: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7900) {
            ctx->pc = 0x2D78D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d78d8;
        }
    }
    ctx->pc = 0x2D7908u;
    // 0x2d7908: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x2d7908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2d790c: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2d790cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7910: 0x8ca4021c  lw          $a0, 0x21C($a1)
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2d7914: 0xa144003d  sb          $a0, 0x3D($t2)
    ctx->pc = 0x2d7914u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 61), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d7918: 0x90a30265  lbu         $v1, 0x265($a1)
    ctx->pc = 0x2d7918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 613)));
    // 0x2d791c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2d791cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d7920: 0xa143003e  sb          $v1, 0x3E($t2)
    ctx->pc = 0x2d7920u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7924: 0x8ca40144  lw          $a0, 0x144($a1)
    ctx->pc = 0x2d7924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x2d7928: 0xa5440038  sh          $a0, 0x38($t2)
    ctx->pc = 0x2d7928u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x2d792c: 0x90a3000b  lbu         $v1, 0xB($a1)
    ctx->pc = 0x2d792cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x2d7930: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7930u;
        // 0x2d7934: 0xa1430043  sb          $v1, 0x43($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 67), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7938u;
}
