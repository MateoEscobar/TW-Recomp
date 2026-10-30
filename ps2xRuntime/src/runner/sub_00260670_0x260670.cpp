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

// Function: sub_00260670
// Address: 0x260670 - 0x2606e8
void sub_00260670_0x260670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260670_0x260670");
#endif

    switch (ctx->pc) {
        case 0x260670u: goto label_260670;
        case 0x260674u: goto label_260674;
        case 0x260678u: goto label_260678;
        case 0x26067cu: goto label_26067c;
        case 0x260680u: goto label_260680;
        case 0x260684u: goto label_260684;
        case 0x260688u: goto label_260688;
        case 0x26068cu: goto label_26068c;
        case 0x260690u: goto label_260690;
        case 0x260694u: goto label_260694;
        case 0x260698u: goto label_260698;
        case 0x26069cu: goto label_26069c;
        case 0x2606a0u: goto label_2606a0;
        case 0x2606a4u: goto label_2606a4;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606acu: goto label_2606ac;
        case 0x2606b0u: goto label_2606b0;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606b8u: goto label_2606b8;
        case 0x2606bcu: goto label_2606bc;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606c4u: goto label_2606c4;
        case 0x2606c8u: goto label_2606c8;
        case 0x2606ccu: goto label_2606cc;
        case 0x2606d0u: goto label_2606d0;
        case 0x2606d4u: goto label_2606d4;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606dcu: goto label_2606dc;
        case 0x2606e0u: goto label_2606e0;
        case 0x2606e4u: goto label_2606e4;
        default: break;
    }

    ctx->pc = 0x260670u;

label_260670:
    // 0x260670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x260670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_260674:
    // 0x260674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_260678:
    // 0x260678: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26067c:
    // 0x26067c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26067cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_260680:
    // 0x260680: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_260684:
    // 0x260684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260688:
    // 0x260688: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26068c:
    // 0x26068c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260690:
    // 0x260690: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x260690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_260694:
    // 0x260694: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x260694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_260698:
    // 0x260698: 0xc0f809  jalr        $a2
label_26069c:
    if (ctx->pc == 0x26069Cu) {
        ctx->pc = 0x26069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260698u;
        // 0x26069c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606A0u;
        goto label_2606a0;
    }
    ctx->pc = 0x260698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2606A0u);
        ctx->pc = 0x26069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260698u;
        // 0x26069c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260698u, 0x2606A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2606A0u;
label_2606a0:
    // 0x2606a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2606a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2606a4:
    // 0x2606a4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2606a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2606a8:
    // 0x2606a8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2606ac:
    // 0x2606ac: 0x40f809  jalr        $v0
label_2606b0:
    if (ctx->pc == 0x2606B0u) {
        ctx->pc = 0x2606B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606ACu;
        // 0x2606b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606B4u;
        goto label_2606b4;
    }
    ctx->pc = 0x2606ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2606B4u);
        ctx->pc = 0x2606B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606ACu;
        // 0x2606b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2606ACu, 0x2606B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2606B4u;
label_2606b4:
    // 0x2606b4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2606b8:
    if (ctx->pc == 0x2606B8u) {
        ctx->pc = 0x2606B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606B4u;
        // 0x2606b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606BCu;
        goto label_2606bc;
    }
    ctx->pc = 0x2606B4u;
    {
        const bool branch_taken_0x2606b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606b4) {
            ctx->pc = 0x2606B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2606B4u;
            // 0x2606b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2606D8u;
            goto label_2606d8;
        }
    }
    ctx->pc = 0x2606BCu;
label_2606bc:
    // 0x2606bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2606bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2606c0:
    // 0x2606c0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2606c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2606c4:
    // 0x2606c4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2606c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2606c8:
    // 0x2606c8: 0x40f809  jalr        $v0
label_2606cc:
    if (ctx->pc == 0x2606CCu) {
        ctx->pc = 0x2606CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C8u;
        // 0x2606cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606D0u;
        goto label_2606d0;
    }
    ctx->pc = 0x2606C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2606D0u);
        ctx->pc = 0x2606CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606C8u;
        // 0x2606cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2606C8u, 0x2606D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2606D0u;
label_2606d0:
    // 0x2606d0: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x2606d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_2606d4:
    // 0x2606d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2606d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2606d8:
    // 0x2606d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2606d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2606dc:
    // 0x2606dc: 0x3e00008  jr          $ra
label_2606e0:
    if (ctx->pc == 0x2606E0u) {
        ctx->pc = 0x2606E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606DCu;
        // 0x2606e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2606E4u;
        goto label_2606e4;
    }
    ctx->pc = 0x2606DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2606E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2606DCu;
        // 0x2606e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2606DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2606E4u;
label_2606e4:
    // 0x2606e4: 0x0  nop
    ctx->pc = 0x2606e4u;
    // NOP
    ctx->pc = 0x2606e8u;
}
