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

// Function: sub_0038F8A8
// Address: 0x38f8a8 - 0x38fa50
void sub_0038F8A8_0x38f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F8A8_0x38f8a8");
#endif

    switch (ctx->pc) {
        case 0x38f8a8u: goto label_38f8a8;
        case 0x38f8acu: goto label_38f8ac;
        case 0x38f8b0u: goto label_38f8b0;
        case 0x38f8b4u: goto label_38f8b4;
        case 0x38f8b8u: goto label_38f8b8;
        case 0x38f8bcu: goto label_38f8bc;
        case 0x38f8c0u: goto label_38f8c0;
        case 0x38f8c4u: goto label_38f8c4;
        case 0x38f8c8u: goto label_38f8c8;
        case 0x38f8ccu: goto label_38f8cc;
        case 0x38f8d0u: goto label_38f8d0;
        case 0x38f8d4u: goto label_38f8d4;
        case 0x38f8d8u: goto label_38f8d8;
        case 0x38f8dcu: goto label_38f8dc;
        case 0x38f8e0u: goto label_38f8e0;
        case 0x38f8e4u: goto label_38f8e4;
        case 0x38f8e8u: goto label_38f8e8;
        case 0x38f8ecu: goto label_38f8ec;
        case 0x38f8f0u: goto label_38f8f0;
        case 0x38f8f4u: goto label_38f8f4;
        case 0x38f8f8u: goto label_38f8f8;
        case 0x38f8fcu: goto label_38f8fc;
        case 0x38f900u: goto label_38f900;
        case 0x38f904u: goto label_38f904;
        case 0x38f908u: goto label_38f908;
        case 0x38f90cu: goto label_38f90c;
        case 0x38f910u: goto label_38f910;
        case 0x38f914u: goto label_38f914;
        case 0x38f918u: goto label_38f918;
        case 0x38f91cu: goto label_38f91c;
        case 0x38f920u: goto label_38f920;
        case 0x38f924u: goto label_38f924;
        case 0x38f928u: goto label_38f928;
        case 0x38f92cu: goto label_38f92c;
        case 0x38f930u: goto label_38f930;
        case 0x38f934u: goto label_38f934;
        case 0x38f938u: goto label_38f938;
        case 0x38f93cu: goto label_38f93c;
        case 0x38f940u: goto label_38f940;
        case 0x38f944u: goto label_38f944;
        case 0x38f948u: goto label_38f948;
        case 0x38f94cu: goto label_38f94c;
        case 0x38f950u: goto label_38f950;
        case 0x38f954u: goto label_38f954;
        case 0x38f958u: goto label_38f958;
        case 0x38f95cu: goto label_38f95c;
        case 0x38f960u: goto label_38f960;
        case 0x38f964u: goto label_38f964;
        case 0x38f968u: goto label_38f968;
        case 0x38f96cu: goto label_38f96c;
        case 0x38f970u: goto label_38f970;
        case 0x38f974u: goto label_38f974;
        case 0x38f978u: goto label_38f978;
        case 0x38f97cu: goto label_38f97c;
        case 0x38f980u: goto label_38f980;
        case 0x38f984u: goto label_38f984;
        case 0x38f988u: goto label_38f988;
        case 0x38f98cu: goto label_38f98c;
        case 0x38f990u: goto label_38f990;
        case 0x38f994u: goto label_38f994;
        case 0x38f998u: goto label_38f998;
        case 0x38f99cu: goto label_38f99c;
        case 0x38f9a0u: goto label_38f9a0;
        case 0x38f9a4u: goto label_38f9a4;
        case 0x38f9a8u: goto label_38f9a8;
        case 0x38f9acu: goto label_38f9ac;
        case 0x38f9b0u: goto label_38f9b0;
        case 0x38f9b4u: goto label_38f9b4;
        case 0x38f9b8u: goto label_38f9b8;
        case 0x38f9bcu: goto label_38f9bc;
        case 0x38f9c0u: goto label_38f9c0;
        case 0x38f9c4u: goto label_38f9c4;
        case 0x38f9c8u: goto label_38f9c8;
        case 0x38f9ccu: goto label_38f9cc;
        case 0x38f9d0u: goto label_38f9d0;
        case 0x38f9d4u: goto label_38f9d4;
        case 0x38f9d8u: goto label_38f9d8;
        case 0x38f9dcu: goto label_38f9dc;
        case 0x38f9e0u: goto label_38f9e0;
        case 0x38f9e4u: goto label_38f9e4;
        case 0x38f9e8u: goto label_38f9e8;
        case 0x38f9ecu: goto label_38f9ec;
        case 0x38f9f0u: goto label_38f9f0;
        case 0x38f9f4u: goto label_38f9f4;
        case 0x38f9f8u: goto label_38f9f8;
        case 0x38f9fcu: goto label_38f9fc;
        case 0x38fa00u: goto label_38fa00;
        case 0x38fa04u: goto label_38fa04;
        case 0x38fa08u: goto label_38fa08;
        case 0x38fa0cu: goto label_38fa0c;
        case 0x38fa10u: goto label_38fa10;
        case 0x38fa14u: goto label_38fa14;
        case 0x38fa18u: goto label_38fa18;
        case 0x38fa1cu: goto label_38fa1c;
        case 0x38fa20u: goto label_38fa20;
        case 0x38fa24u: goto label_38fa24;
        case 0x38fa28u: goto label_38fa28;
        case 0x38fa2cu: goto label_38fa2c;
        case 0x38fa30u: goto label_38fa30;
        case 0x38fa34u: goto label_38fa34;
        case 0x38fa38u: goto label_38fa38;
        case 0x38fa3cu: goto label_38fa3c;
        case 0x38fa40u: goto label_38fa40;
        case 0x38fa44u: goto label_38fa44;
        case 0x38fa48u: goto label_38fa48;
        case 0x38fa4cu: goto label_38fa4c;
        default: break;
    }

    ctx->pc = 0x38f8a8u;

