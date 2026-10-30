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

// Function: sub_002878B8
// Address: 0x2878b8 - 0x287a18
void sub_002878B8_0x2878b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002878B8_0x2878b8");
#endif

    switch (ctx->pc) {
        case 0x2878b8u: goto label_2878b8;
        case 0x2878bcu: goto label_2878bc;
        case 0x2878c0u: goto label_2878c0;
        case 0x2878c4u: goto label_2878c4;
        case 0x2878c8u: goto label_2878c8;
        case 0x2878ccu: goto label_2878cc;
        case 0x2878d0u: goto label_2878d0;
        case 0x2878d4u: goto label_2878d4;
        case 0x2878d8u: goto label_2878d8;
        case 0x2878dcu: goto label_2878dc;
        case 0x2878e0u: goto label_2878e0;
        case 0x2878e4u: goto label_2878e4;
        case 0x2878e8u: goto label_2878e8;
        case 0x2878ecu: goto label_2878ec;
        case 0x2878f0u: goto label_2878f0;
        case 0x2878f4u: goto label_2878f4;
        case 0x2878f8u: goto label_2878f8;
        case 0x2878fcu: goto label_2878fc;
        case 0x287900u: goto label_287900;
        case 0x287904u: goto label_287904;
        case 0x287908u: goto label_287908;
        case 0x28790cu: goto label_28790c;
        case 0x287910u: goto label_287910;
        case 0x287914u: goto label_287914;
        case 0x287918u: goto label_287918;
        case 0x28791cu: goto label_28791c;
        case 0x287920u: goto label_287920;
        case 0x287924u: goto label_287924;
        case 0x287928u: goto label_287928;
        case 0x28792cu: goto label_28792c;
        case 0x287930u: goto label_287930;
        case 0x287934u: goto label_287934;
        case 0x287938u: goto label_287938;
        case 0x28793cu: goto label_28793c;
        case 0x287940u: goto label_287940;
        case 0x287944u: goto label_287944;
        case 0x287948u: goto label_287948;
        case 0x28794cu: goto label_28794c;
        case 0x287950u: goto label_287950;
        case 0x287954u: goto label_287954;
        case 0x287958u: goto label_287958;
        case 0x28795cu: goto label_28795c;
        case 0x287960u: goto label_287960;
        case 0x287964u: goto label_287964;
        case 0x287968u: goto label_287968;
        case 0x28796cu: goto label_28796c;
        case 0x287970u: goto label_287970;
        case 0x287974u: goto label_287974;
        case 0x287978u: goto label_287978;
        case 0x28797cu: goto label_28797c;
        case 0x287980u: goto label_287980;
        case 0x287984u: goto label_287984;
        case 0x287988u: goto label_287988;
        case 0x28798cu: goto label_28798c;
        case 0x287990u: goto label_287990;
        case 0x287994u: goto label_287994;
        case 0x287998u: goto label_287998;
        case 0x28799cu: goto label_28799c;
        case 0x2879a0u: goto label_2879a0;
        case 0x2879a4u: goto label_2879a4;
        case 0x2879a8u: goto label_2879a8;
        case 0x2879acu: goto label_2879ac;
        case 0x2879b0u: goto label_2879b0;
        case 0x2879b4u: goto label_2879b4;
        case 0x2879b8u: goto label_2879b8;
        case 0x2879bcu: goto label_2879bc;
        case 0x2879c0u: goto label_2879c0;
        case 0x2879c4u: goto label_2879c4;
        case 0x2879c8u: goto label_2879c8;
        case 0x2879ccu: goto label_2879cc;
        case 0x2879d0u: goto label_2879d0;
        case 0x2879d4u: goto label_2879d4;
        case 0x2879d8u: goto label_2879d8;
        case 0x2879dcu: goto label_2879dc;
        case 0x2879e0u: goto label_2879e0;
        case 0x2879e4u: goto label_2879e4;
        case 0x2879e8u: goto label_2879e8;
        case 0x2879ecu: goto label_2879ec;
        case 0x2879f0u: goto label_2879f0;
        case 0x2879f4u: goto label_2879f4;
        case 0x2879f8u: goto label_2879f8;
        case 0x2879fcu: goto label_2879fc;
        case 0x287a00u: goto label_287a00;
        case 0x287a04u: goto label_287a04;
        case 0x287a08u: goto label_287a08;
        case 0x287a0cu: goto label_287a0c;
        case 0x287a10u: goto label_287a10;
        case 0x287a14u: goto label_287a14;
        default: break;
    }

    ctx->pc = 0x2878b8u;

label_2878b8:
    // 0x2878b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2878b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2878bc:
    // 0x2878bc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2878bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2878c0:
    // 0x2878c0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2878c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2878c4:
    // 0x2878c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2878c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2878c8:
    // 0x2878c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2878c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2878cc:
    // 0x2878cc: 0xc0874fa  jal         func_21D3E8
