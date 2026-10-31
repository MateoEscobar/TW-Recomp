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

// Function: sub_002792C8
// Address: 0x2792c8 - 0x279410
void sub_002792C8_0x2792c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002792C8_0x2792c8");
#endif

    switch (ctx->pc) {
        case 0x2792c8u: goto label_2792c8;
        case 0x2792ccu: goto label_2792cc;
        case 0x2792d0u: goto label_2792d0;
        case 0x2792d4u: goto label_2792d4;
        case 0x2792d8u: goto label_2792d8;
        case 0x2792dcu: goto label_2792dc;
        case 0x2792e0u: goto label_2792e0;
        case 0x2792e4u: goto label_2792e4;
        case 0x2792e8u: goto label_2792e8;
        case 0x2792ecu: goto label_2792ec;
        case 0x2792f0u: goto label_2792f0;
        case 0x2792f4u: goto label_2792f4;
        case 0x2792f8u: goto label_2792f8;
        case 0x2792fcu: goto label_2792fc;
        case 0x279300u: goto label_279300;
        case 0x279304u: goto label_279304;
        case 0x279308u: goto label_279308;
        case 0x27930cu: goto label_27930c;
        case 0x279310u: goto label_279310;
        case 0x279314u: goto label_279314;
        case 0x279318u: goto label_279318;
        case 0x27931cu: goto label_27931c;
        case 0x279320u: goto label_279320;
        case 0x279324u: goto label_279324;
        case 0x279328u: goto label_279328;
        case 0x27932cu: goto label_27932c;
        case 0x279330u: goto label_279330;
        case 0x279334u: goto label_279334;
        case 0x279338u: goto label_279338;
        case 0x27933cu: goto label_27933c;
        case 0x279340u: goto label_279340;
        case 0x279344u: goto label_279344;
        case 0x279348u: goto label_279348;
        case 0x27934cu: goto label_27934c;
        case 0x279350u: goto label_279350;
        case 0x279354u: goto label_279354;
        case 0x279358u: goto label_279358;
        case 0x27935cu: goto label_27935c;
        case 0x279360u: goto label_279360;
        case 0x279364u: goto label_279364;
        case 0x279368u: goto label_279368;
        case 0x27936cu: goto label_27936c;
        case 0x279370u: goto label_279370;
        case 0x279374u: goto label_279374;
        case 0x279378u: goto label_279378;
        case 0x27937cu: goto label_27937c;
        case 0x279380u: goto label_279380;
        case 0x279384u: goto label_279384;
        case 0x279388u: goto label_279388;
        case 0x27938cu: goto label_27938c;
        case 0x279390u: goto label_279390;
        case 0x279394u: goto label_279394;
        case 0x279398u: goto label_279398;
        case 0x27939cu: goto label_27939c;
        case 0x2793a0u: goto label_2793a0;
        case 0x2793a4u: goto label_2793a4;
        case 0x2793a8u: goto label_2793a8;
        case 0x2793acu: goto label_2793ac;
        case 0x2793b0u: goto label_2793b0;
        case 0x2793b4u: goto label_2793b4;
        case 0x2793b8u: goto label_2793b8;
        case 0x2793bcu: goto label_2793bc;
        case 0x2793c0u: goto label_2793c0;
        case 0x2793c4u: goto label_2793c4;
        case 0x2793c8u: goto label_2793c8;
        case 0x2793ccu: goto label_2793cc;
        case 0x2793d0u: goto label_2793d0;
        case 0x2793d4u: goto label_2793d4;
        case 0x2793d8u: goto label_2793d8;
        case 0x2793dcu: goto label_2793dc;
        case 0x2793e0u: goto label_2793e0;
        case 0x2793e4u: goto label_2793e4;
        case 0x2793e8u: goto label_2793e8;
        case 0x2793ecu: goto label_2793ec;
        case 0x2793f0u: goto label_2793f0;
        case 0x2793f4u: goto label_2793f4;
        case 0x2793f8u: goto label_2793f8;
        case 0x2793fcu: goto label_2793fc;
        case 0x279400u: goto label_279400;
        case 0x279404u: goto label_279404;
        case 0x279408u: goto label_279408;
        case 0x27940cu: goto label_27940c;
        default: break;
    }

    ctx->pc = 0x2792c8u;

label_2792c8:
    // 0x2792c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2792c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2792cc:
    // 0x2792cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2792ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2792d0:
    // 0x2792d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2792d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2792d4:
    // 0x2792d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2792d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2792d8:
    // 0x2792d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2792d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2792dc:
    // 0x2792dc: 0xc08a61a  jal         func_229868
