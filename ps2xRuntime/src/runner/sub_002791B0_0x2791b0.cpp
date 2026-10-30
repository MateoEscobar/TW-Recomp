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

// Function: sub_002791B0
// Address: 0x2791b0 - 0x2792c8
void sub_002791B0_0x2791b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002791B0_0x2791b0");
#endif

    switch (ctx->pc) {
        case 0x2791b0u: goto label_2791b0;
        case 0x2791b4u: goto label_2791b4;
        case 0x2791b8u: goto label_2791b8;
        case 0x2791bcu: goto label_2791bc;
        case 0x2791c0u: goto label_2791c0;
        case 0x2791c4u: goto label_2791c4;
        case 0x2791c8u: goto label_2791c8;
        case 0x2791ccu: goto label_2791cc;
        case 0x2791d0u: goto label_2791d0;
        case 0x2791d4u: goto label_2791d4;
        case 0x2791d8u: goto label_2791d8;
        case 0x2791dcu: goto label_2791dc;
        case 0x2791e0u: goto label_2791e0;
        case 0x2791e4u: goto label_2791e4;
        case 0x2791e8u: goto label_2791e8;
        case 0x2791ecu: goto label_2791ec;
        case 0x2791f0u: goto label_2791f0;
        case 0x2791f4u: goto label_2791f4;
        case 0x2791f8u: goto label_2791f8;
        case 0x2791fcu: goto label_2791fc;
        case 0x279200u: goto label_279200;
        case 0x279204u: goto label_279204;
        case 0x279208u: goto label_279208;
        case 0x27920cu: goto label_27920c;
        case 0x279210u: goto label_279210;
        case 0x279214u: goto label_279214;
        case 0x279218u: goto label_279218;
        case 0x27921cu: goto label_27921c;
        case 0x279220u: goto label_279220;
        case 0x279224u: goto label_279224;
        case 0x279228u: goto label_279228;
        case 0x27922cu: goto label_27922c;
        case 0x279230u: goto label_279230;
        case 0x279234u: goto label_279234;
        case 0x279238u: goto label_279238;
        case 0x27923cu: goto label_27923c;
        case 0x279240u: goto label_279240;
        case 0x279244u: goto label_279244;
        case 0x279248u: goto label_279248;
        case 0x27924cu: goto label_27924c;
        case 0x279250u: goto label_279250;
        case 0x279254u: goto label_279254;
        case 0x279258u: goto label_279258;
        case 0x27925cu: goto label_27925c;
        case 0x279260u: goto label_279260;
        case 0x279264u: goto label_279264;
        case 0x279268u: goto label_279268;
        case 0x27926cu: goto label_27926c;
        case 0x279270u: goto label_279270;
        case 0x279274u: goto label_279274;
        case 0x279278u: goto label_279278;
        case 0x27927cu: goto label_27927c;
        case 0x279280u: goto label_279280;
        case 0x279284u: goto label_279284;
        case 0x279288u: goto label_279288;
        case 0x27928cu: goto label_27928c;
        case 0x279290u: goto label_279290;
        case 0x279294u: goto label_279294;
        case 0x279298u: goto label_279298;
        case 0x27929cu: goto label_27929c;
        case 0x2792a0u: goto label_2792a0;
        case 0x2792a4u: goto label_2792a4;
        case 0x2792a8u: goto label_2792a8;
        case 0x2792acu: goto label_2792ac;
        case 0x2792b0u: goto label_2792b0;
        case 0x2792b4u: goto label_2792b4;
        case 0x2792b8u: goto label_2792b8;
        case 0x2792bcu: goto label_2792bc;
        case 0x2792c0u: goto label_2792c0;
        case 0x2792c4u: goto label_2792c4;
        default: break;
    }

    ctx->pc = 0x2791b0u;

label_2791b0:
    // 0x2791b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2791b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2791b4:
    // 0x2791b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2791b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2791b8:
    // 0x2791b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2791b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2791bc:
    // 0x2791bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2791bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2791c0:
    // 0x2791c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2791c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2791c4:
    // 0x2791c4: 0xc08a61a  jal         func_229868
