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

// Function: sub_001454A8
// Address: 0x1454a8 - 0x145670
void sub_001454A8_0x1454a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001454A8_0x1454a8");
#endif

    switch (ctx->pc) {
        case 0x1454a8u: goto label_1454a8;
        case 0x1454acu: goto label_1454ac;
        case 0x1454b0u: goto label_1454b0;
        case 0x1454b4u: goto label_1454b4;
        case 0x1454b8u: goto label_1454b8;
        case 0x1454bcu: goto label_1454bc;
        case 0x1454c0u: goto label_1454c0;
        case 0x1454c4u: goto label_1454c4;
        case 0x1454c8u: goto label_1454c8;
        case 0x1454ccu: goto label_1454cc;
        case 0x1454d0u: goto label_1454d0;
        case 0x1454d4u: goto label_1454d4;
        case 0x1454d8u: goto label_1454d8;
        case 0x1454dcu: goto label_1454dc;
        case 0x1454e0u: goto label_1454e0;
        case 0x1454e4u: goto label_1454e4;
        case 0x1454e8u: goto label_1454e8;
        case 0x1454ecu: goto label_1454ec;
        case 0x1454f0u: goto label_1454f0;
        case 0x1454f4u: goto label_1454f4;
        case 0x1454f8u: goto label_1454f8;
        case 0x1454fcu: goto label_1454fc;
        case 0x145500u: goto label_145500;
        case 0x145504u: goto label_145504;
        case 0x145508u: goto label_145508;
        case 0x14550cu: goto label_14550c;
        case 0x145510u: goto label_145510;
        case 0x145514u: goto label_145514;
        case 0x145518u: goto label_145518;
        case 0x14551cu: goto label_14551c;
        case 0x145520u: goto label_145520;
        case 0x145524u: goto label_145524;
        case 0x145528u: goto label_145528;
        case 0x14552cu: goto label_14552c;
        case 0x145530u: goto label_145530;
        case 0x145534u: goto label_145534;
        case 0x145538u: goto label_145538;
        case 0x14553cu: goto label_14553c;
        case 0x145540u: goto label_145540;
        case 0x145544u: goto label_145544;
        case 0x145548u: goto label_145548;
        case 0x14554cu: goto label_14554c;
        case 0x145550u: goto label_145550;
        case 0x145554u: goto label_145554;
        case 0x145558u: goto label_145558;
        case 0x14555cu: goto label_14555c;
        case 0x145560u: goto label_145560;
        case 0x145564u: goto label_145564;
        case 0x145568u: goto label_145568;
        case 0x14556cu: goto label_14556c;
        case 0x145570u: goto label_145570;
        case 0x145574u: goto label_145574;
        case 0x145578u: goto label_145578;
        case 0x14557cu: goto label_14557c;
        case 0x145580u: goto label_145580;
        case 0x145584u: goto label_145584;
        case 0x145588u: goto label_145588;
        case 0x14558cu: goto label_14558c;
        case 0x145590u: goto label_145590;
        case 0x145594u: goto label_145594;
        case 0x145598u: goto label_145598;
        case 0x14559cu: goto label_14559c;
        case 0x1455a0u: goto label_1455a0;
        case 0x1455a4u: goto label_1455a4;
        case 0x1455a8u: goto label_1455a8;
        case 0x1455acu: goto label_1455ac;
        case 0x1455b0u: goto label_1455b0;
        case 0x1455b4u: goto label_1455b4;
        case 0x1455b8u: goto label_1455b8;
        case 0x1455bcu: goto label_1455bc;
        case 0x1455c0u: goto label_1455c0;
        case 0x1455c4u: goto label_1455c4;
        case 0x1455c8u: goto label_1455c8;
        case 0x1455ccu: goto label_1455cc;
        case 0x1455d0u: goto label_1455d0;
        case 0x1455d4u: goto label_1455d4;
        case 0x1455d8u: goto label_1455d8;
        case 0x1455dcu: goto label_1455dc;
        case 0x1455e0u: goto label_1455e0;
        case 0x1455e4u: goto label_1455e4;
        case 0x1455e8u: goto label_1455e8;
        case 0x1455ecu: goto label_1455ec;
        case 0x1455f0u: goto label_1455f0;
        case 0x1455f4u: goto label_1455f4;
        case 0x1455f8u: goto label_1455f8;
        case 0x1455fcu: goto label_1455fc;
        case 0x145600u: goto label_145600;
        case 0x145604u: goto label_145604;
        case 0x145608u: goto label_145608;
        case 0x14560cu: goto label_14560c;
        case 0x145610u: goto label_145610;
        case 0x145614u: goto label_145614;
        case 0x145618u: goto label_145618;
        case 0x14561cu: goto label_14561c;
        case 0x145620u: goto label_145620;
        case 0x145624u: goto label_145624;
        case 0x145628u: goto label_145628;
        case 0x14562cu: goto label_14562c;
        case 0x145630u: goto label_145630;
        case 0x145634u: goto label_145634;
        case 0x145638u: goto label_145638;
        case 0x14563cu: goto label_14563c;
        case 0x145640u: goto label_145640;
        case 0x145644u: goto label_145644;
        case 0x145648u: goto label_145648;
        case 0x14564cu: goto label_14564c;
        case 0x145650u: goto label_145650;
        case 0x145654u: goto label_145654;
        case 0x145658u: goto label_145658;
        case 0x14565cu: goto label_14565c;
        case 0x145660u: goto label_145660;
        case 0x145664u: goto label_145664;
        case 0x145668u: goto label_145668;
        case 0x14566cu: goto label_14566c;
        default: break;
    }

    ctx->pc = 0x1454a8u;