label_2792e0:
    if (ctx->pc == 0x2792E0u) {
        ctx->pc = 0x2792E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792DCu;
        // 0x2792e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792E4u;
        goto label_2792e4;
    }
    ctx->pc = 0x2792DCu;
    SET_GPR_U32(ctx, 31, 0x2792E4u);
    ctx->pc = 0x2792E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792DCu;
    // 0x2792e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2792DCu, 0x2792E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792E4u;
label_2792e4:
    // 0x2792e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2792e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2792e8:
    // 0x2792e8: 0xc08a61a  jal         func_229868
label_2792ec:
    if (ctx->pc == 0x2792ECu) {
        ctx->pc = 0x2792ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792E8u;
        // 0x2792ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792F0u;
        goto label_2792f0;
    }
    ctx->pc = 0x2792E8u;
    SET_GPR_U32(ctx, 31, 0x2792F0u);
    ctx->pc = 0x2792ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2792E8u;
    // 0x2792ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2792E8u, 0x2792F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2792F0u;
label_2792f0:
    // 0x2792f0: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
label_2792f4:
    if (ctx->pc == 0x2792F4u) {
        ctx->pc = 0x2792F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F0u;
        // 0x2792f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792F8u;
        goto label_2792f8;
    }
    ctx->pc = 0x2792F0u;
    {
        const bool branch_taken_0x2792f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F0u;
        // 0x2792f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792f0) {
            ctx->pc = 0x2793F4u;
            goto label_2793f4;
        }
    }
    ctx->pc = 0x2792F8u;
label_2792f8:
    // 0x2792f8: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_2792fc:
    if (ctx->pc == 0x2792FCu) {
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279300u;
        goto label_279300;
    }
    ctx->pc = 0x2792F8u;
    {
        const bool branch_taken_0x2792f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792F8u;
        // 0x2792fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792f8) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x279300u;
label_279300:
    // 0x279300: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_279304:
    // 0x279304: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x279304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_279308:
    // 0x279308: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x279308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_27930c:
    // 0x27930c: 0x40f809  jalr        $v0
label_279310:
    if (ctx->pc == 0x279310u) {
        ctx->pc = 0x279310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27930Cu;
        // 0x279310: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279314u;
        goto label_279314;
    }
    ctx->pc = 0x27930Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x279314u);
        ctx->pc = 0x279310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27930Cu;
        // 0x279310: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27930Cu, 0x279314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x279314u;
label_279314:
    // 0x279314: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_279318:
    if (ctx->pc == 0x279318u) {
        ctx->pc = 0x279318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279314u;
        // 0x279318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27931Cu;
        goto label_27931c;
    }
    ctx->pc = 0x279314u;
    {
        const bool branch_taken_0x279314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279314u;
        // 0x279318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279314) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x27931Cu;
label_27931c:
    // 0x27931c: 0xc089f5e  jal         func_227D78
label_279320:
    if (ctx->pc == 0x279320u) {
        ctx->pc = 0x279320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27931Cu;
        // 0x279320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279324u;
        goto label_279324;
    }
    ctx->pc = 0x27931Cu;
    SET_GPR_U32(ctx, 31, 0x279324u);
    ctx->pc = 0x279320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27931Cu;
    // 0x279320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x27931Cu, 0x279324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279324u;
label_279324:
    // 0x279324: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_279328:
    if (ctx->pc == 0x279328u) {
        ctx->pc = 0x279328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279324u;
        // 0x279328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27932Cu;
        goto label_27932c;
    }
    ctx->pc = 0x279324u;
    {
        const bool branch_taken_0x279324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279324u;
        // 0x279328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279324) {
            ctx->pc = 0x2793F4u;
            goto label_2793f4;
        }
    }
    ctx->pc = 0x27932Cu;
label_27932c:
    // 0x27932c: 0xc088aa4  jal         func_222A90
label_279330:
    if (ctx->pc == 0x279330u) {
        ctx->pc = 0x279330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27932Cu;
        // 0x279330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279334u;
        goto label_279334;
    }
    ctx->pc = 0x27932Cu;
    SET_GPR_U32(ctx, 31, 0x279334u);
    ctx->pc = 0x279330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27932Cu;
    // 0x279330: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x27932Cu, 0x279334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279334u;
