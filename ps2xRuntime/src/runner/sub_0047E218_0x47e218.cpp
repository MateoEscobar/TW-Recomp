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

// Function: sub_0047E218
// Address: 0x47e218 - 0x47e2d8
void sub_0047E218_0x47e218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E218_0x47e218");
#endif

    switch (ctx->pc) {
        case 0x47e218u: goto label_47e218;
        case 0x47e21cu: goto label_47e21c;
        case 0x47e220u: goto label_47e220;
        case 0x47e224u: goto label_47e224;
        case 0x47e228u: goto label_47e228;
        case 0x47e22cu: goto label_47e22c;
        case 0x47e230u: goto label_47e230;
        case 0x47e234u: goto label_47e234;
        case 0x47e238u: goto label_47e238;
        case 0x47e23cu: goto label_47e23c;
        case 0x47e240u: goto label_47e240;
        case 0x47e244u: goto label_47e244;
        case 0x47e248u: goto label_47e248;
        case 0x47e24cu: goto label_47e24c;
        case 0x47e250u: goto label_47e250;
        case 0x47e254u: goto label_47e254;
        case 0x47e258u: goto label_47e258;
        case 0x47e25cu: goto label_47e25c;
        case 0x47e260u: goto label_47e260;
        case 0x47e264u: goto label_47e264;
        case 0x47e268u: goto label_47e268;
        case 0x47e26cu: goto label_47e26c;
        case 0x47e270u: goto label_47e270;
        case 0x47e274u: goto label_47e274;
        case 0x47e278u: goto label_47e278;
        case 0x47e27cu: goto label_47e27c;
        case 0x47e280u: goto label_47e280;
        case 0x47e284u: goto label_47e284;
        case 0x47e288u: goto label_47e288;
        case 0x47e28cu: goto label_47e28c;
        case 0x47e290u: goto label_47e290;
        case 0x47e294u: goto label_47e294;
        case 0x47e298u: goto label_47e298;
        case 0x47e29cu: goto label_47e29c;
        case 0x47e2a0u: goto label_47e2a0;
        case 0x47e2a4u: goto label_47e2a4;
        case 0x47e2a8u: goto label_47e2a8;
        case 0x47e2acu: goto label_47e2ac;
        case 0x47e2b0u: goto label_47e2b0;
        case 0x47e2b4u: goto label_47e2b4;
        case 0x47e2b8u: goto label_47e2b8;
        case 0x47e2bcu: goto label_47e2bc;
        case 0x47e2c0u: goto label_47e2c0;
        case 0x47e2c4u: goto label_47e2c4;
        case 0x47e2c8u: goto label_47e2c8;
        case 0x47e2ccu: goto label_47e2cc;
        case 0x47e2d0u: goto label_47e2d0;
        case 0x47e2d4u: goto label_47e2d4;
        default: break;
    }

    ctx->pc = 0x47e218u;

label_47e218:
    // 0x47e218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47e218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47e21c:
    // 0x47e21c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47e220:
    // 0x47e220: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47e220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47e224:
    // 0x47e224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47e224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47e228:
    // 0x47e228: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47e228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47e22c:
    // 0x47e22c: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x47e22cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_47e230:
    // 0x47e230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47e234:
    // 0x47e234: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x47e234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e238:
    // 0x47e238: 0x10d1000e  beq         $a2, $s1, . + 4 + (0xE << 2)
label_47e23c:
    if (ctx->pc == 0x47E23Cu) {
        ctx->pc = 0x47E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E238u;
        // 0x47e23c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E240u;
        goto label_47e240;
    }
    ctx->pc = 0x47E238u;
    {
        const bool branch_taken_0x47e238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        ctx->pc = 0x47E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E238u;
        // 0x47e23c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e238) {
            ctx->pc = 0x47E274u;
            goto label_47e274;
        }
    }
    ctx->pc = 0x47E240u;
label_47e240:
    // 0x47e240: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x47e240u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_47e244:
    // 0x47e244: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x47e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47e248:
    // 0x47e248: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x47e248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47e24c:
    // 0x47e24c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x47e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_47e250:
    // 0x47e250: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x47e250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_47e254:
    // 0x47e254: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x47e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_47e258:
    // 0x47e258: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x47e258u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_47e25c:
    // 0x47e25c: 0x8e43010c  lw          $v1, 0x10C($s2)
    ctx->pc = 0x47e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_47e260:
    // 0x47e260: 0x60f809  jalr        $v1
label_47e264:
    if (ctx->pc == 0x47E264u) {
        ctx->pc = 0x47E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E260u;
        // 0x47e264: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E268u;
        goto label_47e268;
    }
    ctx->pc = 0x47E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47E268u);
        ctx->pc = 0x47E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E260u;
        // 0x47e264: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E260u, 0x47E268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E268u;
label_47e268:
    // 0x47e268: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x47e268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_47e26c:
    // 0x47e26c: 0x54d1fff6  bnel        $a2, $s1, . + 4 + (-0xA << 2)