label_2878d0:
    if (ctx->pc == 0x2878D0u) {
        ctx->pc = 0x2878D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878CCu;
        // 0x2878d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2878D4u;
        goto label_2878d4;
    }
    ctx->pc = 0x2878CCu;
    SET_GPR_U32(ctx, 31, 0x2878D4u);
    ctx->pc = 0x2878D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878CCu;
    // 0x2878d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2878CCu, 0x2878D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878D4u;
label_2878d4:
    // 0x2878d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2878d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2878d8:
    // 0x2878d8: 0xc088ac6  jal         func_222B18
label_2878dc:
    if (ctx->pc == 0x2878DCu) {
        ctx->pc = 0x2878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878D8u;
        // 0x2878dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2878E0u;
        goto label_2878e0;
    }
    ctx->pc = 0x2878D8u;
    SET_GPR_U32(ctx, 31, 0x2878E0u);
    ctx->pc = 0x2878DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878D8u;
    // 0x2878dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x2878D8u, 0x2878E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878E0u;
label_2878e0:
    // 0x2878e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2878e4:
    // 0x2878e4: 0xc09eda0  jal         func_27B680
label_2878e8:
    if (ctx->pc == 0x2878E8u) {
        ctx->pc = 0x2878E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878E4u;
        // 0x2878e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2878ECu;
        goto label_2878ec;
    }
    ctx->pc = 0x2878E4u;
    SET_GPR_U32(ctx, 31, 0x2878ECu);
    ctx->pc = 0x2878E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2878E4u;
    // 0x2878e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B680u, 0x2878E4u, 0x2878ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2878ECu;
label_2878ec:
    // 0x2878ec: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2878f0:
    if (ctx->pc == 0x2878F0u) {
        ctx->pc = 0x2878F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878ECu;
        // 0x2878f0: 0x24030540  addiu       $v1, $zero, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2878F4u;
        goto label_2878f4;
    }
    ctx->pc = 0x2878ECu;
    {
        const bool branch_taken_0x2878ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878ECu;
        // 0x2878f0: 0x24030540  addiu       $v1, $zero, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878ec) {
            ctx->pc = 0x2879D8u;
            goto label_2879d8;
        }
    }
    ctx->pc = 0x2878F4u;
label_2878f4:
    // 0x2878f4: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x2878f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_2878f8:
    // 0x2878f8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2878f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2878fc:
    // 0x2878fc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2878fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_287900:
    // 0x287900: 0x2484fc60  addiu       $a0, $a0, -0x3A0
    ctx->pc = 0x287900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966368));
label_287904:
    // 0x287904: 0xc06e34e  jal         func_1B8D38
label_287908:
    if (ctx->pc == 0x287908u) {
        ctx->pc = 0x287908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287904u;
        // 0x287908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28790Cu;
        goto label_28790c;
    }
    ctx->pc = 0x287904u;
    SET_GPR_U32(ctx, 31, 0x28790Cu);
    ctx->pc = 0x287908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287904u;
    // 0x287908: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8D38u, 0x287904u, 0x28790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28790Cu;
label_28790c:
    // 0x28790c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28790cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287910:
    // 0x287910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287914:
    // 0x287914: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_287918:
    if (ctx->pc == 0x287918u) {
        ctx->pc = 0x287918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287914u;
        // 0x287918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28791Cu;
        goto label_28791c;
    }
    ctx->pc = 0x287914u;
    {
        const bool branch_taken_0x287914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x287918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287914u;
        // 0x287918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287914) {
            ctx->pc = 0x28792Cu;
            goto label_28792c;
        }
    }
    ctx->pc = 0x28791Cu;
label_28791c:
    // 0x28791c: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x28791cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_287920:
    // 0x287920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287924:
    // 0x287924: 0x10000022  b           . + 4 + (0x22 << 2)
label_287928:
    if (ctx->pc == 0x287928u) {
        ctx->pc = 0x287928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287924u;
        // 0x287928: 0xa6020042  sh          $v0, 0x42($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28792Cu;
        goto label_28792c;
    }
    ctx->pc = 0x287924u;
    {
        const bool branch_taken_0x287924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287924u;
        // 0x287928: 0xa6020042  sh          $v0, 0x42($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287924) {
            ctx->pc = 0x2879B0u;
            goto label_2879b0;
        }
    }
    ctx->pc = 0x28792Cu;
label_28792c:
    // 0x28792c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
label_287930:
    if (ctx->pc == 0x287930u) {
        ctx->pc = 0x287930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28792Cu;
        // 0x287930: 0xa6000044  sh          $zero, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287934u;
        goto label_287934;
    }
    ctx->pc = 0x28792Cu;
    {
        const bool branch_taken_0x28792c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28792c) {
            ctx->pc = 0x287930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28792Cu;
            // 0x287930: 0xa6000044  sh          $zero, 0x44($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287950u;
            goto label_287950;
        }
    }
    ctx->pc = 0x287934u;