label_1454a8:
    // 0x1454a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1454a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1454ac:
    // 0x1454ac: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x1454acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_1454b0:
    // 0x1454b0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1454b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1454b4:
    // 0x1454b4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1454b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1454b8:
    // 0x1454b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1454b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1454bc:
    // 0x1454bc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x1454bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_1454c0:
    // 0x1454c0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x1454c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_1454c4:
    // 0x1454c4: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x1454c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_1454c8:
    // 0x1454c8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1454c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_1454cc:
    // 0x1454cc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1454ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_1454d0:
    // 0x1454d0: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1454d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_1454d4:
    // 0x1454d4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1454d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_1454d8:
    // 0x1454d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1454d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1454dc:
    // 0x1454dc: 0xc0527bc  jal         func_149EF0
label_1454e0:
    if (ctx->pc == 0x1454E0u) {
        ctx->pc = 0x1454E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454DCu;
        // 0x1454e0: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1454E4u;
        goto label_1454e4;
    }
    ctx->pc = 0x1454DCu;
    SET_GPR_U32(ctx, 31, 0x1454E4u);
    ctx->pc = 0x1454E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454DCu;
    // 0x1454e0: 0x3c1e0051  lui         $fp, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EF0u, 0x1454DCu, 0x1454E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454E4u;
label_1454e4:
    // 0x1454e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1454e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1454e8:
    // 0x1454e8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1454e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1454ec:
    // 0x1454ec: 0x2456dc90  addiu       $s6, $v0, -0x2370
    ctx->pc = 0x1454ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
label_1454f0:
    // 0x1454f0: 0x2495d810  addiu       $s5, $a0, -0x27F0
    ctx->pc = 0x1454f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957072));
label_1454f4:
    // 0x1454f4: 0x0  nop
    ctx->pc = 0x1454f4u;
    // NOP
label_1454f8:
    // 0x1454f8: 0x86b30042  lh          $s3, 0x42($s5)
    ctx->pc = 0x1454f8u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 66)));
label_1454fc:
    // 0x1454fc: 0x8fc3b198  lw          $v1, -0x4E68($fp)
    ctx->pc = 0x1454fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294947224)));
label_145500:
    // 0x145500: 0x8ee2b19c  lw          $v0, -0x4E64($s7)
    ctx->pc = 0x145500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294947228)));
label_145504:
    // 0x145504: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x145504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145508:
    // 0x145508: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_14550c:
    if (ctx->pc == 0x14550Cu) {
        ctx->pc = 0x14550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145508u;
        // 0x14550c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145510u;
        goto label_145510;
    }
    ctx->pc = 0x145508u;
    {
        const bool branch_taken_0x145508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145508u;
        // 0x14550c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145508) {
            ctx->pc = 0x145534u;
            goto label_145534;
        }
    }
    ctx->pc = 0x145510u;
label_145510:
    // 0x145510: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145514:
    // 0x145514: 0xc047e6c  jal         func_11F9B0
