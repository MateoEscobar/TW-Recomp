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

// Function: sub_001F2720
// Address: 0x1f2720 - 0x1f27b0
void sub_001F2720_0x1f2720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2720_0x1f2720");
#endif

    ctx->pc = 0x1f2720u;

    // 0x1f2720: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f2720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f2724: 0x14a20020  bne         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F2724u;
    {
        const bool branch_taken_0x1f2724 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f2724) {
            ctx->pc = 0x1F27A8u;
            goto label_1f27a8;
        }
    }
    ctx->pc = 0x1F272Cu;
    // 0x1f272c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F272Cu;
    {
        const bool branch_taken_0x1f272c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F272Cu;
        // 0x1f2730: 0x3c0b0064  lui         $t3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f272c) {
            ctx->pc = 0x1F27A8u;
            goto label_1f27a8;
        }
    }
    ctx->pc = 0x1F2734u;
    // 0x1f2734: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1f2734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f2738: 0x2563ee58  addiu       $v1, $t3, -0x11A8
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294962776));
    // 0x1f273c: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1f2740: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x1f2740u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f2744: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1f2744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f2748: 0xa168ee58  sb          $t0, -0x11A8($t3)
    ctx->pc = 0x1f2748u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294962776), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f274c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x1f274cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x1f2750: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f2750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f2754: 0x2522ee68  addiu       $v0, $t1, -0x1198
    ctx->pc = 0x1f2754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962792));
    // 0x1f2758: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1f2758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f275c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x1f275cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x1f2760: 0xa0460003  sb          $a2, 0x3($v0)
    ctx->pc = 0x1f2760u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x63EE6Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE6Bu, _value); } while (0);
    // 0x1f2764: 0x2547ee60  addiu       $a3, $t2, -0x11A0
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294962784));
    // 0x1f2768: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1f2768u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x63EE63u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE63u, _value); } while (0);
    // 0x1f276c: 0x3c0c0064  lui         $t4, 0x64
    ctx->pc = 0x1f276cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)100 << 16));
    // 0x1f2770: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x1f2770u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x63EE69u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE69u, _value); } while (0);
    // 0x1f2774: 0x2585ee70  addiu       $a1, $t4, -0x1190
    ctx->pc = 0x1f2774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294962800));
    // 0x1f2778: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1f2778u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63EE6Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE6Au, _value); } while (0);
    // 0x1f277c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f2780: 0xa144ee60  sb          $a0, -0x11A0($t2)
    ctx->pc = 0x1f2780u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63EE60u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE60u, _value); } while (0);
    // 0x1f2784: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x1f2784u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63EE61u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE61u, _value); } while (0);
    // 0x1f2788: 0xa0e80002  sb          $t0, 0x2($a3)
    ctx->pc = 0x1f2788u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x63EE62u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE62u, _value); } while (0);
    // 0x1f278c: 0xa124ee68  sb          $a0, -0x1198($t1)
    ctx->pc = 0x1f278cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63EE68u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EE68u, _value); } while (0);
    // 0x1f2790: 0x8d63ee58  lw          $v1, -0x11A8($t3)
    ctx->pc = 0x1f2790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294962776)));
    // 0x1f2794: 0x8d24ee68  lw          $a0, -0x1198($t1)
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x63EE68u));
    // 0x1f2798: 0x8d42ee60  lw          $v0, -0x11A0($t2)
    ctx->pc = 0x1f2798u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x63EE60u));
    // 0x1f279c: 0xad83ee70  sw          $v1, -0x1190($t4)
    ctx->pc = 0x1f279cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x63EE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EE70u, _value); } while (0);
    // 0x1f27a0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1f27a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x63EE78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EE78u, _value); } while (0);
    // 0x1f27a4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1f27a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63EE74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63EE74u, _value); } while (0);
label_1f27a8:
    // 0x1f27a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F27A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F27A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F27B0u;
}