label_38f8a8:
    // 0x38f8a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38f8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_38f8ac:
    // 0x38f8ac: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x38f8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_38f8b0:
    // 0x38f8b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x38f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_38f8b4:
    // 0x38f8b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38f8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38f8b8:
    // 0x38f8b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x38f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_38f8bc:
    // 0x38f8bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38f8c0:
    // 0x38f8c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38f8c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38f8c4:
    // 0x38f8c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38f8c8:
    // 0x38f8c8: 0x84650010  lh          $a1, 0x10($v1)
    ctx->pc = 0x38f8c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_38f8cc:
    // 0x38f8cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38f8d0:
    // 0x38f8d0: 0x40f809  jalr        $v0
label_38f8d4:
    if (ctx->pc == 0x38F8D4u) {
        ctx->pc = 0x38F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8D0u;
        // 0x38f8d4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F8D8u;
        goto label_38f8d8;
    }
    ctx->pc = 0x38F8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F8D8u);
        ctx->pc = 0x38F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8D0u;
        // 0x38f8d4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8D0u, 0x38F8D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F8D8u;
label_38f8d8:
    // 0x38f8d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38f8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f8dc:
    // 0x38f8dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f8e0:
    // 0x38f8e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f8e4:
    // 0x38f8e4: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x38f8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_38f8e8:
    // 0x38f8e8: 0x8c460134  lw          $a2, 0x134($v0)
    ctx->pc = 0x38f8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_38f8ec:
    // 0x38f8ec: 0xc0f809  jalr        $a2
label_38f8f0:
    if (ctx->pc == 0x38F8F0u) {
        ctx->pc = 0x38F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8ECu;
        // 0x38f8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F8F4u;
        goto label_38f8f4;
    }
    ctx->pc = 0x38F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x38F8F4u);
        ctx->pc = 0x38F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8ECu;
        // 0x38f8f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8ECu, 0x38F8F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F8F4u;
