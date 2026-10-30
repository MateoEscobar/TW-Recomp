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

// Function: sub_004134F8
// Address: 0x4134f8 - 0x4136f0
void sub_004134F8_0x4134f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004134F8_0x4134f8");
#endif

    switch (ctx->pc) {
        case 0x4134f8u: goto label_4134f8;
        case 0x4134fcu: goto label_4134fc;
        case 0x413500u: goto label_413500;
        case 0x413504u: goto label_413504;
        case 0x413508u: goto label_413508;
        case 0x41350cu: goto label_41350c;
        case 0x413510u: goto label_413510;
        case 0x413514u: goto label_413514;
        case 0x413518u: goto label_413518;
        case 0x41351cu: goto label_41351c;
        case 0x413520u: goto label_413520;
        case 0x413524u: goto label_413524;
        case 0x413528u: goto label_413528;
        case 0x41352cu: goto label_41352c;
        case 0x413530u: goto label_413530;
        case 0x413534u: goto label_413534;
        case 0x413538u: goto label_413538;
        case 0x41353cu: goto label_41353c;
        case 0x413540u: goto label_413540;
        case 0x413544u: goto label_413544;
        case 0x413548u: goto label_413548;
        case 0x41354cu: goto label_41354c;
        case 0x413550u: goto label_413550;
        case 0x413554u: goto label_413554;
        case 0x413558u: goto label_413558;
        case 0x41355cu: goto label_41355c;
        case 0x413560u: goto label_413560;
        case 0x413564u: goto label_413564;
        case 0x413568u: goto label_413568;
        case 0x41356cu: goto label_41356c;
        case 0x413570u: goto label_413570;
        case 0x413574u: goto label_413574;
        case 0x413578u: goto label_413578;
        case 0x41357cu: goto label_41357c;
        case 0x413580u: goto label_413580;
        case 0x413584u: goto label_413584;
        case 0x413588u: goto label_413588;
        case 0x41358cu: goto label_41358c;
        case 0x413590u: goto label_413590;
        case 0x413594u: goto label_413594;
        case 0x413598u: goto label_413598;
        case 0x41359cu: goto label_41359c;
        case 0x4135a0u: goto label_4135a0;
        case 0x4135a4u: goto label_4135a4;
        case 0x4135a8u: goto label_4135a8;
        case 0x4135acu: goto label_4135ac;
        case 0x4135b0u: goto label_4135b0;
        case 0x4135b4u: goto label_4135b4;
        case 0x4135b8u: goto label_4135b8;
        case 0x4135bcu: goto label_4135bc;
        case 0x4135c0u: goto label_4135c0;
        case 0x4135c4u: goto label_4135c4;
        case 0x4135c8u: goto label_4135c8;
        case 0x4135ccu: goto label_4135cc;
        case 0x4135d0u: goto label_4135d0;
        case 0x4135d4u: goto label_4135d4;
        case 0x4135d8u: goto label_4135d8;
        case 0x4135dcu: goto label_4135dc;
        case 0x4135e0u: goto label_4135e0;
        case 0x4135e4u: goto label_4135e4;
        case 0x4135e8u: goto label_4135e8;
        case 0x4135ecu: goto label_4135ec;
        case 0x4135f0u: goto label_4135f0;
        case 0x4135f4u: goto label_4135f4;
        case 0x4135f8u: goto label_4135f8;
        case 0x4135fcu: goto label_4135fc;
        case 0x413600u: goto label_413600;
        case 0x413604u: goto label_413604;
        case 0x413608u: goto label_413608;
        case 0x41360cu: goto label_41360c;
        case 0x413610u: goto label_413610;
        case 0x413614u: goto label_413614;
        case 0x413618u: goto label_413618;
        case 0x41361cu: goto label_41361c;
        case 0x413620u: goto label_413620;
        case 0x413624u: goto label_413624;
        case 0x413628u: goto label_413628;
        case 0x41362cu: goto label_41362c;
        case 0x413630u: goto label_413630;
        case 0x413634u: goto label_413634;
        case 0x413638u: goto label_413638;
        case 0x41363cu: goto label_41363c;
        case 0x413640u: goto label_413640;
        case 0x413644u: goto label_413644;
        case 0x413648u: goto label_413648;
        case 0x41364cu: goto label_41364c;
        case 0x413650u: goto label_413650;
        case 0x413654u: goto label_413654;
        case 0x413658u: goto label_413658;
        case 0x41365cu: goto label_41365c;
        case 0x413660u: goto label_413660;
        case 0x413664u: goto label_413664;
        case 0x413668u: goto label_413668;
        case 0x41366cu: goto label_41366c;
        case 0x413670u: goto label_413670;
        case 0x413674u: goto label_413674;
        case 0x413678u: goto label_413678;
        case 0x41367cu: goto label_41367c;
        case 0x413680u: goto label_413680;
        case 0x413684u: goto label_413684;
        case 0x413688u: goto label_413688;
        case 0x41368cu: goto label_41368c;
        case 0x413690u: goto label_413690;
        case 0x413694u: goto label_413694;
        case 0x413698u: goto label_413698;
        case 0x41369cu: goto label_41369c;
        case 0x4136a0u: goto label_4136a0;
        case 0x4136a4u: goto label_4136a4;
        case 0x4136a8u: goto label_4136a8;
        case 0x4136acu: goto label_4136ac;
        case 0x4136b0u: goto label_4136b0;
        case 0x4136b4u: goto label_4136b4;
        case 0x4136b8u: goto label_4136b8;
        case 0x4136bcu: goto label_4136bc;
        case 0x4136c0u: goto label_4136c0;
        case 0x4136c4u: goto label_4136c4;
        case 0x4136c8u: goto label_4136c8;
        case 0x4136ccu: goto label_4136cc;
        case 0x4136d0u: goto label_4136d0;
        case 0x4136d4u: goto label_4136d4;
        case 0x4136d8u: goto label_4136d8;
        case 0x4136dcu: goto label_4136dc;
        case 0x4136e0u: goto label_4136e0;
        case 0x4136e4u: goto label_4136e4;
        case 0x4136e8u: goto label_4136e8;
        case 0x4136ecu: goto label_4136ec;
        default: break;
    }

    ctx->pc = 0x4134f8u;

