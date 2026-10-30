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

// Function: sub_004214C0
// Address: 0x4214c0 - 0x421578
void sub_004214C0_0x4214c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004214C0_0x4214c0");
#endif

    switch (ctx->pc) {
        case 0x4214c0u: goto label_4214c0;
        case 0x4214c4u: goto label_4214c4;
        case 0x4214c8u: goto label_4214c8;
        case 0x4214ccu: goto label_4214cc;
        case 0x4214d0u: goto label_4214d0;
        case 0x4214d4u: goto label_4214d4;
        case 0x4214d8u: goto label_4214d8;
        case 0x4214dcu: goto label_4214dc;
        case 0x4214e0u: goto label_4214e0;
        case 0x4214e4u: goto label_4214e4;
        case 0x4214e8u: goto label_4214e8;
        case 0x4214ecu: goto label_4214ec;
        case 0x4214f0u: goto label_4214f0;
        case 0x4214f4u: goto label_4214f4;
        case 0x4214f8u: goto label_4214f8;
        case 0x4214fcu: goto label_4214fc;
        case 0x421500u: goto label_421500;
        case 0x421504u: goto label_421504;
        case 0x421508u: goto label_421508;
        case 0x42150cu: goto label_42150c;
        case 0x421510u: goto label_421510;
        case 0x421514u: goto label_421514;
        case 0x421518u: goto label_421518;
        case 0x42151cu: goto label_42151c;
        case 0x421520u: goto label_421520;
        case 0x421524u: goto label_421524;
        case 0x421528u: goto label_421528;
        case 0x42152cu: goto label_42152c;
        case 0x421530u: goto label_421530;
        case 0x421534u: goto label_421534;
        case 0x421538u: goto label_421538;
        case 0x42153cu: goto label_42153c;
        case 0x421540u: goto label_421540;
        case 0x421544u: goto label_421544;
        case 0x421548u: goto label_421548;
        case 0x42154cu: goto label_42154c;
        case 0x421550u: goto label_421550;
        case 0x421554u: goto label_421554;
        case 0x421558u: goto label_421558;
        case 0x42155cu: goto label_42155c;
        case 0x421560u: goto label_421560;
        case 0x421564u: goto label_421564;
        case 0x421568u: goto label_421568;
        case 0x42156cu: goto label_42156c;
        case 0x421570u: goto label_421570;
        case 0x421574u: goto label_421574;
        default: break;
    }

    ctx->pc = 0x4214c0u;

label_4214c0:
    // 0x4214c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4214c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4214c4:
    // 0x4214c4: 0x24051400  addiu       $a1, $zero, 0x1400
    ctx->pc = 0x4214c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
label_4214c8:
    // 0x4214c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4214c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4214cc:
    // 0x4214cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4214ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4214d0:
    // 0x4214d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4214d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4214d4:
    // 0x4214d4: 0xc055078  jal         func_1541E0
label_4214d8:
    if (ctx->pc == 0x4214D8u) {
        ctx->pc = 0x4214D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214D4u;
        // 0x4214d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214DCu;
        goto label_4214dc;
    }
    ctx->pc = 0x4214D4u;
    SET_GPR_U32(ctx, 31, 0x4214DCu);
    ctx->pc = 0x4214D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4214D4u;
    // 0x4214d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1541E0u, 0x4214D4u, 0x4214DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4214DCu;
label_4214dc:
    // 0x4214dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4214dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4214e0:
    // 0x4214e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4214e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4214e4:
    // 0x4214e4: 0xc1085c2  jal         func_421708
label_4214e8:
    if (ctx->pc == 0x4214E8u) {
        ctx->pc = 0x4214E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214E4u;
        // 0x4214e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214ECu;
        goto label_4214ec;
    }
    ctx->pc = 0x4214E4u;
    SET_GPR_U32(ctx, 31, 0x4214ECu);
    ctx->pc = 0x4214E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4214E4u;
    // 0x4214e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421708u, 0x4214E4u, 0x4214ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4214ECu;
label_4214ec:
    // 0x4214ec: 0xc0550f4  jal         func_1543D0