label_38f8f4:
    // 0x38f8f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f8f8:
    // 0x38f8f8: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x38f8f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_38f8fc:
    // 0x38f8fc: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x38f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_38f900:
    // 0x38f900: 0x40f809  jalr        $v0
label_38f904:
    if (ctx->pc == 0x38F904u) {
        ctx->pc = 0x38F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F900u;
        // 0x38f904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F908u;
        goto label_38f908;
    }
    ctx->pc = 0x38F900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F908u);
        ctx->pc = 0x38F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F900u;
        // 0x38f904: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F900u, 0x38F908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F908u;
label_38f908:
    // 0x38f908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_38f90c:
    if (ctx->pc == 0x38F90Cu) {
        ctx->pc = 0x38F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F908u;
        // 0x38f90c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F910u;
        goto label_38f910;
    }
    ctx->pc = 0x38F908u;
    {
        const bool branch_taken_0x38f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F908u;
        // 0x38f90c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f908) {
            ctx->pc = 0x38F938u;
            goto label_38f938;
        }
    }
    ctx->pc = 0x38F910u;
label_38f910:
    // 0x38f910: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38f910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f914:
    // 0x38f914: 0x84640198  lh          $a0, 0x198($v1)
    ctx->pc = 0x38f914u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 408)));
label_38f918:
    // 0x38f918: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x38f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
label_38f91c:
    // 0x38f91c: 0x40f809  jalr        $v0
label_38f920:
    if (ctx->pc == 0x38F920u) {
        ctx->pc = 0x38F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F91Cu;
        // 0x38f920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F924u;
        goto label_38f924;
    }
    ctx->pc = 0x38F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F924u);
        ctx->pc = 0x38F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F91Cu;
        // 0x38f920: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F91Cu, 0x38F924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F924u;
label_38f924:
    // 0x38f924: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x38f924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38f928:
    // 0x38f928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38f928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f92c:
    // 0x38f92c: 0x60f809  jalr        $v1
label_38f930:
    if (ctx->pc == 0x38F930u) {
        ctx->pc = 0x38F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F92Cu;
        // 0x38f930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F934u;
        goto label_38f934;
    }
    ctx->pc = 0x38F92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F934u);
        ctx->pc = 0x38F930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F92Cu;
        // 0x38f930: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F92Cu, 0x38F934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F934u;
label_38f934:
    // 0x38f934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38f938:
    // 0x38f938: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x38f938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_38f93c:
    // 0x38f93c: 0x8c4547c4  lw          $a1, 0x47C4($v0)
    ctx->pc = 0x38f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_38f940:
    // 0x38f940: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x38f940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38f944:
    // 0x38f944: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x38f944u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_38f948:
    // 0x38f948: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x38f948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38f94c:
    // 0x38f94c: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x38f94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_38f950:
    // 0x38f950: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x38f950u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_38f954:
    // 0x38f954: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38f954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38f958:
    // 0x38f958: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x38f958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_38f95c:
    // 0x38f95c: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x38f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_38f960:
    // 0x38f960: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_38f964:
    // 0x38f964: 0xa0680008  sb          $t0, 0x8($v1)
    ctx->pc = 0x38f964u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 8));
label_38f968:
    // 0x38f968: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x38f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_38f96c:
    // 0x38f96c: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x38f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_38f970:
    // 0x38f970: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x38f970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_38f974:
    // 0x38f974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38f974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_38f978:
    // 0x38f978: 0xa0480008  sb          $t0, 0x8($v0)
    ctx->pc = 0x38f978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 8));
label_38f97c:
    // 0x38f97c: 0x8cc32c7c  lw          $v1, 0x2C7C($a2)
    ctx->pc = 0x38f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11388)));
label_38f980:
    // 0x38f980: 0x962500fa  lhu         $a1, 0xFA($s1)
    ctx->pc = 0x38f980u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 250)));
label_38f984:
    // 0x38f984: 0xc0e3ec4  jal         func_38FB10
