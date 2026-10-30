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

// Function: sub_004240F8
// Address: 0x4240f8 - 0x424130
void sub_004240F8_0x4240f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004240F8_0x4240f8");
#endif

    ctx->pc = 0x4240f8u;

    // 0x4240f8: 0x52142  srl         $a0, $a1, 5
    ctx->pc = 0x4240f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x4240fc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x4240fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x424100: 0x2463e948  addiu       $v1, $v1, -0x16B8
    ctx->pc = 0x424100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961480));
    // 0x424104: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x424104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x424108: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x424108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x42410c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x42410cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x424110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x424110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x424114: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x424114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x424118: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x424118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x42411c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x42411cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x424120: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x424120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x424124: 0x3e00008  jr          $ra
    ctx->pc = 0x424124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424124u;
        // 0x424128: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42412Cu;
    // 0x42412c: 0x0  nop
    ctx->pc = 0x42412cu;
    // NOP
    ctx->pc = 0x424130u;
}
