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

// Function: sub_001AC828
// Address: 0x1ac828 - 0x1acb90
void sub_001AC828_0x1ac828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC828_0x1ac828");
#endif

    switch (ctx->pc) {
        case 0x1ac828u: goto label_1ac828;
        case 0x1ac82cu: goto label_1ac82c;
        case 0x1ac830u: goto label_1ac830;
        case 0x1ac834u: goto label_1ac834;
        case 0x1ac838u: goto label_1ac838;
        case 0x1ac83cu: goto label_1ac83c;
        case 0x1ac840u: goto label_1ac840;
        case 0x1ac844u: goto label_1ac844;
        case 0x1ac848u: goto label_1ac848;
        case 0x1ac84cu: goto label_1ac84c;
        case 0x1ac850u: goto label_1ac850;
        case 0x1ac854u: goto label_1ac854;
        case 0x1ac858u: goto label_1ac858;
        case 0x1ac85cu: goto label_1ac85c;
        case 0x1ac860u: goto label_1ac860;
        case 0x1ac864u: goto label_1ac864;
        case 0x1ac868u: goto label_1ac868;
        case 0x1ac86cu: goto label_1ac86c;
        case 0x1ac870u: goto label_1ac870;
        case 0x1ac874u: goto label_1ac874;
        case 0x1ac878u: goto label_1ac878;
        case 0x1ac87cu: goto label_1ac87c;
        case 0x1ac880u: goto label_1ac880;
        case 0x1ac884u: goto label_1ac884;
        case 0x1ac888u: goto label_1ac888;
        case 0x1ac88cu: goto label_1ac88c;
        case 0x1ac890u: goto label_1ac890;
        case 0x1ac894u: goto label_1ac894;
        case 0x1ac898u: goto label_1ac898;
        case 0x1ac89cu: goto label_1ac89c;
        case 0x1ac8a0u: goto label_1ac8a0;
        case 0x1ac8a4u: goto label_1ac8a4;
        case 0x1ac8a8u: goto label_1ac8a8;
        case 0x1ac8acu: goto label_1ac8ac;
        case 0x1ac8b0u: goto label_1ac8b0;
        case 0x1ac8b4u: goto label_1ac8b4;
        case 0x1ac8b8u: goto label_1ac8b8;
        case 0x1ac8bcu: goto label_1ac8bc;
        case 0x1ac8c0u: goto label_1ac8c0;
        case 0x1ac8c4u: goto label_1ac8c4;
        case 0x1ac8c8u: goto label_1ac8c8;
        case 0x1ac8ccu: goto label_1ac8cc;
        case 0x1ac8d0u: goto label_1ac8d0;
        case 0x1ac8d4u: goto label_1ac8d4;
        case 0x1ac8d8u: goto label_1ac8d8;
        case 0x1ac8dcu: goto label_1ac8dc;
        case 0x1ac8e0u: goto label_1ac8e0;
        case 0x1ac8e4u: goto label_1ac8e4;
        case 0x1ac8e8u: goto label_1ac8e8;
        case 0x1ac8ecu: goto label_1ac8ec;
        case 0x1ac8f0u: goto label_1ac8f0;
        case 0x1ac8f4u: goto label_1ac8f4;
        case 0x1ac8f8u: goto label_1ac8f8;
        case 0x1ac8fcu: goto label_1ac8fc;
        case 0x1ac900u: goto label_1ac900;
        case 0x1ac904u: goto label_1ac904;
        case 0x1ac908u: goto label_1ac908;
        case 0x1ac90cu: goto label_1ac90c;
        case 0x1ac910u: goto label_1ac910;
        case 0x1ac914u: goto label_1ac914;
        case 0x1ac918u: goto label_1ac918;
        case 0x1ac91cu: goto label_1ac91c;
        case 0x1ac920u: goto label_1ac920;
        case 0x1ac924u: goto label_1ac924;
        case 0x1ac928u: goto label_1ac928;
        case 0x1ac92cu: goto label_1ac92c;
        case 0x1ac930u: goto label_1ac930;
        case 0x1ac934u: goto label_1ac934;
        case 0x1ac938u: goto label_1ac938;
        case 0x1ac93cu: goto label_1ac93c;
        case 0x1ac940u: goto label_1ac940;
        case 0x1ac944u: goto label_1ac944;
        case 0x1ac948u: goto label_1ac948;
        case 0x1ac94cu: goto label_1ac94c;
        case 0x1ac950u: goto label_1ac950;
        case 0x1ac954u: goto label_1ac954;
        case 0x1ac958u: goto label_1ac958;
        case 0x1ac95cu: goto label_1ac95c;
        case 0x1ac960u: goto label_1ac960;
        case 0x1ac964u: goto label_1ac964;
        case 0x1ac968u: goto label_1ac968;
        case 0x1ac96cu: goto label_1ac96c;
        case 0x1ac970u: goto label_1ac970;
        case 0x1ac974u: goto label_1ac974;
        case 0x1ac978u: goto label_1ac978;
        case 0x1ac97cu: goto label_1ac97c;
        case 0x1ac980u: goto label_1ac980;
        case 0x1ac984u: goto label_1ac984;
        case 0x1ac988u: goto label_1ac988;
        case 0x1ac98cu: goto label_1ac98c;
        case 0x1ac990u: goto label_1ac990;
        case 0x1ac994u: goto label_1ac994;
        case 0x1ac998u: goto label_1ac998;
        case 0x1ac99cu: goto label_1ac99c;
        case 0x1ac9a0u: goto label_1ac9a0;
        case 0x1ac9a4u: goto label_1ac9a4;
        case 0x1ac9a8u: goto label_1ac9a8;
        case 0x1ac9acu: goto label_1ac9ac;
        case 0x1ac9b0u: goto label_1ac9b0;
        case 0x1ac9b4u: goto label_1ac9b4;
        case 0x1ac9b8u: goto label_1ac9b8;
        case 0x1ac9bcu: goto label_1ac9bc;
        case 0x1ac9c0u: goto label_1ac9c0;
        case 0x1ac9c4u: goto label_1ac9c4;
        case 0x1ac9c8u: goto label_1ac9c8;
        case 0x1ac9ccu: goto label_1ac9cc;
        case 0x1ac9d0u: goto label_1ac9d0;
        case 0x1ac9d4u: goto label_1ac9d4;
        case 0x1ac9d8u: goto label_1ac9d8;
        case 0x1ac9dcu: goto label_1ac9dc;
        case 0x1ac9e0u: goto label_1ac9e0;
        case 0x1ac9e4u: goto label_1ac9e4;
        case 0x1ac9e8u: goto label_1ac9e8;
        case 0x1ac9ecu: goto label_1ac9ec;
        case 0x1ac9f0u: goto label_1ac9f0;
        case 0x1ac9f4u: goto label_1ac9f4;
        case 0x1ac9f8u: goto label_1ac9f8;
        case 0x1ac9fcu: goto label_1ac9fc;
        case 0x1aca00u: goto label_1aca00;
        case 0x1aca04u: goto label_1aca04;
        case 0x1aca08u: goto label_1aca08;
        case 0x1aca0cu: goto label_1aca0c;
        case 0x1aca10u: goto label_1aca10;
        case 0x1aca14u: goto label_1aca14;
        case 0x1aca18u: goto label_1aca18;
        case 0x1aca1cu: goto label_1aca1c;
        case 0x1aca20u: goto label_1aca20;
        case 0x1aca24u: goto label_1aca24;
        case 0x1aca28u: goto label_1aca28;
        case 0x1aca2cu: goto label_1aca2c;
        case 0x1aca30u: goto label_1aca30;
        case 0x1aca34u: goto label_1aca34;
        case 0x1aca38u: goto label_1aca38;
        case 0x1aca3cu: goto label_1aca3c;
        case 0x1aca40u: goto label_1aca40;
        case 0x1aca44u: goto label_1aca44;
        case 0x1aca48u: goto label_1aca48;
        case 0x1aca4cu: goto label_1aca4c;
        case 0x1aca50u: goto label_1aca50;
        case 0x1aca54u: goto label_1aca54;
        case 0x1aca58u: goto label_1aca58;
        case 0x1aca5cu: goto label_1aca5c;
        case 0x1aca60u: goto label_1aca60;
        case 0x1aca64u: goto label_1aca64;
        case 0x1aca68u: goto label_1aca68;
        case 0x1aca6cu: goto label_1aca6c;
        case 0x1aca70u: goto label_1aca70;
        case 0x1aca74u: goto label_1aca74;
        case 0x1aca78u: goto label_1aca78;
        case 0x1aca7cu: goto label_1aca7c;
        case 0x1aca80u: goto label_1aca80;
        case 0x1aca84u: goto label_1aca84;
        case 0x1aca88u: goto label_1aca88;
        case 0x1aca8cu: goto label_1aca8c;
        case 0x1aca90u: goto label_1aca90;
        case 0x1aca94u: goto label_1aca94;
        case 0x1aca98u: goto label_1aca98;
        case 0x1aca9cu: goto label_1aca9c;
        case 0x1acaa0u: goto label_1acaa0;
        case 0x1acaa4u: goto label_1acaa4;
        case 0x1acaa8u: goto label_1acaa8;
        case 0x1acaacu: goto label_1acaac;
        case 0x1acab0u: goto label_1acab0;
        case 0x1acab4u: goto label_1acab4;
        case 0x1acab8u: goto label_1acab8;
        case 0x1acabcu: goto label_1acabc;
        case 0x1acac0u: goto label_1acac0;
        case 0x1acac4u: goto label_1acac4;
        case 0x1acac8u: goto label_1acac8;
        case 0x1acaccu: goto label_1acacc;
        case 0x1acad0u: goto label_1acad0;
        case 0x1acad4u: goto label_1acad4;
        case 0x1acad8u: goto label_1acad8;
        case 0x1acadcu: goto label_1acadc;
        case 0x1acae0u: goto label_1acae0;
        case 0x1acae4u: goto label_1acae4;
        case 0x1acae8u: goto label_1acae8;
        case 0x1acaecu: goto label_1acaec;
        case 0x1acaf0u: goto label_1acaf0;
        case 0x1acaf4u: goto label_1acaf4;
        case 0x1acaf8u: goto label_1acaf8;
        case 0x1acafcu: goto label_1acafc;
        case 0x1acb00u: goto label_1acb00;
        case 0x1acb04u: goto label_1acb04;
        case 0x1acb08u: goto label_1acb08;
        case 0x1acb0cu: goto label_1acb0c;
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        default: break;
    }

    ctx->pc = 0x1ac828u;