label_38f988:
    if (ctx->pc == 0x38F988u) {
        ctx->pc = 0x38F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F984u;
        // 0x38f988: 0x8c64084c  lw          $a0, 0x84C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F98Cu;
        goto label_38f98c;
    }
    ctx->pc = 0x38F984u;
    SET_GPR_U32(ctx, 31, 0x38F98Cu);
    ctx->pc = 0x38F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F984u;
    // 0x38f988: 0x8c64084c  lw          $a0, 0x84C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB10u, 0x38F984u, 0x38F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F98Cu;
label_38f98c:
    // 0x38f98c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_38f990:
    if (ctx->pc == 0x38F990u) {
        ctx->pc = 0x38F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F98Cu;
        // 0x38f990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F994u;
        goto label_38f994;
    }
    ctx->pc = 0x38F98Cu;
    {
        const bool branch_taken_0x38f98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F98Cu;
        // 0x38f990: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f98c) {
            ctx->pc = 0x38FA20u;
            goto label_38fa20;
        }
    }
    ctx->pc = 0x38F994u;
label_38f994:
    // 0x38f994: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f998:
    // 0x38f998: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38f998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38f99c:
    // 0x38f99c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38f9a0:
    // 0x38f9a0: 0x60f809  jalr        $v1
label_38f9a4:
    if (ctx->pc == 0x38F9A4u) {
        ctx->pc = 0x38F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9A0u;
        // 0x38f9a4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9A8u;
        goto label_38f9a8;
    }
    ctx->pc = 0x38F9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F9A8u);
        ctx->pc = 0x38F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9A0u;
        // 0x38f9a4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F9A0u, 0x38F9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F9A8u;
label_38f9a8:
    // 0x38f9a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f9ac:
    // 0x38f9ac: 0xc0942da  jal         func_250B68
label_38f9b0:
    if (ctx->pc == 0x38F9B0u) {
        ctx->pc = 0x38F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9ACu;
        // 0x38f9b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9B4u;
        goto label_38f9b4;
    }
    ctx->pc = 0x38F9ACu;
    SET_GPR_U32(ctx, 31, 0x38F9B4u);
    ctx->pc = 0x38F9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9ACu;
    // 0x38f9b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B68u, 0x38F9ACu, 0x38F9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F9B4u;
label_38f9b4:
    // 0x38f9b4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f9b8:
    // 0x38f9b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f9bc:
    // 0x38f9bc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38f9bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38f9c0:
    // 0x38f9c0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38f9c4:
    // 0x38f9c4: 0x60f809  jalr        $v1
label_38f9c8:
    if (ctx->pc == 0x38F9C8u) {
        ctx->pc = 0x38F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9C4u;
        // 0x38f9c8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9CCu;
        goto label_38f9cc;
    }
    ctx->pc = 0x38F9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F9CCu);
        ctx->pc = 0x38F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9C4u;
        // 0x38f9c8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F9C4u, 0x38F9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F9CCu;
label_38f9cc:
    // 0x38f9cc: 0xc094040  jal         func_250100
label_38f9d0:
    if (ctx->pc == 0x38F9D0u) {
        ctx->pc = 0x38F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9CCu;
        // 0x38f9d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9D4u;
        goto label_38f9d4;
    }
    ctx->pc = 0x38F9CCu;
    SET_GPR_U32(ctx, 31, 0x38F9D4u);
    ctx->pc = 0x38F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9CCu;
    // 0x38f9d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x38F9CCu, 0x38F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F9D4u;
label_38f9d4:
    // 0x38f9d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_38f9d8:
    if (ctx->pc == 0x38F9D8u) {
        ctx->pc = 0x38F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9D4u;
        // 0x38f9d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9DCu;
        goto label_38f9dc;
    }
    ctx->pc = 0x38F9D4u;
    {
        const bool branch_taken_0x38f9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9D4u;
        // 0x38f9d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f9d4) {
            ctx->pc = 0x38FA20u;
            goto label_38fa20;
        }
    }
    ctx->pc = 0x38F9DCu;