label_287934:
    // 0x287934: 0x96020042  lhu         $v0, 0x42($s0)
    ctx->pc = 0x287934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
label_287938:
    // 0x287938: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x287938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_28793c:
    // 0x28793c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_287940:
    // 0x287940: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_287944:
    // 0x287944: 0xa6020042  sh          $v0, 0x42($s0)
    ctx->pc = 0x287944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
label_287948:
    // 0x287948: 0x10000019  b           . + 4 + (0x19 << 2)
label_28794c:
    if (ctx->pc == 0x28794Cu) {
        ctx->pc = 0x28794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287948u;
        // 0x28794c: 0xa6030044  sh          $v1, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287950u;
        goto label_287950;
    }
    ctx->pc = 0x287948u;
    {
        const bool branch_taken_0x287948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287948u;
        // 0x28794c: 0xa6030044  sh          $v1, 0x44($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287948) {
            ctx->pc = 0x2879B0u;
            goto label_2879b0;
        }
    }
    ctx->pc = 0x287950u;
label_287950:
    // 0x287950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x287950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_287954:
    // 0x287954: 0xc089c18  jal         func_227060
label_287958:
    if (ctx->pc == 0x287958u) {
        ctx->pc = 0x287958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287954u;
        // 0x287958: 0xa6000042  sh          $zero, 0x42($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28795Cu;
        goto label_28795c;
    }
    ctx->pc = 0x287954u;
    SET_GPR_U32(ctx, 31, 0x28795Cu);
    ctx->pc = 0x287958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287954u;
    // 0x287958: 0xa6000042  sh          $zero, 0x42($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x287954u, 0x28795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28795Cu;
label_28795c:
    // 0x28795c: 0xc0e57ce  jal         func_395F38
label_287960:
    if (ctx->pc == 0x287960u) {
        ctx->pc = 0x287960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28795Cu;
        // 0x287960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287964u;
        goto label_287964;
    }
    ctx->pc = 0x28795Cu;
    SET_GPR_U32(ctx, 31, 0x287964u);
    ctx->pc = 0x287960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28795Cu;
    // 0x287960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x28795Cu, 0x287964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287964u;
label_287964:
    // 0x287964: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x287964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287968:
    // 0x287968: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_28796c:
    if (ctx->pc == 0x28796Cu) {
        ctx->pc = 0x28796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287968u;
        // 0x28796c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287970u;
        goto label_287970;
    }
    ctx->pc = 0x287968u;
    {
        const bool branch_taken_0x287968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287968u;
        // 0x28796c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287968) {
            ctx->pc = 0x28798Cu;
            goto label_28798c;
        }
    }
    ctx->pc = 0x287970u;
label_287970:
    // 0x287970: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x287970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_287974:
    // 0x287974: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x287974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_287978:
    // 0x287978: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x287978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28797c:
    // 0x28797c: 0x40f809  jalr        $v0
label_287980:
    if (ctx->pc == 0x287980u) {
        ctx->pc = 0x287980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28797Cu;
        // 0x287980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287984u;
        goto label_287984;
    }
    ctx->pc = 0x28797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287984u);
        ctx->pc = 0x287980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28797Cu;
        // 0x287980: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28797Cu, 0x287984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287984u;
label_287984:
    // 0x287984: 0x10000002  b           . + 4 + (0x2 << 2)
label_287988:
    if (ctx->pc == 0x287988u) {
        ctx->pc = 0x287988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287984u;
        // 0x287988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28798Cu;
        goto label_28798c;
    }
    ctx->pc = 0x287984u;
    {
        const bool branch_taken_0x287984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287984u;
        // 0x287988: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287984) {
            ctx->pc = 0x287990u;
            goto label_287990;
        }
    }
    ctx->pc = 0x28798Cu;
label_28798c:
    // 0x28798c: 0x8c50bd30  lw          $s0, -0x42D0($v0)
    ctx->pc = 0x28798cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_287990:
    // 0x287990: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x287990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_287994:
    // 0x287994: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x287994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_287998:
    // 0x287998: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x287998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_28799c:
    // 0x28799c: 0x40f809  jalr        $v0
label_2879a0:
    if (ctx->pc == 0x2879A0u) {
        ctx->pc = 0x2879A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28799Cu;
        // 0x2879a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879A4u;
        goto label_2879a4;
    }
    ctx->pc = 0x28799Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2879A4u);
        ctx->pc = 0x2879A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28799Cu;
        // 0x2879a0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28799Cu, 0x2879A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2879A4u;