label_1ac828:
    // 0x1ac828: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ac828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1ac82c:
    // 0x1ac82c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ac82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1ac830:
    // 0x1ac830: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ac830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1ac834:
    // 0x1ac834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac838:
    // 0x1ac838: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ac838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1ac83c:
    // 0x1ac83c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ac83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1ac840:
    // 0x1ac840: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ac840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1ac844:
    // 0x1ac844: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ac844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1ac848:
    // 0x1ac848: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1ac848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1ac84c:
    // 0x1ac84c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1ac850:
    // 0x1ac850: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1ac850u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1ac854:
    // 0x1ac854: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1ac854u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1ac858:
    // 0x1ac858: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ac858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac85c:
    // 0x1ac85c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ac85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ac860:
    // 0x1ac860: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ac860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ac864:
    // 0x1ac864: 0x40f809  jalr        $v0
label_1ac868:
    if (ctx->pc == 0x1AC868u) {
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC86Cu;
        goto label_1ac86c;
    }
    ctx->pc = 0x1AC864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC86Cu);
        ctx->pc = 0x1AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC864u;
        // 0x1ac868: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC864u, 0x1AC86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC86Cu;
label_1ac86c:
    // 0x1ac86c: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
label_1ac870:
    if (ctx->pc == 0x1AC870u) {
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC874u;
        goto label_1ac874;
    }
    ctx->pc = 0x1AC86Cu;
    {
        const bool branch_taken_0x1ac86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC86Cu;
        // 0x1ac870: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac86c) {
            ctx->pc = 0x1ACB60u;
            goto label_1acb60;
        }
    }
    ctx->pc = 0x1AC874u;
