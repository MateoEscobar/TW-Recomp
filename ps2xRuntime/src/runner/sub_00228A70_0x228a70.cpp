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

// Function: sub_00228A70
// Address: 0x228a70 - 0x228ad8
void sub_00228A70_0x228a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228A70_0x228a70");
#endif

    ctx->pc = 0x228a70u;

    // 0x228a70: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x228a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x228a74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x228a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x228a78: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x228a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x228a7c: 0x244265c0  addiu       $v0, $v0, 0x65C0
    ctx->pc = 0x228a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
    // 0x228a80: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x228a80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228a84: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x228a84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x228a88: 0x8fae0010  lw          $t6, 0x10($sp)
    ctx->pc = 0x228a88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228a8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x228a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x228a90: 0x8faf0018  lw          $t7, 0x18($sp)
    ctx->pc = 0x228a90u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x228a94: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x228a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228a98: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x228a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x228a9c: 0xa0850005  sb          $a1, 0x5($a0)
    ctx->pc = 0x228a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
    // 0x228aa0: 0xa082000d  sb          $v0, 0xD($a0)
    ctx->pc = 0x228aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x228aa4: 0xa0860006  sb          $a2, 0x6($a0)
    ctx->pc = 0x228aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x228aa8: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x228aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x228aac: 0xa0880002  sb          $t0, 0x2($a0)
    ctx->pc = 0x228aacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x228ab0: 0xa0890003  sb          $t1, 0x3($a0)
    ctx->pc = 0x228ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 9));
    // 0x228ab4: 0xa08a0004  sb          $t2, 0x4($a0)
    ctx->pc = 0x228ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 10));
    // 0x228ab8: 0xa08b0007  sb          $t3, 0x7($a0)
    ctx->pc = 0x228ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 11));
    // 0x228abc: 0xa08c0008  sb          $t4, 0x8($a0)
    ctx->pc = 0x228abcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 12));
    // 0x228ac0: 0xa08d0009  sb          $t5, 0x9($a0)
    ctx->pc = 0x228ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 13));
    // 0x228ac4: 0xa08e000a  sb          $t6, 0xA($a0)
    ctx->pc = 0x228ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 14));
    // 0x228ac8: 0xa08f000b  sb          $t7, 0xB($a0)
    ctx->pc = 0x228ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 15));
    // 0x228acc: 0x3e00008  jr          $ra
    ctx->pc = 0x228ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228ACCu;
        // 0x228ad0: 0xa083000c  sb          $v1, 0xC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228AD4u;
    // 0x228ad4: 0x0  nop
    ctx->pc = 0x228ad4u;
    // NOP
    ctx->pc = 0x228ad8u;
}