label_4134f8:
    // 0x4134f8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4134f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4134fc:
    // 0x4134fc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4134fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_413500:
    // 0x413500: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x413500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_413504:
    // 0x413504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x413504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413508:
    // 0x413508: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x413508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_41350c:
    // 0x41350c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x41350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_413510:
    // 0x413510: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x413510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_413514:
    // 0x413514: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x413514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_413518:
    // 0x413518: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x413518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_41351c:
    // 0x41351c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x41351cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_413520:
    // 0x413520: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x413520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_413524:
    // 0x413524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x413524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_413528:
    // 0x413528: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x413528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_41352c:
    // 0x41352c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_413530:
    if (ctx->pc == 0x413530u) {
        ctx->pc = 0x413530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41352Cu;
        // 0x413530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413534u;
        goto label_413534;
    }
    ctx->pc = 0x41352Cu;
    {
        const bool branch_taken_0x41352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x413530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41352Cu;
        // 0x413530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41352c) {
            ctx->pc = 0x4136BCu;
            goto label_4136bc;
        }
    }
    ctx->pc = 0x413534u;
label_413534:
    // 0x413534: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x413534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_413538:
    // 0x413538: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x413538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_41353c:
    // 0x41353c: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x41353cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_413540:
    // 0x413540: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x413540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_413544:
    // 0x413544: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_413548:
    if (ctx->pc == 0x413548u) {
        ctx->pc = 0x413548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413544u;
        // 0x413548: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41354Cu;
        goto label_41354c;
    }
    ctx->pc = 0x413544u;
    {
        const bool branch_taken_0x413544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x413548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413544u;
        // 0x413548: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413544) {
            ctx->pc = 0x413580u;
            goto label_413580;
        }
    }
    ctx->pc = 0x41354Cu;
