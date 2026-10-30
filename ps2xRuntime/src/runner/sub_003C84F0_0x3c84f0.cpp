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

// Function: sub_003C84F0
// Address: 0x3c84f0 - 0x3c8698
void sub_003C84F0_0x3c84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C84F0_0x3c84f0");
#endif

    switch (ctx->pc) {
        case 0x3c84f0u: goto label_3c84f0;
        case 0x3c84f4u: goto label_3c84f4;
        case 0x3c84f8u: goto label_3c84f8;
        case 0x3c84fcu: goto label_3c84fc;
        case 0x3c8500u: goto label_3c8500;
        case 0x3c8504u: goto label_3c8504;
        case 0x3c8508u: goto label_3c8508;
        case 0x3c850cu: goto label_3c850c;
        case 0x3c8510u: goto label_3c8510;
        case 0x3c8514u: goto label_3c8514;
        case 0x3c8518u: goto label_3c8518;
        case 0x3c851cu: goto label_3c851c;
        case 0x3c8520u: goto label_3c8520;
        case 0x3c8524u: goto label_3c8524;
        case 0x3c8528u: goto label_3c8528;
        case 0x3c852cu: goto label_3c852c;
        case 0x3c8530u: goto label_3c8530;
        case 0x3c8534u: goto label_3c8534;
        case 0x3c8538u: goto label_3c8538;
        case 0x3c853cu: goto label_3c853c;
        case 0x3c8540u: goto label_3c8540;
        case 0x3c8544u: goto label_3c8544;
        case 0x3c8548u: goto label_3c8548;
        case 0x3c854cu: goto label_3c854c;
        case 0x3c8550u: goto label_3c8550;
        case 0x3c8554u: goto label_3c8554;
        case 0x3c8558u: goto label_3c8558;
        case 0x3c855cu: goto label_3c855c;
        case 0x3c8560u: goto label_3c8560;
        case 0x3c8564u: goto label_3c8564;
        case 0x3c8568u: goto label_3c8568;
        case 0x3c856cu: goto label_3c856c;
        case 0x3c8570u: goto label_3c8570;
        case 0x3c8574u: goto label_3c8574;
        case 0x3c8578u: goto label_3c8578;
        case 0x3c857cu: goto label_3c857c;
        case 0x3c8580u: goto label_3c8580;
        case 0x3c8584u: goto label_3c8584;
        case 0x3c8588u: goto label_3c8588;
        case 0x3c858cu: goto label_3c858c;
        case 0x3c8590u: goto label_3c8590;
        case 0x3c8594u: goto label_3c8594;
        case 0x3c8598u: goto label_3c8598;
        case 0x3c859cu: goto label_3c859c;
        case 0x3c85a0u: goto label_3c85a0;
        case 0x3c85a4u: goto label_3c85a4;
        case 0x3c85a8u: goto label_3c85a8;
        case 0x3c85acu: goto label_3c85ac;
        case 0x3c85b0u: goto label_3c85b0;
        case 0x3c85b4u: goto label_3c85b4;
        case 0x3c85b8u: goto label_3c85b8;
        case 0x3c85bcu: goto label_3c85bc;
        case 0x3c85c0u: goto label_3c85c0;
        case 0x3c85c4u: goto label_3c85c4;
        case 0x3c85c8u: goto label_3c85c8;
        case 0x3c85ccu: goto label_3c85cc;
        case 0x3c85d0u: goto label_3c85d0;
        case 0x3c85d4u: goto label_3c85d4;
        case 0x3c85d8u: goto label_3c85d8;
        case 0x3c85dcu: goto label_3c85dc;
        case 0x3c85e0u: goto label_3c85e0;
        case 0x3c85e4u: goto label_3c85e4;
        case 0x3c85e8u: goto label_3c85e8;
        case 0x3c85ecu: goto label_3c85ec;
        case 0x3c85f0u: goto label_3c85f0;
        case 0x3c85f4u: goto label_3c85f4;
        case 0x3c85f8u: goto label_3c85f8;
        case 0x3c85fcu: goto label_3c85fc;
        case 0x3c8600u: goto label_3c8600;
        case 0x3c8604u: goto label_3c8604;
        case 0x3c8608u: goto label_3c8608;
        case 0x3c860cu: goto label_3c860c;
        case 0x3c8610u: goto label_3c8610;
        case 0x3c8614u: goto label_3c8614;
        case 0x3c8618u: goto label_3c8618;
        case 0x3c861cu: goto label_3c861c;
        case 0x3c8620u: goto label_3c8620;
        case 0x3c8624u: goto label_3c8624;
        case 0x3c8628u: goto label_3c8628;
        case 0x3c862cu: goto label_3c862c;
        case 0x3c8630u: goto label_3c8630;
        case 0x3c8634u: goto label_3c8634;
        case 0x3c8638u: goto label_3c8638;
        case 0x3c863cu: goto label_3c863c;
        case 0x3c8640u: goto label_3c8640;
        case 0x3c8644u: goto label_3c8644;
        case 0x3c8648u: goto label_3c8648;
        case 0x3c864cu: goto label_3c864c;
        case 0x3c8650u: goto label_3c8650;
        case 0x3c8654u: goto label_3c8654;
        case 0x3c8658u: goto label_3c8658;
        case 0x3c865cu: goto label_3c865c;
        case 0x3c8660u: goto label_3c8660;
        case 0x3c8664u: goto label_3c8664;
        case 0x3c8668u: goto label_3c8668;
        case 0x3c866cu: goto label_3c866c;
        case 0x3c8670u: goto label_3c8670;
        case 0x3c8674u: goto label_3c8674;
        case 0x3c8678u: goto label_3c8678;
        case 0x3c867cu: goto label_3c867c;
        case 0x3c8680u: goto label_3c8680;
        case 0x3c8684u: goto label_3c8684;
        case 0x3c8688u: goto label_3c8688;
        case 0x3c868cu: goto label_3c868c;
        case 0x3c8690u: goto label_3c8690;
        case 0x3c8694u: goto label_3c8694;
        default: break;
    }

    ctx->pc = 0x3c84f0u;

