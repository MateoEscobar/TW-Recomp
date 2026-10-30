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

// Function: sub_0043E840
// Address: 0x43e840 - 0x43ea18
void sub_0043E840_0x43e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043E840_0x43e840");
#endif

    switch (ctx->pc) {
        case 0x43e840u: goto label_43e840;
        case 0x43e844u: goto label_43e844;
        case 0x43e848u: goto label_43e848;
        case 0x43e84cu: goto label_43e84c;
        case 0x43e850u: goto label_43e850;
        case 0x43e854u: goto label_43e854;
        case 0x43e858u: goto label_43e858;
        case 0x43e85cu: goto label_43e85c;
        case 0x43e860u: goto label_43e860;
        case 0x43e864u: goto label_43e864;
        case 0x43e868u: goto label_43e868;
        case 0x43e86cu: goto label_43e86c;
        case 0x43e870u: goto label_43e870;
        case 0x43e874u: goto label_43e874;
        case 0x43e878u: goto label_43e878;
        case 0x43e87cu: goto label_43e87c;
        case 0x43e880u: goto label_43e880;
        case 0x43e884u: goto label_43e884;
        case 0x43e888u: goto label_43e888;
        case 0x43e88cu: goto label_43e88c;
        case 0x43e890u: goto label_43e890;
        case 0x43e894u: goto label_43e894;
        case 0x43e898u: goto label_43e898;
        case 0x43e89cu: goto label_43e89c;
        case 0x43e8a0u: goto label_43e8a0;
        case 0x43e8a4u: goto label_43e8a4;
        case 0x43e8a8u: goto label_43e8a8;
        case 0x43e8acu: goto label_43e8ac;
        case 0x43e8b0u: goto label_43e8b0;
        case 0x43e8b4u: goto label_43e8b4;
        case 0x43e8b8u: goto label_43e8b8;
        case 0x43e8bcu: goto label_43e8bc;
        case 0x43e8c0u: goto label_43e8c0;
        case 0x43e8c4u: goto label_43e8c4;
        case 0x43e8c8u: goto label_43e8c8;
        case 0x43e8ccu: goto label_43e8cc;
        case 0x43e8d0u: goto label_43e8d0;
        case 0x43e8d4u: goto label_43e8d4;
        case 0x43e8d8u: goto label_43e8d8;
        case 0x43e8dcu: goto label_43e8dc;
        case 0x43e8e0u: goto label_43e8e0;
        case 0x43e8e4u: goto label_43e8e4;
        case 0x43e8e8u: goto label_43e8e8;
        case 0x43e8ecu: goto label_43e8ec;
        case 0x43e8f0u: goto label_43e8f0;
        case 0x43e8f4u: goto label_43e8f4;
        case 0x43e8f8u: goto label_43e8f8;
        case 0x43e8fcu: goto label_43e8fc;
        case 0x43e900u: goto label_43e900;
        case 0x43e904u: goto label_43e904;
        case 0x43e908u: goto label_43e908;
        case 0x43e90cu: goto label_43e90c;
        case 0x43e910u: goto label_43e910;
        case 0x43e914u: goto label_43e914;
        case 0x43e918u: goto label_43e918;
        case 0x43e91cu: goto label_43e91c;
        case 0x43e920u: goto label_43e920;
        case 0x43e924u: goto label_43e924;
        case 0x43e928u: goto label_43e928;
        case 0x43e92cu: goto label_43e92c;
        case 0x43e930u: goto label_43e930;
        case 0x43e934u: goto label_43e934;
        case 0x43e938u: goto label_43e938;
        case 0x43e93cu: goto label_43e93c;
        case 0x43e940u: goto label_43e940;
        case 0x43e944u: goto label_43e944;
        case 0x43e948u: goto label_43e948;
        case 0x43e94cu: goto label_43e94c;
        case 0x43e950u: goto label_43e950;
        case 0x43e954u: goto label_43e954;
        case 0x43e958u: goto label_43e958;
        case 0x43e95cu: goto label_43e95c;
        case 0x43e960u: goto label_43e960;
        case 0x43e964u: goto label_43e964;
        case 0x43e968u: goto label_43e968;
        case 0x43e96cu: goto label_43e96c;
        case 0x43e970u: goto label_43e970;
        case 0x43e974u: goto label_43e974;
        case 0x43e978u: goto label_43e978;
        case 0x43e97cu: goto label_43e97c;
        case 0x43e980u: goto label_43e980;
        case 0x43e984u: goto label_43e984;
        case 0x43e988u: goto label_43e988;
        case 0x43e98cu: goto label_43e98c;
        case 0x43e990u: goto label_43e990;
        case 0x43e994u: goto label_43e994;
        case 0x43e998u: goto label_43e998;
        case 0x43e99cu: goto label_43e99c;
        case 0x43e9a0u: goto label_43e9a0;
        case 0x43e9a4u: goto label_43e9a4;
        case 0x43e9a8u: goto label_43e9a8;
        case 0x43e9acu: goto label_43e9ac;
        case 0x43e9b0u: goto label_43e9b0;
        case 0x43e9b4u: goto label_43e9b4;
        case 0x43e9b8u: goto label_43e9b8;
        case 0x43e9bcu: goto label_43e9bc;
        case 0x43e9c0u: goto label_43e9c0;
        case 0x43e9c4u: goto label_43e9c4;
        case 0x43e9c8u: goto label_43e9c8;
        case 0x43e9ccu: goto label_43e9cc;
        case 0x43e9d0u: goto label_43e9d0;
        case 0x43e9d4u: goto label_43e9d4;
        case 0x43e9d8u: goto label_43e9d8;
        case 0x43e9dcu: goto label_43e9dc;
        case 0x43e9e0u: goto label_43e9e0;
        case 0x43e9e4u: goto label_43e9e4;
        case 0x43e9e8u: goto label_43e9e8;
        case 0x43e9ecu: goto label_43e9ec;
        case 0x43e9f0u: goto label_43e9f0;
        case 0x43e9f4u: goto label_43e9f4;
        case 0x43e9f8u: goto label_43e9f8;
        case 0x43e9fcu: goto label_43e9fc;
        case 0x43ea00u: goto label_43ea00;
        case 0x43ea04u: goto label_43ea04;
        case 0x43ea08u: goto label_43ea08;
        case 0x43ea0cu: goto label_43ea0c;
        case 0x43ea10u: goto label_43ea10;
        case 0x43ea14u: goto label_43ea14;
        default: break;
    }

    ctx->pc = 0x43e840u;