label_1ac874:
    // 0x1ac874: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ac874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ac878:
    // 0x1ac878: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1ac878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1ac87c:
    // 0x1ac87c: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1ac87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1ac880:
    // 0x1ac880: 0x40f809  jalr        $v0
label_1ac884:
    if (ctx->pc == 0x1AC884u) {
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC888u;
        goto label_1ac888;
    }
    ctx->pc = 0x1AC880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC888u);
        ctx->pc = 0x1AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC880u;
        // 0x1ac884: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC880u, 0x1AC888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC888u;
label_1ac888:
    // 0x1ac888: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_1ac88c:
    if (ctx->pc == 0x1AC88Cu) {
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC890u;
        goto label_1ac890;
    }
    ctx->pc = 0x1AC888u;
    {
        const bool branch_taken_0x1ac888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC888u;
        // 0x1ac88c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac888) {
            ctx->pc = 0x1AC900u;
            goto label_1ac900;
        }
    }
    ctx->pc = 0x1AC890u;
label_1ac890:
    // 0x1ac890: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ac890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ac894:
    // 0x1ac894: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac898:
    // 0x1ac898: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ac898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ac89c:
    // 0x1ac89c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ac89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ac8a0:
    // 0x1ac8a0: 0x40f809  jalr        $v0
