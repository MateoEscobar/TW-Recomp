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

// Function: sub_004BF2E8
// Address: 0x4bf2e8 - 0x4bf350
void sub_004BF2E8_0x4bf2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF2E8_0x4bf2e8");
#endif

    switch (ctx->pc) {
        case 0x4bf2e8u: goto label_4bf2e8;
        case 0x4bf2ecu: goto label_4bf2ec;
        case 0x4bf2f0u: goto label_4bf2f0;
        case 0x4bf2f4u: goto label_4bf2f4;
        case 0x4bf2f8u: goto label_4bf2f8;
        case 0x4bf2fcu: goto label_4bf2fc;
        case 0x4bf300u: goto label_4bf300;
        case 0x4bf304u: goto label_4bf304;
        case 0x4bf308u: goto label_4bf308;
        case 0x4bf30cu: goto label_4bf30c;
        case 0x4bf310u: goto label_4bf310;
        case 0x4bf314u: goto label_4bf314;
        case 0x4bf318u: goto label_4bf318;
        case 0x4bf31cu: goto label_4bf31c;
        case 0x4bf320u: goto label_4bf320;
        case 0x4bf324u: goto label_4bf324;
        case 0x4bf328u: goto label_4bf328;
        case 0x4bf32cu: goto label_4bf32c;
        case 0x4bf330u: goto label_4bf330;
        case 0x4bf334u: goto label_4bf334;
        case 0x4bf338u: goto label_4bf338;
        case 0x4bf33cu: goto label_4bf33c;
        case 0x4bf340u: goto label_4bf340;
        case 0x4bf344u: goto label_4bf344;
        case 0x4bf348u: goto label_4bf348;
        case 0x4bf34cu: goto label_4bf34c;
        default: break;
    }

    ctx->pc = 0x4bf2e8u;

label_4bf2e8:
    // 0x4bf2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf2ec:
    // 0x4bf2ec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4bf2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4bf2f0:
    // 0x4bf2f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf2f4:
    // 0x4bf2f4: 0x8c4341f8  lw          $v1, 0x41F8($v0)
    ctx->pc = 0x4bf2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16888)));
label_4bf2f8:
    // 0x4bf2f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4bf2f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf2fc:
    // 0x4bf2fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4bf300:
    // 0x4bf300: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4bf300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4bf304:
    // 0x4bf304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf308:
    // 0x4bf308: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x4bf308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_4bf30c:
    // 0x4bf30c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4bf30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_4bf310:
    // 0x4bf310: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4bf310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4bf314:
    // 0x4bf314: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4bf318:
    if (ctx->pc == 0x4BF318u) {
        ctx->pc = 0x4BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF314u;
        // 0x4bf318: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF31Cu;
        goto label_4bf31c;
    }
    ctx->pc = 0x4BF314u;
    {
        const bool branch_taken_0x4bf314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF314u;
        // 0x4bf318: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf314) {
            ctx->pc = 0x4BF334u;
            goto label_4bf334;
        }
    }
    ctx->pc = 0x4BF31Cu;
label_4bf31c:
    // 0x4bf31c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4bf31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_4bf320:
    // 0x4bf320: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bf320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4bf324:
    // 0x4bf324: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4bf324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4bf328:
    // 0x4bf328: 0x40f809  jalr        $v0
label_4bf32c:
    if (ctx->pc == 0x4BF32Cu) {
        ctx->pc = 0x4BF330u;
        goto label_4bf330;
    }
    ctx->pc = 0x4BF328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF328u, 0x4BF330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF330u;
label_4bf330:
    // 0x4bf330: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4bf330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4bf334:
    // 0x4bf334: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4bf334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4bf338:
    // 0x4bf338: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf33c:
    // 0x4bf33c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf33cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf340:
    // 0x4bf340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf344:
    // 0x4bf344: 0x3e00008  jr          $ra
label_4bf348:
    if (ctx->pc == 0x4BF348u) {
        ctx->pc = 0x4BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF344u;
        // 0x4bf348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF34Cu;
        goto label_4bf34c;
    }
    ctx->pc = 0x4BF344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF344u;
        // 0x4bf348: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF34Cu;
label_4bf34c:
    // 0x4bf34c: 0x0  nop
    ctx->pc = 0x4bf34cu;
    // NOP
    ctx->pc = 0x4bf350u;
}
