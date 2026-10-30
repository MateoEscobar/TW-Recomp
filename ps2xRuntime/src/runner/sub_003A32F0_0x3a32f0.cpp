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

// Function: sub_003A32F0
// Address: 0x3a32f0 - 0x3a3368
void sub_003A32F0_0x3a32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A32F0_0x3a32f0");
#endif

    switch (ctx->pc) {
        case 0x3a32f0u: goto label_3a32f0;
        case 0x3a32f4u: goto label_3a32f4;
        case 0x3a32f8u: goto label_3a32f8;
        case 0x3a32fcu: goto label_3a32fc;
        case 0x3a3300u: goto label_3a3300;
        case 0x3a3304u: goto label_3a3304;
        case 0x3a3308u: goto label_3a3308;
        case 0x3a330cu: goto label_3a330c;
        case 0x3a3310u: goto label_3a3310;
        case 0x3a3314u: goto label_3a3314;
        case 0x3a3318u: goto label_3a3318;
        case 0x3a331cu: goto label_3a331c;
        case 0x3a3320u: goto label_3a3320;
        case 0x3a3324u: goto label_3a3324;
        case 0x3a3328u: goto label_3a3328;
        case 0x3a332cu: goto label_3a332c;
        case 0x3a3330u: goto label_3a3330;
        case 0x3a3334u: goto label_3a3334;
        case 0x3a3338u: goto label_3a3338;
        case 0x3a333cu: goto label_3a333c;
        case 0x3a3340u: goto label_3a3340;
        case 0x3a3344u: goto label_3a3344;
        case 0x3a3348u: goto label_3a3348;
        case 0x3a334cu: goto label_3a334c;
        case 0x3a3350u: goto label_3a3350;
        case 0x3a3354u: goto label_3a3354;
        case 0x3a3358u: goto label_3a3358;
        case 0x3a335cu: goto label_3a335c;
        case 0x3a3360u: goto label_3a3360;
        case 0x3a3364u: goto label_3a3364;
        default: break;
    }

    ctx->pc = 0x3a32f0u;

label_3a32f0:
    // 0x3a32f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3a32f4:
    // 0x3a32f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3a32f8:
    // 0x3a32f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a32fc:
    // 0x3a32fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a32fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a3300:
    // 0x3a3300: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a3300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3a3304:
    // 0x3a3304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a3304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3308:
    // 0x3a3308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a3308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a330c:
    // 0x3a330c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a330cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a3310:
    // 0x3a3310: 0x8e22082c  lw          $v0, 0x82C($s1)
    ctx->pc = 0x3a3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2092)));
label_3a3314:
    // 0x3a3314: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a3314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a3318:
    // 0x3a3318: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x3a3318u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_3a331c:
    // 0x3a331c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x3a331cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_3a3320:
    // 0x3a3320: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3a3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3a3324:
    // 0x3a3324: 0x40f809  jalr        $v0
label_3a3328:
    if (ctx->pc == 0x3A3328u) {
        ctx->pc = 0x3A3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3324u;
        // 0x3a3328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A332Cu;
        goto label_3a332c;
    }
    ctx->pc = 0x3A3324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A332Cu);
        ctx->pc = 0x3A3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3324u;
        // 0x3a3328: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3324u, 0x3A332Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A332Cu;
label_3a332c:
    // 0x3a332c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3a332cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_3a3330:
    // 0x3a3330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a3334:
    if (ctx->pc == 0x3A3334u) {
        ctx->pc = 0x3A3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3330u;
        // 0x3a3334: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3338u;
        goto label_3a3338;
    }
    ctx->pc = 0x3A3330u;
    {
        const bool branch_taken_0x3a3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3330u;
        // 0x3a3334: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3330) {
            ctx->pc = 0x3A3340u;
            goto label_3a3340;
        }
    }
    ctx->pc = 0x3A3338u;
label_3a3338:
    // 0x3a3338: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a333c:
    if (ctx->pc == 0x3A333Cu) {
        ctx->pc = 0x3A333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3338u;
        // 0x3a333c: 0xa6000060  sh          $zero, 0x60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3340u;
        goto label_3a3340;
    }
    ctx->pc = 0x3A3338u;
    {
        const bool branch_taken_0x3a3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3338u;
        // 0x3a333c: 0xa6000060  sh          $zero, 0x60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3338) {
            ctx->pc = 0x3A3344u;
            goto label_3a3344;
        }
    }
    ctx->pc = 0x3A3340u;
label_3a3340:
    // 0x3a3340: 0x8e240830  lw          $a0, 0x830($s1)
    ctx->pc = 0x3a3340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2096)));
label_3a3344:
    // 0x3a3344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a3344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a3348:
    // 0x3a3348: 0xc0e8d1e  jal         func_3A3478
label_3a334c:
    if (ctx->pc == 0x3A334Cu) {
        ctx->pc = 0x3A334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3348u;
        // 0x3a334c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3350u;
        goto label_3a3350;
    }
    ctx->pc = 0x3A3348u;
    SET_GPR_U32(ctx, 31, 0x3A3350u);
    ctx->pc = 0x3A334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3348u;
    // 0x3a334c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3478u, 0x3A3348u, 0x3A3350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3350u;
label_3a3350:
    // 0x3a3350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a3350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a3354:
    // 0x3a3354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a3354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a3358:
    // 0x3a3358: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a3358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a335c:
    // 0x3a335c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a335cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3360:
    // 0x3a3360: 0x3e00008  jr          $ra
label_3a3364:
    if (ctx->pc == 0x3A3364u) {
        ctx->pc = 0x3A3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3360u;
        // 0x3a3364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3368u;
        goto label_fallthrough_0x3a3360;
    }
    ctx->pc = 0x3A3360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3360u;
        // 0x3a3364: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a3360:
    ctx->pc = 0x3A3368u;
}