label_41354c:
    // 0x41354c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_413550:
    // 0x413550: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x413550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_413554:
    // 0x413554: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x413554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_413558:
    // 0x413558: 0x40f809  jalr        $v0
label_41355c:
    if (ctx->pc == 0x41355Cu) {
        ctx->pc = 0x41355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413558u;
        // 0x41355c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413560u;
        goto label_413560;
    }
    ctx->pc = 0x413558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413560u);
        ctx->pc = 0x41355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413558u;
        // 0x41355c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413558u, 0x413560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413560u;
label_413560:
    // 0x413560: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x413560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_413564:
    // 0x413564: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x413564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_413568:
    // 0x413568: 0x8c65004c  lw          $a1, 0x4C($v1)
    ctx->pc = 0x413568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41356c:
    // 0x41356c: 0xa0f809  jalr        $a1
label_413570:
    if (ctx->pc == 0x413570u) {
        ctx->pc = 0x413570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41356Cu;
        // 0x413570: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413574u;
        goto label_413574;
    }
    ctx->pc = 0x41356Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x413574u);
        ctx->pc = 0x413570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41356Cu;
        // 0x413570: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41356Cu, 0x413574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413574u;
label_413574:
    // 0x413574: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x413574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_413578:
    // 0x413578: 0x10000002  b           . + 4 + (0x2 << 2)
label_41357c:
    if (ctx->pc == 0x41357Cu) {
        ctx->pc = 0x41357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413578u;
        // 0x41357c: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413580u;
        goto label_413580;
    }
    ctx->pc = 0x413578u;
    {
        const bool branch_taken_0x413578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413578u;
        // 0x41357c: 0xae2200f8  sw          $v0, 0xF8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413578) {
            ctx->pc = 0x413584u;
            goto label_413584;
        }
    }
    ctx->pc = 0x413580u;
label_413580:
    // 0x413580: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x413580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413584:
    // 0x413584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x413584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413588:
    // 0x413588: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x413588u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41358c:
    // 0x41358c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x41358cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_413590:
    // 0x413590: 0x24170005  addiu       $s7, $zero, 0x5
    ctx->pc = 0x413590u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_413594:
    // 0x413594: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x413594u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_413598:
    // 0x413598: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x413598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_41359c:
    // 0x41359c: 0x0  nop
    ctx->pc = 0x41359cu;
    // NOP
label_4135a0:
    // 0x4135a0: 0x92220068  lbu         $v0, 0x68($s1)
    ctx->pc = 0x4135a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
label_4135a4:
    // 0x4135a4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_4135a8:
    if (ctx->pc == 0x4135A8u) {
        ctx->pc = 0x4135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135A4u;
        // 0x4135a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135ACu;
        goto label_4135ac;
    }
    ctx->pc = 0x4135A4u;
    {
        const bool branch_taken_0x4135a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135A4u;
        // 0x4135a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4135a4) {
            ctx->pc = 0x4136BCu;
            goto label_4136bc;
        }
    }
    ctx->pc = 0x4135ACu;
label_4135ac:
    // 0x4135ac: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x4135acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_4135b0:
    // 0x4135b0: 0xc0e409a  jal         func_390268
label_4135b4:
    if (ctx->pc == 0x4135B4u) {
        ctx->pc = 0x4135B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135B0u;
        // 0x4135b4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135B8u;
        goto label_4135b8;
    }
    ctx->pc = 0x4135B0u;
    SET_GPR_U32(ctx, 31, 0x4135B8u);
    ctx->pc = 0x4135B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4135B0u;
    // 0x4135b4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x4135B0u, 0x4135B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4135B8u;
label_4135b8:
    // 0x4135b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4135b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4135bc:
    // 0x4135bc: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
