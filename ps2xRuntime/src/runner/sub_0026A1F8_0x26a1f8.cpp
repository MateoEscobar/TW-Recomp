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

// Function: sub_0026A1F8
// Address: 0x26a1f8 - 0x26a298
void sub_0026A1F8_0x26a1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A1F8_0x26a1f8");
#endif

    switch (ctx->pc) {
        case 0x26a1f8u: goto label_26a1f8;
        case 0x26a1fcu: goto label_26a1fc;
        case 0x26a200u: goto label_26a200;
        case 0x26a204u: goto label_26a204;
        case 0x26a208u: goto label_26a208;
        case 0x26a20cu: goto label_26a20c;
        case 0x26a210u: goto label_26a210;
        case 0x26a214u: goto label_26a214;
        case 0x26a218u: goto label_26a218;
        case 0x26a21cu: goto label_26a21c;
        case 0x26a220u: goto label_26a220;
        case 0x26a224u: goto label_26a224;
        case 0x26a228u: goto label_26a228;
        case 0x26a22cu: goto label_26a22c;
        case 0x26a230u: goto label_26a230;
        case 0x26a234u: goto label_26a234;
        case 0x26a238u: goto label_26a238;
        case 0x26a23cu: goto label_26a23c;
        case 0x26a240u: goto label_26a240;
        case 0x26a244u: goto label_26a244;
        case 0x26a248u: goto label_26a248;
        case 0x26a24cu: goto label_26a24c;
        case 0x26a250u: goto label_26a250;
        case 0x26a254u: goto label_26a254;
        case 0x26a258u: goto label_26a258;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a260u: goto label_26a260;
        case 0x26a264u: goto label_26a264;
        case 0x26a268u: goto label_26a268;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a270u: goto label_26a270;
        case 0x26a274u: goto label_26a274;
        case 0x26a278u: goto label_26a278;
        case 0x26a27cu: goto label_26a27c;
        case 0x26a280u: goto label_26a280;
        case 0x26a284u: goto label_26a284;
        case 0x26a288u: goto label_26a288;
        case 0x26a28cu: goto label_26a28c;
        case 0x26a290u: goto label_26a290;
        case 0x26a294u: goto label_26a294;
        default: break;
    }

    ctx->pc = 0x26a1f8u;

label_26a1f8:
    // 0x26a1f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26a1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26a1fc:
    // 0x26a1fc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x26a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_26a200:
    // 0x26a200: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26a200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_26a204:
    // 0x26a204: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26a204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26a208:
    // 0x26a208: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26a208u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26a20c:
    // 0x26a20c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26a20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_26a210:
    // 0x26a210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26a214:
    // 0x26a214: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x26a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_26a218:
    // 0x26a218: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x26a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
label_26a21c:
    // 0x26a21c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26a220:
    // 0x26a220: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x26a220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_26a224:
    // 0x26a224: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26a228:
    // 0x26a228: 0x40f809  jalr        $v0
label_26a22c:
    if (ctx->pc == 0x26A22Cu) {
        ctx->pc = 0x26A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A228u;
        // 0x26a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A230u;
        goto label_26a230;
    }
    ctx->pc = 0x26A228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A230u);
        ctx->pc = 0x26A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A228u;
        // 0x26a22c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A228u, 0x26A230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A230u;
label_26a230:
    // 0x26a230: 0xc0899e8  jal         func_2267A0
label_26a234:
    if (ctx->pc == 0x26A234u) {
        ctx->pc = 0x26A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A230u;
        // 0x26a234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A238u;
        goto label_26a238;
    }
    ctx->pc = 0x26A230u;
    SET_GPR_U32(ctx, 31, 0x26A238u);
    ctx->pc = 0x26A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A230u;
    // 0x26a234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x26A230u, 0x26A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A238u;
label_26a238:
    // 0x26a238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a23c:
    // 0x26a23c: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_26a240:
    if (ctx->pc == 0x26A240u) {
        ctx->pc = 0x26A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A23Cu;
        // 0x26a240: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A244u;
        goto label_26a244;
    }
    ctx->pc = 0x26A23Cu;
    {
        const bool branch_taken_0x26a23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a23c) {
            ctx->pc = 0x26A240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A23Cu;
            // 0x26a240: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A284u;
            goto label_26a284;
        }
    }
    ctx->pc = 0x26A244u;