label_38f9dc:
    // 0x38f9dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f9e0:
    // 0x38f9e0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38f9e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38f9e4:
    // 0x38f9e4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38f9e8:
    // 0x38f9e8: 0x60f809  jalr        $v1
label_38f9ec:
    if (ctx->pc == 0x38F9ECu) {
        ctx->pc = 0x38F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9E8u;
        // 0x38f9ec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F9F0u;
        goto label_38f9f0;
    }
    ctx->pc = 0x38F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F9F0u);
        ctx->pc = 0x38F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9E8u;
        // 0x38f9ec: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F9E8u, 0x38F9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F9F0u;
label_38f9f0:
    // 0x38f9f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f9f4:
    // 0x38f9f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x38f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38f9f8:
    // 0x38f9f8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x38f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38f9fc:
    // 0x38f9fc: 0xc094258  jal         func_250960
label_38fa00:
    if (ctx->pc == 0x38FA00u) {
        ctx->pc = 0x38FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F9FCu;
        // 0x38fa00: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA04u;
        goto label_38fa04;
    }
    ctx->pc = 0x38F9FCu;
    SET_GPR_U32(ctx, 31, 0x38FA04u);
    ctx->pc = 0x38FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F9FCu;
    // 0x38fa00: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250960u, 0x38F9FCu, 0x38FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA04u;
label_38fa04:
    // 0x38fa04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_38fa08:
    if (ctx->pc == 0x38FA08u) {
        ctx->pc = 0x38FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA04u;
        // 0x38fa08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA0Cu;
        goto label_38fa0c;
    }
    ctx->pc = 0x38FA04u;
    {
        const bool branch_taken_0x38fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA04u;
        // 0x38fa08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fa04) {
            ctx->pc = 0x38FA20u;
            goto label_38fa20;
        }
    }
    ctx->pc = 0x38FA0Cu;
label_38fa0c:
    // 0x38fa0c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x38fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_38fa10:
    // 0x38fa10: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x38fa10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
label_38fa14:
    // 0x38fa14: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x38fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_38fa18:
    // 0x38fa18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_38fa1c:
    if (ctx->pc == 0x38FA1Cu) {
        ctx->pc = 0x38FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA18u;
        // 0x38fa1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA20u;
        goto label_38fa20;
    }
    ctx->pc = 0x38FA18u;
    {
        const bool branch_taken_0x38fa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38fa18) {
            ctx->pc = 0x38FA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38FA18u;
            // 0x38fa1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38FA20u;
            goto label_38fa20;
        }
    }
    ctx->pc = 0x38FA20u;
label_38fa20:
    // 0x38fa20: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x38fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_38fa24:
    // 0x38fa24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38fa24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38fa28:
    // 0x38fa28: 0xc0e8cbc  jal         func_3A32F0
label_38fa2c:
    if (ctx->pc == 0x38FA2Cu) {
        ctx->pc = 0x38FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA28u;
        // 0x38fa2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA30u;
        goto label_38fa30;
    }
    ctx->pc = 0x38FA28u;
    SET_GPR_U32(ctx, 31, 0x38FA30u);
    ctx->pc = 0x38FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FA28u;
    // 0x38fa2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x38FA28u, 0x38FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FA30u;
label_38fa30:
    // 0x38fa30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38fa30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38fa34:
    // 0x38fa34: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x38fa34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_38fa38:
    // 0x38fa38: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x38fa38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38fa3c:
    // 0x38fa3c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x38fa3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_38fa40:
    // 0x38fa40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38fa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38fa44:
    // 0x38fa44: 0x3e00008  jr          $ra
label_38fa48:
    if (ctx->pc == 0x38FA48u) {
        ctx->pc = 0x38FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA44u;
        // 0x38fa48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38FA4Cu;
        goto label_38fa4c;
    }
    ctx->pc = 0x38FA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FA44u;
        // 0x38fa48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FA4Cu;
label_38fa4c:
    // 0x38fa4c: 0x0  nop
    ctx->pc = 0x38fa4cu;
    // NOP
    ctx->pc = 0x38fa50u;
}
