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

// Function: sub_00407758
// Address: 0x407758 - 0x407798
void sub_00407758_0x407758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407758_0x407758");
#endif

    ctx->pc = 0x407758u;

    // 0x407758: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x407758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x40775c: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40775Cu;
    {
        const bool branch_taken_0x40775c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x40775c) {
            ctx->pc = 0x40778Cu;
            goto label_40778c;
        }
    }
    ctx->pc = 0x407764u;
    // 0x407764: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x407764u;
    {
        const bool branch_taken_0x407764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x407768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407764u;
        // 0x407768: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407764) {
            ctx->pc = 0x40778Cu;
            goto label_40778c;
        }
    }
    ctx->pc = 0x40776Cu;
    // 0x40776c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40776cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x407770: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x407770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x407774: 0x246331a0  addiu       $v1, $v1, 0x31A0
    ctx->pc = 0x407774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12704));
    // 0x407778: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x407778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40777c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x40777cu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F31A0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F31A0u, _value); } while (0);
    // 0x407780: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x407780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x407784: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x407784u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F31C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F31C0u, _value); } while (0);
    // 0x407788: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x407788u;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6F31B0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6F31B0u, _value); } while (0);
label_40778c:
    // 0x40778c: 0x3e00008  jr          $ra
    ctx->pc = 0x40778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x407794u;
    // 0x407794: 0x0  nop
    ctx->pc = 0x407794u;
    // NOP
    ctx->pc = 0x407798u;
}
