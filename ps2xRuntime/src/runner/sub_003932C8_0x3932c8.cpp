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

// Function: sub_003932C8
// Address: 0x3932c8 - 0x393450
void sub_003932C8_0x3932c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003932C8_0x3932c8");
#endif

    switch (ctx->pc) {
        case 0x3932c8u: goto label_3932c8;
        case 0x3932ccu: goto label_3932cc;
        case 0x3932d0u: goto label_3932d0;
        case 0x3932d4u: goto label_3932d4;
        case 0x3932d8u: goto label_3932d8;
        case 0x3932dcu: goto label_3932dc;
        case 0x3932e0u: goto label_3932e0;
        case 0x3932e4u: goto label_3932e4;
        case 0x3932e8u: goto label_3932e8;
        case 0x3932ecu: goto label_3932ec;
        case 0x3932f0u: goto label_3932f0;
        case 0x3932f4u: goto label_3932f4;
        case 0x3932f8u: goto label_3932f8;
        case 0x3932fcu: goto label_3932fc;
        case 0x393300u: goto label_393300;
        case 0x393304u: goto label_393304;
        case 0x393308u: goto label_393308;
        case 0x39330cu: goto label_39330c;
        case 0x393310u: goto label_393310;
        case 0x393314u: goto label_393314;
        case 0x393318u: goto label_393318;
        case 0x39331cu: goto label_39331c;
        case 0x393320u: goto label_393320;
        case 0x393324u: goto label_393324;
        case 0x393328u: goto label_393328;
        case 0x39332cu: goto label_39332c;
        case 0x393330u: goto label_393330;
        case 0x393334u: goto label_393334;
        case 0x393338u: goto label_393338;
        case 0x39333cu: goto label_39333c;
        case 0x393340u: goto label_393340;
        case 0x393344u: goto label_393344;
        case 0x393348u: goto label_393348;
        case 0x39334cu: goto label_39334c;
        case 0x393350u: goto label_393350;
        case 0x393354u: goto label_393354;
        case 0x393358u: goto label_393358;
        case 0x39335cu: goto label_39335c;
        case 0x393360u: goto label_393360;
        case 0x393364u: goto label_393364;
        case 0x393368u: goto label_393368;
        case 0x39336cu: goto label_39336c;
        case 0x393370u: goto label_393370;
        case 0x393374u: goto label_393374;
        case 0x393378u: goto label_393378;
        case 0x39337cu: goto label_39337c;
        case 0x393380u: goto label_393380;
        case 0x393384u: goto label_393384;
        case 0x393388u: goto label_393388;
        case 0x39338cu: goto label_39338c;
        case 0x393390u: goto label_393390;
        case 0x393394u: goto label_393394;
        case 0x393398u: goto label_393398;
        case 0x39339cu: goto label_39339c;
        case 0x3933a0u: goto label_3933a0;
        case 0x3933a4u: goto label_3933a4;
        case 0x3933a8u: goto label_3933a8;
        case 0x3933acu: goto label_3933ac;
        case 0x3933b0u: goto label_3933b0;
        case 0x3933b4u: goto label_3933b4;
        case 0x3933b8u: goto label_3933b8;
        case 0x3933bcu: goto label_3933bc;
        case 0x3933c0u: goto label_3933c0;
        case 0x3933c4u: goto label_3933c4;
        case 0x3933c8u: goto label_3933c8;
        case 0x3933ccu: goto label_3933cc;
        case 0x3933d0u: goto label_3933d0;
        case 0x3933d4u: goto label_3933d4;
        case 0x3933d8u: goto label_3933d8;
        case 0x3933dcu: goto label_3933dc;
        case 0x3933e0u: goto label_3933e0;
        case 0x3933e4u: goto label_3933e4;
        case 0x3933e8u: goto label_3933e8;
        case 0x3933ecu: goto label_3933ec;
        case 0x3933f0u: goto label_3933f0;
        case 0x3933f4u: goto label_3933f4;
        case 0x3933f8u: goto label_3933f8;
        case 0x3933fcu: goto label_3933fc;
        case 0x393400u: goto label_393400;
        case 0x393404u: goto label_393404;
        case 0x393408u: goto label_393408;
        case 0x39340cu: goto label_39340c;
        case 0x393410u: goto label_393410;
        case 0x393414u: goto label_393414;
        case 0x393418u: goto label_393418;
        case 0x39341cu: goto label_39341c;
        case 0x393420u: goto label_393420;
        case 0x393424u: goto label_393424;
        case 0x393428u: goto label_393428;
        case 0x39342cu: goto label_39342c;
        case 0x393430u: goto label_393430;
        case 0x393434u: goto label_393434;
        case 0x393438u: goto label_393438;
        case 0x39343cu: goto label_39343c;
        case 0x393440u: goto label_393440;
        case 0x393444u: goto label_393444;
        case 0x393448u: goto label_393448;
        case 0x39344cu: goto label_39344c;
        default: break;
    }

    ctx->pc = 0x3932c8u;

