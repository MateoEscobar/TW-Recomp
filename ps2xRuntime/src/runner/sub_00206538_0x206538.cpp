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

// Function: sub_00206538
// Address: 0x206538 - 0x2065f0
void sub_00206538_0x206538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206538_0x206538");
#endif

    switch (ctx->pc) {
        case 0x206538u: goto label_206538;
        case 0x20653cu: goto label_20653c;
        case 0x206540u: goto label_206540;
        case 0x206544u: goto label_206544;
        case 0x206548u: goto label_206548;
        case 0x20654cu: goto label_20654c;
        case 0x206550u: goto label_206550;
        case 0x206554u: goto label_206554;
        case 0x206558u: goto label_206558;
        case 0x20655cu: goto label_20655c;
        case 0x206560u: goto label_206560;
        case 0x206564u: goto label_206564;
        case 0x206568u: goto label_206568;
        case 0x20656cu: goto label_20656c;
        case 0x206570u: goto label_206570;
        case 0x206574u: goto label_206574;
        case 0x206578u: goto label_206578;
        case 0x20657cu: goto label_20657c;
        case 0x206580u: goto label_206580;
        case 0x206584u: goto label_206584;
        case 0x206588u: goto label_206588;
        case 0x20658cu: goto label_20658c;
        case 0x206590u: goto label_206590;
        case 0x206594u: goto label_206594;
        case 0x206598u: goto label_206598;
        case 0x20659cu: goto label_20659c;
        case 0x2065a0u: goto label_2065a0;
        case 0x2065a4u: goto label_2065a4;
        case 0x2065a8u: goto label_2065a8;
        case 0x2065acu: goto label_2065ac;
        case 0x2065b0u: goto label_2065b0;
        case 0x2065b4u: goto label_2065b4;
        case 0x2065b8u: goto label_2065b8;
        case 0x2065bcu: goto label_2065bc;
        case 0x2065c0u: goto label_2065c0;
        case 0x2065c4u: goto label_2065c4;
        case 0x2065c8u: goto label_2065c8;
        case 0x2065ccu: goto label_2065cc;
        case 0x2065d0u: goto label_2065d0;
        case 0x2065d4u: goto label_2065d4;
        case 0x2065d8u: goto label_2065d8;
        case 0x2065dcu: goto label_2065dc;
        case 0x2065e0u: goto label_2065e0;
        case 0x2065e4u: goto label_2065e4;
        case 0x2065e8u: goto label_2065e8;
        case 0x2065ecu: goto label_2065ec;
        default: break;
    }

    ctx->pc = 0x206538u;

label_206538:
    // 0x206538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20653c:
    // 0x20653c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_206540:
    // 0x206540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206544:
    // 0x206544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206548:
    // 0x206548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20654c:
    // 0x20654c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20654cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_206550:
    // 0x206550: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x206550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206554:
    // 0x206554: 0x40f809  jalr        $v0
label_206558:
    if (ctx->pc == 0x206558u) {
        ctx->pc = 0x206558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206554u;
        // 0x206558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20655Cu;
        goto label_20655c;
    }
    ctx->pc = 0x206554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20655Cu);
        ctx->pc = 0x206558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206554u;
        // 0x206558: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206554u, 0x20655Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20655Cu;
label_20655c:
    // 0x20655c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_206560:
    if (ctx->pc == 0x206560u) {
        ctx->pc = 0x206560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20655Cu;
        // 0x206560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206564u;
        goto label_206564;
    }
    ctx->pc = 0x20655Cu;
    {
        const bool branch_taken_0x20655c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20655c) {
            ctx->pc = 0x206560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20655Cu;
            // 0x206560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2065E4u;
            goto label_2065e4;
        }
    }
    ctx->pc = 0x206564u;
label_206564:
    // 0x206564: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x206564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206568:
    // 0x206568: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x206568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20656c:
    // 0x20656c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_206570:
    // 0x206570: 0x40f809  jalr        $v0
label_206574:
    if (ctx->pc == 0x206574u) {
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206578u;
        goto label_206578;
    }
    ctx->pc = 0x206570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206578u);
        ctx->pc = 0x206574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206570u;
        // 0x206574: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206570u, 0x206578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206578u;
label_206578:
    // 0x206578: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_20657c:
    if (ctx->pc == 0x20657Cu) {
        ctx->pc = 0x20657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206578u;
        // 0x20657c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206580u;
        goto label_206580;
    }
    ctx->pc = 0x206578u;
    {
        const bool branch_taken_0x206578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206578) {
            ctx->pc = 0x20657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206578u;
            // 0x20657c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2065E4u;
            goto label_2065e4;
        }
    }
    ctx->pc = 0x206580u;
label_206580:
    // 0x206580: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x206580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_206584:
    // 0x206584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206588:
    // 0x206588: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20658c:
    // 0x20658c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_206590:
    // 0x206590: 0x60f809  jalr        $v1
label_206594:
    if (ctx->pc == 0x206594u) {
        ctx->pc = 0x206594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206590u;
        // 0x206594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206598u;
        goto label_206598;
    }
    ctx->pc = 0x206590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206598u);
        ctx->pc = 0x206594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206590u;
        // 0x206594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206590u, 0x206598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206598u;
label_206598:
    // 0x206598: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x206598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_20659c:
    // 0x20659c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2065a0:
    // 0x2065a0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2065a4:
    // 0x2065a4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2065a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2065a8:
    // 0x2065a8: 0x60f809  jalr        $v1
label_2065ac:
    if (ctx->pc == 0x2065ACu) {
        ctx->pc = 0x2065ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065A8u;
        // 0x2065ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065B0u;
        goto label_2065b0;
    }
    ctx->pc = 0x2065A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2065B0u);
        ctx->pc = 0x2065ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065A8u;
        // 0x2065ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065A8u, 0x2065B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2065B0u;
label_2065b0:
    // 0x2065b0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x2065b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2065b4:
    // 0x2065b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2065b8:
    // 0x2065b8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2065b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2065bc:
    // 0x2065bc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2065bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2065c0:
    // 0x2065c0: 0x60f809  jalr        $v1
label_2065c4:
    if (ctx->pc == 0x2065C4u) {
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065C8u;
        goto label_2065c8;
    }
    ctx->pc = 0x2065C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2065C8u);
        ctx->pc = 0x2065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065C0u;
        // 0x2065c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065C0u, 0x2065C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2065C8u;
label_2065c8:
    // 0x2065c8: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2065c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2065cc:
    // 0x2065cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2065ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2065d0:
    // 0x2065d0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2065d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2065d4:
    // 0x2065d4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2065d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2065d8:
    // 0x2065d8: 0x60f809  jalr        $v1
label_2065dc:
    if (ctx->pc == 0x2065DCu) {
        ctx->pc = 0x2065DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065D8u;
        // 0x2065dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065E0u;
        goto label_2065e0;
    }
    ctx->pc = 0x2065D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2065E0u);
        ctx->pc = 0x2065DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065D8u;
        // 0x2065dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065D8u, 0x2065E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2065E0u;
label_2065e0:
    // 0x2065e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2065e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2065e4:
    // 0x2065e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2065e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2065e8:
    // 0x2065e8: 0x3e00008  jr          $ra
label_2065ec:
    if (ctx->pc == 0x2065ECu) {
        ctx->pc = 0x2065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065E8u;
        // 0x2065ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2065F0u;
        goto label_fallthrough_0x2065e8;
    }
    ctx->pc = 0x2065E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2065E8u;
        // 0x2065ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2065E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2065e8:
    ctx->pc = 0x2065F0u;
}
