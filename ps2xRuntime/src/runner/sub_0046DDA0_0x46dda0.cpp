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

// Function: sub_0046DDA0
// Address: 0x46dda0 - 0x46de00
void sub_0046DDA0_0x46dda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DDA0_0x46dda0");
#endif

    switch (ctx->pc) {
        case 0x46dda0u: goto label_46dda0;
        case 0x46dda4u: goto label_46dda4;
        case 0x46dda8u: goto label_46dda8;
        case 0x46ddacu: goto label_46ddac;
        case 0x46ddb0u: goto label_46ddb0;
        case 0x46ddb4u: goto label_46ddb4;
        case 0x46ddb8u: goto label_46ddb8;
        case 0x46ddbcu: goto label_46ddbc;
        case 0x46ddc0u: goto label_46ddc0;
        case 0x46ddc4u: goto label_46ddc4;
        case 0x46ddc8u: goto label_46ddc8;
        case 0x46ddccu: goto label_46ddcc;
        case 0x46ddd0u: goto label_46ddd0;
        case 0x46ddd4u: goto label_46ddd4;
        case 0x46ddd8u: goto label_46ddd8;
        case 0x46dddcu: goto label_46dddc;
        case 0x46dde0u: goto label_46dde0;
        case 0x46dde4u: goto label_46dde4;
        case 0x46dde8u: goto label_46dde8;
        case 0x46ddecu: goto label_46ddec;
        case 0x46ddf0u: goto label_46ddf0;
        case 0x46ddf4u: goto label_46ddf4;
        case 0x46ddf8u: goto label_46ddf8;
        case 0x46ddfcu: goto label_46ddfc;
        default: break;
    }

    ctx->pc = 0x46dda0u;

label_46dda0:
    // 0x46dda0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46dda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_46dda4:
    // 0x46dda4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x46dda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_46dda8:
    // 0x46dda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46dda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46ddac:
    // 0x46ddac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46ddacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46ddb0:
    // 0x46ddb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46ddb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46ddb4:
    // 0x46ddb4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x46ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_46ddb8:
    // 0x46ddb8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_46ddbc:
    if (ctx->pc == 0x46DDBCu) {
        ctx->pc = 0x46DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDB8u;
        // 0x46ddbc: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DDC0u;
        goto label_46ddc0;
    }
    ctx->pc = 0x46DDB8u;
    {
        const bool branch_taken_0x46ddb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDB8u;
        // 0x46ddbc: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ddb8) {
            ctx->pc = 0x46DDD4u;
            goto label_46ddd4;
        }
    }
    ctx->pc = 0x46DDC0u;
label_46ddc0:
    // 0x46ddc0: 0x2622ad18  addiu       $v0, $s1, -0x52E8
    ctx->pc = 0x46ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_46ddc4:
    // 0x46ddc4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46ddc8:
    // 0x46ddc8: 0x60f809  jalr        $v1
label_46ddcc:
    if (ctx->pc == 0x46DDCCu) {
        ctx->pc = 0x46DDD0u;
        goto label_46ddd0;
    }
    ctx->pc = 0x46DDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46DDD0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DDC8u, 0x46DDD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DDD0u;
label_46ddd0:
    // 0x46ddd0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x46ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_46ddd4:
    // 0x46ddd4: 0x2623ad18  addiu       $v1, $s1, -0x52E8
    ctx->pc = 0x46ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946072));
label_46ddd8:
    // 0x46ddd8: 0x8f848500  lw          $a0, -0x7B00($gp)
    ctx->pc = 0x46ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
label_46dddc:
    // 0x46dddc: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x46dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_46dde0:
    // 0x46dde0: 0x40f809  jalr        $v0
label_46dde4:
    if (ctx->pc == 0x46DDE4u) {
        ctx->pc = 0x46DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDE0u;
        // 0x46dde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DDE8u;
        goto label_46dde8;
    }
    ctx->pc = 0x46DDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DDE8u);
        ctx->pc = 0x46DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDE0u;
        // 0x46dde4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DDE0u, 0x46DDE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DDE8u;
label_46dde8:
    // 0x46dde8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x46dde8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46ddec:
    // 0x46ddec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46ddf0:
    // 0x46ddf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ddf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46ddf4:
    // 0x46ddf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ddf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46ddf8:
    // 0x46ddf8: 0x3e00008  jr          $ra
label_46ddfc:
    if (ctx->pc == 0x46DDFCu) {
        ctx->pc = 0x46DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDF8u;
        // 0x46ddfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DE00u;
        goto label_fallthrough_0x46ddf8;
    }
    ctx->pc = 0x46DDF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DDF8u;
        // 0x46ddfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DDF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x46ddf8:
    ctx->pc = 0x46DE00u;
}
