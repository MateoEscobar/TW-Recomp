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

// Function: sub_00294618
// Address: 0x294618 - 0x294650
void sub_00294618_0x294618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294618_0x294618");
#endif

    switch (ctx->pc) {
        case 0x294630u: goto label_294630;
        default: break;
    }

    ctx->pc = 0x294618u;

    // 0x294618: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x294618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x29461c: 0x3403b040  ori         $v1, $zero, 0xB040
    ctx->pc = 0x29461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45120);
    // 0x294620: 0x244253f0  addiu       $v0, $v0, 0x53F0
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21488));
    // 0x294624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x294624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294628: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29462c: 0xa0a4000a  sb          $a0, 0xA($a1)
    ctx->pc = 0x29462cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6D53FAu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6D53FAu, _value); } while (0);
label_294630:
    // 0x294630: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x294630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
    // 0x294634: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x294634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x294638: 0x0  nop
    ctx->pc = 0x294638u;
    // NOP
    // 0x29463c: 0x0  nop
    ctx->pc = 0x29463cu;
    // NOP
    // 0x294640: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294640u;
    {
        const bool branch_taken_0x294640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294640) {
            ctx->pc = 0x294644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294640u;
            // 0x294644: 0xa0a4000a  sb          $a0, 0xA($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294630;
        }
    }
    ctx->pc = 0x294648u;
    // 0x294648: 0x3e00008  jr          $ra
    ctx->pc = 0x294648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294650u;
}
