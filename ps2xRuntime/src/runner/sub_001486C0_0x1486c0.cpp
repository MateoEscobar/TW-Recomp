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

// Function: sub_001486C0
// Address: 0x1486c0 - 0x148708
void sub_001486C0_0x1486c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001486C0_0x1486c0");
#endif

    switch (ctx->pc) {
        case 0x1486c0u: goto label_1486c0;
        case 0x1486c4u: goto label_1486c4;
        case 0x1486c8u: goto label_1486c8;
        case 0x1486ccu: goto label_1486cc;
        case 0x1486d0u: goto label_1486d0;
        case 0x1486d4u: goto label_1486d4;
        case 0x1486d8u: goto label_1486d8;
        case 0x1486dcu: goto label_1486dc;
        case 0x1486e0u: goto label_1486e0;
        case 0x1486e4u: goto label_1486e4;
        case 0x1486e8u: goto label_1486e8;
        case 0x1486ecu: goto label_1486ec;
        case 0x1486f0u: goto label_1486f0;
        case 0x1486f4u: goto label_1486f4;
        case 0x1486f8u: goto label_1486f8;
        case 0x1486fcu: goto label_1486fc;
        case 0x148700u: goto label_148700;
        case 0x148704u: goto label_148704;
        default: break;
    }

    ctx->pc = 0x1486c0u;

label_1486c0:
    // 0x1486c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1486c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1486c4:
    // 0x1486c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1486c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1486c8:
    // 0x1486c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1486c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1486cc:
    // 0x1486cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1486ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1486d0:
    // 0x1486d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1486d4:
    // 0x1486d4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1486d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1486d8:
    // 0x1486d8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1486d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1486dc:
    // 0x1486dc: 0x60f809  jalr        $v1
label_1486e0:
    if (ctx->pc == 0x1486E0u) {
        ctx->pc = 0x1486E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486DCu;
        // 0x1486e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1486E4u;
        goto label_1486e4;
    }
    ctx->pc = 0x1486DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1486E4u);
        ctx->pc = 0x1486E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486DCu;
        // 0x1486e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1486DCu, 0x1486E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1486E4u;
label_1486e4:
    // 0x1486e4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1486e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1486e8:
    // 0x1486e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1486e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1486ec:
    // 0x1486ec: 0x24a5a120  addiu       $a1, $a1, -0x5EE0
    ctx->pc = 0x1486ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943008));
label_1486f0:
    // 0x1486f0: 0xc1372ee  jal         func_4DCBB8
label_1486f4:
    if (ctx->pc == 0x1486F4u) {
        ctx->pc = 0x1486F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1486F0u;
        // 0x1486f4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1486F8u;
        goto label_1486f8;
    }
    ctx->pc = 0x1486F0u;
    SET_GPR_U32(ctx, 31, 0x1486F8u);
    ctx->pc = 0x1486F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1486F0u;
    // 0x1486f4: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DCBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DCBB8u, 0x1486F0u, 0x1486F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1486F8u;
label_1486f8:
    // 0x1486f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1486f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1486fc:
    // 0x1486fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1486fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_148700:
    // 0x148700: 0x3e00008  jr          $ra
label_148704:
    if (ctx->pc == 0x148704u) {
        ctx->pc = 0x148704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148700u;
        // 0x148704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x148708u;
        goto label_fallthrough_0x148700;
    }
    ctx->pc = 0x148700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148700u;
        // 0x148704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x148700:
    ctx->pc = 0x148708u;
}