label_43e840:
    // 0x43e840: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x43e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_43e844:
    // 0x43e844: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x43e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_43e848:
    // 0x43e848: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x43e848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_43e84c:
    // 0x43e84c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x43e84cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_43e850:
    // 0x43e850: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x43e850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_43e854:
    // 0x43e854: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x43e854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43e858:
    // 0x43e858: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x43e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_43e85c:
    // 0x43e85c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x43e85cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e860:
    // 0x43e860: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x43e860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_43e864:
    // 0x43e864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x43e864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e868:
    // 0x43e868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x43e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_43e86c:
    // 0x43e86c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x43e86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_43e870:
    // 0x43e870: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x43e870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_43e874:
    // 0x43e874: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x43e874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_43e878:
    // 0x43e878: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x43e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_43e87c:
    // 0x43e87c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_43e880:
    if (ctx->pc == 0x43E880u) {
        ctx->pc = 0x43E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E87Cu;
        // 0x43e880: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E884u;
        goto label_43e884;
    }
    ctx->pc = 0x43E87Cu;
    {
        const bool branch_taken_0x43e87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E87Cu;
        // 0x43e880: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e87c) {
            ctx->pc = 0x43E88Cu;
            goto label_43e88c;
        }
    }
    ctx->pc = 0x43E884u;
label_43e884:
    // 0x43e884: 0x1000005a  b           . + 4 + (0x5A << 2)
label_43e888:
    if (ctx->pc == 0x43E888u) {
        ctx->pc = 0x43E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E884u;
        // 0x43e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E88Cu;
        goto label_43e88c;
    }
    ctx->pc = 0x43E884u;
    {
        const bool branch_taken_0x43e884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E884u;
        // 0x43e888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e884) {
            ctx->pc = 0x43E9F0u;
            goto label_43e9f0;
        }
    }
    ctx->pc = 0x43E88Cu;