label_1ac8a4:
    if (ctx->pc == 0x1AC8A4u) {
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8A8u;
        goto label_1ac8a8;
    }
    ctx->pc = 0x1AC8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC8A8u);
        ctx->pc = 0x1AC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8A0u;
        // 0x1ac8a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC8A0u, 0x1AC8A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC8A8u;
label_1ac8a8:
    // 0x1ac8a8: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1ac8ac:
    // 0x1ac8ac: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1ac8b0:
    // 0x1ac8b0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1ac8b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ac8b4:
    // 0x1ac8b4: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_1ac8b8:
    if (ctx->pc == 0x1AC8B8u) {
        ctx->pc = 0x1AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8B4u;
        // 0x1ac8b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8BCu;
        goto label_1ac8bc;
    }
    ctx->pc = 0x1AC8B4u;
    {
        const bool branch_taken_0x1ac8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac8b4) {
            ctx->pc = 0x1AC8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AC8B4u;
            // 0x1ac8b8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AC904u;
            goto label_1ac904;
        }
    }
    ctx->pc = 0x1AC8BCu;
label_1ac8bc:
    // 0x1ac8bc: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x1ac8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_1ac8c0:
    // 0x1ac8c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ac8c4:
    if (ctx->pc == 0x1AC8C4u) {
        ctx->pc = 0x1AC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8C0u;
        // 0x1ac8c4: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8C8u;
        goto label_1ac8c8;
    }
    ctx->pc = 0x1AC8C0u;
    {
        const bool branch_taken_0x1ac8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8C0u;
        // 0x1ac8c4: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8c0) {
            ctx->pc = 0x1AC8DCu;
            goto label_1ac8dc;
        }
    }
    ctx->pc = 0x1AC8C8u;
label_1ac8c8:
    // 0x1ac8c8: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1ac8c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1ac8cc:
    // 0x1ac8cc: 0xc07a546  jal         func_1E9518
label_1ac8d0:
    if (ctx->pc == 0x1AC8D0u) {
        ctx->pc = 0x1AC8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8CCu;
        // 0x1ac8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8D4u;
        goto label_1ac8d4;
    }
    ctx->pc = 0x1AC8CCu;
    SET_GPR_U32(ctx, 31, 0x1AC8D4u);
    ctx->pc = 0x1AC8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8CCu;
    // 0x1ac8d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9518u, 0x1AC8CCu, 0x1AC8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8D4u;
label_1ac8d4:
    // 0x1ac8d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ac8d8:
    if (ctx->pc == 0x1AC8D8u) {
        ctx->pc = 0x1AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D4u;
        // 0x1ac8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8DCu;
        goto label_1ac8dc;
    }
    ctx->pc = 0x1AC8D4u;
    {
        const bool branch_taken_0x1ac8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8D4u;
        // 0x1ac8d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac8d4) {
            ctx->pc = 0x1AC8ECu;
            goto label_1ac8ec;
        }
    }
    ctx->pc = 0x1AC8DCu;
label_1ac8dc:
    // 0x1ac8dc: 0x3405f000  ori         $a1, $zero, 0xF000
    ctx->pc = 0x1ac8dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1ac8e0:
    // 0x1ac8e0: 0xc07a4f0  jal         func_1E93C0
label_1ac8e4:
    if (ctx->pc == 0x1AC8E4u) {
        ctx->pc = 0x1AC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8E0u;
        // 0x1ac8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8E8u;
        goto label_1ac8e8;
    }
    ctx->pc = 0x1AC8E0u;
    SET_GPR_U32(ctx, 31, 0x1AC8E8u);
    ctx->pc = 0x1AC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8E0u;
    // 0x1ac8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E93C0u, 0x1AC8E0u, 0x1AC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8E8u;
label_1ac8e8:
    // 0x1ac8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ac8ec:
    // 0x1ac8ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1ac8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1ac8f0:
    // 0x1ac8f0: 0xc07a51a  jal         func_1E9468