label_26a244:
    // 0x26a244: 0xc087502  jal         func_21D408
label_26a248:
    if (ctx->pc == 0x26A248u) {
        ctx->pc = 0x26A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A244u;
        // 0x26a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A24Cu;
        goto label_26a24c;
    }
    ctx->pc = 0x26A244u;
    SET_GPR_U32(ctx, 31, 0x26A24Cu);
    ctx->pc = 0x26A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A244u;
    // 0x26a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26A244u, 0x26A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A24Cu;
label_26a24c:
    // 0x26a24c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x26a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_26a250:
    // 0x26a250: 0x5460000c  bnel        $v1, $zero, . + 4 + (0xC << 2)
label_26a254:
    if (ctx->pc == 0x26A254u) {
        ctx->pc = 0x26A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A250u;
        // 0x26a254: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A258u;
        goto label_26a258;
    }
    ctx->pc = 0x26A250u;
    {
        const bool branch_taken_0x26a250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a250) {
            ctx->pc = 0x26A254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A250u;
            // 0x26a254: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A284u;
            goto label_26a284;
        }
    }
    ctx->pc = 0x26A258u;
label_26a258:
    // 0x26a258: 0xc089b98  jal         func_226E60
label_26a25c:
    if (ctx->pc == 0x26A25Cu) {
        ctx->pc = 0x26A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A258u;
        // 0x26a25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A260u;
        goto label_26a260;
    }
    ctx->pc = 0x26A258u;
    SET_GPR_U32(ctx, 31, 0x26A260u);
    ctx->pc = 0x26A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A258u;
    // 0x26a25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x26A258u, 0x26A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A260u;
label_26a260:
    // 0x26a260: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
label_26a264:
    if (ctx->pc == 0x26A264u) {
        ctx->pc = 0x26A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A260u;
        // 0x26a264: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A268u;
        goto label_26a268;
    }
    ctx->pc = 0x26A260u;
    {
        const bool branch_taken_0x26a260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x26a260) {
            ctx->pc = 0x26A264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A260u;
            // 0x26a264: 0xae200564  sw          $zero, 0x564($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A284u;
            goto label_26a284;
        }
    }
    ctx->pc = 0x26A268u;
label_26a268:
    // 0x26a268: 0xc087502  jal         func_21D408
label_26a26c:
    if (ctx->pc == 0x26A26Cu) {
        ctx->pc = 0x26A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A268u;
        // 0x26a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A270u;
        goto label_26a270;
    }
    ctx->pc = 0x26A268u;
    SET_GPR_U32(ctx, 31, 0x26A270u);
    ctx->pc = 0x26A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A268u;
    // 0x26a26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26A268u, 0x26A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A270u;
label_26a270:
    // 0x26a270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a274:
    // 0x26a274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a278:
    // 0x26a278: 0xc0a33f8  jal         func_28CFE0
label_26a27c:
    if (ctx->pc == 0x26A27Cu) {
        ctx->pc = 0x26A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A278u;
        // 0x26a27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A280u;
        goto label_26a280;
    }
    ctx->pc = 0x26A278u;
    SET_GPR_U32(ctx, 31, 0x26A280u);
    ctx->pc = 0x26A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A278u;
    // 0x26a27c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x26A278u, 0x26A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A280u;
label_26a280:
    // 0x26a280: 0xae200564  sw          $zero, 0x564($s1)
    ctx->pc = 0x26a280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
label_26a284:
    // 0x26a284: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26a284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26a288:
    // 0x26a288: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26a288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26a28c:
    // 0x26a28c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26a290:
    // 0x26a290: 0x3e00008  jr          $ra
label_26a294:
    if (ctx->pc == 0x26A294u) {
        ctx->pc = 0x26A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A290u;
        // 0x26a294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A298u;
        goto label_fallthrough_0x26a290;
    }
    ctx->pc = 0x26A290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A290u;
        // 0x26a294: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a290:
    ctx->pc = 0x26A298u;
}