label_4214f0:
    if (ctx->pc == 0x4214F0u) {
        ctx->pc = 0x4214F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4214ECu;
        // 0x4214f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4214F4u;
        goto label_4214f4;
    }
    ctx->pc = 0x4214ECu;
    SET_GPR_U32(ctx, 31, 0x4214F4u);
    ctx->pc = 0x4214F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4214ECu;
    // 0x4214f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543D0u, 0x4214ECu, 0x4214F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4214F4u;
label_4214f4:
    // 0x4214f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x4214f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_4214f8:
    // 0x4214f8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4214f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4214fc:
    // 0x4214fc: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x4214fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_421500:
    // 0x421500: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x421500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_421504:
    // 0x421504: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x421504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_421508:
    // 0x421508: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x421508u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_42150c:
    // 0x42150c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x42150cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_421510:
    // 0x421510: 0x24090049  addiu       $t1, $zero, 0x49
    ctx->pc = 0x421510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_421514:
    // 0x421514: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x421514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_421518:
    // 0x421518: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x421518u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42151c:
    // 0x42151c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x42151cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421520:
    // 0x421520: 0x2508b810  addiu       $t0, $t0, -0x47F0
    ctx->pc = 0x421520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948880));
label_421524:
    // 0x421524: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x421524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_421528:
    // 0x421528: 0x24a5b840  addiu       $a1, $a1, -0x47C0
    ctx->pc = 0x421528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
label_42152c:
    // 0x42152c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x42152cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_421530:
    // 0x421530: 0x40f809  jalr        $v0
label_421534:
    if (ctx->pc == 0x421534u) {
        ctx->pc = 0x421534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421530u;
        // 0x421534: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421538u;
        goto label_421538;
    }
    ctx->pc = 0x421530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421538u);
        ctx->pc = 0x421534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421530u;
        // 0x421534: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421530u, 0x421538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421538u;
label_421538:
    // 0x421538: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x421538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_42153c:
    // 0x42153c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421540:
    // 0x421540: 0xc0550f2  jal         func_1543C8
label_421544:
    if (ctx->pc == 0x421544u) {
        ctx->pc = 0x421544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421540u;
        // 0x421544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421548u;
        goto label_421548;
    }
    ctx->pc = 0x421540u;
    SET_GPR_U32(ctx, 31, 0x421548u);
    ctx->pc = 0x421544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421540u;
    // 0x421544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1543C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1543C8u, 0x421540u, 0x421548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421548u;
label_421548:
    // 0x421548: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x421548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_42154c:
    // 0x42154c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42154cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_421550:
    // 0x421550: 0xc0550c8  jal         func_154320
label_421554:
    if (ctx->pc == 0x421554u) {
        ctx->pc = 0x421554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421550u;
        // 0x421554: 0x8e050114  lw          $a1, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421558u;
        goto label_421558;
    }
    ctx->pc = 0x421550u;
    SET_GPR_U32(ctx, 31, 0x421558u);
    ctx->pc = 0x421554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421550u;
    // 0x421554: 0x8e050114  lw          $a1, 0x114($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154320u, 0x421550u, 0x421558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421558u;
label_421558:
    // 0x421558: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x421558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42155c:
    // 0x42155c: 0xc0550a4  jal         func_154290
label_421560:
    if (ctx->pc == 0x421560u) {
        ctx->pc = 0x421560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42155Cu;
        // 0x421560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421564u;
        goto label_421564;
    }
    ctx->pc = 0x42155Cu;
    SET_GPR_U32(ctx, 31, 0x421564u);
    ctx->pc = 0x421560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42155Cu;
    // 0x421560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154290u, 0x42155Cu, 0x421564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421564u;
label_421564:
    // 0x421564: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x421564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421568:
    // 0x421568: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x421568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42156c:
    // 0x42156c: 0x3e00008  jr          $ra
label_421570:
    if (ctx->pc == 0x421570u) {
        ctx->pc = 0x421570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42156Cu;
        // 0x421570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421574u;
        goto label_421574;
    }
    ctx->pc = 0x42156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42156Cu;
        // 0x421570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42156Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x421574u;
label_421574:
    // 0x421574: 0x0  nop
    ctx->pc = 0x421574u;
    // NOP
    ctx->pc = 0x421578u;
}
