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

// Function: sub_0015F830
// Address: 0x15f830 - 0x15f930
void sub_0015F830_0x15f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F830_0x15f830");
#endif

    switch (ctx->pc) {
        case 0x15f830u: goto label_15f830;
        case 0x15f834u: goto label_15f834;
        case 0x15f838u: goto label_15f838;
        case 0x15f83cu: goto label_15f83c;
        case 0x15f840u: goto label_15f840;
        case 0x15f844u: goto label_15f844;
        case 0x15f848u: goto label_15f848;
        case 0x15f84cu: goto label_15f84c;
        case 0x15f850u: goto label_15f850;
        case 0x15f854u: goto label_15f854;
        case 0x15f858u: goto label_15f858;
        case 0x15f85cu: goto label_15f85c;
        case 0x15f860u: goto label_15f860;
        case 0x15f864u: goto label_15f864;
        case 0x15f868u: goto label_15f868;
        case 0x15f86cu: goto label_15f86c;
        case 0x15f870u: goto label_15f870;
        case 0x15f874u: goto label_15f874;
        case 0x15f878u: goto label_15f878;
        case 0x15f87cu: goto label_15f87c;
        case 0x15f880u: goto label_15f880;
        case 0x15f884u: goto label_15f884;
        case 0x15f888u: goto label_15f888;
        case 0x15f88cu: goto label_15f88c;
        case 0x15f890u: goto label_15f890;
        case 0x15f894u: goto label_15f894;
        case 0x15f898u: goto label_15f898;
        case 0x15f89cu: goto label_15f89c;
        case 0x15f8a0u: goto label_15f8a0;
        case 0x15f8a4u: goto label_15f8a4;
        case 0x15f8a8u: goto label_15f8a8;
        case 0x15f8acu: goto label_15f8ac;
        case 0x15f8b0u: goto label_15f8b0;
        case 0x15f8b4u: goto label_15f8b4;
        case 0x15f8b8u: goto label_15f8b8;
        case 0x15f8bcu: goto label_15f8bc;
        case 0x15f8c0u: goto label_15f8c0;
        case 0x15f8c4u: goto label_15f8c4;
        case 0x15f8c8u: goto label_15f8c8;
        case 0x15f8ccu: goto label_15f8cc;
        case 0x15f8d0u: goto label_15f8d0;
        case 0x15f8d4u: goto label_15f8d4;
        case 0x15f8d8u: goto label_15f8d8;
        case 0x15f8dcu: goto label_15f8dc;
        case 0x15f8e0u: goto label_15f8e0;
        case 0x15f8e4u: goto label_15f8e4;
        case 0x15f8e8u: goto label_15f8e8;
        case 0x15f8ecu: goto label_15f8ec;
        case 0x15f8f0u: goto label_15f8f0;
        case 0x15f8f4u: goto label_15f8f4;
        case 0x15f8f8u: goto label_15f8f8;
        case 0x15f8fcu: goto label_15f8fc;
        case 0x15f900u: goto label_15f900;
        case 0x15f904u: goto label_15f904;
        case 0x15f908u: goto label_15f908;
        case 0x15f90cu: goto label_15f90c;
        case 0x15f910u: goto label_15f910;
        case 0x15f914u: goto label_15f914;
        case 0x15f918u: goto label_15f918;
        case 0x15f91cu: goto label_15f91c;
        case 0x15f920u: goto label_15f920;
        case 0x15f924u: goto label_15f924;
        case 0x15f928u: goto label_15f928;
        case 0x15f92cu: goto label_15f92c;
        default: break;
    }

    ctx->pc = 0x15f830u;

label_15f830:
    // 0x15f830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_15f834:
    // 0x15f834: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_15f838:
    // 0x15f838: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15f838u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_15f83c:
    // 0x15f83c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_15f840:
    // 0x15f840: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15f840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15f844:
    // 0x15f844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15f844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f848:
    // 0x15f848: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f84c:
    // 0x15f84c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15f84cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15f850:
    // 0x15f850: 0x8e45b8b8  lw          $a1, -0x4748($s2)
    ctx->pc = 0x15f850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_15f854:
    // 0x15f854: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15f854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f858:
    // 0x15f858: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x15f858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_15f85c:
    // 0x15f85c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15f860:
    // 0x15f860: 0x40f809  jalr        $v0
label_15f864:
    if (ctx->pc == 0x15F864u) {
        ctx->pc = 0x15F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F860u;
        // 0x15f864: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F868u;
        goto label_15f868;
    }
    ctx->pc = 0x15F860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F868u);
        ctx->pc = 0x15F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F860u;
        // 0x15f864: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F860u, 0x15F868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F868u;
label_15f868:
    // 0x15f868: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x15f868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_15f86c:
    // 0x15f86c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x15f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_15f870:
    // 0x15f870: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x15f870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15f874:
    // 0x15f874: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x15f874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_15f878:
    // 0x15f878: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15f87c:
    // 0x15f87c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x15f87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_15f880:
    // 0x15f880: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x15f880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_15f884:
    // 0x15f884: 0x60f809  jalr        $v1
label_15f888:
    if (ctx->pc == 0x15F888u) {
        ctx->pc = 0x15F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F884u;
        // 0x15f888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F88Cu;
        goto label_15f88c;
    }
    ctx->pc = 0x15F884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F88Cu);
        ctx->pc = 0x15F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F884u;
        // 0x15f888: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F884u, 0x15F88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F88Cu;
label_15f88c:
    // 0x15f88c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15f890:
    // 0x15f890: 0x8c436d70  lw          $v1, 0x6D70($v0)
    ctx->pc = 0x15f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28016)));
