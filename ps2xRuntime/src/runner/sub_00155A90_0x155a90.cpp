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

// Function: sub_00155A90
// Address: 0x155a90 - 0x155b10
void sub_00155A90_0x155a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155A90_0x155a90");
#endif

    ctx->pc = 0x155a90u;

    // 0x155a90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x155a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x155a94: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x155A94u;
    {
        const bool branch_taken_0x155a94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x155a94) {
            ctx->pc = 0x155B04u;
            goto label_155b04;
        }
    }
    ctx->pc = 0x155A9Cu;
    // 0x155a9c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x155A9Cu;
    {
        const bool branch_taken_0x155a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A9Cu;
        // 0x155aa0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a9c) {
            ctx->pc = 0x155B04u;
            goto label_155b04;
        }
    }
    ctx->pc = 0x155AA4u;
    // 0x155aa4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x155aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x155aa8: 0x24445348  addiu       $a0, $v0, 0x5348
    ctx->pc = 0x155aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21320));
    // 0x155aac: 0xac435348  sw          $v1, 0x5348($v0)
    ctx->pc = 0x155aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5348u, _value); } while (0);
    // 0x155ab0: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x155ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E539Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E539Cu, _value); } while (0);
    // 0x155ab4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x155ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E534Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E534Cu, _value); } while (0);
    // 0x155ab8: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x155ab8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5350u, _value); } while (0);
    // 0x155abc: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x155abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5354u, _value); } while (0);
    // 0x155ac0: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x155ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5358u, _value); } while (0);
    // 0x155ac4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x155ac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E535Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E535Cu, _value); } while (0);
    // 0x155ac8: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x155ac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5360u, _value); } while (0);
    // 0x155acc: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x155accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5364u, _value); } while (0);
    // 0x155ad0: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x155ad0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5368u, _value); } while (0);
    // 0x155ad4: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x155ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E536Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E536Cu, _value); } while (0);
    // 0x155ad8: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x155ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5370u, _value); } while (0);
    // 0x155adc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x155adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5374u, _value); } while (0);
    // 0x155ae0: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x155ae0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5378u, _value); } while (0);
    // 0x155ae4: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x155ae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E537Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E537Cu, _value); } while (0);
    // 0x155ae8: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x155ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5380u, _value); } while (0);
    // 0x155aec: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x155aecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5384u, _value); } while (0);
    // 0x155af0: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x155af0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5388u, _value); } while (0);
    // 0x155af4: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x155af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E538Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E538Cu, _value); } while (0);
    // 0x155af8: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x155af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5390u, _value); } while (0);
    // 0x155afc: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x155afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5394u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5394u, _value); } while (0);
    // 0x155b00: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x155b00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5E5398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E5398u, _value); } while (0);
label_155b04:
    // 0x155b04: 0x3e00008  jr          $ra
    ctx->pc = 0x155B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B0Cu;
    // 0x155b0c: 0x0  nop
    ctx->pc = 0x155b0cu;
    // NOP
    ctx->pc = 0x155b10u;
}
