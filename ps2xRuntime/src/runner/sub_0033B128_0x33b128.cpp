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

// Function: sub_0033B128
// Address: 0x33b128 - 0x33b168
void sub_0033B128_0x33b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B128_0x33b128");
#endif

    ctx->pc = 0x33b128u;

    // 0x33b128: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x33b12c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33B12Cu;
    {
        const bool branch_taken_0x33b12c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x33b12c) {
            ctx->pc = 0x33B160u;
            goto label_33b160;
        }
    }
    ctx->pc = 0x33B134u;
    // 0x33b134: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x33B134u;
    {
        const bool branch_taken_0x33b134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B134u;
        // 0x33b138: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b134) {
            ctx->pc = 0x33B160u;
            goto label_33b160;
        }
    }
    ctx->pc = 0x33B13Cu;
    // 0x33b13c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x33b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x33b140: 0x244244e0  addiu       $v0, $v0, 0x44E0
    ctx->pc = 0x33b140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17632));
    // 0x33b144: 0x24a3b958  addiu       $v1, $a1, -0x46A8
    ctx->pc = 0x33b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949208));
    // 0x33b148: 0xaca2b958  sw          $v0, -0x46A8($a1)
    ctx->pc = 0x33b148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6EB958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB958u, _value); } while (0);
    // 0x33b14c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33b150: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x33b150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6EB970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB970u, _value); } while (0);
    // 0x33b154: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x33b154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB95Cu, _value); } while (0);
    // 0x33b158: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x33b158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB960u, _value); } while (0);
    // 0x33b15c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x33b15cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6EB964u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6EB964u, _value); } while (0);
label_33b160:
    // 0x33b160: 0x3e00008  jr          $ra
    ctx->pc = 0x33B160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B168u;
}
