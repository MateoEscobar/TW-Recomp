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

// Function: sub_0020B698
// Address: 0x20b698 - 0x20b710
void sub_0020B698_0x20b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B698_0x20b698");
#endif

    switch (ctx->pc) {
        case 0x20b698u: goto label_20b698;
        case 0x20b69cu: goto label_20b69c;
        case 0x20b6a0u: goto label_20b6a0;
        case 0x20b6a4u: goto label_20b6a4;
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b6acu: goto label_20b6ac;
        case 0x20b6b0u: goto label_20b6b0;
        case 0x20b6b4u: goto label_20b6b4;
        case 0x20b6b8u: goto label_20b6b8;
        case 0x20b6bcu: goto label_20b6bc;
        case 0x20b6c0u: goto label_20b6c0;
        case 0x20b6c4u: goto label_20b6c4;
        case 0x20b6c8u: goto label_20b6c8;
        case 0x20b6ccu: goto label_20b6cc;
        case 0x20b6d0u: goto label_20b6d0;
        case 0x20b6d4u: goto label_20b6d4;
        case 0x20b6d8u: goto label_20b6d8;
        case 0x20b6dcu: goto label_20b6dc;
        case 0x20b6e0u: goto label_20b6e0;
        case 0x20b6e4u: goto label_20b6e4;
        case 0x20b6e8u: goto label_20b6e8;
        case 0x20b6ecu: goto label_20b6ec;
        case 0x20b6f0u: goto label_20b6f0;
        case 0x20b6f4u: goto label_20b6f4;
        case 0x20b6f8u: goto label_20b6f8;
        case 0x20b6fcu: goto label_20b6fc;
        case 0x20b700u: goto label_20b700;
        case 0x20b704u: goto label_20b704;
        case 0x20b708u: goto label_20b708;
        case 0x20b70cu: goto label_20b70c;
        default: break;
    }

    ctx->pc = 0x20b698u;

label_20b698:
    // 0x20b698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20b69c:
    // 0x20b69c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20b6a0:
    // 0x20b6a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20b6a4:
    // 0x20b6a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20b6a8:
    // 0x20b6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20b6ac:
    // 0x20b6ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20b6b0:
    // 0x20b6b0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20b6b4:
    if (ctx->pc == 0x20B6B4u) {
        ctx->pc = 0x20B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6B0u;
        // 0x20b6b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6B8u;
        goto label_20b6b8;
    }
    ctx->pc = 0x20B6B0u;
    {
        const bool branch_taken_0x20b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6B0u;
        // 0x20b6b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6b0) {
            ctx->pc = 0x20B6F4u;
            goto label_20b6f4;
        }
    }
    ctx->pc = 0x20B6B8u;
label_20b6b8:
    // 0x20b6b8: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x20b6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_20b6bc:
    // 0x20b6bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b6c0:
    // 0x20b6c0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20b6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20b6c4:
    // 0x20b6c4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20b6c8:
    // 0x20b6c8: 0x40f809  jalr        $v0
label_20b6cc:
    if (ctx->pc == 0x20B6CCu) {
        ctx->pc = 0x20B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6C8u;
        // 0x20b6cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6D0u;
        goto label_20b6d0;
    }
    ctx->pc = 0x20B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B6D0u);
        ctx->pc = 0x20B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6C8u;
        // 0x20b6cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B6C8u, 0x20B6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B6D0u;
label_20b6d0:
    // 0x20b6d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20b6d4:
    if (ctx->pc == 0x20B6D4u) {
        ctx->pc = 0x20B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6D0u;
        // 0x20b6d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6D8u;
        goto label_20b6d8;
    }
    ctx->pc = 0x20B6D0u;
    {
        const bool branch_taken_0x20b6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6D0u;
        // 0x20b6d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b6d0) {
            ctx->pc = 0x20B6F8u;
            goto label_20b6f8;
        }
    }
    ctx->pc = 0x20B6D8u;
label_20b6d8:
    // 0x20b6d8: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_20b6dc:
    // 0x20b6dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b6e0:
    // 0x20b6e0: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20b6e4:
    // 0x20b6e4: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20b6e8:
    // 0x20b6e8: 0x40f809  jalr        $v0
label_20b6ec:
    if (ctx->pc == 0x20B6ECu) {
        ctx->pc = 0x20B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6E8u;
        // 0x20b6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B6F0u;
        goto label_20b6f0;
    }
    ctx->pc = 0x20B6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B6F0u);
        ctx->pc = 0x20B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B6E8u;
        // 0x20b6ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B6E8u, 0x20B6F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B6F0u;
label_20b6f0:
    // 0x20b6f0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20b6f0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20b6f4:
    // 0x20b6f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20b6f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20b6f8:
    // 0x20b6f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b6f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b6fc:
    // 0x20b6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20b700:
    // 0x20b700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b704:
    // 0x20b704: 0x3e00008  jr          $ra
label_20b708:
    if (ctx->pc == 0x20B708u) {
        ctx->pc = 0x20B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B704u;
        // 0x20b708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B70Cu;
        goto label_20b70c;
    }
    ctx->pc = 0x20B704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B704u;
        // 0x20b708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B70Cu;
label_20b70c:
    // 0x20b70c: 0x0  nop
    ctx->pc = 0x20b70cu;
    // NOP
    ctx->pc = 0x20b710u;
}
