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

// Function: sub_00327AF8
// Address: 0x327af8 - 0x327b38
void sub_00327AF8_0x327af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327AF8_0x327af8");
#endif

    ctx->pc = 0x327af8u;

    // 0x327af8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x327AF8u;
    {
        const bool branch_taken_0x327af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x327AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327AF8u;
        // 0x327afc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327af8) {
            ctx->pc = 0x327B20u;
            goto label_327b20;
        }
    }
    ctx->pc = 0x327B00u;
    // 0x327b00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x327b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327b04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327b08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327B08u;
    {
        const bool branch_taken_0x327b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x327b08) {
            ctx->pc = 0x327B20u;
            goto label_327b20;
        }
    }
    ctx->pc = 0x327B10u;
    // 0x327b10: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x327b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x327b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x327b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327b18: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x327b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x327b1c: 0x2c850001  sltiu       $a1, $a0, 0x1
    ctx->pc = 0x327b1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_327b20:
    // 0x327b20: 0x3e00008  jr          $ra
    ctx->pc = 0x327B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327B20u;
        // 0x327b24: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327B28u;
    // 0x327b28: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x327b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x327b2c: 0x0  nop
    ctx->pc = 0x327b2cu;
    // NOP
    // 0x327b30: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x327b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x327b34: 0x0  nop
    ctx->pc = 0x327b34u;
    // NOP
    ctx->pc = 0x327b38u;
}