label_43e88c:
    // 0x43e88c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x43e88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43e890:
    // 0x43e890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43e890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43e894:
    // 0x43e894: 0xc10b0a0  jal         func_42C280
label_43e898:
    if (ctx->pc == 0x43E898u) {
        ctx->pc = 0x43E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E894u;
        // 0x43e898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E89Cu;
        goto label_43e89c;
    }
    ctx->pc = 0x43E894u;
    SET_GPR_U32(ctx, 31, 0x43E89Cu);
    ctx->pc = 0x43E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E894u;
    // 0x43e898: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43E894u, 0x43E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E89Cu;
label_43e89c:
    // 0x43e89c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_43e8a0:
    if (ctx->pc == 0x43E8A0u) {
        ctx->pc = 0x43E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E89Cu;
        // 0x43e8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E8A4u;
        goto label_43e8a4;
    }
    ctx->pc = 0x43E89Cu;
    {
        const bool branch_taken_0x43e89c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E89Cu;
        // 0x43e8a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e89c) {
            ctx->pc = 0x43E8D0u;
            goto label_43e8d0;
        }
    }
    ctx->pc = 0x43E8A4u;
label_43e8a4:
    // 0x43e8a4: 0xc10af3c  jal         func_42BCF0
label_43e8a8:
    if (ctx->pc == 0x43E8A8u) {
        ctx->pc = 0x43E8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8A4u;
        // 0x43e8a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E8ACu;
        goto label_43e8ac;
    }
    ctx->pc = 0x43E8A4u;
    SET_GPR_U32(ctx, 31, 0x43E8ACu);
    ctx->pc = 0x43E8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E8A4u;
    // 0x43e8a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43E8A4u, 0x43E8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E8ACu;
label_43e8ac:
    // 0x43e8ac: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x43e8acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43e8b0:
    // 0x43e8b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43e8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43e8b4:
    // 0x43e8b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x43e8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43e8b8:
    // 0x43e8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43e8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43e8bc:
    // 0x43e8bc: 0x2a0f809  jalr        $s5
label_43e8c0:
    if (ctx->pc == 0x43E8C0u) {
        ctx->pc = 0x43E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8BCu;
        // 0x43e8c0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E8C4u;
        goto label_43e8c4;
    }
    ctx->pc = 0x43E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x43E8C4u);
        ctx->pc = 0x43E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8BCu;
        // 0x43e8c0: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43E8BCu, 0x43E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43E8C4u;
label_43e8c4:
    // 0x43e8c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x43e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_43e8c8:
    // 0x43e8c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x43e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_43e8cc:
    // 0x43e8cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x43e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_43e8d0:
    // 0x43e8d0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x43e8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_43e8d4:
    // 0x43e8d4: 0xdc25d8f8  ld          $a1, -0x2708($at)
    ctx->pc = 0x43e8d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294957304)));
label_43e8d8:
    // 0x43e8d8: 0xc10b0a0  jal         func_42C280
label_43e8dc:
    if (ctx->pc == 0x43E8DCu) {
        ctx->pc = 0x43E8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8D8u;
        // 0x43e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E8E0u;
        goto label_43e8e0;
    }
    ctx->pc = 0x43E8D8u;
    SET_GPR_U32(ctx, 31, 0x43E8E0u);
    ctx->pc = 0x43E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E8D8u;
    // 0x43e8dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43E8D8u, 0x43E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E8E0u;
label_43e8e0:
    // 0x43e8e0: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_43e8e4:
    if (ctx->pc == 0x43E8E4u) {
        ctx->pc = 0x43E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8E0u;
        // 0x43e8e4: 0x3c130059  lui         $s3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E8E8u;
        goto label_43e8e8;
    }
    ctx->pc = 0x43E8E0u;
    {
        const bool branch_taken_0x43e8e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8E0u;
        // 0x43e8e4: 0x3c130059  lui         $s3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e8e0) {
            ctx->pc = 0x43E924u;
            goto label_43e924;
        }
    }
    ctx->pc = 0x43E8E8u;
label_43e8e8:
    // 0x43e8e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_43e8ec:
    if (ctx->pc == 0x43E8ECu) {
        ctx->pc = 0x43E8F0u;
        goto label_43e8f0;
    }
    ctx->pc = 0x43E8E8u;
    {
        const bool branch_taken_0x43e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e8e8) {
            ctx->pc = 0x43E904u;
            goto label_43e904;
        }
    }
    ctx->pc = 0x43E8F0u;