label_3932c8:
    // 0x3932c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3932c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3932cc:
    // 0x3932cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3932ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3932d0:
    // 0x3932d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3932d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3932d4:
    // 0x3932d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3932d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3932d8:
    // 0x3932d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3932d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3932dc:
    // 0x3932dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3932dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3932e0:
    // 0x3932e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3932e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3932e4:
    // 0x3932e4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3932e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3932e8:
    // 0x3932e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3932e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3932ec:
    // 0x3932ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3932ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3932f0:
    // 0x3932f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3932f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3932f4:
    // 0x3932f4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3932f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3932f8:
    // 0x3932f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3932fc:
    // 0x3932fc: 0x40f809  jalr        $v0
label_393300:
    if (ctx->pc == 0x393300u) {
        ctx->pc = 0x393300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932FCu;
        // 0x393300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393304u;
        goto label_393304;
    }
    ctx->pc = 0x3932FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393304u);
        ctx->pc = 0x393300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3932FCu;
        // 0x393300: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3932FCu, 0x393304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393304u;
label_393304:
    // 0x393304: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x393304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_393308:
    // 0x393308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x393308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39330c:
    // 0x39330c: 0xc10c313  jal         func_430C4C
label_393310:
    if (ctx->pc == 0x393310u) {
        ctx->pc = 0x393310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39330Cu;
        // 0x393310: 0x24a50ed8  addiu       $a1, $a1, 0xED8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393314u;
        goto label_393314;
    }
    ctx->pc = 0x39330Cu;
    SET_GPR_U32(ctx, 31, 0x393314u);
    ctx->pc = 0x393310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39330Cu;
    // 0x393310: 0x24a50ed8  addiu       $a1, $a1, 0xED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x39330Cu, 0x393314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393314u;
label_393314:
    // 0x393314: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_393318:
    if (ctx->pc == 0x393318u) {
        ctx->pc = 0x393318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393314u;
        // 0x393318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39331Cu;
        goto label_39331c;
    }
    ctx->pc = 0x393314u;
    {
        const bool branch_taken_0x393314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393314u;
        // 0x393318: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393314) {
            ctx->pc = 0x3933DCu;
            goto label_3933dc;
        }
    }
    ctx->pc = 0x39331Cu;
label_39331c:
    // 0x39331c: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x39331cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
label_393320:
    // 0x393320: 0xc0e44cc  jal         func_391330
label_393324:
    if (ctx->pc == 0x393324u) {
        ctx->pc = 0x393324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393320u;
        // 0x393324: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393328u;
        goto label_393328;
    }
    ctx->pc = 0x393320u;
    SET_GPR_U32(ctx, 31, 0x393328u);
    ctx->pc = 0x393324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393320u;
    // 0x393324: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x393320u, 0x393328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393328u;
label_393328:
    // 0x393328: 0x90430064  lbu         $v1, 0x64($v0)
    ctx->pc = 0x393328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 100)));
