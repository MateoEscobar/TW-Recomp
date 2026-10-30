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

// Function: sub_004BE608
// Address: 0x4be608 - 0x4be630
void sub_004BE608_0x4be608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE608_0x4be608");
#endif

    ctx->pc = 0x4be608u;

    // 0x4be608: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x4be608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4be60c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4be60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be610: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x4be610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x4be614: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4be614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4be618: 0x3c037f80  lui         $v1, 0x7F80
    ctx->pc = 0x4be618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
    // 0x4be61c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4be61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4be620: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4be620u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4be624: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE624u;
        // 0x4be628: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE62Cu;
    // 0x4be62c: 0x0  nop
    ctx->pc = 0x4be62cu;
    // NOP
    ctx->pc = 0x4be630u;
}
