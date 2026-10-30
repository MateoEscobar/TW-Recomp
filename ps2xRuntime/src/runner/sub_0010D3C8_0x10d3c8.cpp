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

// Function: sub_0010D3C8
// Address: 0x10d3c8 - 0x10d420
void sub_0010D3C8_0x10d3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D3C8_0x10d3c8");
#endif

    switch (ctx->pc) {
        case 0x10d3f0u: goto label_10d3f0;
        default: break;
    }

    ctx->pc = 0x10d3c8u;

    // 0x10d3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10d3cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10d3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10d3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10d3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d3d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3dc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x10d3e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d3e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x10d3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d3e8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x10D3E8u;
    SET_GPR_U32(ctx, 31, 0x10D3F0u);
    ctx->pc = 0x10D3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D3E8u;
    // 0x10d3ec: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x10D3E8u, 0x10D3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D3F0u;
label_10d3f0:
    // 0x10d3f0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10d3f4: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x10d3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10d3f8: 0x3463a014  ori         $v1, $v1, 0xA014
    ctx->pc = 0x10d3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40980);
    // 0x10d3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d400: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x10d400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x10d404: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x10d404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x10d408: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10d408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10d40c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10d40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d410: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10d410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d414: 0x3e00008  jr          $ra
    ctx->pc = 0x10D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D414u;
        // 0x10d418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D41Cu;
    // 0x10d41c: 0x0  nop
    ctx->pc = 0x10d41cu;
    // NOP
    ctx->pc = 0x10d420u;
}
