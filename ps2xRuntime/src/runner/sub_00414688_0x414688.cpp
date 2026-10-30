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

// Function: sub_00414688
// Address: 0x414688 - 0x4146e0
void sub_00414688_0x414688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414688_0x414688");
#endif

    switch (ctx->pc) {
        case 0x414688u: goto label_414688;
        case 0x41468cu: goto label_41468c;
        case 0x414690u: goto label_414690;
        case 0x414694u: goto label_414694;
        case 0x414698u: goto label_414698;
        case 0x41469cu: goto label_41469c;
        case 0x4146a0u: goto label_4146a0;
        case 0x4146a4u: goto label_4146a4;
        case 0x4146a8u: goto label_4146a8;
        case 0x4146acu: goto label_4146ac;
        case 0x4146b0u: goto label_4146b0;
        case 0x4146b4u: goto label_4146b4;
        case 0x4146b8u: goto label_4146b8;
        case 0x4146bcu: goto label_4146bc;
        case 0x4146c0u: goto label_4146c0;
        case 0x4146c4u: goto label_4146c4;
        case 0x4146c8u: goto label_4146c8;
        case 0x4146ccu: goto label_4146cc;
        case 0x4146d0u: goto label_4146d0;
        case 0x4146d4u: goto label_4146d4;
        case 0x4146d8u: goto label_4146d8;
        case 0x4146dcu: goto label_4146dc;
        default: break;
    }

    ctx->pc = 0x414688u;

label_414688:
    // 0x414688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x414688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41468c:
    // 0x41468c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x41468cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_414690:
    // 0x414690: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x414690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_414694:
    // 0x414694: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x414694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_414698:
    // 0x414698: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_41469c:
    if (ctx->pc == 0x41469Cu) {
        ctx->pc = 0x41469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414698u;
        // 0x41469c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146A0u;
        goto label_4146a0;
    }
    ctx->pc = 0x414698u;
    {
        const bool branch_taken_0x414698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x41469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414698u;
        // 0x41469c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414698) {
            ctx->pc = 0x4146CCu;
            goto label_4146cc;
        }
    }
    ctx->pc = 0x4146A0u;
label_4146a0:
    // 0x4146a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4146a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4146a4:
    // 0x4146a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4146a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4146a8:
    // 0x4146a8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x4146a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4146ac:
    // 0x4146ac: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x4146acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4146b0:
    // 0x4146b0: 0x60f809  jalr        $v1
label_4146b4:
    if (ctx->pc == 0x4146B4u) {
        ctx->pc = 0x4146B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146B0u;
        // 0x4146b4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146B8u;
        goto label_4146b8;
    }
    ctx->pc = 0x4146B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4146B8u);
        ctx->pc = 0x4146B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146B0u;
        // 0x4146b4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4146B0u, 0x4146B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4146B8u;
label_4146b8:
    // 0x4146b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4146b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4146bc:
    // 0x4146bc: 0xc105152  jal         func_414548
label_4146c0:
    if (ctx->pc == 0x4146C0u) {
        ctx->pc = 0x4146C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146BCu;
        // 0x4146c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146C4u;
        goto label_4146c4;
    }
    ctx->pc = 0x4146BCu;
    SET_GPR_U32(ctx, 31, 0x4146C4u);
    ctx->pc = 0x4146C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4146BCu;
    // 0x4146c0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414548u, 0x4146BCu, 0x4146C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4146C4u;
label_4146c4:
    // 0x4146c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4146c8:
    if (ctx->pc == 0x4146C8u) {
        ctx->pc = 0x4146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146C4u;
        // 0x4146c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146CCu;
        goto label_4146cc;
    }
    ctx->pc = 0x4146C4u;
    {
        const bool branch_taken_0x4146c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4146C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146C4u;
        // 0x4146c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4146c4) {
            ctx->pc = 0x4146D4u;
            goto label_4146d4;
        }
    }
    ctx->pc = 0x4146CCu;
label_4146cc:
    // 0x4146cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4146ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4146d0:
    // 0x4146d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4146d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4146d4:
    // 0x4146d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4146d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4146d8:
    // 0x4146d8: 0x3e00008  jr          $ra
label_4146dc:
    if (ctx->pc == 0x4146DCu) {
        ctx->pc = 0x4146DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146D8u;
        // 0x4146dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4146E0u;
        goto label_fallthrough_0x4146d8;
    }
    ctx->pc = 0x4146D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4146DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4146D8u;
        // 0x4146dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4146D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4146d8:
    ctx->pc = 0x4146E0u;
}