label_2879a4:
    // 0x2879a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2879a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2879a8:
    // 0x2879a8: 0xc08d9b6  jal         func_2366D8
label_2879ac:
    if (ctx->pc == 0x2879ACu) {
        ctx->pc = 0x2879ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879A8u;
        // 0x2879ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879B0u;
        goto label_2879b0;
    }
    ctx->pc = 0x2879A8u;
    SET_GPR_U32(ctx, 31, 0x2879B0u);
    ctx->pc = 0x2879ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879A8u;
    // 0x2879ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2366D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2366D8u, 0x2879A8u, 0x2879B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879B0u;
label_2879b0:
    // 0x2879b0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2879b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2879b4:
    // 0x2879b4: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x2879b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2879b8:
    // 0x2879b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2879bc:
    // 0x2879bc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2879c0:
    // 0x2879c0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2879c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2879c4:
    // 0x2879c4: 0x40f809  jalr        $v0
label_2879c8:
    if (ctx->pc == 0x2879C8u) {
        ctx->pc = 0x2879C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879C4u;
        // 0x2879c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879CCu;
        goto label_2879cc;
    }
    ctx->pc = 0x2879C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2879CCu);
        ctx->pc = 0x2879C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879C4u;
        // 0x2879c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2879C4u, 0x2879CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2879CCu;
label_2879cc:
    // 0x2879cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2879ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2879d0:
    // 0x2879d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2879d4:
    if (ctx->pc == 0x2879D4u) {
        ctx->pc = 0x2879D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D0u;
        // 0x2879d4: 0xfc620a70  sd          $v0, 0xA70($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 2672), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879D8u;
        goto label_2879d8;
    }
    ctx->pc = 0x2879D0u;
    {
        const bool branch_taken_0x2879d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D0u;
        // 0x2879d4: 0xfc620a70  sd          $v0, 0xA70($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 2672), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879d0) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x2879D8u;
label_2879d8:
    // 0x2879d8: 0xc09ee9a  jal         func_27BA68
label_2879dc:
    if (ctx->pc == 0x2879DCu) {
        ctx->pc = 0x2879DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879D8u;
        // 0x2879dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879E0u;
        goto label_2879e0;
    }
    ctx->pc = 0x2879D8u;
    SET_GPR_U32(ctx, 31, 0x2879E0u);
    ctx->pc = 0x2879DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879D8u;
    // 0x2879dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA68u, 0x2879D8u, 0x2879E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879E0u;
label_2879e0:
    // 0x2879e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2879e4:
    if (ctx->pc == 0x2879E4u) {
        ctx->pc = 0x2879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E0u;
        // 0x2879e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879E8u;
        goto label_2879e8;
    }
    ctx->pc = 0x2879E0u;
    {
        const bool branch_taken_0x2879e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E0u;
        // 0x2879e4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879e0) {
            ctx->pc = 0x2879F8u;
            goto label_2879f8;
        }
    }
    ctx->pc = 0x2879E8u;
label_2879e8:
    // 0x2879e8: 0xc09ee84  jal         func_27BA10
label_2879ec:
    if (ctx->pc == 0x2879ECu) {
        ctx->pc = 0x2879ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879E8u;
        // 0x2879ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879F0u;
        goto label_2879f0;
    }
    ctx->pc = 0x2879E8u;
    SET_GPR_U32(ctx, 31, 0x2879F0u);
    ctx->pc = 0x2879ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2879E8u;
    // 0x2879ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BA10u, 0x2879E8u, 0x2879F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2879F0u;
label_2879f0:
    // 0x2879f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2879f4:
    if (ctx->pc == 0x2879F4u) {
        ctx->pc = 0x2879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879F0u;
        // 0x2879f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2879F8u;
        goto label_2879f8;
    }
    ctx->pc = 0x2879F0u;
    {
        const bool branch_taken_0x2879f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2879F0u;
        // 0x2879f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2879f0) {
            ctx->pc = 0x2879FCu;
            goto label_2879fc;
        }
    }
    ctx->pc = 0x2879F8u;
label_2879f8:
    // 0x2879f8: 0xa6020042  sh          $v0, 0x42($s0)
    ctx->pc = 0x2879f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 2));
label_2879fc:
    // 0x2879fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2879fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_287a00:
    // 0x287a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287a04:
    // 0x287a04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x287a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_287a08:
    // 0x287a08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x287a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_287a0c:
    // 0x287a0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_287a10:
    // 0x287a10: 0x3e00008  jr          $ra
label_287a14:
    if (ctx->pc == 0x287A14u) {
        ctx->pc = 0x287A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A10u;
        // 0x287a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287A18u;
        goto label_fallthrough_0x287a10;
    }
    ctx->pc = 0x287A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A10u;
        // 0x287a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x287a10:
    ctx->pc = 0x287A18u;
}
