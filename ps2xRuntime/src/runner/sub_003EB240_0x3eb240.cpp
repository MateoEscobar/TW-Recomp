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

// Function: sub_003EB240
// Address: 0x3eb240 - 0x3eb2e8
void sub_003EB240_0x3eb240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB240_0x3eb240");
#endif

    switch (ctx->pc) {
        case 0x3eb240u: goto label_3eb240;
        case 0x3eb244u: goto label_3eb244;
        case 0x3eb248u: goto label_3eb248;
        case 0x3eb24cu: goto label_3eb24c;
        case 0x3eb250u: goto label_3eb250;
        case 0x3eb254u: goto label_3eb254;
        case 0x3eb258u: goto label_3eb258;
        case 0x3eb25cu: goto label_3eb25c;
        case 0x3eb260u: goto label_3eb260;
        case 0x3eb264u: goto label_3eb264;
        case 0x3eb268u: goto label_3eb268;
        case 0x3eb26cu: goto label_3eb26c;
        case 0x3eb270u: goto label_3eb270;
        case 0x3eb274u: goto label_3eb274;
        case 0x3eb278u: goto label_3eb278;
        case 0x3eb27cu: goto label_3eb27c;
        case 0x3eb280u: goto label_3eb280;
        case 0x3eb284u: goto label_3eb284;
        case 0x3eb288u: goto label_3eb288;
        case 0x3eb28cu: goto label_3eb28c;
        case 0x3eb290u: goto label_3eb290;
        case 0x3eb294u: goto label_3eb294;
        case 0x3eb298u: goto label_3eb298;
        case 0x3eb29cu: goto label_3eb29c;
        case 0x3eb2a0u: goto label_3eb2a0;
        case 0x3eb2a4u: goto label_3eb2a4;
        case 0x3eb2a8u: goto label_3eb2a8;
        case 0x3eb2acu: goto label_3eb2ac;
        case 0x3eb2b0u: goto label_3eb2b0;
        case 0x3eb2b4u: goto label_3eb2b4;
        case 0x3eb2b8u: goto label_3eb2b8;
        case 0x3eb2bcu: goto label_3eb2bc;
        case 0x3eb2c0u: goto label_3eb2c0;
        case 0x3eb2c4u: goto label_3eb2c4;
        case 0x3eb2c8u: goto label_3eb2c8;
        case 0x3eb2ccu: goto label_3eb2cc;
        case 0x3eb2d0u: goto label_3eb2d0;
        case 0x3eb2d4u: goto label_3eb2d4;
        case 0x3eb2d8u: goto label_3eb2d8;
        case 0x3eb2dcu: goto label_3eb2dc;
        case 0x3eb2e0u: goto label_3eb2e0;
        case 0x3eb2e4u: goto label_3eb2e4;
        default: break;
    }

    ctx->pc = 0x3eb240u;

label_3eb240:
    // 0x3eb240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3eb240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3eb244:
    // 0x3eb244: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3eb244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3eb248:
    // 0x3eb248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eb248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eb24c:
    // 0x3eb24c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3eb24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb250:
    // 0x3eb250: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eb250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eb254:
    // 0x3eb254: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb254u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb258:
    // 0x3eb258: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb25c:
    // 0x3eb25c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eb25cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eb260:
    // 0x3eb260: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eb260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eb264:
    // 0x3eb264: 0x40f809  jalr        $v0
label_3eb268:
    if (ctx->pc == 0x3EB268u) {
        ctx->pc = 0x3EB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB264u;
        // 0x3eb268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB26Cu;
        goto label_3eb26c;
    }
    ctx->pc = 0x3EB264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB26Cu);
        ctx->pc = 0x3EB268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB264u;
        // 0x3eb268: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB264u, 0x3EB26Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB26Cu;
label_3eb26c:
    // 0x3eb26c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3eb26cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb270:
    // 0x3eb270: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3eb270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3eb274:
    // 0x3eb274: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_3eb278:
    if (ctx->pc == 0x3EB278u) {
        ctx->pc = 0x3EB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB274u;
        // 0x3eb278: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB27Cu;
        goto label_3eb27c;
    }
    ctx->pc = 0x3EB274u;
    {
        const bool branch_taken_0x3eb274 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EB278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB274u;
        // 0x3eb278: 0x2e020014  sltiu       $v0, $s0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb274) {
            ctx->pc = 0x3EB2B4u;
            goto label_3eb2b4;
        }
    }
    ctx->pc = 0x3EB27Cu;
label_3eb27c:
    // 0x3eb27c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3eb280:
    if (ctx->pc == 0x3EB280u) {
        ctx->pc = 0x3EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB27Cu;
        // 0x3eb280: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB284u;
        goto label_3eb284;
    }
    ctx->pc = 0x3EB27Cu;
    {
        const bool branch_taken_0x3eb27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB27Cu;
        // 0x3eb280: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb27c) {
            ctx->pc = 0x3EB294u;
            goto label_3eb294;
        }
    }
    ctx->pc = 0x3EB284u;
