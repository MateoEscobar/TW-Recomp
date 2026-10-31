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

// Function: sub_002DB458
// Address: 0x2db458 - 0x2db4a8
void sub_002DB458_0x2db458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB458_0x2db458");
#endif

    ctx->pc = 0x2db458u;

    // 0x2db458: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2db458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2db45c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2db45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2db460: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2db460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2db464: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x2db464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x2db468: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2db468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2db46c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2db46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2db470: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db474: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2db474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2db478: 0xac860020  sw          $a2, 0x20($a0)
    ctx->pc = 0x2db478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 6));
    // 0x2db47c: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x2db47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x2db480: 0xe48c0028  swc1        $f12, 0x28($a0)
    ctx->pc = 0x2db480u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2db484: 0xe48e002c  swc1        $f14, 0x2C($a0)
    ctx->pc = 0x2db484u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x2db488: 0xe48d0030  swc1        $f13, 0x30($a0)
    ctx->pc = 0x2db488u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x2db48c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x2db48cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db490: 0xa0800005  sb          $zero, 0x5($a0)
    ctx->pc = 0x2db490u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db494: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2db494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2db498: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x2db498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x2db49c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB49Cu;
        // 0x2db4a0: 0xa480003c  sh          $zero, 0x3C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB4A4u;
    // 0x2db4a4: 0x0  nop
    ctx->pc = 0x2db4a4u;
    // NOP
    ctx->pc = 0x2db4a8u;
}
