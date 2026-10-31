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

// Function: sub_002AD630
// Address: 0x2ad630 - 0x2ad6c0
void sub_002AD630_0x2ad630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD630_0x2ad630");
#endif

    switch (ctx->pc) {
        case 0x2ad630u: goto label_2ad630;
        case 0x2ad634u: goto label_2ad634;
        case 0x2ad638u: goto label_2ad638;
        case 0x2ad63cu: goto label_2ad63c;
        case 0x2ad640u: goto label_2ad640;
        case 0x2ad644u: goto label_2ad644;
        case 0x2ad648u: goto label_2ad648;
        case 0x2ad64cu: goto label_2ad64c;
        case 0x2ad650u: goto label_2ad650;
        case 0x2ad654u: goto label_2ad654;
        case 0x2ad658u: goto label_2ad658;
        case 0x2ad65cu: goto label_2ad65c;
        case 0x2ad660u: goto label_2ad660;
        case 0x2ad664u: goto label_2ad664;
        case 0x2ad668u: goto label_2ad668;
        case 0x2ad66cu: goto label_2ad66c;
        case 0x2ad670u: goto label_2ad670;
        case 0x2ad674u: goto label_2ad674;
        case 0x2ad678u: goto label_2ad678;
        case 0x2ad67cu: goto label_2ad67c;
        case 0x2ad680u: goto label_2ad680;
        case 0x2ad684u: goto label_2ad684;
        case 0x2ad688u: goto label_2ad688;
        case 0x2ad68cu: goto label_2ad68c;
        case 0x2ad690u: goto label_2ad690;
        case 0x2ad694u: goto label_2ad694;
        case 0x2ad698u: goto label_2ad698;
        case 0x2ad69cu: goto label_2ad69c;
        case 0x2ad6a0u: goto label_2ad6a0;
        case 0x2ad6a4u: goto label_2ad6a4;
        case 0x2ad6a8u: goto label_2ad6a8;
        case 0x2ad6acu: goto label_2ad6ac;
        case 0x2ad6b0u: goto label_2ad6b0;
        case 0x2ad6b4u: goto label_2ad6b4;
        case 0x2ad6b8u: goto label_2ad6b8;
        case 0x2ad6bcu: goto label_2ad6bc;
        default: break;
    }

    ctx->pc = 0x2ad630u;

label_2ad630:
    // 0x2ad630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ad630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ad634:
    // 0x2ad634: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2ad634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2ad638:
    // 0x2ad638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ad638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ad63c:
    // 0x2ad63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad640:
    // 0x2ad640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad644:
    // 0x2ad644: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2ad644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2ad648:
    // 0x2ad648: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2ad648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ad64c:
    // 0x2ad64c: 0xa200002c  sb          $zero, 0x2C($s0)
    ctx->pc = 0x2ad64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 0));
label_2ad650:
    // 0x2ad650: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2ad650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_2ad654:
    // 0x2ad654: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ad654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ad658:
    // 0x2ad658: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2ad65c:
    if (ctx->pc == 0x2AD65Cu) {
        ctx->pc = 0x2AD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD658u;
        // 0x2ad65c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD660u;
        goto label_2ad660;
    }
    ctx->pc = 0x2AD658u;
    {
        const bool branch_taken_0x2ad658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad658) {
            ctx->pc = 0x2AD65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD658u;
            // 0x2ad65c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD660u;
            goto label_2ad660;
        }
    }
    ctx->pc = 0x2AD660u;
label_2ad660:
    // 0x2ad660: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2ad660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2ad664:
    // 0x2ad664: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2ad664u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2ad668:
    // 0x2ad668: 0x1810  mfhi        $v1
    ctx->pc = 0x2ad668u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2ad66c:
    // 0x2ad66c: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_2ad670:
    if (ctx->pc == 0x2AD670u) {
        ctx->pc = 0x2AD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD66Cu;
        // 0x2ad670: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD674u;
        goto label_2ad674;
    }
    ctx->pc = 0x2AD66Cu;
    {
        const bool branch_taken_0x2ad66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ad66c) {
            ctx->pc = 0x2AD670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD66Cu;
            // 0x2ad670: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD6B0u;
            goto label_2ad6b0;
        }
    }
    ctx->pc = 0x2AD674u;
label_2ad674:
    // 0x2ad674: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ad674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ad678:
    // 0x2ad678: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2ad678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2ad67c:
    // 0x2ad67c: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2ad67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ad680:
    // 0x2ad680: 0xc0a731e  jal         func_29CC78
label_2ad684:
    if (ctx->pc == 0x2AD684u) {
        ctx->pc = 0x2AD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD680u;
        // 0x2ad684: 0x24a5c508  addiu       $a1, $a1, -0x3AF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD688u;
        goto label_2ad688;
    }
    ctx->pc = 0x2AD680u;
    SET_GPR_U32(ctx, 31, 0x2AD688u);
    ctx->pc = 0x2AD684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD680u;
    // 0x2ad684: 0x24a5c508  addiu       $a1, $a1, -0x3AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CC78u, 0x2AD680u, 0x2AD688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD688u;
label_2ad688:
    // 0x2ad688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ad688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad68c:
    // 0x2ad68c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_2ad690:
    if (ctx->pc == 0x2AD690u) {
        ctx->pc = 0x2AD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD68Cu;
        // 0x2ad690: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD694u;
        goto label_2ad694;
    }
    ctx->pc = 0x2AD68Cu;
    {
        const bool branch_taken_0x2ad68c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad68c) {
            ctx->pc = 0x2AD690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD68Cu;
            // 0x2ad690: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD6B0u;
            goto label_2ad6b0;
        }
    }
    ctx->pc = 0x2AD694u;
label_2ad694:
    // 0x2ad694: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ad694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ad698:
    // 0x2ad698: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2ad698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2ad69c:
    // 0x2ad69c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ad69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ad6a0:
    // 0x2ad6a0: 0x40f809  jalr        $v0
label_2ad6a4:
    if (ctx->pc == 0x2AD6A4u) {
        ctx->pc = 0x2AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6A0u;
        // 0x2ad6a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6A8u;
        goto label_2ad6a8;
    }
    ctx->pc = 0x2AD6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD6A8u);
        ctx->pc = 0x2AD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6A0u;
        // 0x2ad6a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD6A0u, 0x2AD6A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD6A8u;
label_2ad6a8:
    // 0x2ad6a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2ad6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2ad6ac:
    // 0x2ad6ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ad6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad6b0:
    // 0x2ad6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad6b4:
    // 0x2ad6b4: 0x3e00008  jr          $ra
label_2ad6b8:
    if (ctx->pc == 0x2AD6B8u) {
        ctx->pc = 0x2AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6B4u;
        // 0x2ad6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD6BCu;
        goto label_2ad6bc;
    }
    ctx->pc = 0x2AD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6B4u;
        // 0x2ad6b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD6BCu;
label_2ad6bc:
    // 0x2ad6bc: 0x0  nop
    ctx->pc = 0x2ad6bcu;
    // NOP
    ctx->pc = 0x2ad6c0u;
}