label_15f894:
    // 0x15f894: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_15f898:
    if (ctx->pc == 0x15F898u) {
        ctx->pc = 0x15F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F894u;
        // 0x15f898: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F89Cu;
        goto label_15f89c;
    }
    ctx->pc = 0x15F894u;
    {
        const bool branch_taken_0x15f894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f894) {
            ctx->pc = 0x15F898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F894u;
            // 0x15f898: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F8ACu;
            goto label_15f8ac;
        }
    }
    ctx->pc = 0x15F89Cu;
label_15f89c:
    // 0x15f89c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f8a0:
    // 0x15f8a0: 0xc108766  jal         func_421D98
label_15f8a4:
    if (ctx->pc == 0x15F8A4u) {
        ctx->pc = 0x15F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8A0u;
        // 0x15f8a4: 0x8c445024  lw          $a0, 0x5024($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8A8u;
        goto label_15f8a8;
    }
    ctx->pc = 0x15F8A0u;
    SET_GPR_U32(ctx, 31, 0x15F8A8u);
    ctx->pc = 0x15F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8A0u;
    // 0x15f8a4: 0x8c445024  lw          $a0, 0x5024($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421D98u, 0x15F8A0u, 0x15F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8A8u;
label_15f8a8:
    // 0x15f8a8: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x15f8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_15f8ac:
    // 0x15f8ac: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15f8b0:
    // 0x15f8b0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x15f8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_15f8b4:
    // 0x15f8b4: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x15f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
label_15f8b8:
    // 0x15f8b8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x15f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_15f8bc:
    // 0x15f8bc: 0x2508fce8  addiu       $t0, $t0, -0x318
    ctx->pc = 0x15f8bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966504));
label_15f8c0:
    // 0x15f8c0: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x15f8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_15f8c4:
    // 0x15f8c4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x15f8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15f8c8:
    // 0x15f8c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x15f8c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_15f8cc:
    // 0x15f8cc: 0x240900f3  addiu       $t1, $zero, 0xF3
    ctx->pc = 0x15f8ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_15f8d0:
    // 0x15f8d0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_15f8d4:
    // 0x15f8d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15f8d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f8d8:
    // 0x15f8d8: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x15f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_15f8dc:
    // 0x15f8dc: 0x40f809  jalr        $v0
label_15f8e0:
    if (ctx->pc == 0x15F8E0u) {
        ctx->pc = 0x15F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8DCu;
        // 0x15f8e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8E4u;
        goto label_15f8e4;
    }
    ctx->pc = 0x15F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F8E4u);
        ctx->pc = 0x15F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8DCu;
        // 0x15f8e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F8DCu, 0x15F8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F8E4u;
label_15f8e4:
    // 0x15f8e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f8e8:
    // 0x15f8e8: 0xc0579e4  jal         func_15E790
label_15f8ec:
    if (ctx->pc == 0x15F8ECu) {
        ctx->pc = 0x15F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F8E8u;
        // 0x15f8ec: 0xac62c7b0  sw          $v0, -0x3850($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F8F0u;
        goto label_15f8f0;
    }
    ctx->pc = 0x15F8E8u;
    SET_GPR_U32(ctx, 31, 0x15F8F0u);
    ctx->pc = 0x15F8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F8E8u;
    // 0x15f8ec: 0xac62c7b0  sw          $v0, -0x3850($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x15F8E8u, 0x15F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F8F0u;
label_15f8f0:
    // 0x15f8f0: 0x8e43b8b8  lw          $v1, -0x4748($s2)
    ctx->pc = 0x15f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949048)));
label_15f8f4:
    // 0x15f8f4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15f8f8:
    // 0x15f8f8: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x15f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
label_15f8fc:
    // 0x15f8fc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x15f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_15f900:
    // 0x15f900: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x15f900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_15f904:
    // 0x15f904: 0x24846830  addiu       $a0, $a0, 0x6830
    ctx->pc = 0x15f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
label_15f908:
    // 0x15f908: 0xc071ade  jal         func_1C6B78
label_15f90c:
    if (ctx->pc == 0x15F90Cu) {
        ctx->pc = 0x15F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F908u;
        // 0x15f90c: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F910u;
        goto label_15f910;
    }
    ctx->pc = 0x15F908u;
    SET_GPR_U32(ctx, 31, 0x15F910u);
    ctx->pc = 0x15F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F908u;
    // 0x15f90c: 0x24a5f580  addiu       $a1, $a1, -0xA80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6B78u, 0x15F908u, 0x15F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F910u;
label_15f910:
    // 0x15f910: 0xc057d64  jal         func_15F590
label_15f914:
    if (ctx->pc == 0x15F914u) {
        ctx->pc = 0x15F918u;
        goto label_15f918;
    }
    ctx->pc = 0x15F910u;
    SET_GPR_U32(ctx, 31, 0x15F918u);
    ctx->pc = 0x15F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F590u, 0x15F910u, 0x15F918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F918u;
label_15f918:
    // 0x15f918: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15f918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15f91c:
    // 0x15f91c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15f91cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15f920:
    // 0x15f920: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15f920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15f924:
    // 0x15f924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f928:
    // 0x15f928: 0x3e00008  jr          $ra
label_15f92c:
    if (ctx->pc == 0x15F92Cu) {
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F930u;
        goto label_fallthrough_0x15f928;
    }
    ctx->pc = 0x15F928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F928u;
        // 0x15f92c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15f928:
    ctx->pc = 0x15F930u;
}
