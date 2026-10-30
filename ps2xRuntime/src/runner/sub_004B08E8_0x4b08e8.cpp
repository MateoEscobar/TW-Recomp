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

// Function: sub_004B08E8
// Address: 0x4b08e8 - 0x4b0918
void sub_004B08E8_0x4b08e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B08E8_0x4b08e8");
#endif

    ctx->pc = 0x4b08e8u;

    // 0x4b08e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4b08e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b08ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b08f0: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x4b08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x4b08f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B08F4u;
    {
        const bool branch_taken_0x4b08f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B08F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B08F4u;
        // 0x4b08f8: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b08f4) {
            ctx->pc = 0x4B0910u;
            goto label_4b0910;
        }
    }
    ctx->pc = 0x4B08FCu;
    // 0x4b08fc: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x4b08fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x4b0900: 0x8c442288  lw          $a0, 0x2288($v0)
    ctx->pc = 0x4b0900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8840)));
    // 0x4b0904: 0xac452288  sw          $a1, 0x2288($v0)
    ctx->pc = 0x4b0904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8840), GPR_U32(ctx, 5));
    // 0x4b0908: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b0908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b090c: 0xaca40034  sw          $a0, 0x34($a1)
    ctx->pc = 0x4b090cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 4));
label_4b0910:
    // 0x4b0910: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0918u;
}