label_39332c:
    // 0x39332c: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x39332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_393330:
    // 0x393330: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_393334:
    if (ctx->pc == 0x393334u) {
        ctx->pc = 0x393334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393330u;
        // 0x393334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393338u;
        goto label_393338;
    }
    ctx->pc = 0x393330u;
    {
        const bool branch_taken_0x393330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x393334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393330u;
        // 0x393334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393330) {
            ctx->pc = 0x3933E0u;
            goto label_3933e0;
        }
    }
    ctx->pc = 0x393338u;
label_393338:
    // 0x393338: 0xc0e5476  jal         func_3951D8
label_39333c:
    if (ctx->pc == 0x39333Cu) {
        ctx->pc = 0x39333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393338u;
        // 0x39333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393340u;
        goto label_393340;
    }
    ctx->pc = 0x393338u;
    SET_GPR_U32(ctx, 31, 0x393340u);
    ctx->pc = 0x39333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393338u;
    // 0x39333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x393338u, 0x393340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393340u;
label_393340:
    // 0x393340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_393344:
    if (ctx->pc == 0x393344u) {
        ctx->pc = 0x393344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393340u;
        // 0x393344: 0x3c023c4e  lui         $v0, 0x3C4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15438 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393348u;
        goto label_393348;
    }
    ctx->pc = 0x393340u;
    {
        const bool branch_taken_0x393340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393340u;
        // 0x393344: 0x3c023c4e  lui         $v0, 0x3C4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15438 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393340) {
            ctx->pc = 0x393358u;
            goto label_393358;
        }
    }
    ctx->pc = 0x393348u;
label_393348:
    // 0x393348: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x393348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_39334c:
    // 0x39334c: 0x3442590b  ori         $v0, $v0, 0x590B
    ctx->pc = 0x39334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22795);
label_393350:
    // 0x393350: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_393354:
    if (ctx->pc == 0x393354u) {
        ctx->pc = 0x393354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393350u;
        // 0x393354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393358u;
        goto label_393358;
    }
    ctx->pc = 0x393350u;
    {
        const bool branch_taken_0x393350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x393354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393350u;
        // 0x393354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393350) {
            ctx->pc = 0x3933E0u;
            goto label_3933e0;
        }
    }
    ctx->pc = 0x393358u;
label_393358:
    // 0x393358: 0xc0e5476  jal         func_3951D8
label_39335c:
    if (ctx->pc == 0x39335Cu) {
        ctx->pc = 0x39335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393358u;
        // 0x39335c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393360u;
        goto label_393360;
    }
    ctx->pc = 0x393358u;
    SET_GPR_U32(ctx, 31, 0x393360u);
    ctx->pc = 0x39335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393358u;
    // 0x39335c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3951D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3951D8u, 0x393358u, 0x393360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393360u;
label_393360:
    // 0x393360: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_393364:
    if (ctx->pc == 0x393364u) {
        ctx->pc = 0x393368u;
        goto label_393368;
    }
    ctx->pc = 0x393360u;
    {
        const bool branch_taken_0x393360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393360) {
            ctx->pc = 0x3933F0u;
            goto label_3933f0;
        }
    }
    ctx->pc = 0x393368u;
label_393368:
    // 0x393368: 0xc08a61a  jal         func_229868
label_39336c:
    if (ctx->pc == 0x39336Cu) {
        ctx->pc = 0x39336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393368u;
        // 0x39336c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393370u;
        goto label_393370;
    }
    ctx->pc = 0x393368u;
    SET_GPR_U32(ctx, 31, 0x393370u);
    ctx->pc = 0x39336Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393368u;
    // 0x39336c: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x393368u, 0x393370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393370u;
label_393370:
    // 0x393370: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
