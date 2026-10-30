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

// Function: sub_004D89D0
// Address: 0x4d89d0 - 0x4d8a28
void sub_004D89D0_0x4d89d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D89D0_0x4d89d0");
#endif

    switch (ctx->pc) {
        case 0x4d8a14u: goto label_4d8a14;
        default: break;
    }

    ctx->pc = 0x4d89d0u;

    // 0x4d89d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d89d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d89d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4d89d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4d89d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d89d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d89dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d89dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d89e0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x4d89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4d89e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D89E4u;
    {
        const bool branch_taken_0x4d89e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d89e4) {
            ctx->pc = 0x4D89E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D89E4u;
            // 0x4d89e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8A00u;
            goto label_4d8a00;
        }
    }
    ctx->pc = 0x4D89ECu;
    // 0x4d89ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4d89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4d89f0: 0x8c4369ec  lw          $v1, 0x69EC($v0)
    ctx->pc = 0x4d89f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5169ECu));
    // 0x4d89f4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x4d89f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x4d89f8: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x4d89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x4d89fc: 0x0  nop
    ctx->pc = 0x4d89fcu;
    // NOP
label_4d8a00:
    // 0x4d8a00: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4d8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x4d8a04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8A04u;
    {
        const bool branch_taken_0x4d8a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8a04) {
            ctx->pc = 0x4D8A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8A04u;
            // 0x4d8a08: 0x8602000e  lh          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8A18u;
            goto label_4d8a18;
        }
    }
    ctx->pc = 0x4D8A0Cu;
    // 0x4d8a0c: 0xc10c63e  jal         func_4318F8
    ctx->pc = 0x4D8A0Cu;
    SET_GPR_U32(ctx, 31, 0x4D8A14u);
    ctx->pc = 0x4318F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4318F8u, 0x4D8A0Cu, 0x4D8A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8A14u;
label_4d8a14:
    // 0x4d8a14: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x4d8a14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_4d8a18:
    // 0x4d8a18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4d8a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d8a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8a20: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8A20u;
        // 0x4d8a24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8A28u;
}
