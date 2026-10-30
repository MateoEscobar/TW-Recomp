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

// Function: sub_00485AA8
// Address: 0x485aa8 - 0x485af8
void sub_00485AA8_0x485aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485AA8_0x485aa8");
#endif

    switch (ctx->pc) {
        case 0x485aa8u: goto label_485aa8;
        case 0x485aacu: goto label_485aac;
        case 0x485ab0u: goto label_485ab0;
        case 0x485ab4u: goto label_485ab4;
        case 0x485ab8u: goto label_485ab8;
        case 0x485abcu: goto label_485abc;
        case 0x485ac0u: goto label_485ac0;
        case 0x485ac4u: goto label_485ac4;
        case 0x485ac8u: goto label_485ac8;
        case 0x485accu: goto label_485acc;
        case 0x485ad0u: goto label_485ad0;
        case 0x485ad4u: goto label_485ad4;
        case 0x485ad8u: goto label_485ad8;
        case 0x485adcu: goto label_485adc;
        case 0x485ae0u: goto label_485ae0;
        case 0x485ae4u: goto label_485ae4;
        case 0x485ae8u: goto label_485ae8;
        case 0x485aecu: goto label_485aec;
        case 0x485af0u: goto label_485af0;
        case 0x485af4u: goto label_485af4;
        default: break;
    }

    ctx->pc = 0x485aa8u;

label_485aa8:
    // 0x485aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_485aac:
    // 0x485aac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x485aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_485ab0:
    // 0x485ab0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x485ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_485ab4:
    // 0x485ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_485ab8:
    // 0x485ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485abc:
    // 0x485abc: 0x8c45ae24  lw          $a1, -0x51DC($v0)
    ctx->pc = 0x485abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946340)));
label_485ac0:
    // 0x485ac0: 0xa0f809  jalr        $a1
label_485ac4:
    if (ctx->pc == 0x485AC4u) {
        ctx->pc = 0x485AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AC0u;
        // 0x485ac4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485AC8u;
        goto label_485ac8;
    }
    ctx->pc = 0x485AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x485AC8u);
        ctx->pc = 0x485AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AC0u;
        // 0x485ac4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485AC0u, 0x485AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485AC8u;
label_485ac8:
    // 0x485ac8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x485ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_485acc:
    // 0x485acc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x485accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_485ad0:
    // 0x485ad0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485ad4:
    // 0x485ad4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x485ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_485ad8:
    // 0x485ad8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x485ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_485adc:
    // 0x485adc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x485adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_485ae0:
    // 0x485ae0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x485ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_485ae4:
    // 0x485ae4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x485ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485ae8:
    // 0x485ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_485aec:
    // 0x485aec: 0x3e00008  jr          $ra
label_485af0:
    if (ctx->pc == 0x485AF0u) {
        ctx->pc = 0x485AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AECu;
        // 0x485af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485AF4u;
        goto label_485af4;
    }
    ctx->pc = 0x485AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485AECu;
        // 0x485af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485AF4u;
label_485af4:
    // 0x485af4: 0x0  nop
    ctx->pc = 0x485af4u;
    // NOP
    ctx->pc = 0x485af8u;
}