label_4135c0:
    if (ctx->pc == 0x4135C0u) {
        ctx->pc = 0x4135C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135BCu;
        // 0x4135c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135C4u;
        goto label_4135c4;
    }
    ctx->pc = 0x4135BCu;
    {
        const bool branch_taken_0x4135bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4135bc) {
            ctx->pc = 0x4135C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4135BCu;
            // 0x4135c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x4135C4u;
label_4135c4:
    // 0x4135c4: 0xc089fac  jal         func_227EB0
label_4135c8:
    if (ctx->pc == 0x4135C8u) {
        ctx->pc = 0x4135C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135C4u;
        // 0x4135c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135CCu;
        goto label_4135cc;
    }
    ctx->pc = 0x4135C4u;
    SET_GPR_U32(ctx, 31, 0x4135CCu);
    ctx->pc = 0x4135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4135C4u;
    // 0x4135c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x4135C4u, 0x4135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4135CCu;
label_4135cc:
    // 0x4135cc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_4135d0:
    if (ctx->pc == 0x4135D0u) {
        ctx->pc = 0x4135D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135CCu;
        // 0x4135d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135D4u;
        goto label_4135d4;
    }
    ctx->pc = 0x4135CCu;
    {
        const bool branch_taken_0x4135cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4135D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135CCu;
        // 0x4135d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4135cc) {
            ctx->pc = 0x413658u;
            goto label_413658;
        }
    }
    ctx->pc = 0x4135D4u;
label_4135d4:
    // 0x4135d4: 0xc104a70  jal         func_4129C0
label_4135d8:
    if (ctx->pc == 0x4135D8u) {
        ctx->pc = 0x4135D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135D4u;
        // 0x4135d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135DCu;
        goto label_4135dc;
    }
    ctx->pc = 0x4135D4u;
    SET_GPR_U32(ctx, 31, 0x4135DCu);
    ctx->pc = 0x4135D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4135D4u;
    // 0x4135d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C0u, 0x4135D4u, 0x4135DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4135DCu;
label_4135dc:
    // 0x4135dc: 0x1453001e  bne         $v0, $s3, . + 4 + (0x1E << 2)
label_4135e0:
    if (ctx->pc == 0x4135E0u) {
        ctx->pc = 0x4135E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135DCu;
        // 0x4135e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135E4u;
        goto label_4135e4;
    }
    ctx->pc = 0x4135DCu;
    {
        const bool branch_taken_0x4135dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x4135E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135DCu;
        // 0x4135e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4135dc) {
            ctx->pc = 0x413658u;
            goto label_413658;
        }
    }
    ctx->pc = 0x4135E4u;
label_4135e4:
    // 0x4135e4: 0xc104d28  jal         func_4134A0
label_4135e8:
    if (ctx->pc == 0x4135E8u) {
        ctx->pc = 0x4135E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4135E4u;
        // 0x4135e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4135ECu;
        goto label_4135ec;
    }
    ctx->pc = 0x4135E4u;
    SET_GPR_U32(ctx, 31, 0x4135ECu);
    ctx->pc = 0x4135E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4135E4u;
    // 0x4135e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134A0u, 0x4135E4u, 0x4135ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4135ECu;
label_4135ec:
    // 0x4135ec: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4135f0:
    if (ctx->pc == 0x4135F0u) {
        ctx->pc = 0x4135F4u;
        goto label_4135f4;
    }
    ctx->pc = 0x4135ECu;
    {
        const bool branch_taken_0x4135ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4135ec) {
            ctx->pc = 0x413628u;
            goto label_413628;
        }
    }
    ctx->pc = 0x4135F4u;
label_4135f4:
    // 0x4135f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4135f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4135f8:
    // 0x4135f8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x4135f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4135fc:
    // 0x4135fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4135fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_413600:
    // 0x413600: 0x40f809  jalr        $v0
