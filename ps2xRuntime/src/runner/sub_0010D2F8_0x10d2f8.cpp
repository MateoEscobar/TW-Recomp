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

// Function: sub_0010D2F8
// Address: 0x10d2f8 - 0x10d398
void sub_0010D2F8_0x10d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D2F8_0x10d2f8");
#endif

    switch (ctx->pc) {
        case 0x10d310u: goto label_10d310;
        default: break;
    }

    ctx->pc = 0x10d2f8u;

    // 0x10d2f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10d2fc: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x10d2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x10d300: 0x244616c0  addiu       $a2, $v0, 0x16C0
    ctx->pc = 0x10d300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x10d304: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x10d304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x10d308: 0x240701ff  addiu       $a3, $zero, 0x1FF
    ctx->pc = 0x10d308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x10d30c: 0x0  nop
    ctx->pc = 0x10d30cu;
    // NOP
label_10d310:
    // 0x10d310: 0xaca0007c  sw          $zero, 0x7C($a1)
    ctx->pc = 0x10d310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
    // 0x10d314: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10d314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10d318: 0xa0a0008c  sb          $zero, 0x8C($a1)
    ctx->pc = 0x10d318u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d31c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10d31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x10d320: 0x8d028690  lw          $v0, -0x7970($t0)
    ctx->pc = 0x10d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294936208)));
    // 0x10d324: 0xa4a00088  sh          $zero, 0x88($a1)
    ctx->pc = 0x10d324u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d328: 0xaca20070  sw          $v0, 0x70($a1)
    ctx->pc = 0x10d328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 2));
    // 0x10d32c: 0xa4a00086  sh          $zero, 0x86($a1)
    ctx->pc = 0x10d32cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d330: 0xa0a0008e  sb          $zero, 0x8E($a1)
    ctx->pc = 0x10d330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d334: 0xa0a0008f  sb          $zero, 0x8F($a1)
    ctx->pc = 0x10d334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d338: 0xa0a00090  sb          $zero, 0x90($a1)
    ctx->pc = 0x10d338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d33c: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x10d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x10d340: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10d340u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d344: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x10d344u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x10d348: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x10d348u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d34c: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x10d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x10d350: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10d350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d354: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x10d354u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x10d358: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x10d358u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d35c: 0x7ca30040  sq          $v1, 0x40($a1)
    ctx->pc = 0x10d35cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), GPR_VEC(ctx, 3));
    // 0x10d360: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10d360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d364: 0xa4a0008a  sh          $zero, 0x8A($a1)
    ctx->pc = 0x10d364u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d368: 0x7ca20050  sq          $v0, 0x50($a1)
    ctx->pc = 0x10d368u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), GPR_VEC(ctx, 2));
    // 0x10d36c: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x10d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x10d370: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10d370u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10d374: 0xa0a0008d  sb          $zero, 0x8D($a1)
    ctx->pc = 0x10d374u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 141), (uint8_t)GPR_U32(ctx, 0));
    // 0x10d378: 0x7ca20060  sq          $v0, 0x60($a1)
    ctx->pc = 0x10d378u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 96), GPR_VEC(ctx, 2));
    // 0x10d37c: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x10d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x10d380: 0xa4a00084  sh          $zero, 0x84($a1)
    ctx->pc = 0x10d380u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x10d384: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x10d384u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x10d388: 0x4e1ffe1  bgez        $a3, . + 4 + (-0x1F << 2)
    ctx->pc = 0x10D388u;
    {
        const bool branch_taken_0x10d388 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x10D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D388u;
        // 0x10d38c: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d388) {
            ctx->pc = 0x10D310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d310;
        }
    }
    ctx->pc = 0x10D390u;
    // 0x10d390: 0x3e00008  jr          $ra
    ctx->pc = 0x10D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D390u;
        // 0x10d394: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D398u;
}