label_2791c8:
    if (ctx->pc == 0x2791C8u) {
        ctx->pc = 0x2791C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791C4u;
        // 0x2791c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791CCu;
        goto label_2791cc;
    }
    ctx->pc = 0x2791C4u;
    SET_GPR_U32(ctx, 31, 0x2791CCu);
    ctx->pc = 0x2791C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791C4u;
    // 0x2791c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2791C4u, 0x2791CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791CCu;
label_2791cc:
    // 0x2791cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2791ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2791d0:
    // 0x2791d0: 0xc08a61a  jal         func_229868
label_2791d4:
    if (ctx->pc == 0x2791D4u) {
        ctx->pc = 0x2791D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791D0u;
        // 0x2791d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791D8u;
        goto label_2791d8;
    }
    ctx->pc = 0x2791D0u;
    SET_GPR_U32(ctx, 31, 0x2791D8u);
    ctx->pc = 0x2791D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2791D0u;
    // 0x2791d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2791D0u, 0x2791D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2791D8u;
label_2791d8:
    // 0x2791d8: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
label_2791dc:
    if (ctx->pc == 0x2791DCu) {
        ctx->pc = 0x2791DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791D8u;
        // 0x2791dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791E0u;
        goto label_2791e0;
    }
    ctx->pc = 0x2791D8u;
    {
        const bool branch_taken_0x2791d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791D8u;
        // 0x2791dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791d8) {
            ctx->pc = 0x2792A8u;
            goto label_2792a8;
        }
    }
    ctx->pc = 0x2791E0u;
label_2791e0:
    // 0x2791e0: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
label_2791e4:
    if (ctx->pc == 0x2791E4u) {
        ctx->pc = 0x2791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791E0u;
        // 0x2791e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791E8u;
        goto label_2791e8;
    }
    ctx->pc = 0x2791E0u;
    {
        const bool branch_taken_0x2791e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2791E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791E0u;
        // 0x2791e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791e0) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x2791E8u;
label_2791e8:
    // 0x2791e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2791e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2791ec:
    // 0x2791ec: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x2791ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_2791f0:
    // 0x2791f0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x2791f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_2791f4:
    // 0x2791f4: 0x40f809  jalr        $v0
label_2791f8:
    if (ctx->pc == 0x2791F8u) {
        ctx->pc = 0x2791F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791F4u;
        // 0x2791f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2791FCu;
        goto label_2791fc;
    }
    ctx->pc = 0x2791F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2791FCu);
        ctx->pc = 0x2791F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791F4u;
        // 0x2791f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2791F4u, 0x2791FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2791FCu;
label_2791fc:
    // 0x2791fc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_279200:
    if (ctx->pc == 0x279200u) {
        ctx->pc = 0x279200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791FCu;
        // 0x279200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279204u;
        goto label_279204;
    }
    ctx->pc = 0x2791FCu;
    {
        const bool branch_taken_0x2791fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2791FCu;
        // 0x279200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2791fc) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279204u;
label_279204:
    // 0x279204: 0xc089f5e  jal         func_227D78
label_279208:
    if (ctx->pc == 0x279208u) {
        ctx->pc = 0x279208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279204u;
        // 0x279208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27920Cu;
        goto label_27920c;
    }
    ctx->pc = 0x279204u;
    SET_GPR_U32(ctx, 31, 0x27920Cu);
    ctx->pc = 0x279208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279204u;
    // 0x279208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x279204u, 0x27920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27920Cu;
label_27920c:
    // 0x27920c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_279210:
    if (ctx->pc == 0x279210u) {
        ctx->pc = 0x279210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27920Cu;
        // 0x279210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279214u;
        goto label_279214;
    }
    ctx->pc = 0x27920Cu;
    {
        const bool branch_taken_0x27920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27920Cu;
        // 0x279210: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27920c) {
            ctx->pc = 0x2792A8u;
            goto label_2792a8;
        }
    }
    ctx->pc = 0x279214u;