label_3c84f0:
    // 0x3c84f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3c84f4:
    // 0x3c84f4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c84f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c84f8:
    // 0x3c84f8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c84f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c84fc:
    // 0x3c84fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c84fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8500:
    // 0x3c8500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c8500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c8504:
    // 0x3c8504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c8504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8508:
    // 0x3c8508: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3c850c:
    // 0x3c850c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3c850cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3c8510:
    // 0x3c8510: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c8510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8514:
    // 0x3c8514: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c8514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c8518:
    // 0x3c8518: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c851c:
    // 0x3c851c: 0x40f809  jalr        $v0
label_3c8520:
    if (ctx->pc == 0x3C8520u) {
        ctx->pc = 0x3C8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C851Cu;
        // 0x3c8520: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8524u;
        goto label_3c8524;
    }
    ctx->pc = 0x3C851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8524u);
        ctx->pc = 0x3C8520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C851Cu;
        // 0x3c8520: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C851Cu, 0x3C8524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8524u;
label_3c8524:
    // 0x3c8524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8528:
    // 0x3c8528: 0xc0ea14c  jal         func_3A8530
label_3c852c:
    if (ctx->pc == 0x3C852Cu) {
        ctx->pc = 0x3C852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8528u;
        // 0x3c852c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8530u;
        goto label_3c8530;
    }
    ctx->pc = 0x3C8528u;
    SET_GPR_U32(ctx, 31, 0x3C8530u);
    ctx->pc = 0x3C852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8528u;
    // 0x3c852c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C8528u, 0x3C8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8530u;
label_3c8530:
    // 0x3c8530: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c8530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c8534:
    // 0x3c8534: 0xc0ea12a  jal         func_3A84A8
label_3c8538:
    if (ctx->pc == 0x3C8538u) {
        ctx->pc = 0x3C8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8534u;
        // 0x3c8538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C853Cu;
        goto label_3c853c;
    }
    ctx->pc = 0x3C8534u;
    SET_GPR_U32(ctx, 31, 0x3C853Cu);
    ctx->pc = 0x3C8538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8534u;
    // 0x3c8538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C8534u, 0x3C853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C853Cu;
