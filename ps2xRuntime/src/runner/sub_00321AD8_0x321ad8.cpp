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

// Function: sub_00321AD8
// Address: 0x321ad8 - 0x321b00
void sub_00321AD8_0x321ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321AD8_0x321ad8");
#endif

    ctx->pc = 0x321ad8u;

    // 0x321ad8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x321ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x321adc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x321adcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x321ae0: 0x24634220  addiu       $v1, $v1, 0x4220
    ctx->pc = 0x321ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16928));
    // 0x321ae4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x321ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x321ae8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x321ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321aec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x321aecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x321af0: 0xa0800008  sb          $zero, 0x8($a0)
    ctx->pc = 0x321af0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x321af4: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x321af4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x321af8: 0x3e00008  jr          $ra
    ctx->pc = 0x321AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321AF8u;
        // 0x321afc: 0xa0800011  sb          $zero, 0x11($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321B00u;
}