label_413604:
    if (ctx->pc == 0x413604u) {
        ctx->pc = 0x413604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413600u;
        // 0x413604: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413608u;
        goto label_413608;
    }
    ctx->pc = 0x413600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413608u);
        ctx->pc = 0x413604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413600u;
        // 0x413604: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413600u, 0x413608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413608u;
label_413608:
    // 0x413608: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x413608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_41360c:
    // 0x41360c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x41360cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_413610:
    // 0x413610: 0xc136e4a  jal         func_4DB928
label_413614:
    if (ctx->pc == 0x413614u) {
        ctx->pc = 0x413614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413610u;
        // 0x413614: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413618u;
        goto label_413618;
    }
    ctx->pc = 0x413610u;
    SET_GPR_U32(ctx, 31, 0x413618u);
    ctx->pc = 0x413614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413610u;
    // 0x413614: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB928u, 0x413610u, 0x413618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413618u;
label_413618:
    // 0x413618: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x413618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_41361c:
    // 0x41361c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41361cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413620:
    // 0x413620: 0x10000006  b           . + 4 + (0x6 << 2)
label_413624:
    if (ctx->pc == 0x413624u) {
        ctx->pc = 0x413624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413620u;
        // 0x413624: 0xafbe0020  sw          $fp, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413628u;
        goto label_413628;
    }
    ctx->pc = 0x413620u;
    {
        const bool branch_taken_0x413620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413620u;
        // 0x413624: 0xafbe0020  sw          $fp, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413620) {
            ctx->pc = 0x41363Cu;
            goto label_41363c;
        }
    }
    ctx->pc = 0x413628u;
label_413628:
    // 0x413628: 0x56b30021  bnel        $s5, $s3, . + 4 + (0x21 << 2)
label_41362c:
    if (ctx->pc == 0x41362Cu) {
        ctx->pc = 0x41362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413628u;
        // 0x41362c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413630u;
        goto label_413630;
    }
    ctx->pc = 0x413628u;
    {
        const bool branch_taken_0x413628 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        if (branch_taken_0x413628) {
            ctx->pc = 0x41362Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413628u;
            // 0x41362c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x413630u;
label_413630:
    // 0x413630: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x413630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_413634:
    // 0x413634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x413634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413638:
    // 0x413638: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x413638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
label_41363c:
    // 0x41363c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x41363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_413640:
    // 0x413640: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x413640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_413644:
    // 0x413644: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x413644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_413648:
    // 0x413648: 0x40f809  jalr        $v0
label_41364c:
    if (ctx->pc == 0x41364Cu) {
        ctx->pc = 0x41364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413648u;
        // 0x41364c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413650u;
        goto label_413650;
    }
    ctx->pc = 0x413648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413650u);
        ctx->pc = 0x41364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413648u;
        // 0x41364c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413648u, 0x413650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413650u;
label_413650:
    // 0x413650: 0x10000017  b           . + 4 + (0x17 << 2)
label_413654:
    if (ctx->pc == 0x413654u) {
        ctx->pc = 0x413654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413650u;
        // 0x413654: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413658u;
        goto label_413658;
    }
    ctx->pc = 0x413650u;
    {
        const bool branch_taken_0x413650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x413654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413650u;
        // 0x413654: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x413650) {
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x413658u;
label_413658:
    // 0x413658: 0xc104d28  jal         func_4134A0
label_41365c:
    if (ctx->pc == 0x41365Cu) {
        ctx->pc = 0x41365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413658u;
        // 0x41365c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413660u;
        goto label_413660;
    }
    ctx->pc = 0x413658u;
    SET_GPR_U32(ctx, 31, 0x413660u);
    ctx->pc = 0x41365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413658u;
    // 0x41365c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4134A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4134A0u, 0x413658u, 0x413660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413660u;
label_413660:
    // 0x413660: 0x54530013  bnel        $v0, $s3, . + 4 + (0x13 << 2)
label_413664:
    if (ctx->pc == 0x413664u) {
        ctx->pc = 0x413664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413660u;
        // 0x413664: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413668u;
        goto label_413668;
    }
    ctx->pc = 0x413660u;
    {
        const bool branch_taken_0x413660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x413660) {
            ctx->pc = 0x413664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413660u;
            // 0x413664: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4136B0u;
            goto label_4136b0;
        }
    }
    ctx->pc = 0x413668u;
label_413668:
    // 0x413668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x413668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41366c:
    // 0x41366c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41366cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_413670:
    // 0x413670: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x413670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_413674:
    // 0x413674: 0x40f809  jalr        $v0
label_413678:
    if (ctx->pc == 0x413678u) {
        ctx->pc = 0x413678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413674u;
        // 0x413678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41367Cu;
        goto label_41367c;
    }
    ctx->pc = 0x413674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41367Cu);
        ctx->pc = 0x413678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413674u;
        // 0x413678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413674u, 0x41367Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41367Cu;