label_3c853c:
    // 0x3c853c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c853cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8540:
    // 0x3c8540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c8540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c8544:
    // 0x3c8544: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c8544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c8548:
    // 0x3c8548: 0xc0ea12a  jal         func_3A84A8
label_3c854c:
    if (ctx->pc == 0x3C854Cu) {
        ctx->pc = 0x3C854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8548u;
        // 0x3c854c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8550u;
        goto label_3c8550;
    }
    ctx->pc = 0x3C8548u;
    SET_GPR_U32(ctx, 31, 0x3C8550u);
    ctx->pc = 0x3C854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8548u;
    // 0x3c854c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C8548u, 0x3C8550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8550u;
label_3c8550:
    // 0x3c8550: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c8550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8554:
    // 0x3c8554: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c8554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8558:
    // 0x3c8558: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c8558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c855c:
    // 0x3c855c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3c855cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3c8560:
    // 0x3c8560: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c8564:
    // 0x3c8564: 0x40f809  jalr        $v0
label_3c8568:
    if (ctx->pc == 0x3C8568u) {
        ctx->pc = 0x3C8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8564u;
        // 0x3c8568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C856Cu;
        goto label_3c856c;
    }
    ctx->pc = 0x3C8564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C856Cu);
        ctx->pc = 0x3C8568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8564u;
        // 0x3c8568: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8564u, 0x3C856Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C856Cu;
label_3c856c:
    // 0x3c856c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c856cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8570:
    // 0x3c8570: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c8570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c8574:
    // 0x3c8574: 0x24a54420  addiu       $a1, $a1, 0x4420
    ctx->pc = 0x3c8574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17440));
label_3c8578:
    // 0x3c8578: 0xc10c313  jal         func_430C4C
label_3c857c:
    if (ctx->pc == 0x3C857Cu) {
        ctx->pc = 0x3C857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8578u;
        // 0x3c857c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8580u;
        goto label_3c8580;
    }
    ctx->pc = 0x3C8578u;
    SET_GPR_U32(ctx, 31, 0x3C8580u);
    ctx->pc = 0x3C857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8578u;
    // 0x3c857c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3C8578u, 0x3C8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8580u;
label_3c8580:
    // 0x3c8580: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3c8584:
    if (ctx->pc == 0x3C8584u) {
        ctx->pc = 0x3C8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8580u;
        // 0x3c8584: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8588u;
        goto label_3c8588;
    }
    ctx->pc = 0x3C8580u;
    {
        const bool branch_taken_0x3c8580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8580) {
            ctx->pc = 0x3C8584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8580u;
            // 0x3c8584: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8598u;
            goto label_3c8598;
        }
    }
    ctx->pc = 0x3C8588u;
label_3c8588:
    // 0x3c8588: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x3c8588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
label_3c858c:
    // 0x3c858c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c858cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c8590:
    // 0x3c8590: 0x10000016  b           . + 4 + (0x16 << 2)
label_3c8594:
    if (ctx->pc == 0x3C8594u) {
        ctx->pc = 0x3C8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8590u;
        // 0x3c8594: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8598u;
        goto label_3c8598;
    }
    ctx->pc = 0x3C8590u;
    {
        const bool branch_taken_0x3c8590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8590u;
        // 0x3c8594: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8590) {
            ctx->pc = 0x3C85ECu;
            goto label_3c85ec;
        }
    }
    ctx->pc = 0x3C8598u;
label_3c8598:
    // 0x3c8598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c8598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c859c:
    // 0x3c859c: 0xc10c313  jal         func_430C4C
label_3c85a0:
    if (ctx->pc == 0x3C85A0u) {
        ctx->pc = 0x3C85A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C859Cu;
        // 0x3c85a0: 0x24a54438  addiu       $a1, $a1, 0x4438 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85A4u;
        goto label_3c85a4;
    }
    ctx->pc = 0x3C859Cu;
    SET_GPR_U32(ctx, 31, 0x3C85A4u);
    ctx->pc = 0x3C85A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C859Cu;
    // 0x3c85a0: 0x24a54438  addiu       $a1, $a1, 0x4438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3C859Cu, 0x3C85A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C85A4u;