label_1ac8f4:
    if (ctx->pc == 0x1AC8F4u) {
        ctx->pc = 0x1AC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8F0u;
        // 0x1ac8f4: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC8F8u;
        goto label_1ac8f8;
    }
    ctx->pc = 0x1AC8F0u;
    SET_GPR_U32(ctx, 31, 0x1AC8F8u);
    ctx->pc = 0x1AC8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8F0u;
    // 0x1ac8f4: 0x34a50fff  ori         $a1, $a1, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9468u, 0x1AC8F0u, 0x1AC8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC8F8u;
label_1ac8f8:
    // 0x1ac8f8: 0xc051800  jal         func_146000
label_1ac8fc:
    if (ctx->pc == 0x1AC8FCu) {
        ctx->pc = 0x1AC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC8F8u;
        // 0x1ac8fc: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC900u;
        goto label_1ac900;
    }
    ctx->pc = 0x1AC8F8u;
    SET_GPR_U32(ctx, 31, 0x1AC900u);
    ctx->pc = 0x1AC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC8F8u;
    // 0x1ac8fc: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1AC8F8u, 0x1AC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC900u;
label_1ac900:
    // 0x1ac900: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1ac900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1ac904:
    // 0x1ac904: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_1ac908:
    if (ctx->pc == 0x1AC908u) {
        ctx->pc = 0x1AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC904u;
        // 0x1ac908: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC90Cu;
        goto label_1ac90c;
    }
    ctx->pc = 0x1AC904u;
    {
        const bool branch_taken_0x1ac904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC904u;
        // 0x1ac908: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac904) {
            ctx->pc = 0x1ACB5Cu;
            goto label_1acb5c;
        }
    }
    ctx->pc = 0x1AC90Cu;
label_1ac90c:
    // 0x1ac90c: 0x922500b9  lbu         $a1, 0xB9($s1)
    ctx->pc = 0x1ac90cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
label_1ac910:
    // 0x1ac910: 0x922600b8  lbu         $a2, 0xB8($s1)
    ctx->pc = 0x1ac910u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 184)));
label_1ac914:
    // 0x1ac914: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1ac914u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ac918:
    // 0x1ac918: 0x7a240030  lq          $a0, 0x30($s1)
    ctx->pc = 0x1ac918u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_1ac91c:
    // 0x1ac91c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1ac91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ac920:
    // 0x1ac920: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ac920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_1ac924:
    // 0x1ac924: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1ac928:
    // 0x1ac928: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x1ac928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_1ac92c:
    // 0x1ac92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ac930:
    // 0x1ac930: 0x0  nop
    ctx->pc = 0x1ac930u;
    // NOP
label_1ac934:
    // 0x1ac934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ac934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ac938:
    // 0x1ac938: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ac938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1ac93c:
    // 0x1ac93c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ac93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ac940:
    // 0x1ac940: 0x0  nop
    ctx->pc = 0x1ac940u;
    // NOP
label_1ac944:
    // 0x1ac944: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ac944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ac948:
    // 0x1ac948: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ac948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_1ac94c:
    // 0x1ac94c: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x1ac94cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1ac950:
    // 0x1ac950: 0x0  nop
    ctx->pc = 0x1ac950u;
    // NOP
label_1ac954:
    // 0x1ac954: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x1ac954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
label_1ac958:
    // 0x1ac958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ac958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ac95c:
    // 0x1ac95c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1ac95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1ac960:
    // 0x1ac960: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x1ac960u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1ac964:
    // 0x1ac964: 0x0  nop
    ctx->pc = 0x1ac964u;
    // NOP
label_1ac968:
    // 0x1ac968: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1ac968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1ac96c:
    // 0x1ac96c: 0xc62200a0  lwc1        $f2, 0xA0($s1)
    ctx->pc = 0x1ac96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac970:
    // 0x1ac970: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1ac970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ac974:
    // 0x1ac974: 0xc62300a8  lwc1        $f3, 0xA8($s1)
    ctx->pc = 0x1ac974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ac978:
    // 0x1ac978: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x1ac978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_1ac97c:
    // 0x1ac97c: 0xe4e4000c  swc1        $f4, 0xC($a3)
    ctx->pc = 0x1ac97cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1ac980:
    // 0x1ac980: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ac980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ac984:
    // 0x1ac984: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1ac984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1ac988:
    // 0x1ac988: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1ac988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_1ac98c:
    // 0x1ac98c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1ac98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ac990:
    // 0x1ac990: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ac990u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ac994:
    // 0x1ac994: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1ac994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac998:
    // 0x1ac998: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1ac998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ac99c:
    // 0x1ac99c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1ac99cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1ac9a0:
    // 0x1ac9a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ac9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ac9a4:
    // 0x1ac9a4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ac9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ac9a8:
    // 0x1ac9a8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1ac9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1ac9ac:
    // 0x1ac9ac: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x1ac9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ac9b0:
    // 0x1ac9b0: 0x0  nop
    ctx->pc = 0x1ac9b0u;
    // NOP