label_145518:
    if (ctx->pc == 0x145518u) {
        ctx->pc = 0x145518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145514u;
        // 0x145518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14551Cu;
        goto label_14551c;
    }
    ctx->pc = 0x145514u;
    SET_GPR_U32(ctx, 31, 0x14551Cu);
    ctx->pc = 0x145518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145514u;
    // 0x145518: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x145514u, 0x14551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14551Cu;
label_14551c:
    // 0x14551c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_145520:
    // 0x145520: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_145524:
    // 0x145524: 0x8c65027c  lw          $a1, 0x27C($v1)
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_145528:
    // 0x145528: 0xa0f809  jalr        $a1
label_14552c:
    if (ctx->pc == 0x14552Cu) {
        ctx->pc = 0x14552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145528u;
        // 0x14552c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145530u;
        goto label_145530;
    }
    ctx->pc = 0x145528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x145530u);
        ctx->pc = 0x14552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145528u;
        // 0x14552c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145528u, 0x145530u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145530u;
label_145530:
    // 0x145530: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145534:
    // 0x145534: 0x640002a  bltz        $s2, . + 4 + (0x2A << 2)
label_145538:
    if (ctx->pc == 0x145538u) {
        ctx->pc = 0x145538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145534u;
        // 0x145538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14553Cu;
        goto label_14553c;
    }
    ctx->pc = 0x145534u;
    {
        const bool branch_taken_0x145534 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x145538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145534u;
        // 0x145538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145534) {
            ctx->pc = 0x1455E0u;
            goto label_1455e0;
        }
    }
    ctx->pc = 0x14553Cu;
label_14553c:
    // 0x14553c: 0xc047e78  jal         func_11F9E0
label_145540:
    if (ctx->pc == 0x145540u) {
        ctx->pc = 0x145540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14553Cu;
        // 0x145540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145544u;
        goto label_145544;
    }
    ctx->pc = 0x14553Cu;
    SET_GPR_U32(ctx, 31, 0x145544u);
    ctx->pc = 0x145540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14553Cu;
    // 0x145540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x14553Cu, 0x145544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145544u;
label_145544:
    // 0x145544: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_145548:
    if (ctx->pc == 0x145548u) {
        ctx->pc = 0x14554Cu;
        goto label_14554c;
    }
    ctx->pc = 0x145544u;
    {
        const bool branch_taken_0x145544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145544) {
            ctx->pc = 0x145594u;
            goto label_145594;
        }
    }
    ctx->pc = 0x14554Cu;
label_14554c:
    // 0x14554c: 0xc047e72  jal         func_11F9C8
label_145550:
    if (ctx->pc == 0x145550u) {
        ctx->pc = 0x145550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14554Cu;
        // 0x145550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145554u;
        goto label_145554;
    }
    ctx->pc = 0x14554Cu;
    SET_GPR_U32(ctx, 31, 0x145554u);
    ctx->pc = 0x145550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14554Cu;
    // 0x145550: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x14554Cu, 0x145554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145554u;
label_145554:
    // 0x145554: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145558:
    // 0x145558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14555c:
    // 0x14555c: 0xc047e78  jal         func_11F9E0
label_145560:
    if (ctx->pc == 0x145560u) {
        ctx->pc = 0x145560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14555Cu;
        // 0x145560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145564u;
        goto label_145564;
    }
    ctx->pc = 0x14555Cu;
    SET_GPR_U32(ctx, 31, 0x145564u);
    ctx->pc = 0x145560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14555Cu;
    // 0x145560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x14555Cu, 0x145564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145564u;
label_145564:
    // 0x145564: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_145568:
    if (ctx->pc == 0x145568u) {
        ctx->pc = 0x145568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145564u;
        // 0x145568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14556Cu;
        goto label_14556c;
    }
    ctx->pc = 0x145564u;
    {
        const bool branch_taken_0x145564 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x145568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145564u;
        // 0x145568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145564) {
            ctx->pc = 0x145594u;
            goto label_145594;
        }
    }
    ctx->pc = 0x14556Cu;
label_14556c:
    // 0x14556c: 0xc047e78  jal         func_11F9E0
label_145570:
    if (ctx->pc == 0x145570u) {
        ctx->pc = 0x145570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14556Cu;
        // 0x145570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145574u;
        goto label_145574;
    }
    ctx->pc = 0x14556Cu;
    SET_GPR_U32(ctx, 31, 0x145574u);
    ctx->pc = 0x145570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14556Cu;
    // 0x145570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x14556Cu, 0x145574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145574u;
