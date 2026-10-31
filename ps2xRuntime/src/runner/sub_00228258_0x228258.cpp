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

// Function: sub_00228258
// Address: 0x228258 - 0x2282d8
void sub_00228258_0x228258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228258_0x228258");
#endif

    switch (ctx->pc) {
        case 0x228290u: goto label_228290;
        default: break;
    }

    ctx->pc = 0x228258u;

    // 0x228258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22825c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22825cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x228260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x228264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x228268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22826c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x22826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x228270: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x228270u;
    {
        const bool branch_taken_0x228270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228270u;
        // 0x228274: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228270) {
            ctx->pc = 0x2282BCu;
            goto label_2282bc;
        }
    }
    ctx->pc = 0x228278u;
    // 0x228278: 0x3405fc04  ori         $a1, $zero, 0xFC04
    ctx->pc = 0x228278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64516);
    // 0x22827c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x22827cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x228280: 0x34a5ba00  ori         $a1, $a1, 0xBA00
    ctx->pc = 0x228280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47616);
    // 0x228284: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x228284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
    // 0x228288: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x228288u;
    SET_GPR_U32(ctx, 31, 0x228290u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x228288u, 0x228290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228290u;
label_228290:
    // 0x228290: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x228290u;
    {
        const bool branch_taken_0x228290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228290) {
            ctx->pc = 0x228294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228290u;
            // 0x228294: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2282BCu;
            goto label_2282bc;
        }
    }
    ctx->pc = 0x228298u;
    // 0x228298: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x228298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x22829c: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x22829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2282a0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2282a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2282a4: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x2282a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x2282a8: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2282ac: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2282acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2282b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2282B0u;
    {
        const bool branch_taken_0x2282b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2282B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282B0u;
        // 0x2282b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2282b0) {
            ctx->pc = 0x2282C0u;
            goto label_2282c0;
        }
    }
    ctx->pc = 0x2282B8u;
    // 0x2282b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2282b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2282bc:
    // 0x2282bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2282bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2282c0:
    // 0x2282c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2282c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2282c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2282c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2282c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2282c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2282cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2282CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2282D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2282CCu;
        // 0x2282d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2282CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2282D4u;
    // 0x2282d4: 0x0  nop
    ctx->pc = 0x2282d4u;
    // NOP
    ctx->pc = 0x2282d8u;
}