label_1ac9b4:
    // 0x1ac9b4: 0x0  nop
    ctx->pc = 0x1ac9b4u;
    // NOP
label_1ac9b8:
    // 0x1ac9b8: 0x46060843  div.s       $f1, $f1, $f6
    ctx->pc = 0x1ac9b8u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[6]); }
label_1ac9bc:
    // 0x1ac9bc: 0x0  nop
    ctx->pc = 0x1ac9bcu;
    // NOP
label_1ac9c0:
    // 0x1ac9c0: 0x0  nop
    ctx->pc = 0x1ac9c0u;
    // NOP
label_1ac9c4:
    // 0x1ac9c4: 0x46050503  div.s       $f20, $f0, $f5
    ctx->pc = 0x1ac9c4u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
label_1ac9c8:
    // 0x1ac9c8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1ac9c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1ac9cc:
    // 0x1ac9cc: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1ac9ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ac9d0:
    // 0x1ac9d0: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x1ac9d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_1ac9d4:
    // 0x1ac9d4: 0xe444000c  swc1        $f4, 0xC($v0)
    ctx->pc = 0x1ac9d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ac9d8:
    // 0x1ac9d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1ac9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ac9dc:
    // 0x1ac9dc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1ac9dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_1ac9e0:
    // 0x1ac9e0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1ac9e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ac9e4:
    // 0x1ac9e4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x1ac9e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1ac9e8:
    // 0x1ac9e8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1ac9e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ac9ec:
    // 0x1ac9ec: 0x8c720004  lw          $s2, 0x4($v1)
    ctx->pc = 0x1ac9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ac9f0:
    // 0x1ac9f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ac9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac9f4:
    // 0x1ac9f4: 0x12420036  beq         $s2, $v0, . + 4 + (0x36 << 2)
label_1ac9f8:
    if (ctx->pc == 0x1AC9F8u) {
        ctx->pc = 0x1AC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9F4u;
        // 0x1ac9f8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC9FCu;
        goto label_1ac9fc;
    }
    ctx->pc = 0x1AC9F4u;
    {
        const bool branch_taken_0x1ac9f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC9F4u;
        // 0x1ac9f8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac9f4) {
            ctx->pc = 0x1ACAD0u;
            goto label_1acad0;
        }
    }
    ctx->pc = 0x1AC9FCu;
label_1ac9fc:
    // 0x1ac9fc: 0x46003d46  mov.s       $f21, $f7
    ctx->pc = 0x1ac9fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[7]);
label_1aca00:
    // 0x1aca00: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1aca00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1aca04:
    // 0x1aca04: 0x0  nop
    ctx->pc = 0x1aca04u;
    // NOP
label_1aca08:
    // 0x1aca08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1aca08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1aca0c:
    // 0x1aca0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1aca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aca10:
    // 0x1aca10: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x1aca10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_1aca14:
    // 0x1aca14: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x1aca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_1aca18:
    // 0x1aca18: 0x40f809  jalr        $v0
label_1aca1c:
    if (ctx->pc == 0x1ACA1Cu) {
        ctx->pc = 0x1ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA18u;
        // 0x1aca1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA20u;
        goto label_1aca20;
    }
    ctx->pc = 0x1ACA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACA20u);
        ctx->pc = 0x1ACA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA18u;
        // 0x1aca1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACA18u, 0x1ACA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACA20u;
label_1aca20:
    // 0x1aca20: 0x922300b9  lbu         $v1, 0xB9($s1)
    ctx->pc = 0x1aca20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 185)));