label_279214:
    // 0x279214: 0xc088aa4  jal         func_222A90
label_279218:
    if (ctx->pc == 0x279218u) {
        ctx->pc = 0x279218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279214u;
        // 0x279218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27921Cu;
        goto label_27921c;
    }
    ctx->pc = 0x279214u;
    SET_GPR_U32(ctx, 31, 0x27921Cu);
    ctx->pc = 0x279218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279214u;
    // 0x279218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A90u, 0x279214u, 0x27921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27921Cu;
label_27921c:
    // 0x27921c: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_279220:
    if (ctx->pc == 0x279220u) {
        ctx->pc = 0x279220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27921Cu;
        // 0x279220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279224u;
        goto label_279224;
    }
    ctx->pc = 0x27921Cu;
    {
        const bool branch_taken_0x27921c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27921Cu;
        // 0x279220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27921c) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279224u;
label_279224:
    // 0x279224: 0xc0874fa  jal         func_21D3E8
label_279228:
    if (ctx->pc == 0x279228u) {
        ctx->pc = 0x279228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279224u;
        // 0x279228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27922Cu;
        goto label_27922c;
    }
    ctx->pc = 0x279224u;
    SET_GPR_U32(ctx, 31, 0x27922Cu);
    ctx->pc = 0x279228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279224u;
    // 0x279228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x279224u, 0x27922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27922Cu;
label_27922c:
    // 0x27922c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27922cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_279230:
    // 0x279230: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
label_279234:
    if (ctx->pc == 0x279234u) {
        ctx->pc = 0x279234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279230u;
        // 0x279234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279238u;
        goto label_279238;
    }
    ctx->pc = 0x279230u;
    {
        const bool branch_taken_0x279230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279230u;
        // 0x279234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279230) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279238u;
label_279238:
    // 0x279238: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x279238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27923c:
    // 0x27923c: 0xc08a684  jal         func_229A10
label_279240:
    if (ctx->pc == 0x279240u) {
        ctx->pc = 0x279240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27923Cu;
        // 0x279240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279244u;
        goto label_279244;
    }
    ctx->pc = 0x27923Cu;
    SET_GPR_U32(ctx, 31, 0x279244u);
    ctx->pc = 0x279240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27923Cu;
    // 0x279240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x27923Cu, 0x279244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279244u;
label_279244:
    // 0x279244: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x279244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_279248:
    // 0x279248: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x279248u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27924c:
    // 0x27924c: 0xc4410970  lwc1        $f1, 0x970($v0)
    ctx->pc = 0x27924cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_279250:
    // 0x279250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_279254:
    // 0x279254: 0x0  nop
    ctx->pc = 0x279254u;
    // NOP
label_279258:
    // 0x279258: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_27925c:
    if (ctx->pc == 0x27925Cu) {
        ctx->pc = 0x27925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279258u;
        // 0x27925c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279260u;
        goto label_279260;
    }
    ctx->pc = 0x279258u;
    {
        const bool branch_taken_0x279258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279258u;
        // 0x27925c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279258) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279260u;
label_279260:
    // 0x279260: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x279260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_279264:
    // 0x279264: 0xc088a92  jal         func_222A48
label_279268:
    if (ctx->pc == 0x279268u) {
        ctx->pc = 0x279268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279264u;
        // 0x279268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27926Cu;
        goto label_27926c;
    }
    ctx->pc = 0x279264u;
    SET_GPR_U32(ctx, 31, 0x27926Cu);
    ctx->pc = 0x279268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279264u;
    // 0x279268: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222A48u, 0x279264u, 0x27926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27926Cu;
label_27926c:
    // 0x27926c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_279270:
    if (ctx->pc == 0x279270u) {
        ctx->pc = 0x279270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27926Cu;
        // 0x279270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279274u;
        goto label_279274;
    }
    ctx->pc = 0x27926Cu;
    {
        const bool branch_taken_0x27926c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27926Cu;
        // 0x279270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27926c) {
            ctx->pc = 0x2792A8u;
            goto label_2792a8;
        }
    }
    ctx->pc = 0x279274u;
label_279274:
    // 0x279274: 0xc089f98  jal         func_227E60
label_279278:
    if (ctx->pc == 0x279278u) {
        ctx->pc = 0x279278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279274u;
        // 0x279278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27927Cu;
        goto label_27927c;
    }
    ctx->pc = 0x279274u;
    SET_GPR_U32(ctx, 31, 0x27927Cu);
    ctx->pc = 0x279278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279274u;
    // 0x279278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x279274u, 0x27927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27927Cu;
label_27927c:
    // 0x27927c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_279280:
    if (ctx->pc == 0x279280u) {
        ctx->pc = 0x279280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27927Cu;
        // 0x279280: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279284u;
        goto label_279284;
    }
    ctx->pc = 0x27927Cu;
    {
        const bool branch_taken_0x27927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27927Cu;
        // 0x279280: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27927c) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279284u;
label_279284:
    // 0x279284: 0xc088ed2  jal         func_223B48
label_279288:
    if (ctx->pc == 0x279288u) {
        ctx->pc = 0x279288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279284u;
        // 0x279288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27928Cu;
        goto label_27928c;
    }
    ctx->pc = 0x279284u;
    SET_GPR_U32(ctx, 31, 0x27928Cu);
    ctx->pc = 0x279288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279284u;
    // 0x279288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x279284u, 0x27928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27928Cu;
label_27928c:
    // 0x27928c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_279290:
    if (ctx->pc == 0x279290u) {
        ctx->pc = 0x279290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27928Cu;
        // 0x279290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x279294u;
        goto label_279294;
    }
    ctx->pc = 0x27928Cu;
    {
        const bool branch_taken_0x27928c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27928c) {
            ctx->pc = 0x279290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27928Cu;
            // 0x279290: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x279294u;
label_279294:
    // 0x279294: 0xc088f04  jal         func_223C10
label_279298:
    if (ctx->pc == 0x279298u) {
        ctx->pc = 0x279298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279294u;
        // 0x279298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27929Cu;
        goto label_27929c;
    }
    ctx->pc = 0x279294u;
    SET_GPR_U32(ctx, 31, 0x27929Cu);
    ctx->pc = 0x279298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279294u;
    // 0x279298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x279294u, 0x27929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27929Cu;
label_27929c:
    // 0x27929c: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x27929cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2792a0:
    // 0x2792a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2792a4:
    if (ctx->pc == 0x2792A4u) {
        ctx->pc = 0x2792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792A0u;
        // 0x2792a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792A8u;
        goto label_2792a8;
    }
    ctx->pc = 0x2792A0u;
    {
        const bool branch_taken_0x2792a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792A0u;
        // 0x2792a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2792a0) {
            ctx->pc = 0x2792ACu;
            goto label_2792ac;
        }
    }
    ctx->pc = 0x2792A8u;
label_2792a8:
    // 0x2792a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2792a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2792ac:
    // 0x2792ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2792acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2792b0:
    // 0x2792b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2792b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2792b4:
    // 0x2792b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2792b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2792b8:
    // 0x2792b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2792b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2792bc:
    // 0x2792bc: 0x3e00008  jr          $ra
label_2792c0:
    if (ctx->pc == 0x2792C0u) {
        ctx->pc = 0x2792C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792BCu;
        // 0x2792c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2792C4u;
        goto label_2792c4;
    }
    ctx->pc = 0x2792BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2792C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2792BCu;
        // 0x2792c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2792BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2792C4u;
label_2792c4:
    // 0x2792c4: 0x0  nop
    ctx->pc = 0x2792c4u;
    // NOP
    ctx->pc = 0x2792c8u;
}