label_3c85a4:
    // 0x3c85a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3c85a8:
    if (ctx->pc == 0x3C85A8u) {
        ctx->pc = 0x3C85A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85A4u;
        // 0x3c85a8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85ACu;
        goto label_3c85ac;
    }
    ctx->pc = 0x3C85A4u;
    {
        const bool branch_taken_0x3c85a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c85a4) {
            ctx->pc = 0x3C85A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C85A4u;
            // 0x3c85a8: 0x3c050058  lui         $a1, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C85BCu;
            goto label_3c85bc;
        }
    }
    ctx->pc = 0x3C85ACu;
label_3c85ac:
    // 0x3c85ac: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3c85acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_3c85b0:
    // 0x3c85b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c85b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c85b4:
    // 0x3c85b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c85b8:
    if (ctx->pc == 0x3C85B8u) {
        ctx->pc = 0x3C85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85B4u;
        // 0x3c85b8: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85BCu;
        goto label_3c85bc;
    }
    ctx->pc = 0x3C85B4u;
    {
        const bool branch_taken_0x3c85b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85B4u;
        // 0x3c85b8: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85b4) {
            ctx->pc = 0x3C85ECu;
            goto label_3c85ec;
        }
    }
    ctx->pc = 0x3C85BCu;
label_3c85bc:
    // 0x3c85bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c85bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c85c0:
    // 0x3c85c0: 0xc10c313  jal         func_430C4C
label_3c85c4:
    if (ctx->pc == 0x3C85C4u) {
        ctx->pc = 0x3C85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85C0u;
        // 0x3c85c4: 0x24a54450  addiu       $a1, $a1, 0x4450 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85C8u;
        goto label_3c85c8;
    }
    ctx->pc = 0x3C85C0u;
    SET_GPR_U32(ctx, 31, 0x3C85C8u);
    ctx->pc = 0x3C85C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C85C0u;
    // 0x3c85c4: 0x24a54450  addiu       $a1, $a1, 0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x3C85C0u, 0x3C85C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C85C8u;
label_3c85c8:
    // 0x3c85c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c85cc:
    if (ctx->pc == 0x3C85CCu) {
        ctx->pc = 0x3C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85C8u;
        // 0x3c85cc: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85D0u;
        goto label_3c85d0;
    }
    ctx->pc = 0x3C85C8u;
    {
        const bool branch_taken_0x3c85c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85C8u;
        // 0x3c85cc: 0x3c02001b  lui         $v0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85c8) {
            ctx->pc = 0x3C85E0u;
            goto label_3c85e0;
        }
    }
    ctx->pc = 0x3C85D0u;
label_3c85d0:
    // 0x3c85d0: 0x3c0140f0  lui         $at, 0x40F0
    ctx->pc = 0x3c85d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16624 << 16));
label_3c85d4:
    // 0x3c85d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c85d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c85d8:
    // 0x3c85d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c85dc:
    if (ctx->pc == 0x3C85DCu) {
        ctx->pc = 0x3C85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85D8u;
        // 0x3c85dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85E0u;
        goto label_3c85e0;
    }
    ctx->pc = 0x3C85D8u;
    {
        const bool branch_taken_0x3c85d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85D8u;
        // 0x3c85dc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85d8) {
            ctx->pc = 0x3C85F0u;
            goto label_3c85f0;
        }
    }
    ctx->pc = 0x3C85E0u;
label_3c85e0:
    // 0x3c85e0: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x3c85e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_3c85e4:
    // 0x3c85e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c85e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3c85e8:
    // 0x3c85e8: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x3c85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
label_3c85ec:
    // 0x3c85ec: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3c85ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3c85f0:
    // 0x3c85f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c85f4:
    // 0x3c85f4: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3c85f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c85f8:
    // 0x3c85f8: 0xc0cd4ee  jal         func_3353B8