label_279334:
    // 0x279334: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_279338:
    if (ctx->pc == 0x279338u) {
        ctx->pc = 0x279338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279334u;
        // 0x279338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27933Cu;
        goto label_27933c;
    }
    ctx->pc = 0x279334u;
    {
        const bool branch_taken_0x279334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279334u;
        // 0x279338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279334) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x27933Cu;
label_27933c:
    // 0x27933c: 0xc0874fa  jal         func_21D3E8
label_279340:
    if (ctx->pc == 0x279340u) {
        ctx->pc = 0x279340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27933Cu;
        // 0x279340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279344u;
        goto label_279344;
    }
    ctx->pc = 0x27933Cu;
    SET_GPR_U32(ctx, 31, 0x279344u);
    ctx->pc = 0x279340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27933Cu;
    // 0x279340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27933Cu, 0x279344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279344u;
label_279344:
    // 0x279344: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x279344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_279348:
    // 0x279348: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_27934c:
    if (ctx->pc == 0x27934Cu) {
        ctx->pc = 0x27934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279348u;
        // 0x27934c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279350u;
        goto label_279350;
    }
    ctx->pc = 0x279348u;
    {
        const bool branch_taken_0x279348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279348u;
        // 0x27934c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279348) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x279350u;
label_279350:
    // 0x279350: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279354:
    // 0x279354: 0xc09e42a  jal         func_2790A8
label_279358:
    if (ctx->pc == 0x279358u) {
        ctx->pc = 0x279358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279354u;
        // 0x279358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27935Cu;
        goto label_27935c;
    }
    ctx->pc = 0x279354u;
    SET_GPR_U32(ctx, 31, 0x27935Cu);
    ctx->pc = 0x279358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279354u;
    // 0x279358: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2790A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2790A8u, 0x279354u, 0x27935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27935Cu;
label_27935c:
    // 0x27935c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279360:
    // 0x279360: 0xc441096c  lwc1        $f1, 0x96C($v0)
    ctx->pc = 0x279360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279364:
    // 0x279364: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279364u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279368:
    // 0x279368: 0x0  nop
    ctx->pc = 0x279368u;
    // NOP
label_27936c:
    // 0x27936c: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_279370:
    if (ctx->pc == 0x279370u) {
        ctx->pc = 0x279370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27936Cu;
        // 0x279370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279374u;
        goto label_279374;
    }
    ctx->pc = 0x27936Cu;
    {
        const bool branch_taken_0x27936c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27936Cu;
        // 0x279370: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27936c) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x279374u;
label_279374:
    // 0x279374: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_279378:
    // 0x279378: 0xc08a684  jal         func_229A10
label_27937c:
    if (ctx->pc == 0x27937Cu) {
        ctx->pc = 0x27937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279378u;
        // 0x27937c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279380u;
        goto label_279380;
    }
    ctx->pc = 0x279378u;
    SET_GPR_U32(ctx, 31, 0x279380u);
    ctx->pc = 0x27937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279378u;
    // 0x27937c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x279378u, 0x279380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279380u;
label_279380:
    // 0x279380: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279384:
    // 0x279384: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279384u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_279388:
    // 0x279388: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x279388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27938c:
    // 0x27938c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27938cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279390:
    // 0x279390: 0x0  nop
    ctx->pc = 0x279390u;
    // NOP
label_279394:
    // 0x279394: 0x45010018  bc1t        . + 4 + (0x18 << 2)
label_279398:
    if (ctx->pc == 0x279398u) {
        ctx->pc = 0x279398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279394u;
        // 0x279398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27939Cu;
        goto label_27939c;
    }
    ctx->pc = 0x279394u;
    {
        const bool branch_taken_0x279394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x279398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279394u;
        // 0x279398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279394) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x27939Cu;
label_27939c:
    // 0x27939c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27939cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2793a0:
    // 0x2793a0: 0xc088a92  jal         func_222A48
label_2793a4:
    if (ctx->pc == 0x2793A4u) {
        ctx->pc = 0x2793A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793A0u;
        // 0x2793a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793A8u;
        goto label_2793a8;
    }
    ctx->pc = 0x2793A0u;
    SET_GPR_U32(ctx, 31, 0x2793A8u);
    ctx->pc = 0x2793A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793A0u;
    // 0x2793a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x2793A0u, 0x2793A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793A8u;
label_2793a8:
    // 0x2793a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2793ac:
    if (ctx->pc == 0x2793ACu) {
        ctx->pc = 0x2793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793A8u;
        // 0x2793ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793B0u;
        goto label_2793b0;
    }
    ctx->pc = 0x2793A8u;
    {
        const bool branch_taken_0x2793a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793A8u;
        // 0x2793ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793a8) {
            ctx->pc = 0x2793F4u;
            goto label_2793f4;
        }
    }
    ctx->pc = 0x2793B0u;
label_2793b0:
    // 0x2793b0: 0xc089f98  jal         func_227E60
label_2793b4:
    if (ctx->pc == 0x2793B4u) {
        ctx->pc = 0x2793B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793B0u;
        // 0x2793b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793B8u;
        goto label_2793b8;
    }
    ctx->pc = 0x2793B0u;
    SET_GPR_U32(ctx, 31, 0x2793B8u);
    ctx->pc = 0x2793B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793B0u;
    // 0x2793b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2793B0u, 0x2793B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793B8u;
label_2793b8:
    // 0x2793b8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2793bc:
    if (ctx->pc == 0x2793BCu) {
        ctx->pc = 0x2793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793B8u;
        // 0x2793bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793C0u;
        goto label_2793c0;
    }
    ctx->pc = 0x2793B8u;
    {
        const bool branch_taken_0x2793b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2793BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793B8u;
        // 0x2793bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793b8) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x2793C0u;
label_2793c0:
    // 0x2793c0: 0xc088ed2  jal         func_223B48
label_2793c4:
    if (ctx->pc == 0x2793C4u) {
        ctx->pc = 0x2793C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793C0u;
        // 0x2793c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793C8u;
        goto label_2793c8;
    }
    ctx->pc = 0x2793C0u;
    SET_GPR_U32(ctx, 31, 0x2793C8u);
    ctx->pc = 0x2793C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793C0u;
    // 0x2793c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2793C0u, 0x2793C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793C8u;
label_2793c8:
    // 0x2793c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2793cc:
    if (ctx->pc == 0x2793CCu) {
        ctx->pc = 0x2793CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793C8u;
        // 0x2793cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793D0u;
        goto label_2793d0;
    }
    ctx->pc = 0x2793C8u;
    {
        const bool branch_taken_0x2793c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2793CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793C8u;
        // 0x2793cc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793c8) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x2793D0u;
label_2793d0:
    // 0x2793d0: 0xc088f04  jal         func_223C10
label_2793d4:
    if (ctx->pc == 0x2793D4u) {
        ctx->pc = 0x2793D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793D0u;
        // 0x2793d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793D8u;
        goto label_2793d8;
    }
    ctx->pc = 0x2793D0u;
    SET_GPR_U32(ctx, 31, 0x2793D8u);
    ctx->pc = 0x2793D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793D0u;
    // 0x2793d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x2793D0u, 0x2793D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793D8u;
label_2793d8:
    // 0x2793d8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2793dc:
    if (ctx->pc == 0x2793DCu) {
        ctx->pc = 0x2793DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793D8u;
        // 0x2793dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793E0u;
        goto label_2793e0;
    }
    ctx->pc = 0x2793D8u;
    {
        const bool branch_taken_0x2793d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2793d8) {
            ctx->pc = 0x2793DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2793D8u;
            // 0x2793dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x2793E0u;
label_2793e0:
    // 0x2793e0: 0xc089fe4  jal         func_227F90
label_2793e4:
    if (ctx->pc == 0x2793E4u) {
        ctx->pc = 0x2793E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793E0u;
        // 0x2793e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793E8u;
        goto label_2793e8;
    }
    ctx->pc = 0x2793E0u;
    SET_GPR_U32(ctx, 31, 0x2793E8u);
    ctx->pc = 0x2793E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2793E0u;
    // 0x2793e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x2793E0u, 0x2793E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2793E8u;
label_2793e8:
    // 0x2793e8: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x2793e8u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2793ec:
    // 0x2793ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2793f0:
    if (ctx->pc == 0x2793F0u) {
        ctx->pc = 0x2793F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793ECu;
        // 0x2793f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2793F4u;
        goto label_2793f4;
    }
    ctx->pc = 0x2793ECu;
    {
        const bool branch_taken_0x2793ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2793F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2793ECu;
        // 0x2793f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2793ec) {
            ctx->pc = 0x2793F8u;
            goto label_2793f8;
        }
    }
    ctx->pc = 0x2793F4u;
label_2793f4:
    // 0x2793f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2793f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2793f8:
    // 0x2793f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2793f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2793fc:
    // 0x2793fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2793fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_279400:
    // 0x279400: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x279400u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_279404:
    // 0x279404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279408:
    // 0x279408: 0x3e00008  jr          $ra
label_27940c:
    if (ctx->pc == 0x27940Cu) {
        ctx->pc = 0x27940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279408u;
        // 0x27940c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279410u;
        goto label_fallthrough_0x279408;
    }
    ctx->pc = 0x279408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279408u;
        // 0x27940c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x279408:
    ctx->pc = 0x279410u;
}