label_43e8f0:
    // 0x43e8f0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x43e8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_43e8f4:
    // 0x43e8f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43e8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_43e8f8:
    // 0x43e8f8: 0xc10af56  jal         func_42BD58
label_43e8fc:
    if (ctx->pc == 0x43E8FCu) {
        ctx->pc = 0x43E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E8F8u;
        // 0x43e8fc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E900u;
        goto label_43e900;
    }
    ctx->pc = 0x43E8F8u;
    SET_GPR_U32(ctx, 31, 0x43E900u);
    ctx->pc = 0x43E8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E8F8u;
    // 0x43e8fc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43E8F8u, 0x43E900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E900u;
label_43e900:
    // 0x43e900: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43e900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43e904:
    // 0x43e904: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x43e904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_43e908:
    // 0x43e908: 0xdc25d900  ld          $a1, -0x2700($at)
    ctx->pc = 0x43e908u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294957312)));
label_43e90c:
    // 0x43e90c: 0xc10b0a0  jal         func_42C280
label_43e910:
    if (ctx->pc == 0x43E910u) {
        ctx->pc = 0x43E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E90Cu;
        // 0x43e910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E914u;
        goto label_43e914;
    }
    ctx->pc = 0x43E90Cu;
    SET_GPR_U32(ctx, 31, 0x43E914u);
    ctx->pc = 0x43E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E90Cu;
    // 0x43e910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43E90Cu, 0x43E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E914u;
label_43e914:
    // 0x43e914: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
label_43e918:
    if (ctx->pc == 0x43E918u) {
        ctx->pc = 0x43E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E914u;
        // 0x43e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E91Cu;
        goto label_43e91c;
    }
    ctx->pc = 0x43E914u;
    {
        const bool branch_taken_0x43e914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x43E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E914u;
        // 0x43e918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e914) {
            ctx->pc = 0x43E8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e8f0;
        }
    }
    ctx->pc = 0x43E91Cu;
label_43e91c:
    // 0x43e91c: 0x10000015  b           . + 4 + (0x15 << 2)
label_43e920:
    if (ctx->pc == 0x43E920u) {
        ctx->pc = 0x43E924u;
        goto label_43e924;
    }
    ctx->pc = 0x43E91Cu;
    {
        const bool branch_taken_0x43e91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e91c) {
            ctx->pc = 0x43E974u;
            goto label_43e974;
        }
    }
    ctx->pc = 0x43E924u;
label_43e924:
    // 0x43e924: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x43e924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_43e928:
    // 0x43e928: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43e928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_43e92c:
    // 0x43e92c: 0xc10b0a0  jal         func_42C280
label_43e930:
    if (ctx->pc == 0x43E930u) {
        ctx->pc = 0x43E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E92Cu;
        // 0x43e930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E934u;
        goto label_43e934;
    }
    ctx->pc = 0x43E92Cu;
    SET_GPR_U32(ctx, 31, 0x43E934u);
    ctx->pc = 0x43E930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E92Cu;
    // 0x43e930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43E92Cu, 0x43E934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E934u;
label_43e934:
    // 0x43e934: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
label_43e938:
    if (ctx->pc == 0x43E938u) {
        ctx->pc = 0x43E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E934u;
        // 0x43e938: 0x3c130059  lui         $s3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E93Cu;
        goto label_43e93c;
    }
    ctx->pc = 0x43E934u;
    {
        const bool branch_taken_0x43e934 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x43E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E934u;
        // 0x43e938: 0x3c130059  lui         $s3, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e934) {
            ctx->pc = 0x43E974u;
            goto label_43e974;
        }
    }
    ctx->pc = 0x43E93Cu;
label_43e93c:
    // 0x43e93c: 0x10000007  b           . + 4 + (0x7 << 2)
label_43e940:
    if (ctx->pc == 0x43E940u) {
        ctx->pc = 0x43E944u;
        goto label_43e944;
    }
    ctx->pc = 0x43E93Cu;
    {
        const bool branch_taken_0x43e93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x43e93c) {
            ctx->pc = 0x43E95Cu;
            goto label_43e95c;
        }
    }
    ctx->pc = 0x43E944u;