label_393374:
    if (ctx->pc == 0x393374u) {
        ctx->pc = 0x393374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393370u;
        // 0x393374: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393378u;
        goto label_393378;
    }
    ctx->pc = 0x393370u;
    {
        const bool branch_taken_0x393370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393370) {
            ctx->pc = 0x393374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393370u;
            // 0x393374: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x393378u;
label_393378:
    // 0x393378: 0x5220002e  beql        $s1, $zero, . + 4 + (0x2E << 2)
label_39337c:
    if (ctx->pc == 0x39337Cu) {
        ctx->pc = 0x39337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393378u;
        // 0x39337c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393380u;
        goto label_393380;
    }
    ctx->pc = 0x393378u;
    {
        const bool branch_taken_0x393378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x393378) {
            ctx->pc = 0x39337Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393378u;
            // 0x39337c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x393380u;
label_393380:
    // 0x393380: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x393380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_393384:
    // 0x393384: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x393384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_393388:
    // 0x393388: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x393388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_39338c:
    // 0x39338c: 0x40f809  jalr        $v0
label_393390:
    if (ctx->pc == 0x393390u) {
        ctx->pc = 0x393390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39338Cu;
        // 0x393390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393394u;
        goto label_393394;
    }
    ctx->pc = 0x39338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x393394u);
        ctx->pc = 0x393390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39338Cu;
        // 0x393390: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39338Cu, 0x393394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x393394u;
label_393394:
    // 0x393394: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_393398:
    if (ctx->pc == 0x393398u) {
        ctx->pc = 0x393398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393394u;
        // 0x393398: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39339Cu;
        goto label_39339c;
    }
    ctx->pc = 0x393394u;
    {
        const bool branch_taken_0x393394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393394) {
            ctx->pc = 0x393398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393394u;
            // 0x393398: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x39339Cu;
label_39339c:
    // 0x39339c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x39339cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3933a0:
    // 0x3933a0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3933a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3933a4:
    // 0x3933a4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3933a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3933a8:
    // 0x3933a8: 0x40f809  jalr        $v0
label_3933ac:
    if (ctx->pc == 0x3933ACu) {
        ctx->pc = 0x3933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A8u;
        // 0x3933ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933B0u;
        goto label_3933b0;
    }
    ctx->pc = 0x3933A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3933B0u);
        ctx->pc = 0x3933ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933A8u;
        // 0x3933ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3933A8u, 0x3933B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3933B0u;
label_3933b0:
    // 0x3933b0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x3933b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_3933b4:
    // 0x3933b4: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_3933b8:
    if (ctx->pc == 0x3933B8u) {
        ctx->pc = 0x3933B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933B4u;
        // 0x3933b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933BCu;
        goto label_3933bc;
    }
    ctx->pc = 0x3933B4u;
    {
        const bool branch_taken_0x3933b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3933b4) {
            ctx->pc = 0x3933B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3933B4u;
            // 0x3933b8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x3933BCu;
label_3933bc:
    // 0x3933bc: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3933bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3933c0:
    // 0x3933c0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3933c4:
    if (ctx->pc == 0x3933C4u) {
        ctx->pc = 0x3933C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933C0u;
        // 0x3933c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933C8u;
        goto label_3933c8;
    }
    ctx->pc = 0x3933C0u;
    {
        const bool branch_taken_0x3933c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3933c0) {
            ctx->pc = 0x3933C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3933C0u;
            // 0x3933c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3933E0u;
            goto label_3933e0;
        }
    }
    ctx->pc = 0x3933C8u;
label_3933c8:
    // 0x3933c8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3933c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3933cc:
    // 0x3933cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3933ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3933d0:
    // 0x3933d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3933d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3933d4:
    // 0x3933d4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_3933d8:
    if (ctx->pc == 0x3933D8u) {
        ctx->pc = 0x3933D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933D4u;
        // 0x3933d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933DCu;
        goto label_3933dc;
    }
    ctx->pc = 0x3933D4u;
    {
        const bool branch_taken_0x3933d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3933d4) {
            ctx->pc = 0x3933D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3933D4u;
            // 0x3933d8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x3933DCu;
label_3933dc:
    // 0x3933dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3933dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3933e0:
    // 0x3933e0: 0xc0e4d14  jal         func_393450
label_3933e4:
    if (ctx->pc == 0x3933E4u) {
        ctx->pc = 0x3933E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933E0u;
        // 0x3933e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933E8u;
        goto label_3933e8;
    }
    ctx->pc = 0x3933E0u;
    SET_GPR_U32(ctx, 31, 0x3933E8u);
    ctx->pc = 0x3933E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3933E0u;
    // 0x3933e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393450u, 0x3933E0u, 0x3933E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3933E8u;
label_3933e8:
    // 0x3933e8: 0x10000012  b           . + 4 + (0x12 << 2)
label_3933ec:
    if (ctx->pc == 0x3933ECu) {
        ctx->pc = 0x3933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933E8u;
        // 0x3933ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933F0u;
        goto label_3933f0;
    }
    ctx->pc = 0x3933E8u;
    {
        const bool branch_taken_0x3933e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3933ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933E8u;
        // 0x3933ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3933e8) {
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x3933F0u;
label_3933f0:
    // 0x3933f0: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
label_3933f4:
    if (ctx->pc == 0x3933F4u) {
        ctx->pc = 0x3933F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3933F0u;
        // 0x3933f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3933F8u;
        goto label_3933f8;
    }
    ctx->pc = 0x3933F0u;
    {
        const bool branch_taken_0x3933f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3933f0) {
            ctx->pc = 0x3933F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3933F0u;
            // 0x3933f4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x393434u;
            goto label_393434;
        }
    }
    ctx->pc = 0x3933F8u;
label_3933f8:
    // 0x3933f8: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x3933f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_3933fc:
    // 0x3933fc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3933fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_393400:
    // 0x393400: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x393400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_393404:
    // 0x393404: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_393408:
    if (ctx->pc == 0x393408u) {
        ctx->pc = 0x393408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393404u;
        // 0x393408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39340Cu;
        goto label_39340c;
    }
    ctx->pc = 0x393404u;
    {
        const bool branch_taken_0x393404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x393408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393404u;
        // 0x393408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393404) {
            ctx->pc = 0x393430u;
            goto label_393430;
        }
    }
    ctx->pc = 0x39340Cu;
label_39340c:
    // 0x39340c: 0xc0e4d14  jal         func_393450
label_393410:
    if (ctx->pc == 0x393410u) {
        ctx->pc = 0x393410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39340Cu;
        // 0x393410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393414u;
        goto label_393414;
    }
    ctx->pc = 0x39340Cu;
    SET_GPR_U32(ctx, 31, 0x393414u);
    ctx->pc = 0x393410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39340Cu;
    // 0x393410: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393450u, 0x39340Cu, 0x393414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393414u;
label_393414:
    // 0x393414: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x393414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_393418:
    // 0x393418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39341c:
    if (ctx->pc == 0x39341Cu) {
        ctx->pc = 0x39341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393418u;
        // 0x39341c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x393420u;
        goto label_393420;
    }
    ctx->pc = 0x393418u;
    {
        const bool branch_taken_0x393418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393418u;
        // 0x39341c: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393418) {
            ctx->pc = 0x393430u;
            goto label_393430;
        }
    }
    ctx->pc = 0x393420u;
label_393420:
    // 0x393420: 0x8e040118  lw          $a0, 0x118($s0)
    ctx->pc = 0x393420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_393424:
    // 0x393424: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x393424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_393428:
    // 0x393428: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x393428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_39342c:
    // 0x39342c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x39342cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_393430:
    // 0x393430: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x393430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_393434:
    // 0x393434: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x393434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_393438:
    // 0x393438: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x393438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39343c:
    // 0x39343c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39343cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_393440:
    // 0x393440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_393444:
    // 0x393444: 0x3e00008  jr          $ra
label_393448:
    if (ctx->pc == 0x393448u) {
        ctx->pc = 0x393448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393444u;
        // 0x393448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39344Cu;
        goto label_39344c;
    }
    ctx->pc = 0x393444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393444u;
        // 0x393448: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39344Cu;
label_39344c:
    // 0x39344c: 0x0  nop
    ctx->pc = 0x39344cu;
    // NOP
    ctx->pc = 0x393450u;
}