label_47e270:
    if (ctx->pc == 0x47E270u) {
        ctx->pc = 0x47E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E26Cu;
        // 0x47e270: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E274u;
        goto label_47e274;
    }
    ctx->pc = 0x47E26Cu;
    {
        const bool branch_taken_0x47e26c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x47e26c) {
            ctx->pc = 0x47E270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E26Cu;
            // 0x47e270: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47e248;
        }
    }
    ctx->pc = 0x47E274u;
label_47e274:
    // 0x47e274: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x47e274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_47e278:
    // 0x47e278: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x47e278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_47e27c:
    // 0x47e27c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_47e280:
    if (ctx->pc == 0x47E280u) {
        ctx->pc = 0x47E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E27Cu;
        // 0x47e280: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E284u;
        goto label_47e284;
    }
    ctx->pc = 0x47E27Cu;
    {
        const bool branch_taken_0x47e27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e27c) {
            ctx->pc = 0x47E280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47E27Cu;
            // 0x47e280: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47E2C0u;
            goto label_47e2c0;
        }
    }
    ctx->pc = 0x47E284u;
label_47e284:
    // 0x47e284: 0x8f8485dc  lw          $a0, -0x7A24($gp)
    ctx->pc = 0x47e284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936028)));
label_47e288:
    // 0x47e288: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
label_47e28c:
    if (ctx->pc == 0x47E28Cu) {
        ctx->pc = 0x47E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E288u;
        // 0x47e28c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E290u;
        goto label_47e290;
    }
    ctx->pc = 0x47E288u;
    {
        const bool branch_taken_0x47e288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x47E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E288u;
        // 0x47e28c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e288) {
            ctx->pc = 0x47E29Cu;
            goto label_47e29c;
        }
    }
    ctx->pc = 0x47E290u;
label_47e290:
    // 0x47e290: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_47e294:
    if (ctx->pc == 0x47E294u) {
        ctx->pc = 0x47E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E290u;
        // 0x47e294: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E298u;
        goto label_47e298;
    }
    ctx->pc = 0x47E290u;
    {
        const bool branch_taken_0x47e290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x47E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E290u;
        // 0x47e294: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e290) {
            ctx->pc = 0x47E2B0u;
            goto label_47e2b0;
        }
    }
    ctx->pc = 0x47E298u;
label_47e298:
    // 0x47e298: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47e298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_47e29c:
    // 0x47e29c: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x47e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_47e2a0:
    // 0x47e2a0: 0x40f809  jalr        $v0
label_47e2a4:
    if (ctx->pc == 0x47E2A4u) {
        ctx->pc = 0x47E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2A0u;
        // 0x47e2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E2A8u;
        goto label_47e2a8;
    }
    ctx->pc = 0x47E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E2A8u);
        ctx->pc = 0x47E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2A0u;
        // 0x47e2a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E2A0u, 0x47E2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E2A8u;
label_47e2a8:
    // 0x47e2a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_47e2ac:
    if (ctx->pc == 0x47E2ACu) {
        ctx->pc = 0x47E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2A8u;
        // 0x47e2ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E2B0u;
        goto label_47e2b0;
    }
    ctx->pc = 0x47E2A8u;
    {
        const bool branch_taken_0x47e2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2A8u;
        // 0x47e2ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47e2a8) {
            ctx->pc = 0x47E2C0u;
            goto label_47e2c0;
        }
    }
    ctx->pc = 0x47E2B0u;
label_47e2b0:
    // 0x47e2b0: 0x8c62ae34  lw          $v0, -0x51CC($v1)
    ctx->pc = 0x47e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946356)));
label_47e2b4:
    // 0x47e2b4: 0x40f809  jalr        $v0
label_47e2b8:
    if (ctx->pc == 0x47E2B8u) {
        ctx->pc = 0x47E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2B4u;
        // 0x47e2b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E2BCu;
        goto label_47e2bc;
    }
    ctx->pc = 0x47E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E2BCu);
        ctx->pc = 0x47E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2B4u;
        // 0x47e2b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E2B4u, 0x47E2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E2BCu;
label_47e2bc:
    // 0x47e2bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47e2bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47e2c0:
    // 0x47e2c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47e2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47e2c4:
    // 0x47e2c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47e2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47e2c8:
    // 0x47e2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47e2cc:
    // 0x47e2cc: 0x3e00008  jr          $ra
label_47e2d0:
    if (ctx->pc == 0x47E2D0u) {
        ctx->pc = 0x47E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2CCu;
        // 0x47e2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47E2D4u;
        goto label_47e2d4;
    }
    ctx->pc = 0x47E2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47E2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47E2CCu;
        // 0x47e2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E2D4u;
label_47e2d4:
    // 0x47e2d4: 0x0  nop
    ctx->pc = 0x47e2d4u;
    // NOP
    ctx->pc = 0x47e2d8u;
}
