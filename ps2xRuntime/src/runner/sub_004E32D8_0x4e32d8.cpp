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

// Function: sub_004E32D8
// Address: 0x4e32d8 - 0x4e3368
void sub_004E32D8_0x4e32d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E32D8_0x4e32d8");
#endif

    switch (ctx->pc) {
        case 0x4e32d8u: goto label_4e32d8;
        case 0x4e32dcu: goto label_4e32dc;
        case 0x4e32e0u: goto label_4e32e0;
        case 0x4e32e4u: goto label_4e32e4;
        case 0x4e32e8u: goto label_4e32e8;
        case 0x4e32ecu: goto label_4e32ec;
        case 0x4e32f0u: goto label_4e32f0;
        case 0x4e32f4u: goto label_4e32f4;
        case 0x4e32f8u: goto label_4e32f8;
        case 0x4e32fcu: goto label_4e32fc;
        case 0x4e3300u: goto label_4e3300;
        case 0x4e3304u: goto label_4e3304;
        case 0x4e3308u: goto label_4e3308;
        case 0x4e330cu: goto label_4e330c;
        case 0x4e3310u: goto label_4e3310;
        case 0x4e3314u: goto label_4e3314;
        case 0x4e3318u: goto label_4e3318;
        case 0x4e331cu: goto label_4e331c;
        case 0x4e3320u: goto label_4e3320;
        case 0x4e3324u: goto label_4e3324;
        case 0x4e3328u: goto label_4e3328;
        case 0x4e332cu: goto label_4e332c;
        case 0x4e3330u: goto label_4e3330;
        case 0x4e3334u: goto label_4e3334;
        case 0x4e3338u: goto label_4e3338;
        case 0x4e333cu: goto label_4e333c;
        case 0x4e3340u: goto label_4e3340;
        case 0x4e3344u: goto label_4e3344;
        case 0x4e3348u: goto label_4e3348;
        case 0x4e334cu: goto label_4e334c;
        case 0x4e3350u: goto label_4e3350;
        case 0x4e3354u: goto label_4e3354;
        case 0x4e3358u: goto label_4e3358;
        case 0x4e335cu: goto label_4e335c;
        case 0x4e3360u: goto label_4e3360;
        case 0x4e3364u: goto label_4e3364;
        default: break;
    }

    ctx->pc = 0x4e32d8u;

label_4e32d8:
    // 0x4e32d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e32d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e32dc:
    // 0x4e32dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e32e0:
    // 0x4e32e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e32e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e32e4:
    // 0x4e32e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e32e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e32e8:
    // 0x4e32e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e32e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e32ec:
    // 0x4e32ec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_4e32f0:
    if (ctx->pc == 0x4E32F0u) {
        ctx->pc = 0x4E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32ECu;
        // 0x4e32f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E32F4u;
        goto label_4e32f4;
    }
    ctx->pc = 0x4E32ECu;
    {
        const bool branch_taken_0x4e32ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e32ec) {
            ctx->pc = 0x4E32F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E32ECu;
            // 0x4e32f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E32F4u;
            goto label_4e32f4;
        }
    }
    ctx->pc = 0x4E32F4u;
label_4e32f4:
    // 0x4e32f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x4e32f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e32f8:
    // 0x4e32f8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e32fc:
    if (ctx->pc == 0x4E32FCu) {
        ctx->pc = 0x4E32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32F8u;
        // 0x4e32fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3300u;
        goto label_4e3300;
    }
    ctx->pc = 0x4E32F8u;
    {
        const bool branch_taken_0x4e32f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E32F8u;
        // 0x4e32fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e32f8) {
            ctx->pc = 0x4E3324u;
            goto label_4e3324;
        }
    }
    ctx->pc = 0x4E3300u;
label_4e3300:
    // 0x4e3300: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e3300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e3304:
    // 0x4e3304: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e3304u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e3308:
    // 0x4e3308: 0x24c62c10  addiu       $a2, $a2, 0x2C10
    ctx->pc = 0x4e3308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11280));
label_4e330c:
    // 0x4e330c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e330cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e3310:
    // 0x4e3310: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3314:
    // 0x4e3314: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3318:
    // 0x4e3318: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e331c:
    // 0x4e331c: 0x60f809  jalr        $v1
label_4e3320:
    if (ctx->pc == 0x4E3320u) {
        ctx->pc = 0x4E3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E331Cu;
        // 0x4e3320: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3324u;
        goto label_4e3324;
    }
    ctx->pc = 0x4E331Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3324u);
        ctx->pc = 0x4E3320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E331Cu;
        // 0x4e3320: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E331Cu, 0x4E3324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3324u;
label_4e3324:
    // 0x4e3324: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x4e3324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4e3328:
    // 0x4e3328: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x4e3328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4e332c:
    // 0x4e332c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4e332cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e3330:
    // 0x4e3330: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4e3330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_4e3334:
    // 0x4e3334: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4e3334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4e3338:
    // 0x4e3338: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4e3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4e333c:
    // 0x4e333c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4e333cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4e3340:
    // 0x4e3340: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4e3344:
    if (ctx->pc == 0x4E3344u) {
        ctx->pc = 0x4E3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3340u;
        // 0x4e3344: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3348u;
        goto label_4e3348;
    }
    ctx->pc = 0x4E3340u;
    {
        const bool branch_taken_0x4e3340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3340) {
            ctx->pc = 0x4E3344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3340u;
            // 0x4e3344: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3348u;
            goto label_4e3348;
        }
    }
    ctx->pc = 0x4E3348u;
label_4e3348:
    // 0x4e3348: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4e3348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4e334c:
    // 0x4e334c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4e334cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4e3350:
    // 0x4e3350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3354:
    // 0x4e3354: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4e3354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e3358:
    // 0x4e3358: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4e3358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4e335c:
    // 0x4e335c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e335cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3360:
    // 0x4e3360: 0x3e00008  jr          $ra
label_4e3364:
    if (ctx->pc == 0x4E3364u) {
        ctx->pc = 0x4E3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3360u;
        // 0x4e3364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3368u;
        goto label_fallthrough_0x4e3360;
    }
    ctx->pc = 0x4E3360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3360u;
        // 0x4e3364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e3360:
    ctx->pc = 0x4E3368u;
}
