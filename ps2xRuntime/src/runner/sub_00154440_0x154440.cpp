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

// Function: sub_00154440
// Address: 0x154440 - 0x1544c0
void sub_00154440_0x154440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154440_0x154440");
#endif

    switch (ctx->pc) {
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        case 0x154448u: goto label_154448;
        case 0x15444cu: goto label_15444c;
        case 0x154450u: goto label_154450;
        case 0x154454u: goto label_154454;
        case 0x154458u: goto label_154458;
        case 0x15445cu: goto label_15445c;
        case 0x154460u: goto label_154460;
        case 0x154464u: goto label_154464;
        case 0x154468u: goto label_154468;
        case 0x15446cu: goto label_15446c;
        case 0x154470u: goto label_154470;
        case 0x154474u: goto label_154474;
        case 0x154478u: goto label_154478;
        case 0x15447cu: goto label_15447c;
        case 0x154480u: goto label_154480;
        case 0x154484u: goto label_154484;
        case 0x154488u: goto label_154488;
        case 0x15448cu: goto label_15448c;
        case 0x154490u: goto label_154490;
        case 0x154494u: goto label_154494;
        case 0x154498u: goto label_154498;
        case 0x15449cu: goto label_15449c;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544a4u: goto label_1544a4;
        case 0x1544a8u: goto label_1544a8;
        case 0x1544acu: goto label_1544ac;
        case 0x1544b0u: goto label_1544b0;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544b8u: goto label_1544b8;
        case 0x1544bcu: goto label_1544bc;
        default: break;
    }

    ctx->pc = 0x154440u;

label_154440:
    // 0x154440: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x154440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_154444:
    // 0x154444: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x154444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_154448:
    // 0x154448: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x154448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_15444c:
    // 0x15444c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15444cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154450:
    // 0x154450: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x154450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_154454:
    // 0x154454: 0x2e020101  sltiu       $v0, $s0, 0x101
    ctx->pc = 0x154454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_154458:
    // 0x154458: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_15445c:
    if (ctx->pc == 0x15445Cu) {
        ctx->pc = 0x15445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154458u;
        // 0x15445c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154460u;
        goto label_154460;
    }
    ctx->pc = 0x154458u;
    {
        const bool branch_taken_0x154458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154458u;
        // 0x15445c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154458) {
            ctx->pc = 0x154490u;
            goto label_154490;
        }
    }
    ctx->pc = 0x154460u;
label_154460:
    // 0x154460: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_154464:
    // 0x154464: 0x0  nop
    ctx->pc = 0x154464u;
    // NOP
label_154468:
    // 0x154468: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x154468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15446c:
    // 0x15446c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_154470:
    // 0x154470: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x154470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_154474:
    // 0x154474: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x154474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_154478:
    // 0x154478: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_15447c:
    // 0x15447c: 0x60f809  jalr        $v1
label_154480:
    if (ctx->pc == 0x154480u) {
        ctx->pc = 0x154480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15447Cu;
        // 0x154480: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154484u;
        goto label_154484;
    }
    ctx->pc = 0x15447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154484u);
        ctx->pc = 0x154480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15447Cu;
        // 0x154480: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15447Cu, 0x154484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154484u;
label_154484:
    // 0x154484: 0x2e020101  sltiu       $v0, $s0, 0x101
    ctx->pc = 0x154484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
label_154488:
    // 0x154488: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
label_15448c:
    if (ctx->pc == 0x15448Cu) {
        ctx->pc = 0x15448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154488u;
        // 0x15448c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154490u;
        goto label_154490;
    }
    ctx->pc = 0x154488u;
    {
        const bool branch_taken_0x154488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154488) {
            ctx->pc = 0x15448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154488u;
            // 0x15448c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154468;
        }
    }
    ctx->pc = 0x154490u;
label_154490:
    // 0x154490: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_154494:
    // 0x154494: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x154494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154498:
    // 0x154498: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x154498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15449c:
    // 0x15449c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x15449cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1544a0:
    // 0x1544a0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1544a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1544a4:
    // 0x1544a4: 0x60f809  jalr        $v1
label_1544a8:
    if (ctx->pc == 0x1544A8u) {
        ctx->pc = 0x1544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A4u;
        // 0x1544a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544ACu;
        goto label_1544ac;
    }
    ctx->pc = 0x1544A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1544ACu);
        ctx->pc = 0x1544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A4u;
        // 0x1544a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1544A4u, 0x1544ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1544ACu;
label_1544ac:
    // 0x1544ac: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1544acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1544b0:
    // 0x1544b0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1544b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1544b4:
    // 0x1544b4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1544b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1544b8:
    // 0x1544b8: 0x3e00008  jr          $ra
label_1544bc:
    if (ctx->pc == 0x1544BCu) {
        ctx->pc = 0x1544BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544B8u;
        // 0x1544bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544C0u;
        goto label_fallthrough_0x1544b8;
    }
    ctx->pc = 0x1544B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1544BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544B8u;
        // 0x1544bc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1544B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1544b8:
    ctx->pc = 0x1544C0u;
}