label_3c85fc:
    if (ctx->pc == 0x3C85FCu) {
        ctx->pc = 0x3C85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85F8u;
        // 0x3c85fc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8600u;
        goto label_3c8600;
    }
    ctx->pc = 0x3C85F8u;
    SET_GPR_U32(ctx, 31, 0x3C8600u);
    ctx->pc = 0x3C85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C85F8u;
    // 0x3c85fc: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C85F8u, 0x3C8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8600u;
label_3c8600:
    // 0x3c8600: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c8600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c8604:
    // 0x3c8604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c8604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8608:
    // 0x3c8608: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3c8608u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_3c860c:
    // 0x3c860c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3c860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8610:
    // 0x3c8610: 0xc0f1b86  jal         func_3C6E18
label_3c8614:
    if (ctx->pc == 0x3C8614u) {
        ctx->pc = 0x3C8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8610u;
        // 0x3c8614: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8618u;
        goto label_3c8618;
    }
    ctx->pc = 0x3C8610u;
    SET_GPR_U32(ctx, 31, 0x3C8618u);
    ctx->pc = 0x3C8614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8610u;
    // 0x3c8614: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6E18u, 0x3C8610u, 0x3C8618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8618u;
label_3c8618:
    // 0x3c8618: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3c8618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3c861c:
    // 0x3c861c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c861cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8620:
    // 0x3c8620: 0xc0e858c  jal         func_3A1630
label_3c8624:
    if (ctx->pc == 0x3C8624u) {
        ctx->pc = 0x3C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8620u;
        // 0x3c8624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8628u;
        goto label_3c8628;
    }
    ctx->pc = 0x3C8620u;
    SET_GPR_U32(ctx, 31, 0x3C8628u);
    ctx->pc = 0x3C8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8620u;
    // 0x3c8624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C8620u, 0x3C8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8628u;
label_3c8628:
    // 0x3c8628: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3c8628u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c862c:
    // 0x3c862c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3c862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3c8630:
    // 0x3c8630: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3c8630u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8634:
    // 0x3c8634: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c8634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_3c8638:
    // 0x3c8638: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3c8638u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3c863c:
    // 0x3c863c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3c863cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3c8640:
    // 0x3c8640: 0x7e240020  sq          $a0, 0x20($s1)
    ctx->pc = 0x3c8640u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 4));
label_3c8644:
    // 0x3c8644: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3c8644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3c8648:
    // 0x3c8648: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3c8648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3c864c:
    // 0x3c864c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c8650:
    // 0x3c8650: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3c8650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3c8654:
    // 0x3c8654: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3c8654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_3c8658:
    // 0x3c8658: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3c8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3c865c:
    // 0x3c865c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3c865cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_3c8660:
    // 0x3c8660: 0xe63400c0  swc1        $f20, 0xC0($s1)
    ctx->pc = 0x3c8660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3c8664:
    // 0x3c8664: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3c8664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3c8668:
    // 0x3c8668: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x3c8668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_3c866c:
    // 0x3c866c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3c866cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3c8670:
    // 0x3c8670: 0xae2400b4  sw          $a0, 0xB4($s1)
    ctx->pc = 0x3c8670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 4));
label_3c8674:
    // 0x3c8674: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c8674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c8678:
    // 0x3c8678: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3c8678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3c867c:
    // 0x3c867c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c867cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c8680:
    // 0x3c8680: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c8680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c8684:
    // 0x3c8684: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c8684u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c8688:
    // 0x3c8688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c8688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3c868c:
    // 0x3c868c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3c868cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c8690:
    // 0x3c8690: 0x3e00008  jr          $ra
label_3c8694:
    if (ctx->pc == 0x3C8694u) {
        ctx->pc = 0x3C8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8690u;
        // 0x3c8694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8698u;
        goto label_fallthrough_0x3c8690;
    }
    ctx->pc = 0x3C8690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8690u;
        // 0x3c8694: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8690:
    ctx->pc = 0x3C8698u;
}