label_43e944:
    // 0x43e944: 0x0  nop
    ctx->pc = 0x43e944u;
    // NOP
label_43e948:
    // 0x43e948: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x43e948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
label_43e94c:
    // 0x43e94c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43e94cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_43e950:
    // 0x43e950: 0xc10b000  jal         func_42C000
label_43e954:
    if (ctx->pc == 0x43E954u) {
        ctx->pc = 0x43E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E950u;
        // 0x43e954: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E958u;
        goto label_43e958;
    }
    ctx->pc = 0x43E950u;
    SET_GPR_U32(ctx, 31, 0x43E958u);
    ctx->pc = 0x43E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E950u;
    // 0x43e954: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43E950u, 0x43E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E958u;
label_43e958:
    // 0x43e958: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43e958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43e95c:
    // 0x43e95c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x43e95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_43e960:
    // 0x43e960: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43e960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_43e964:
    // 0x43e964: 0xc10b0a0  jal         func_42C280
label_43e968:
    if (ctx->pc == 0x43E968u) {
        ctx->pc = 0x43E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E964u;
        // 0x43e968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E96Cu;
        goto label_43e96c;
    }
    ctx->pc = 0x43E964u;
    SET_GPR_U32(ctx, 31, 0x43E96Cu);
    ctx->pc = 0x43E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E964u;
    // 0x43e968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43E964u, 0x43E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E96Cu;
label_43e96c:
    // 0x43e96c: 0x441fff6  bgez        $v0, . + 4 + (-0xA << 2)
label_43e970:
    if (ctx->pc == 0x43E970u) {
        ctx->pc = 0x43E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E96Cu;
        // 0x43e970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E974u;
        goto label_43e974;
    }
    ctx->pc = 0x43E96Cu;
    {
        const bool branch_taken_0x43e96c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x43E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E96Cu;
        // 0x43e970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e96c) {
            ctx->pc = 0x43E948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43e948;
        }
    }
    ctx->pc = 0x43E974u;
label_43e974:
    // 0x43e974: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x43e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_43e978:
    // 0x43e978: 0xdc25d908  ld          $a1, -0x26F8($at)
    ctx->pc = 0x43e978u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294957320)));
label_43e97c:
    // 0x43e97c: 0xc10af56  jal         func_42BD58
label_43e980:
    if (ctx->pc == 0x43E980u) {
        ctx->pc = 0x43E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E97Cu;
        // 0x43e980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E984u;
        goto label_43e984;
    }
    ctx->pc = 0x43E97Cu;
    SET_GPR_U32(ctx, 31, 0x43E984u);
    ctx->pc = 0x43E980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E97Cu;
    // 0x43e980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43E97Cu, 0x43E984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E984u;
label_43e984:
    // 0x43e984: 0xc10f184  jal         func_43C610
label_43e988:
    if (ctx->pc == 0x43E988u) {
        ctx->pc = 0x43E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E984u;
        // 0x43e988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E98Cu;
        goto label_43e98c;
    }
    ctx->pc = 0x43E984u;
    SET_GPR_U32(ctx, 31, 0x43E98Cu);
    ctx->pc = 0x43E988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E984u;
    // 0x43e988: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C610u, 0x43E984u, 0x43E98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E98Cu;
label_43e98c:
    // 0x43e98c: 0xc10f9ec  jal         func_43E7B0
label_43e990:
    if (ctx->pc == 0x43E990u) {
        ctx->pc = 0x43E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E98Cu;
        // 0x43e990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E994u;
        goto label_43e994;
    }
    ctx->pc = 0x43E98Cu;
    SET_GPR_U32(ctx, 31, 0x43E994u);
    ctx->pc = 0x43E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E98Cu;
    // 0x43e990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43E7B0u, 0x43E98Cu, 0x43E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E994u;
label_43e994:
    // 0x43e994: 0x2667d8e0  addiu       $a3, $s3, -0x2720
    ctx->pc = 0x43e994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957280));
label_43e998:
    // 0x43e998: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x43e998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43e99c:
    // 0x43e99c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43e9a0:
    // 0x43e9a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x43e9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43e9a4:
    // 0x43e9a4: 0xc10fdf6  jal         func_43F7D8
