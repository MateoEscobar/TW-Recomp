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

// Function: sub_003B61D8
// Address: 0x3b61d8 - 0x3b6220
void sub_003B61D8_0x3b61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B61D8_0x3b61d8");
#endif

    switch (ctx->pc) {
        case 0x3b61d8u: goto label_3b61d8;
        case 0x3b61dcu: goto label_3b61dc;
        case 0x3b61e0u: goto label_3b61e0;
        case 0x3b61e4u: goto label_3b61e4;
        case 0x3b61e8u: goto label_3b61e8;
        case 0x3b61ecu: goto label_3b61ec;
        case 0x3b61f0u: goto label_3b61f0;
        case 0x3b61f4u: goto label_3b61f4;
        case 0x3b61f8u: goto label_3b61f8;
        case 0x3b61fcu: goto label_3b61fc;
        case 0x3b6200u: goto label_3b6200;
        case 0x3b6204u: goto label_3b6204;
        case 0x3b6208u: goto label_3b6208;
        case 0x3b620cu: goto label_3b620c;
        case 0x3b6210u: goto label_3b6210;
        case 0x3b6214u: goto label_3b6214;
        case 0x3b6218u: goto label_3b6218;
        case 0x3b621cu: goto label_3b621c;
        default: break;
    }

    ctx->pc = 0x3b61d8u;

label_3b61d8:
    // 0x3b61d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b61dc:
    // 0x3b61dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b61e0:
    // 0x3b61e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b61e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b61e4:
    // 0x3b61e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b61e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b61e8:
    // 0x3b61e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b61ec:
    // 0x3b61ec: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b61ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b61f0:
    // 0x3b61f0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b61f4:
    // 0x3b61f4: 0x40f809  jalr        $v0
label_3b61f8:
    if (ctx->pc == 0x3B61F8u) {
        ctx->pc = 0x3B61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61F4u;
        // 0x3b61f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B61FCu;
        goto label_3b61fc;
    }
    ctx->pc = 0x3B61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B61FCu);
        ctx->pc = 0x3B61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B61F4u;
        // 0x3b61f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B61F4u, 0x3B61FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B61FCu;
label_3b61fc:
    // 0x3b61fc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3b61fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3b6200:
    // 0x3b6200: 0xc0e858c  jal         func_3A1630
label_3b6204:
    if (ctx->pc == 0x3B6204u) {
        ctx->pc = 0x3B6204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6200u;
        // 0x3b6204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6208u;
        goto label_3b6208;
    }
    ctx->pc = 0x3B6200u;
    SET_GPR_U32(ctx, 31, 0x3B6208u);
    ctx->pc = 0x3B6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6200u;
    // 0x3b6204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B6200u, 0x3B6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6208u;
label_3b6208:
    // 0x3b6208: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b6208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b620c:
    // 0x3b620c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b620cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6210:
    // 0x3b6210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b6210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6214:
    // 0x3b6214: 0x3e00008  jr          $ra
label_3b6218:
    if (ctx->pc == 0x3B6218u) {
        ctx->pc = 0x3B6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6214u;
        // 0x3b6218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B621Cu;
        goto label_3b621c;
    }
    ctx->pc = 0x3B6214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6214u;
        // 0x3b6218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B621Cu;
label_3b621c:
    // 0x3b621c: 0x0  nop
    ctx->pc = 0x3b621cu;
    // NOP
    ctx->pc = 0x3b6220u;
}