label_41367c:
    // 0x41367c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x41367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_413680:
    // 0x413680: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x413680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_413684:
    // 0x413684: 0xc136e62  jal         func_4DB988
label_413688:
    if (ctx->pc == 0x413688u) {
        ctx->pc = 0x413688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413684u;
        // 0x413688: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41368Cu;
        goto label_41368c;
    }
    ctx->pc = 0x413684u;
    SET_GPR_U32(ctx, 31, 0x41368Cu);
    ctx->pc = 0x413688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413684u;
    // 0x413688: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB988u, 0x413684u, 0x41368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41368Cu;
label_41368c:
    // 0x41368c: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x41368cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
label_413690:
    // 0x413690: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x413690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413694:
    // 0x413694: 0xafb60020  sw          $s6, 0x20($sp)
    ctx->pc = 0x413694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
label_413698:
    // 0x413698: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x413698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41369c:
    // 0x41369c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x41369cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4136a0:
    // 0x4136a0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4136a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4136a4:
    // 0x4136a4: 0x40f809  jalr        $v0
label_4136a8:
    if (ctx->pc == 0x4136A8u) {
        ctx->pc = 0x4136A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136A4u;
        // 0x4136a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4136ACu;
        goto label_4136ac;
    }
    ctx->pc = 0x4136A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4136ACu);
        ctx->pc = 0x4136A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136A4u;
        // 0x4136a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4136A4u, 0x4136ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4136ACu;
label_4136ac:
    // 0x4136ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x4136acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_4136b0:
    // 0x4136b0: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x4136b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_4136b4:
    // 0x4136b4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_4136b8:
    if (ctx->pc == 0x4136B8u) {
        ctx->pc = 0x4136B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136B4u;
        // 0x4136b8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4136BCu;
        goto label_4136bc;
    }
    ctx->pc = 0x4136B4u;
    {
        const bool branch_taken_0x4136b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4136B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136B4u;
        // 0x4136b8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4136b4) {
            ctx->pc = 0x4135A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4135a0;
        }
    }
    ctx->pc = 0x4136BCu;
label_4136bc:
    // 0x4136bc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4136bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4136c0:
    // 0x4136c0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4136c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4136c4:
    // 0x4136c4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4136c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4136c8:
    // 0x4136c8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4136c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4136cc:
    // 0x4136cc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4136ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4136d0:
    // 0x4136d0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4136d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4136d4:
    // 0x4136d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4136d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4136d8:
    // 0x4136d8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4136d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4136dc:
    // 0x4136dc: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x4136dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4136e0:
    // 0x4136e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4136e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4136e4:
    // 0x4136e4: 0x3e00008  jr          $ra
label_4136e8:
    if (ctx->pc == 0x4136E8u) {
        ctx->pc = 0x4136E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136E4u;
        // 0x4136e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4136ECu;
        goto label_4136ec;
    }
    ctx->pc = 0x4136E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4136E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4136E4u;
        // 0x4136e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4136E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4136ECu;
label_4136ec:
    // 0x4136ec: 0x0  nop
    ctx->pc = 0x4136ecu;
    // NOP
    ctx->pc = 0x4136f0u;
}
