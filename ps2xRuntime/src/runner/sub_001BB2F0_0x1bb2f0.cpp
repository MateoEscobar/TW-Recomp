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

// Function: sub_001BB2F0
// Address: 0x1bb2f0 - 0x1bb390
void sub_001BB2F0_0x1bb2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB2F0_0x1bb2f0");
#endif

    switch (ctx->pc) {
        case 0x1bb2f0u: goto label_1bb2f0;
        case 0x1bb2f4u: goto label_1bb2f4;
        case 0x1bb2f8u: goto label_1bb2f8;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb300u: goto label_1bb300;
        case 0x1bb304u: goto label_1bb304;
        case 0x1bb308u: goto label_1bb308;
        case 0x1bb30cu: goto label_1bb30c;
        case 0x1bb310u: goto label_1bb310;
        case 0x1bb314u: goto label_1bb314;
        case 0x1bb318u: goto label_1bb318;
        case 0x1bb31cu: goto label_1bb31c;
        case 0x1bb320u: goto label_1bb320;
        case 0x1bb324u: goto label_1bb324;
        case 0x1bb328u: goto label_1bb328;
        case 0x1bb32cu: goto label_1bb32c;
        case 0x1bb330u: goto label_1bb330;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb338u: goto label_1bb338;
        case 0x1bb33cu: goto label_1bb33c;
        case 0x1bb340u: goto label_1bb340;
        case 0x1bb344u: goto label_1bb344;
        case 0x1bb348u: goto label_1bb348;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb350u: goto label_1bb350;
        case 0x1bb354u: goto label_1bb354;
        case 0x1bb358u: goto label_1bb358;
        case 0x1bb35cu: goto label_1bb35c;
        case 0x1bb360u: goto label_1bb360;
        case 0x1bb364u: goto label_1bb364;
        case 0x1bb368u: goto label_1bb368;
        case 0x1bb36cu: goto label_1bb36c;
        case 0x1bb370u: goto label_1bb370;
        case 0x1bb374u: goto label_1bb374;
        case 0x1bb378u: goto label_1bb378;
        case 0x1bb37cu: goto label_1bb37c;
        case 0x1bb380u: goto label_1bb380;
        case 0x1bb384u: goto label_1bb384;
        case 0x1bb388u: goto label_1bb388;
        case 0x1bb38cu: goto label_1bb38c;
        default: break;
    }

    ctx->pc = 0x1bb2f0u;

label_1bb2f0:
    // 0x1bb2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bb2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bb2f4:
    // 0x1bb2f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bb2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1bb2f8:
    // 0x1bb2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bb2fc:
    // 0x1bb2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bb300:
    // 0x1bb300: 0x8e030170  lw          $v1, 0x170($s0)
    ctx->pc = 0x1bb300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_1bb304:
    // 0x1bb304: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_1bb308:
    if (ctx->pc == 0x1BB308u) {
        ctx->pc = 0x1BB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB304u;
        // 0x1bb308: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB30Cu;
        goto label_1bb30c;
    }
    ctx->pc = 0x1BB304u;
    {
        const bool branch_taken_0x1bb304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb304) {
            ctx->pc = 0x1BB308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BB304u;
            // 0x1bb308: 0x8e020178  lw          $v0, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB348u;
            goto label_1bb348;
        }
    }
    ctx->pc = 0x1BB30Cu;
label_1bb30c:
    // 0x1bb30c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1bb310:
    // 0x1bb310: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1bb310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1bb314:
    // 0x1bb314: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1bb318:
    if (ctx->pc == 0x1BB318u) {
        ctx->pc = 0x1BB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB314u;
        // 0x1bb318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB31Cu;
        goto label_1bb31c;
    }
    ctx->pc = 0x1BB314u;
    {
        const bool branch_taken_0x1bb314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB314u;
        // 0x1bb318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb314) {
            ctx->pc = 0x1BB344u;
            goto label_1bb344;
        }
    }
    ctx->pc = 0x1BB31Cu;
label_1bb31c:
    // 0x1bb31c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1bb31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1bb320:
    // 0x1bb320: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb324:
    // 0x1bb324: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1bb324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1bb328:
    // 0x1bb328: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1bb328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1bb32c:
    // 0x1bb32c: 0x40f809  jalr        $v0
