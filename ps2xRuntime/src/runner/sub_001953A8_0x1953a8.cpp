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

// Function: sub_001953A8
// Address: 0x1953a8 - 0x195400
void sub_001953A8_0x1953a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001953A8_0x1953a8");
#endif

    switch (ctx->pc) {
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        default: break;
    }

    ctx->pc = 0x1953a8u;

label_1953a8:
    // 0x1953a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1953a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1953ac:
    // 0x1953ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1953acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1953b0:
    // 0x1953b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1953b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1953b4:
    // 0x1953b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1953b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1953b8:
    // 0x1953b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1953bc:
    // 0x1953bc: 0x84660068  lh          $a2, 0x68($v1)
    ctx->pc = 0x1953bcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1953c0:
    // 0x1953c0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1953c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1953c4:
    // 0x1953c4: 0x40f809  jalr        $v0
label_1953c8:
    if (ctx->pc == 0x1953C8u) {
        ctx->pc = 0x1953C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C4u;
        // 0x1953c8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953CCu;
        goto label_1953cc;
    }
    ctx->pc = 0x1953C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1953CCu);
        ctx->pc = 0x1953C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953C4u;
        // 0x1953c8: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953C4u, 0x1953CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1953CCu;
label_1953cc:
    // 0x1953cc: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1953ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1953d0:
    // 0x1953d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1953d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1953d4:
    // 0x1953d4: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x1953d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1953d8:
    // 0x1953d8: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x1953d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1953dc:
    // 0x1953dc: 0x852400c0  lh          $a0, 0xC0($t1)
    ctx->pc = 0x1953dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 192)));
label_1953e0:
    // 0x1953e0: 0x24a8000c  addiu       $t0, $a1, 0xC
    ctx->pc = 0x1953e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1953e4:
    // 0x1953e4: 0x8d2300c4  lw          $v1, 0xC4($t1)
    ctx->pc = 0x1953e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
label_1953e8:
    // 0x1953e8: 0x60f809  jalr        $v1
label_1953ec:
    if (ctx->pc == 0x1953ECu) {
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953F0u;
        goto label_1953f0;
    }
    ctx->pc = 0x1953E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1953F0u);
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953E8u, 0x1953F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1953F0u;
label_1953f0:
    // 0x1953f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1953f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1953f4:
    // 0x1953f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1953f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1953f8:
    // 0x1953f8: 0x3e00008  jr          $ra
label_1953fc:
    if (ctx->pc == 0x1953FCu) {
        ctx->pc = 0x1953FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F8u;
        // 0x1953fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195400u;
        goto label_fallthrough_0x1953f8;
    }
    ctx->pc = 0x1953F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953F8u;
        // 0x1953fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1953f8:
    ctx->pc = 0x195400u;
}
