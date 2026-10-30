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

// Function: sub_004864C0
// Address: 0x4864c0 - 0x486508
void sub_004864C0_0x4864c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004864C0_0x4864c0");
#endif

    switch (ctx->pc) {
        case 0x4864c0u: goto label_4864c0;
        case 0x4864c4u: goto label_4864c4;
        case 0x4864c8u: goto label_4864c8;
        case 0x4864ccu: goto label_4864cc;
        case 0x4864d0u: goto label_4864d0;
        case 0x4864d4u: goto label_4864d4;
        case 0x4864d8u: goto label_4864d8;
        case 0x4864dcu: goto label_4864dc;
        case 0x4864e0u: goto label_4864e0;
        case 0x4864e4u: goto label_4864e4;
        case 0x4864e8u: goto label_4864e8;
        case 0x4864ecu: goto label_4864ec;
        case 0x4864f0u: goto label_4864f0;
        case 0x4864f4u: goto label_4864f4;
        case 0x4864f8u: goto label_4864f8;
        case 0x4864fcu: goto label_4864fc;
        case 0x486500u: goto label_486500;
        case 0x486504u: goto label_486504;
        default: break;
    }

    ctx->pc = 0x4864c0u;

label_4864c0:
    // 0x4864c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4864c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4864c4:
    // 0x4864c4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4864c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4864c8:
    // 0x4864c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4864c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4864cc:
    // 0x4864cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4864ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4864d0:
    // 0x4864d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4864d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4864d4:
    // 0x4864d4: 0x8c62adc0  lw          $v0, -0x5240($v1)
    ctx->pc = 0x4864d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946240)));
label_4864d8:
    // 0x4864d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4864d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4864dc:
    // 0x4864dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4864dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4864e0:
    // 0x4864e0: 0x40f809  jalr        $v0
label_4864e4:
    if (ctx->pc == 0x4864E4u) {
        ctx->pc = 0x4864E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864E0u;
        // 0x4864e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4864E8u;
        goto label_4864e8;
    }
    ctx->pc = 0x4864E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4864E8u);
        ctx->pc = 0x4864E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4864E0u;
        // 0x4864e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4864E0u, 0x4864E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4864E8u;
label_4864e8:
    // 0x4864e8: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x4864e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
label_4864ec:
    // 0x4864ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4864ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4864f0:
    // 0x4864f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4864f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4864f4:
    // 0x4864f4: 0x306300e7  andi        $v1, $v1, 0xE7
    ctx->pc = 0x4864f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)231);
label_4864f8:
    // 0x4864f8: 0xa2030022  sb          $v1, 0x22($s0)
    ctx->pc = 0x4864f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 3));
label_4864fc:
    // 0x4864fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4864fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486500:
    // 0x486500: 0x3e00008  jr          $ra
label_486504:
    if (ctx->pc == 0x486504u) {
        ctx->pc = 0x486504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486500u;
        // 0x486504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486508u;
        goto label_fallthrough_0x486500;
    }
    ctx->pc = 0x486500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486500u;
        // 0x486504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x486500:
    ctx->pc = 0x486508u;
}