label_1aca24:
    // 0x1aca24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aca28:
    // 0x1aca28: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1aca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1aca2c:
    // 0x1aca2c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1aca2cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1aca30:
    // 0x1aca30: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1aca34:
    if (ctx->pc == 0x1ACA34u) {
        ctx->pc = 0x1ACA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA30u;
        // 0x1aca34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA38u;
        goto label_1aca38;
    }
    ctx->pc = 0x1ACA30u;
    {
        const bool branch_taken_0x1aca30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aca30) {
            ctx->pc = 0x1ACA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACA30u;
            // 0x1aca34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA38u;
            goto label_1aca38;
        }
    }
    ctx->pc = 0x1ACA38u;
label_1aca38:
    // 0x1aca38: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x1aca38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aca3c:
    // 0x1aca3c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1aca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1aca40:
    // 0x1aca40: 0xc62500a8  lwc1        $f5, 0xA8($s1)
    ctx->pc = 0x1aca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1aca44:
    // 0x1aca44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1aca44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1aca48:
    // 0x1aca48: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x1aca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1aca4c:
    // 0x1aca4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1aca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aca50:
    // 0x1aca50: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x1aca50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1aca54:
    // 0x1aca54: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1aca54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1aca58:
    // 0x1aca58: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x1aca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aca5c:
    // 0x1aca5c: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x1aca5cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_1aca60:
    // 0x1aca60: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x1aca60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_1aca64:
    // 0x1aca64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1aca64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1aca68:
    // 0x1aca68: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x1aca68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_1aca6c:
    // 0x1aca6c: 0x1012  mflo        $v0
    ctx->pc = 0x1aca6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1aca70:
    // 0x1aca70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aca70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1aca74:
    // 0x1aca74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aca74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1aca78:
    // 0x1aca78: 0x0  nop
    ctx->pc = 0x1aca78u;
    // NOP
label_1aca7c:
    // 0x1aca7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aca7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1aca80:
    // 0x1aca80: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1aca80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1aca84:
    // 0x1aca84: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1aca84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1aca88:
    // 0x1aca88: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1aca88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1aca8c:
    // 0x1aca8c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1aca8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1aca90:
    // 0x1aca90: 0xc06adc6  jal         func_1AB718
label_1aca94:
    if (ctx->pc == 0x1ACA94u) {
        ctx->pc = 0x1ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACA90u;
        // 0x1aca94: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACA98u;
        goto label_1aca98;
    }
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA90u;
    // 0x1aca94: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB718u, 0x1ACA90u, 0x1ACA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aca9c:
    // 0x1aca9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1acaa0:
    // 0x1acaa0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1acaa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1acaa4:
    // 0x1acaa4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1acaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1acaa8:
    // 0x1acaa8: 0x60f809  jalr        $v1
label_1acaac:
    if (ctx->pc == 0x1ACAACu) {
        ctx->pc = 0x1ACAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA8u;
        // 0x1acaac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAB0u;
        goto label_1acab0;
    }
    ctx->pc = 0x1ACAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACAB0u);
        ctx->pc = 0x1ACAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA8u;
        // 0x1acaac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAA8u, 0x1ACAB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACAB0u;
label_1acab0:
    // 0x1acab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acab4:
    // 0x1acab4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1acab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1acab8:
    // 0x1acab8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1acab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1acabc:
    // 0x1acabc: 0x60f809  jalr        $v1
label_1acac0:
    if (ctx->pc == 0x1ACAC0u) {
        ctx->pc = 0x1ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACABCu;
        // 0x1acac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAC4u;
        goto label_1acac4;
    }
    ctx->pc = 0x1ACABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACAC4u);
        ctx->pc = 0x1ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACABCu;
        // 0x1acac0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACABCu, 0x1ACAC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACAC4u;
label_1acac4:
    // 0x1acac4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1acac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1acac8:
    // 0x1acac8: 0x5642ffcf  bnel        $s2, $v0, . + 4 + (-0x31 << 2)
label_1acacc:
    if (ctx->pc == 0x1ACACCu) {
        ctx->pc = 0x1ACACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAC8u;
        // 0x1acacc: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAD0u;
        goto label_1acad0;
    }
    ctx->pc = 0x1ACAC8u;
    {
        const bool branch_taken_0x1acac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1acac8) {
            ctx->pc = 0x1ACACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACAC8u;
            // 0x1acacc: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aca08;
        }
    }
    ctx->pc = 0x1ACAD0u;
label_1acad0:
    // 0x1acad0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acad4:
    // 0x1acad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acad8:
    // 0x1acad8: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1acad8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1acadc:
    // 0x1acadc: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1acadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1acae0:
    // 0x1acae0: 0x60f809  jalr        $v1