label_43e9a8:
    if (ctx->pc == 0x43E9A8u) {
        ctx->pc = 0x43E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9A4u;
        // 0x43e9a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E9ACu;
        goto label_43e9ac;
    }
    ctx->pc = 0x43E9A4u;
    SET_GPR_U32(ctx, 31, 0x43E9ACu);
    ctx->pc = 0x43E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E9A4u;
    // 0x43e9a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F7D8u, 0x43E9A4u, 0x43E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E9ACu;
label_43e9ac:
    // 0x43e9ac: 0x6400007  bltz        $s2, . + 4 + (0x7 << 2)
label_43e9b0:
    if (ctx->pc == 0x43E9B0u) {
        ctx->pc = 0x43E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9ACu;
        // 0x43e9b0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E9B4u;
        goto label_43e9b4;
    }
    ctx->pc = 0x43E9ACu;
    {
        const bool branch_taken_0x43e9ac = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x43E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9ACu;
        // 0x43e9b0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e9ac) {
            ctx->pc = 0x43E9CCu;
            goto label_43e9cc;
        }
    }
    ctx->pc = 0x43E9B4u;
label_43e9b4:
    // 0x43e9b4: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x43e9b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_43e9b8:
    // 0x43e9b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43e9bc:
    // 0x43e9bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x43e9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43e9c0:
    // 0x43e9c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x43e9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43e9c4:
    // 0x43e9c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_43e9c8:
    if (ctx->pc == 0x43E9C8u) {
        ctx->pc = 0x43E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9C4u;
        // 0x43e9c8: 0x24e7d8e8  addiu       $a3, $a3, -0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E9CCu;
        goto label_43e9cc;
    }
    ctx->pc = 0x43E9C4u;
    {
        const bool branch_taken_0x43e9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9C4u;
        // 0x43e9c8: 0x24e7d8e8  addiu       $a3, $a3, -0x2718 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43e9c4) {
            ctx->pc = 0x43E9E0u;
            goto label_43e9e0;
        }
    }
    ctx->pc = 0x43E9CCu;
label_43e9cc:
    // 0x43e9cc: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x43e9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
label_43e9d0:
    // 0x43e9d0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43e9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43e9d4:
    // 0x43e9d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x43e9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_43e9d8:
    // 0x43e9d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x43e9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43e9dc:
    // 0x43e9dc: 0x24e7d8f0  addiu       $a3, $a3, -0x2710
    ctx->pc = 0x43e9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957296));
label_43e9e0:
    // 0x43e9e0: 0xc10fdf6  jal         func_43F7D8
label_43e9e4:
    if (ctx->pc == 0x43E9E4u) {
        ctx->pc = 0x43E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43E9E0u;
        // 0x43e9e4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43E9E8u;
        goto label_43e9e8;
    }
    ctx->pc = 0x43E9E0u;
    SET_GPR_U32(ctx, 31, 0x43E9E8u);
    ctx->pc = 0x43E9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43E9E0u;
    // 0x43e9e4: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F7D8u, 0x43E9E0u, 0x43E9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43E9E8u;
label_43e9e8:
    // 0x43e9e8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x43e9e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_43e9ec:
    // 0x43e9ec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x43e9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_43e9f0:
    // 0x43e9f0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x43e9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_43e9f4:
    // 0x43e9f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x43e9f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_43e9f8:
    // 0x43e9f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x43e9f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_43e9fc:
    // 0x43e9fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x43e9fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_43ea00:
    // 0x43ea00: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x43ea00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_43ea04:
    // 0x43ea04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x43ea04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_43ea08:
    // 0x43ea08: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x43ea08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43ea0c:
    // 0x43ea0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43ea0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43ea10:
    // 0x43ea10: 0x3e00008  jr          $ra
label_43ea14:
    if (ctx->pc == 0x43EA14u) {
        ctx->pc = 0x43EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA10u;
        // 0x43ea14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43EA18u;
        goto label_fallthrough_0x43ea10;
    }
    ctx->pc = 0x43EA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43EA10u;
        // 0x43ea14: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43EA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x43ea10:
    ctx->pc = 0x43EA18u;
}