label_145574:
    // 0x145574: 0x90430473  lbu         $v1, 0x473($v0)
    ctx->pc = 0x145574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1139)));
label_145578:
    // 0x145578: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_14557c:
    if (ctx->pc == 0x14557Cu) {
        ctx->pc = 0x14557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145578u;
        // 0x14557c: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145580u;
        goto label_145580;
    }
    ctx->pc = 0x145578u;
    {
        const bool branch_taken_0x145578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145578u;
        // 0x14557c: 0x112900  sll         $a1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145578) {
            ctx->pc = 0x145594u;
            goto label_145594;
        }
    }
    ctx->pc = 0x145580u;
label_145580:
    // 0x145580: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x145580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145584:
    // 0x145584: 0xc0cd940  jal         func_336500
label_145588:
    if (ctx->pc == 0x145588u) {
        ctx->pc = 0x145588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145584u;
        // 0x145588: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14558Cu;
        goto label_14558c;
    }
    ctx->pc = 0x145584u;
    SET_GPR_U32(ctx, 31, 0x14558Cu);
    ctx->pc = 0x145588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145584u;
    // 0x145588: 0xb62821  addu        $a1, $a1, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x145584u, 0x14558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14558Cu;
label_14558c:
    // 0x14558c: 0x10000025  b           . + 4 + (0x25 << 2)
label_145590:
    if (ctx->pc == 0x145590u) {
        ctx->pc = 0x145590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14558Cu;
        // 0x145590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145594u;
        goto label_145594;
    }
    ctx->pc = 0x14558Cu;
    {
        const bool branch_taken_0x14558c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14558Cu;
        // 0x145590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14558c) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x145594u;
label_145594:
    // 0x145594: 0xc047e6c  jal         func_11F9B0
label_145598:
    if (ctx->pc == 0x145598u) {
        ctx->pc = 0x145598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145594u;
        // 0x145598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14559Cu;
        goto label_14559c;
    }
    ctx->pc = 0x145594u;
    SET_GPR_U32(ctx, 31, 0x14559Cu);
    ctx->pc = 0x145598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145594u;
    // 0x145598: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x145594u, 0x14559Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14559Cu;
label_14559c:
    // 0x14559c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_1455a0:
    if (ctx->pc == 0x1455A0u) {
        ctx->pc = 0x1455A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14559Cu;
        // 0x1455a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455A4u;
        goto label_1455a4;
    }
    ctx->pc = 0x14559Cu;
    {
        const bool branch_taken_0x14559c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14559c) {
            ctx->pc = 0x1455A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14559Cu;
            // 0x1455a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x1455A4u;
label_1455a4:
    // 0x1455a4: 0xc047e6c  jal         func_11F9B0
label_1455a8:
    if (ctx->pc == 0x1455A8u) {
        ctx->pc = 0x1455A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455A4u;
        // 0x1455a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455ACu;
        goto label_1455ac;
    }
    ctx->pc = 0x1455A4u;
    SET_GPR_U32(ctx, 31, 0x1455ACu);
    ctx->pc = 0x1455A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455A4u;
    // 0x1455a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1455A4u, 0x1455ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455ACu;
label_1455ac:
    // 0x1455ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1455acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1455b0:
    // 0x1455b0: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1455b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1455b4:
    // 0x1455b4: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1455b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1455b8:
    // 0x1455b8: 0xa0f809  jalr        $a1
label_1455bc:
    if (ctx->pc == 0x1455BCu) {
        ctx->pc = 0x1455BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455B8u;
        // 0x1455bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455C0u;
        goto label_1455c0;
    }
    ctx->pc = 0x1455B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1455C0u);
        ctx->pc = 0x1455BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455B8u;
        // 0x1455bc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1455B8u, 0x1455C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1455C0u;
label_1455c0:
    // 0x1455c0: 0x132900  sll         $a1, $s3, 4
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1455c4:
    // 0x1455c4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1455c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1455c8:
    // 0x1455c8: 0xb62821  addu        $a1, $a1, $s6
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_1455cc:
    // 0x1455cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1455ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1455d0:
    // 0x1455d0: 0xc0cd940  jal         func_336500
label_1455d4:
    if (ctx->pc == 0x1455D4u) {
        ctx->pc = 0x1455D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455D0u;
        // 0x1455d4: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455D8u;
        goto label_1455d8;
    }
    ctx->pc = 0x1455D0u;
    SET_GPR_U32(ctx, 31, 0x1455D8u);
    ctx->pc = 0x1455D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455D0u;
    // 0x1455d4: 0x7ca30000  sq          $v1, 0x0($a1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x1455D0u, 0x1455D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455D8u;
label_1455d8:
    // 0x1455d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1455dc:
    if (ctx->pc == 0x1455DCu) {
        ctx->pc = 0x1455DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455D8u;
        // 0x1455dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1455E0u;
        goto label_1455e0;
    }
    ctx->pc = 0x1455D8u;
    {
        const bool branch_taken_0x1455d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1455DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1455D8u;
        // 0x1455dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455d8) {
            ctx->pc = 0x145624u;
            goto label_145624;
        }
    }
    ctx->pc = 0x1455E0u;
