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

// Function: sub_001AB210
// Address: 0x1ab210 - 0x1ab270
void sub_001AB210_0x1ab210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB210_0x1ab210");
#endif

    switch (ctx->pc) {
        case 0x1ab210u: goto label_1ab210;
        case 0x1ab214u: goto label_1ab214;
        case 0x1ab218u: goto label_1ab218;
        case 0x1ab21cu: goto label_1ab21c;
        case 0x1ab220u: goto label_1ab220;
        case 0x1ab224u: goto label_1ab224;
        case 0x1ab228u: goto label_1ab228;
        case 0x1ab22cu: goto label_1ab22c;
        case 0x1ab230u: goto label_1ab230;
        case 0x1ab234u: goto label_1ab234;
        case 0x1ab238u: goto label_1ab238;
        case 0x1ab23cu: goto label_1ab23c;
        case 0x1ab240u: goto label_1ab240;
        case 0x1ab244u: goto label_1ab244;
        case 0x1ab248u: goto label_1ab248;
        case 0x1ab24cu: goto label_1ab24c;
        case 0x1ab250u: goto label_1ab250;
        case 0x1ab254u: goto label_1ab254;
        case 0x1ab258u: goto label_1ab258;
        case 0x1ab25cu: goto label_1ab25c;
        case 0x1ab260u: goto label_1ab260;
        case 0x1ab264u: goto label_1ab264;
        case 0x1ab268u: goto label_1ab268;
        case 0x1ab26cu: goto label_1ab26c;
        default: break;
    }

    ctx->pc = 0x1ab210u;

label_1ab210:
    // 0x1ab210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ab214:
    // 0x1ab214: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ab214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ab218:
    // 0x1ab218: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ab218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ab21c:
    // 0x1ab21c: 0x24900050  addiu       $s0, $a0, 0x50
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_1ab220:
    // 0x1ab220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ab220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ab224:
    // 0x1ab224: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1ab224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab228:
    // 0x1ab228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ab22c:
    // 0x1ab22c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ab22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab230:
    // 0x1ab230: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ab230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab234:
    // 0x1ab234: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ab234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ab238:
    // 0x1ab238: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1ab23c:
    // 0x1ab23c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1ab23cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1ab240:
    // 0x1ab240: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1ab244:
    // 0x1ab244: 0x40f809  jalr        $v0
label_1ab248:
    if (ctx->pc == 0x1AB248u) {
        ctx->pc = 0x1AB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB244u;
        // 0x1ab248: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB24Cu;
        goto label_1ab24c;
    }
    ctx->pc = 0x1AB244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB24Cu);
        ctx->pc = 0x1AB248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB244u;
        // 0x1ab248: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB244u, 0x1AB24Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB24Cu;
label_1ab24c:
    // 0x1ab24c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1ab24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ab250:
    // 0x1ab250: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1ab254:
    if (ctx->pc == 0x1AB254u) {
        ctx->pc = 0x1AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB250u;
        // 0x1ab254: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB258u;
        goto label_1ab258;
    }
    ctx->pc = 0x1AB250u;
    {
        const bool branch_taken_0x1ab250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB250u;
        // 0x1ab254: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab250) {
            ctx->pc = 0x1AB230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab230;
        }
    }
    ctx->pc = 0x1AB258u;
label_1ab258:
    // 0x1ab258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ab258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ab25c:
    // 0x1ab25c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ab25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ab260:
    // 0x1ab260: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ab260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ab264:
    // 0x1ab264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab268:
    // 0x1ab268: 0x3e00008  jr          $ra
label_1ab26c:
    if (ctx->pc == 0x1AB26Cu) {
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB270u;
        goto label_fallthrough_0x1ab268;
    }
    ctx->pc = 0x1AB268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB268u;
        // 0x1ab26c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ab268:
    ctx->pc = 0x1AB270u;
}
