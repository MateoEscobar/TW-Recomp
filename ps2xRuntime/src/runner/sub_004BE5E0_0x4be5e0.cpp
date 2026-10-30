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

// Function: sub_004BE5E0
// Address: 0x4be5e0 - 0x4be608
void sub_004BE5E0_0x4be5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE5E0_0x4be5e0");
#endif

    ctx->pc = 0x4be5e0u;

    // 0x4be5e0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x4be5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4be5e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4be5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be5e8: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x4be5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x4be5ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4be5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4be5f0: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x4be5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
    // 0x4be5f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4be5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4be5f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4be5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4be5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE5FCu;
        // 0x4be600: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE604u;
    // 0x4be604: 0x0  nop
    ctx->pc = 0x4be604u;
    // NOP
    ctx->pc = 0x4be608u;
}