label_1455e0:
    // 0x1455e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1455e4:
    // 0x1455e4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1455e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_1455e8:
    // 0x1455e8: 0x246317a0  addiu       $v1, $v1, 0x17A0
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6048));
label_1455ec:
    // 0x1455ec: 0x248417b0  addiu       $a0, $a0, 0x17B0
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6064));
label_1455f0:
    // 0x1455f0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1455f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1455f4:
    // 0x1455f4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1455f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_1455f8:
    // 0x1455f8: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1455f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1455fc:
    // 0x1455fc: 0x24a517c0  addiu       $a1, $a1, 0x17C0
    ctx->pc = 0x1455fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
label_145600:
    // 0x145600: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x145600u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_145604:
    // 0x145604: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x145604u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_145608:
    // 0x145608: 0x24c617d0  addiu       $a2, $a2, 0x17D0
    ctx->pc = 0x145608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6096));
label_14560c:
    // 0x14560c: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x14560cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_145610:
    // 0x145610: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x145610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_145614:
    // 0x145614: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x145614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_145618:
    // 0x145618: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x145618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_14561c:
    // 0x14561c: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x14561cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
label_145620:
    // 0x145620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x145620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_145624:
    // 0x145624: 0xc0513ec  jal         func_144FB0
label_145628:
    if (ctx->pc == 0x145628u) {
        ctx->pc = 0x145628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145624u;
        // 0x145628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14562Cu;
        goto label_14562c;
    }
    ctx->pc = 0x145624u;
    SET_GPR_U32(ctx, 31, 0x14562Cu);
    ctx->pc = 0x145628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145624u;
    // 0x145628: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FB0u, 0x145624u, 0x14562Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14562Cu;
label_14562c:
    // 0x14562c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x14562cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_145630:
    // 0x145630: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x145630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
label_145634:
    // 0x145634: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_145638:
    if (ctx->pc == 0x145638u) {
        ctx->pc = 0x145638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145634u;
        // 0x145638: 0x26b50140  addiu       $s5, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14563Cu;
        goto label_14563c;
    }
    ctx->pc = 0x145634u;
    {
        const bool branch_taken_0x145634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145634u;
        // 0x145638: 0x26b50140  addiu       $s5, $s5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145634) {
            ctx->pc = 0x1454F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1454f8;
        }
    }
    ctx->pc = 0x14563Cu;
label_14563c:
    // 0x14563c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x14563cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_145640:
    // 0x145640: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x145640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_145644:
    // 0x145644: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x145644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_145648:
    // 0x145648: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x145648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_14564c:
    // 0x14564c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x14564cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_145650:
    // 0x145650: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x145650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_145654:
    // 0x145654: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x145654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_145658:
    // 0x145658: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x145658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14565c:
    // 0x14565c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x14565cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_145660:
    // 0x145660: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x145660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_145664:
    // 0x145664: 0x3e00008  jr          $ra
label_145668:
    if (ctx->pc == 0x145668u) {
        ctx->pc = 0x145668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145664u;
        // 0x145668: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14566Cu;
        goto label_14566c;
    }
    ctx->pc = 0x145664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145664u;
        // 0x145668: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14566Cu;
label_14566c:
    // 0x14566c: 0x0  nop
    ctx->pc = 0x14566cu;
    // NOP
    ctx->pc = 0x145670u;
}
