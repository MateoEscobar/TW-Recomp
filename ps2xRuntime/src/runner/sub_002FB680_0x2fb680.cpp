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

// Function: sub_002FB680
// Address: 0x2fb680 - 0x2fb6f0
void sub_002FB680_0x2fb680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB680_0x2fb680");
#endif

    switch (ctx->pc) {
        case 0x2fb680u: goto label_2fb680;
        case 0x2fb684u: goto label_2fb684;
        case 0x2fb688u: goto label_2fb688;
        case 0x2fb68cu: goto label_2fb68c;
        case 0x2fb690u: goto label_2fb690;
        case 0x2fb694u: goto label_2fb694;
        case 0x2fb698u: goto label_2fb698;
        case 0x2fb69cu: goto label_2fb69c;
        case 0x2fb6a0u: goto label_2fb6a0;
        case 0x2fb6a4u: goto label_2fb6a4;
        case 0x2fb6a8u: goto label_2fb6a8;
        case 0x2fb6acu: goto label_2fb6ac;
        case 0x2fb6b0u: goto label_2fb6b0;
        case 0x2fb6b4u: goto label_2fb6b4;
        case 0x2fb6b8u: goto label_2fb6b8;
        case 0x2fb6bcu: goto label_2fb6bc;
        case 0x2fb6c0u: goto label_2fb6c0;
        case 0x2fb6c4u: goto label_2fb6c4;
        case 0x2fb6c8u: goto label_2fb6c8;
        case 0x2fb6ccu: goto label_2fb6cc;
        case 0x2fb6d0u: goto label_2fb6d0;
        case 0x2fb6d4u: goto label_2fb6d4;
        case 0x2fb6d8u: goto label_2fb6d8;
        case 0x2fb6dcu: goto label_2fb6dc;
        case 0x2fb6e0u: goto label_2fb6e0;
        case 0x2fb6e4u: goto label_2fb6e4;
        case 0x2fb6e8u: goto label_2fb6e8;
        case 0x2fb6ecu: goto label_2fb6ec;
        default: break;
    }

    ctx->pc = 0x2fb680u;

label_2fb680:
    // 0x2fb680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fb684:
    // 0x2fb684: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fb688:
    // 0x2fb688: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fb68c:
    // 0x2fb68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fb690:
    // 0x2fb690: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb694:
    // 0x2fb694: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fb694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb698:
    // 0x2fb698: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fb698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fb69c:
    // 0x2fb69c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fb69cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fb6a0:
    // 0x2fb6a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fb6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb6a4:
    // 0x2fb6a4: 0x40f809  jalr        $v0
label_2fb6a8:
    if (ctx->pc == 0x2FB6A8u) {
        ctx->pc = 0x2FB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6A4u;
        // 0x2fb6a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6ACu;
        goto label_2fb6ac;
    }
    ctx->pc = 0x2FB6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB6ACu);
        ctx->pc = 0x2FB6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6A4u;
        // 0x2fb6a8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB6A4u, 0x2FB6ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB6ACu;
label_2fb6ac:
    // 0x2fb6ac: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2fb6acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_2fb6b0:
    // 0x2fb6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6b4:
    // 0x2fb6b4: 0x24c686c0  addiu       $a2, $a2, -0x7940
    ctx->pc = 0x2fb6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936256));
label_2fb6b8:
    // 0x2fb6b8: 0xc08e1a4  jal         func_238690
label_2fb6bc:
    if (ctx->pc == 0x2FB6BCu) {
        ctx->pc = 0x2FB6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6B8u;
        // 0x2fb6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6C0u;
        goto label_2fb6c0;
    }
    ctx->pc = 0x2FB6B8u;
    SET_GPR_U32(ctx, 31, 0x2FB6C0u);
    ctx->pc = 0x2FB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB6B8u;
    // 0x2fb6bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2FB6B8u, 0x2FB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB6C0u;
label_2fb6c0:
    // 0x2fb6c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2fb6c4:
    // 0x2fb6c4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2fb6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2fb6c8:
    // 0x2fb6c8: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x2fb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_2fb6cc:
    // 0x2fb6cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb6ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb6d0:
    // 0x2fb6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb6d4:
    // 0x2fb6d4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2fb6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_2fb6d8:
    // 0x2fb6d8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2fb6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2fb6dc:
    // 0x2fb6dc: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2fb6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_2fb6e0:
    // 0x2fb6e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb6e4:
    // 0x2fb6e4: 0x3e00008  jr          $ra
label_2fb6e8:
    if (ctx->pc == 0x2FB6E8u) {
        ctx->pc = 0x2FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6E4u;
        // 0x2fb6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB6ECu;
        goto label_2fb6ec;
    }
    ctx->pc = 0x2FB6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB6E4u;
        // 0x2fb6e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB6ECu;
label_2fb6ec:
    // 0x2fb6ec: 0x0  nop
    ctx->pc = 0x2fb6ecu;
    // NOP
    ctx->pc = 0x2fb6f0u;
}
