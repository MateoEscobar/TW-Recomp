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

// Function: sub_003DB210
// Address: 0x3db210 - 0x3db298
void sub_003DB210_0x3db210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB210_0x3db210");
#endif

    switch (ctx->pc) {
        case 0x3db210u: goto label_3db210;
        case 0x3db214u: goto label_3db214;
        case 0x3db218u: goto label_3db218;
        case 0x3db21cu: goto label_3db21c;
        case 0x3db220u: goto label_3db220;
        case 0x3db224u: goto label_3db224;
        case 0x3db228u: goto label_3db228;
        case 0x3db22cu: goto label_3db22c;
        case 0x3db230u: goto label_3db230;
        case 0x3db234u: goto label_3db234;
        case 0x3db238u: goto label_3db238;
        case 0x3db23cu: goto label_3db23c;
        case 0x3db240u: goto label_3db240;
        case 0x3db244u: goto label_3db244;
        case 0x3db248u: goto label_3db248;
        case 0x3db24cu: goto label_3db24c;
        case 0x3db250u: goto label_3db250;
        case 0x3db254u: goto label_3db254;
        case 0x3db258u: goto label_3db258;
        case 0x3db25cu: goto label_3db25c;
        case 0x3db260u: goto label_3db260;
        case 0x3db264u: goto label_3db264;
        case 0x3db268u: goto label_3db268;
        case 0x3db26cu: goto label_3db26c;
        case 0x3db270u: goto label_3db270;
        case 0x3db274u: goto label_3db274;
        case 0x3db278u: goto label_3db278;
        case 0x3db27cu: goto label_3db27c;
        case 0x3db280u: goto label_3db280;
        case 0x3db284u: goto label_3db284;
        case 0x3db288u: goto label_3db288;
        case 0x3db28cu: goto label_3db28c;
        case 0x3db290u: goto label_3db290;
        case 0x3db294u: goto label_3db294;
        default: break;
    }

    ctx->pc = 0x3db210u;

label_3db210:
    // 0x3db210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3db210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3db214:
    // 0x3db214: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3db214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3db218:
    // 0x3db218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3db218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3db21c:
    // 0x3db21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3db21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3db220:
    // 0x3db220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3db224:
    // 0x3db224: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3db224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3db228:
    // 0x3db228: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3db228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3db22c:
    // 0x3db22c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3db22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3db230:
    // 0x3db230: 0x40f809  jalr        $v0
label_3db234:
    if (ctx->pc == 0x3DB234u) {
        ctx->pc = 0x3DB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB230u;
        // 0x3db234: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB238u;
        goto label_3db238;
    }
    ctx->pc = 0x3DB230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DB238u);
        ctx->pc = 0x3DB234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB230u;
        // 0x3db234: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB230u, 0x3DB238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DB238u;
label_3db238:
    // 0x3db238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3db238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3db23c:
    // 0x3db23c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3db23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db240:
    // 0x3db240: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3db240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3db244:
    // 0x3db244: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_3db248:
    if (ctx->pc == 0x3DB248u) {
        ctx->pc = 0x3DB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB244u;
        // 0x3db248: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB24Cu;
        goto label_3db24c;
    }
    ctx->pc = 0x3DB244u;
    {
        const bool branch_taken_0x3db244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3db244) {
            ctx->pc = 0x3DB248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DB244u;
            // 0x3db248: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DB264u;
            goto label_3db264;
        }
    }
    ctx->pc = 0x3DB24Cu;
label_3db24c:
    // 0x3db24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3db24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3db250:
    // 0x3db250: 0xc0e858c  jal         func_3A1630
label_3db254:
    if (ctx->pc == 0x3DB254u) {
        ctx->pc = 0x3DB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB250u;
        // 0x3db254: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB258u;
        goto label_3db258;
    }
    ctx->pc = 0x3DB250u;
    SET_GPR_U32(ctx, 31, 0x3DB258u);
    ctx->pc = 0x3DB254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB250u;
    // 0x3db254: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DB250u, 0x3DB258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB258u;
label_3db258:
    // 0x3db258: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3db258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3db25c:
    // 0x3db25c: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3db25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3db260:
    // 0x3db260: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3db260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3db264:
    // 0x3db264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3db264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3db268:
    // 0x3db268: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3db26c:
    if (ctx->pc == 0x3DB26Cu) {
        ctx->pc = 0x3DB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB268u;
        // 0x3db26c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB270u;
        goto label_3db270;
    }
    ctx->pc = 0x3DB268u;
    {
        const bool branch_taken_0x3db268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB268u;
        // 0x3db26c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db268) {
            ctx->pc = 0x3DB27Cu;
            goto label_3db27c;
        }
    }
    ctx->pc = 0x3DB270u;
label_3db270:
    // 0x3db270: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3db270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3db274:
    // 0x3db274: 0x10000002  b           . + 4 + (0x2 << 2)
label_3db278:
    if (ctx->pc == 0x3DB278u) {
        ctx->pc = 0x3DB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB274u;
        // 0x3db278: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB27Cu;
        goto label_3db27c;
    }
    ctx->pc = 0x3DB274u;
    {
        const bool branch_taken_0x3db274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB274u;
        // 0x3db278: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db274) {
            ctx->pc = 0x3DB280u;
            goto label_3db280;
        }
    }
    ctx->pc = 0x3DB27Cu;
label_3db27c:
    // 0x3db27c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3db27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3db280:
    // 0x3db280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3db280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3db284:
    // 0x3db284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3db284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3db288:
    // 0x3db288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3db28c:
    // 0x3db28c: 0x3e00008  jr          $ra
label_3db290:
    if (ctx->pc == 0x3DB290u) {
        ctx->pc = 0x3DB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB28Cu;
        // 0x3db290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DB294u;
        goto label_3db294;
    }
    ctx->pc = 0x3DB28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB28Cu;
        // 0x3db290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB294u;
label_3db294:
    // 0x3db294: 0x0  nop
    ctx->pc = 0x3db294u;
    // NOP
    ctx->pc = 0x3db298u;
}
