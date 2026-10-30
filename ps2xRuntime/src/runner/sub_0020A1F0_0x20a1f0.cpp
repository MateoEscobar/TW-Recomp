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

// Function: sub_0020A1F0
// Address: 0x20a1f0 - 0x20a268
void sub_0020A1F0_0x20a1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A1F0_0x20a1f0");
#endif

    switch (ctx->pc) {
        case 0x20a1f0u: goto label_20a1f0;
        case 0x20a1f4u: goto label_20a1f4;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a1fcu: goto label_20a1fc;
        case 0x20a200u: goto label_20a200;
        case 0x20a204u: goto label_20a204;
        case 0x20a208u: goto label_20a208;
        case 0x20a20cu: goto label_20a20c;
        case 0x20a210u: goto label_20a210;
        case 0x20a214u: goto label_20a214;
        case 0x20a218u: goto label_20a218;
        case 0x20a21cu: goto label_20a21c;
        case 0x20a220u: goto label_20a220;
        case 0x20a224u: goto label_20a224;
        case 0x20a228u: goto label_20a228;
        case 0x20a22cu: goto label_20a22c;
        case 0x20a230u: goto label_20a230;
        case 0x20a234u: goto label_20a234;
        case 0x20a238u: goto label_20a238;
        case 0x20a23cu: goto label_20a23c;
        case 0x20a240u: goto label_20a240;
        case 0x20a244u: goto label_20a244;
        case 0x20a248u: goto label_20a248;
        case 0x20a24cu: goto label_20a24c;
        case 0x20a250u: goto label_20a250;
        case 0x20a254u: goto label_20a254;
        case 0x20a258u: goto label_20a258;
        case 0x20a25cu: goto label_20a25c;
        case 0x20a260u: goto label_20a260;
        case 0x20a264u: goto label_20a264;
        default: break;
    }

    ctx->pc = 0x20a1f0u;

label_20a1f0:
    // 0x20a1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20a1f4:
    // 0x20a1f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20a1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20a1f8:
    // 0x20a1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a1fc:
    // 0x20a1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a200:
    // 0x20a200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20a204:
    // 0x20a204: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20a208:
    // 0x20a208: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_20a20c:
    if (ctx->pc == 0x20A20Cu) {
        ctx->pc = 0x20A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A208u;
        // 0x20a20c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A210u;
        goto label_20a210;
    }
    ctx->pc = 0x20A208u;
    {
        const bool branch_taken_0x20a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A208u;
        // 0x20a20c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a208) {
            ctx->pc = 0x20A24Cu;
            goto label_20a24c;
        }
    }
    ctx->pc = 0x20A210u;
label_20a210:
    // 0x20a210: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x20a210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_20a214:
    // 0x20a214: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a218:
    // 0x20a218: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20a21c:
    // 0x20a21c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20a220:
    // 0x20a220: 0x40f809  jalr        $v0
label_20a224:
    if (ctx->pc == 0x20A224u) {
        ctx->pc = 0x20A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A220u;
        // 0x20a224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A228u;
        goto label_20a228;
    }
    ctx->pc = 0x20A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A228u);
        ctx->pc = 0x20A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A220u;
        // 0x20a224: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A220u, 0x20A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A228u;
label_20a228:
    // 0x20a228: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20a22c:
    if (ctx->pc == 0x20A22Cu) {
        ctx->pc = 0x20A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A228u;
        // 0x20a22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A230u;
        goto label_20a230;
    }
    ctx->pc = 0x20A228u;
    {
        const bool branch_taken_0x20a228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A228u;
        // 0x20a22c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a228) {
            ctx->pc = 0x20A250u;
            goto label_20a250;
        }
    }
    ctx->pc = 0x20A230u;
label_20a230:
    // 0x20a230: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_20a234:
    // 0x20a234: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20a238:
    // 0x20a238: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20a23c:
    // 0x20a23c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20a240:
    // 0x20a240: 0x40f809  jalr        $v0
label_20a244:
    if (ctx->pc == 0x20A244u) {
        ctx->pc = 0x20A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A240u;
        // 0x20a244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A248u;
        goto label_20a248;
    }
    ctx->pc = 0x20A240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20A248u);
        ctx->pc = 0x20A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A240u;
        // 0x20a244: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A240u, 0x20A248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20A248u;
label_20a248:
    // 0x20a248: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x20a248u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a24c:
    // 0x20a24c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20a24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a250:
    // 0x20a250: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20a250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a254:
    // 0x20a254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a258:
    // 0x20a258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20a25c:
    // 0x20a25c: 0x3e00008  jr          $ra
label_20a260:
    if (ctx->pc == 0x20A260u) {
        ctx->pc = 0x20A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A25Cu;
        // 0x20a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A264u;
        goto label_20a264;
    }
    ctx->pc = 0x20A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A25Cu;
        // 0x20a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A264u;
label_20a264:
    // 0x20a264: 0x0  nop
    ctx->pc = 0x20a264u;
    // NOP
    ctx->pc = 0x20a268u;
}
