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

// Function: sub_0018DFF8
// Address: 0x18dff8 - 0x18e048
void sub_0018DFF8_0x18dff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DFF8_0x18dff8");
#endif

    ctx->pc = 0x18dff8u;

    // 0x18dff8: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x18dff8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18dffc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e000: 0x90aa000c  lbu         $t2, 0xC($a1)
    ctx->pc = 0x18e000u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x18e004: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x18e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18e008: 0x90a80004  lbu         $t0, 0x4($a1)
    ctx->pc = 0x18e008u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18e00c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x18e00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x18e010: 0x90a30008  lbu         $v1, 0x8($a1)
    ctx->pc = 0x18e010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x18e014: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x18e014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x18e018: 0xa3a90010  sb          $t1, 0x10($sp)
    ctx->pc = 0x18e018u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x18e01c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x18e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x18e020: 0xa04a0003  sb          $t2, 0x3($v0)
    ctx->pc = 0x18e020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x18e024: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x18e024u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x18e028: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x18e028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e02c: 0xa3a6000c  sb          $a2, 0xC($sp)
    ctx->pc = 0x18e02cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 6));
    // 0x18e030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e034: 0xa3a7000d  sb          $a3, 0xD($sp)
    ctx->pc = 0x18e034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 7));
    // 0x18e038: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x18e038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x18e03c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E03Cu;
        // 0x18e040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E044u;
    // 0x18e044: 0x0  nop
    ctx->pc = 0x18e044u;
    // NOP
    ctx->pc = 0x18e048u;
}
