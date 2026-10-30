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

// Function: sub_00207480
// Address: 0x207480 - 0x2074f8
void sub_00207480_0x207480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207480_0x207480");
#endif

    switch (ctx->pc) {
        case 0x207480u: goto label_207480;
        case 0x207484u: goto label_207484;
        case 0x207488u: goto label_207488;
        case 0x20748cu: goto label_20748c;
        case 0x207490u: goto label_207490;
        case 0x207494u: goto label_207494;
        case 0x207498u: goto label_207498;
        case 0x20749cu: goto label_20749c;
        case 0x2074a0u: goto label_2074a0;
        case 0x2074a4u: goto label_2074a4;
        case 0x2074a8u: goto label_2074a8;
        case 0x2074acu: goto label_2074ac;
        case 0x2074b0u: goto label_2074b0;
        case 0x2074b4u: goto label_2074b4;
        case 0x2074b8u: goto label_2074b8;
        case 0x2074bcu: goto label_2074bc;
        case 0x2074c0u: goto label_2074c0;
        case 0x2074c4u: goto label_2074c4;
        case 0x2074c8u: goto label_2074c8;
        case 0x2074ccu: goto label_2074cc;
        case 0x2074d0u: goto label_2074d0;
        case 0x2074d4u: goto label_2074d4;
        case 0x2074d8u: goto label_2074d8;
        case 0x2074dcu: goto label_2074dc;
        case 0x2074e0u: goto label_2074e0;
        case 0x2074e4u: goto label_2074e4;
        case 0x2074e8u: goto label_2074e8;
        case 0x2074ecu: goto label_2074ec;
        case 0x2074f0u: goto label_2074f0;
        case 0x2074f4u: goto label_2074f4;
        default: break;
    }

    ctx->pc = 0x207480u;

label_207480:
    // 0x207480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_207484:
    // 0x207484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x207484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_207488:
    // 0x207488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x207488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20748c:
    // 0x20748c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20748cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_207490:
    // 0x207490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_207494:
    // 0x207494: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x207494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_207498:
    // 0x207498: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20749c:
    if (ctx->pc == 0x20749Cu) {
        ctx->pc = 0x20749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207498u;
        // 0x20749c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074A0u;
        goto label_2074a0;
    }
    ctx->pc = 0x207498u;
    {
        const bool branch_taken_0x207498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207498u;
        // 0x20749c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207498) {
            ctx->pc = 0x2074DCu;
            goto label_2074dc;
        }
    }
    ctx->pc = 0x2074A0u;
label_2074a0:
    // 0x2074a0: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2074a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_2074a4:
    // 0x2074a4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2074a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2074a8:
    // 0x2074a8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2074a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2074ac:
    // 0x2074ac: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2074acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2074b0:
    // 0x2074b0: 0x40f809  jalr        $v0
label_2074b4:
    if (ctx->pc == 0x2074B4u) {
        ctx->pc = 0x2074B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074B0u;
        // 0x2074b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074B8u;
        goto label_2074b8;
    }
    ctx->pc = 0x2074B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2074B8u);
        ctx->pc = 0x2074B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074B0u;
        // 0x2074b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074B0u, 0x2074B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2074B8u;
label_2074b8:
    // 0x2074b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2074bc:
    if (ctx->pc == 0x2074BCu) {
        ctx->pc = 0x2074BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074B8u;
        // 0x2074bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074C0u;
        goto label_2074c0;
    }
    ctx->pc = 0x2074B8u;
    {
        const bool branch_taken_0x2074b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074B8u;
        // 0x2074bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074b8) {
            ctx->pc = 0x2074E0u;
            goto label_2074e0;
        }
    }
    ctx->pc = 0x2074C0u;
label_2074c0:
    // 0x2074c0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2074c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2074c4:
    // 0x2074c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2074c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2074c8:
    // 0x2074c8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2074c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2074cc:
    // 0x2074cc: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2074ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2074d0:
    // 0x2074d0: 0x40f809  jalr        $v0
label_2074d4:
    if (ctx->pc == 0x2074D4u) {
        ctx->pc = 0x2074D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074D0u;
        // 0x2074d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074D8u;
        goto label_2074d8;
    }
    ctx->pc = 0x2074D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2074D8u);
        ctx->pc = 0x2074D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074D0u;
        // 0x2074d4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074D0u, 0x2074D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2074D8u;
label_2074d8:
    // 0x2074d8: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2074d8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2074dc:
    // 0x2074dc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2074dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2074e0:
    // 0x2074e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2074e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2074e4:
    // 0x2074e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2074e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2074e8:
    // 0x2074e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2074e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2074ec:
    // 0x2074ec: 0x3e00008  jr          $ra
label_2074f0:
    if (ctx->pc == 0x2074F0u) {
        ctx->pc = 0x2074F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074ECu;
        // 0x2074f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2074F4u;
        goto label_2074f4;
    }
    ctx->pc = 0x2074ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2074F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2074ECu;
        // 0x2074f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2074ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2074F4u;
label_2074f4:
    // 0x2074f4: 0x0  nop
    ctx->pc = 0x2074f4u;
    // NOP
    ctx->pc = 0x2074f8u;
}
