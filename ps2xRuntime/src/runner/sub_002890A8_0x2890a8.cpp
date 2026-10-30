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

// Function: sub_002890A8
// Address: 0x2890a8 - 0x289108
void sub_002890A8_0x2890a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002890A8_0x2890a8");
#endif

    switch (ctx->pc) {
        case 0x2890d0u: goto label_2890d0;
        default: break;
    }

    ctx->pc = 0x2890a8u;

    // 0x2890a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2890a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2890ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2890acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2890b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2890b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2890b4: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2890b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2890b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2890b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2890bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2890bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2890c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2890c4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2890c8: 0xc0a22dc  jal         func_288B70
    ctx->pc = 0x2890C8u;
    SET_GPR_U32(ctx, 31, 0x2890D0u);
    ctx->pc = 0x2890CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2890C8u;
    // 0x2890cc: 0x7e030000  sq          $v1, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B70u, 0x2890C8u, 0x2890D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2890D0u;
label_2890d0:
    // 0x2890d0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2890d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2890d4: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x2890d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
    // 0x2890d8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2890d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2890dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2890dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2890e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2890e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2890e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2890e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2890e8: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2890e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2890ec: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x2890ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x2890f0: 0xa2040029  sb          $a0, 0x29($s0)
    ctx->pc = 0x2890f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x2890f4: 0xa2040028  sb          $a0, 0x28($s0)
    ctx->pc = 0x2890f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x2890f8: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x2890f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2890fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2890fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289100: 0x3e00008  jr          $ra
    ctx->pc = 0x289100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289100u;
        // 0x289104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289108u;
}