label_1acae4:
    if (ctx->pc == 0x1ACAE4u) {
        ctx->pc = 0x1ACAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAE0u;
        // 0x1acae4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACAE8u;
        goto label_1acae8;
    }
    ctx->pc = 0x1ACAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACAE8u);
        ctx->pc = 0x1ACAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAE0u;
        // 0x1acae4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAE0u, 0x1ACAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACAE8u;
label_1acae8:
    // 0x1acae8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1acae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1acaec:
    // 0x1acaec: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x1acaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1acaf0:
    // 0x1acaf0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1acaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1acaf4:
    // 0x1acaf4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1acaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1acaf8:
    // 0x1acaf8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1acaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1acafc:
    // 0x1acafc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1acafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1acb00:
    // 0x1acb00: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x1acb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acb04:
    // 0x1acb04: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1acb04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1acb08:
    // 0x1acb08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1acb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acb0c:
    // 0x1acb0c: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1acb0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1acb10:
    // 0x1acb10: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1acb10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1acb14:
    // 0x1acb14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1acb14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1acb18:
    // 0x1acb18: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x1acb18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1acb1c:
    // 0x1acb1c: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1acb1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1acb20:
    // 0x1acb20: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1acb20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1acb24:
    // 0x1acb24: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1acb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1acb28:
    // 0x1acb28: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1acb28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1acb2c:
    // 0x1acb2c: 0xa0f809  jalr        $a1
label_1acb30:
    if (ctx->pc == 0x1ACB30u) {
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB34u;
        goto label_1acb34;
    }
    ctx->pc = 0x1ACB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1ACB34u);
        ctx->pc = 0x1ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB2Cu;
        // 0x1acb30: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB2Cu, 0x1ACB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACB34u;
label_1acb34:
    // 0x1acb34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1acb34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1acb38:
    // 0x1acb38: 0x0  nop
    ctx->pc = 0x1acb38u;
    // NOP
label_1acb3c:
    // 0x1acb3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1acb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1acb40:
    // 0x1acb40: 0x0  nop
    ctx->pc = 0x1acb40u;
    // NOP
label_1acb44:
    // 0x1acb44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1acb48:
    if (ctx->pc == 0x1ACB48u) {
        ctx->pc = 0x1ACB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB44u;
        // 0x1acb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB4Cu;
        goto label_1acb4c;
    }
    ctx->pc = 0x1ACB44u;
    {
        const bool branch_taken_0x1acb44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ACB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB44u;
        // 0x1acb48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb44) {
            ctx->pc = 0x1ACB50u;
            goto label_1acb50;
        }
    }
    ctx->pc = 0x1ACB4Cu;
label_1acb4c:
    // 0x1acb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1acb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acb50:
    // 0x1acb50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1acb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1acb54:
    // 0x1acb54: 0x40f809  jalr        $v0
label_1acb58:
    if (ctx->pc == 0x1ACB58u) {
        ctx->pc = 0x1ACB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB54u;
        // 0x1acb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB5Cu;
        goto label_1acb5c;
    }
    ctx->pc = 0x1ACB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACB5Cu);
        ctx->pc = 0x1ACB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB54u;
        // 0x1acb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB54u, 0x1ACB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACB5Cu;
label_1acb5c:
    // 0x1acb5c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1acb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1acb60:
    // 0x1acb60: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1acb60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1acb64:
    // 0x1acb64: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1acb64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1acb68:
    // 0x1acb68: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1acb68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1acb6c:
    // 0x1acb6c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1acb6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1acb70:
    // 0x1acb70: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1acb70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1acb74:
    // 0x1acb74: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1acb74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1acb78:
    // 0x1acb78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1acb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1acb7c:
    // 0x1acb7c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1acb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1acb80:
    // 0x1acb80: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1acb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1acb84:
    // 0x1acb84: 0x3e00008  jr          $ra
label_1acb88:
    if (ctx->pc == 0x1ACB88u) {
        ctx->pc = 0x1ACB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB84u;
        // 0x1acb88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB8Cu;
        goto label_1acb8c;
    }
    ctx->pc = 0x1ACB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB84u;
        // 0x1acb88: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACB8Cu;
label_1acb8c:
    // 0x1acb8c: 0x0  nop
    ctx->pc = 0x1acb8cu;
    // NOP
    ctx->pc = 0x1acb90u;
}