label_3eb284:
    // 0x3eb284: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3eb288:
    if (ctx->pc == 0x3EB288u) {
        ctx->pc = 0x3EB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB284u;
        // 0x3eb288: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB28Cu;
        goto label_3eb28c;
    }
    ctx->pc = 0x3EB284u;
    {
        const bool branch_taken_0x3eb284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EB288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB284u;
        // 0x3eb288: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb284) {
            ctx->pc = 0x3EB2A8u;
            goto label_3eb2a8;
        }
    }
    ctx->pc = 0x3EB28Cu;
label_3eb28c:
    // 0x3eb28c: 0x10000012  b           . + 4 + (0x12 << 2)
label_3eb290:
    if (ctx->pc == 0x3EB290u) {
        ctx->pc = 0x3EB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB28Cu;
        // 0x3eb290: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB294u;
        goto label_3eb294;
    }
    ctx->pc = 0x3EB28Cu;
    {
        const bool branch_taken_0x3eb28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB28Cu;
        // 0x3eb290: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb28c) {
            ctx->pc = 0x3EB2D8u;
            goto label_3eb2d8;
        }
    }
    ctx->pc = 0x3EB294u;
label_3eb294:
    // 0x3eb294: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3eb294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3eb298:
    // 0x3eb298: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_3eb29c:
    if (ctx->pc == 0x3EB29Cu) {
        ctx->pc = 0x3EB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB298u;
        // 0x3eb29c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2A0u;
        goto label_3eb2a0;
    }
    ctx->pc = 0x3EB298u;
    {
        const bool branch_taken_0x3eb298 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EB29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB298u;
        // 0x3eb29c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb298) {
            ctx->pc = 0x3EB2BCu;
            goto label_3eb2bc;
        }
    }
    ctx->pc = 0x3EB2A0u;
label_3eb2a0:
    // 0x3eb2a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3eb2a4:
    if (ctx->pc == 0x3EB2A4u) {
        ctx->pc = 0x3EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2A0u;
        // 0x3eb2a4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2A8u;
        goto label_3eb2a8;
    }
    ctx->pc = 0x3EB2A0u;
    {
        const bool branch_taken_0x3eb2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2A0u;
        // 0x3eb2a4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2a0) {
            ctx->pc = 0x3EB2D8u;
            goto label_3eb2d8;
        }
    }
    ctx->pc = 0x3EB2A8u;
label_3eb2a8:
    // 0x3eb2a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eb2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eb2ac:
    // 0x3eb2ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_3eb2b0:
    if (ctx->pc == 0x3EB2B0u) {
        ctx->pc = 0x3EB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2ACu;
        // 0x3eb2b0: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2B4u;
        goto label_3eb2b4;
    }
    ctx->pc = 0x3EB2ACu;
    {
        const bool branch_taken_0x3eb2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2ACu;
        // 0x3eb2b0: 0xa062000c  sb          $v0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2ac) {
            ctx->pc = 0x3EB2D0u;
            goto label_3eb2d0;
        }
    }
    ctx->pc = 0x3EB2B4u;
label_3eb2b4:
    // 0x3eb2b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3eb2b8:
    if (ctx->pc == 0x3EB2B8u) {
        ctx->pc = 0x3EB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2B4u;
        // 0x3eb2b8: 0xa060000c  sb          $zero, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2BCu;
        goto label_3eb2bc;
    }
    ctx->pc = 0x3EB2B4u;
    {
        const bool branch_taken_0x3eb2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2B4u;
        // 0x3eb2b8: 0xa060000c  sb          $zero, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2b4) {
            ctx->pc = 0x3EB2D0u;
            goto label_3eb2d0;
        }
    }
    ctx->pc = 0x3EB2BCu;
label_3eb2bc:
    // 0x3eb2bc: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x3eb2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3eb2c0:
    // 0x3eb2c0: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_3eb2c4:
    // 0x3eb2c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3eb2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3eb2c8:
    // 0x3eb2c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3eb2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3eb2cc:
    // 0x3eb2cc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3eb2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3eb2d0:
    // 0x3eb2d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eb2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eb2d4:
    // 0x3eb2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eb2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb2d8:
    // 0x3eb2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eb2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb2dc:
    // 0x3eb2dc: 0x3e00008  jr          $ra
label_3eb2e0:
    if (ctx->pc == 0x3EB2E0u) {
        ctx->pc = 0x3EB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2DCu;
        // 0x3eb2e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2E4u;
        goto label_3eb2e4;
    }
    ctx->pc = 0x3EB2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2DCu;
        // 0x3eb2e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EB2E4u;
label_3eb2e4:
    // 0x3eb2e4: 0x0  nop
    ctx->pc = 0x3eb2e4u;
    // NOP
    ctx->pc = 0x3eb2e8u;
}