label_1bb330:
    if (ctx->pc == 0x1BB330u) {
        ctx->pc = 0x1BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB32Cu;
        // 0x1bb330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB334u;
        goto label_1bb334;
    }
    ctx->pc = 0x1BB32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB334u);
        ctx->pc = 0x1BB330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB32Cu;
        // 0x1bb330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB32Cu, 0x1BB334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB334u;
label_1bb334:
    // 0x1bb334: 0x8e030170  lw          $v1, 0x170($s0)
    ctx->pc = 0x1bb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_1bb338:
    // 0x1bb338: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1bb338u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1bb33c:
    // 0x1bb33c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_1bb340:
    if (ctx->pc == 0x1BB340u) {
        ctx->pc = 0x1BB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB33Cu;
        // 0x1bb340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB344u;
        goto label_1bb344;
    }
    ctx->pc = 0x1BB33Cu;
    {
        const bool branch_taken_0x1bb33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB33Cu;
        // 0x1bb340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb33c) {
            ctx->pc = 0x1BB37Cu;
            goto label_1bb37c;
        }
    }
    ctx->pc = 0x1BB344u;
label_1bb344:
    // 0x1bb344: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x1bb344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_1bb348:
    // 0x1bb348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1bb34c:
    if (ctx->pc == 0x1BB34Cu) {
        ctx->pc = 0x1BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB348u;
        // 0x1bb34c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB350u;
        goto label_1bb350;
    }
    ctx->pc = 0x1BB348u;
    {
        const bool branch_taken_0x1bb348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB348u;
        // 0x1bb34c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb348) {
            ctx->pc = 0x1BB378u;
            goto label_1bb378;
        }
    }
    ctx->pc = 0x1BB350u;
label_1bb350:
    // 0x1bb350: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1bb354:
    // 0x1bb354: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bb358:
    // 0x1bb358: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1bb358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1bb35c:
    // 0x1bb35c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bb360:
    // 0x1bb360: 0x40f809  jalr        $v0
label_1bb364:
    if (ctx->pc == 0x1BB364u) {
        ctx->pc = 0x1BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB360u;
        // 0x1bb364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB368u;
        goto label_1bb368;
    }
    ctx->pc = 0x1BB360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BB368u);
        ctx->pc = 0x1BB364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB360u;
        // 0x1bb364: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB360u, 0x1BB368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BB368u;
label_1bb368:
    // 0x1bb368: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bb36c:
    if (ctx->pc == 0x1BB36Cu) {
        ctx->pc = 0x1BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB368u;
        // 0x1bb36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB370u;
        goto label_1bb370;
    }
    ctx->pc = 0x1BB368u;
    {
        const bool branch_taken_0x1bb368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB368u;
        // 0x1bb36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb368) {
            ctx->pc = 0x1BB37Cu;
            goto label_1bb37c;
        }
    }
    ctx->pc = 0x1BB370u;
label_1bb370:
    // 0x1bb370: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bb374:
    if (ctx->pc == 0x1BB374u) {
        ctx->pc = 0x1BB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB370u;
        // 0x1bb374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB378u;
        goto label_1bb378;
    }
    ctx->pc = 0x1BB370u;
    {
        const bool branch_taken_0x1bb370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB370u;
        // 0x1bb374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb370) {
            ctx->pc = 0x1BB37Cu;
            goto label_1bb37c;
        }
    }
    ctx->pc = 0x1BB378u;
label_1bb378:
    // 0x1bb378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bb378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bb37c:
    // 0x1bb37c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bb37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1bb380:
    // 0x1bb380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb384:
    // 0x1bb384: 0x3e00008  jr          $ra
label_1bb388:
    if (ctx->pc == 0x1BB388u) {
        ctx->pc = 0x1BB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB384u;
        // 0x1bb388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BB38Cu;
        goto label_1bb38c;
    }
    ctx->pc = 0x1BB384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB384u;
        // 0x1bb388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB38Cu;
label_1bb38c:
    // 0x1bb38c: 0x0  nop
    ctx->pc = 0x1bb38cu;
    // NOP
    ctx->pc = 0x1bb390u;
}
