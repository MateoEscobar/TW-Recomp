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

// Function: sub_002C4890
// Address: 0x2c4890 - 0x2c4a48
void sub_002C4890_0x2c4890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4890_0x2c4890");
#endif

    switch (ctx->pc) {
        case 0x2c4890u: goto label_2c4890;
        case 0x2c4894u: goto label_2c4894;
        case 0x2c4898u: goto label_2c4898;
        case 0x2c489cu: goto label_2c489c;
        case 0x2c48a0u: goto label_2c48a0;
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48a8u: goto label_2c48a8;
        case 0x2c48acu: goto label_2c48ac;
        case 0x2c48b0u: goto label_2c48b0;
        case 0x2c48b4u: goto label_2c48b4;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48bcu: goto label_2c48bc;
        case 0x2c48c0u: goto label_2c48c0;
        case 0x2c48c4u: goto label_2c48c4;
        case 0x2c48c8u: goto label_2c48c8;
        case 0x2c48ccu: goto label_2c48cc;
        case 0x2c48d0u: goto label_2c48d0;
        case 0x2c48d4u: goto label_2c48d4;
        case 0x2c48d8u: goto label_2c48d8;
        case 0x2c48dcu: goto label_2c48dc;
        case 0x2c48e0u: goto label_2c48e0;
        case 0x2c48e4u: goto label_2c48e4;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c48ecu: goto label_2c48ec;
        case 0x2c48f0u: goto label_2c48f0;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c48f8u: goto label_2c48f8;
        case 0x2c48fcu: goto label_2c48fc;
        case 0x2c4900u: goto label_2c4900;
        case 0x2c4904u: goto label_2c4904;
        case 0x2c4908u: goto label_2c4908;
        case 0x2c490cu: goto label_2c490c;
        case 0x2c4910u: goto label_2c4910;
        case 0x2c4914u: goto label_2c4914;
        case 0x2c4918u: goto label_2c4918;
        case 0x2c491cu: goto label_2c491c;
        case 0x2c4920u: goto label_2c4920;
        case 0x2c4924u: goto label_2c4924;
        case 0x2c4928u: goto label_2c4928;
        case 0x2c492cu: goto label_2c492c;
        case 0x2c4930u: goto label_2c4930;
        case 0x2c4934u: goto label_2c4934;
        case 0x2c4938u: goto label_2c4938;
        case 0x2c493cu: goto label_2c493c;
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4944u: goto label_2c4944;
        case 0x2c4948u: goto label_2c4948;
        case 0x2c494cu: goto label_2c494c;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4954u: goto label_2c4954;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c495cu: goto label_2c495c;
        case 0x2c4960u: goto label_2c4960;
        case 0x2c4964u: goto label_2c4964;
        case 0x2c4968u: goto label_2c4968;
        case 0x2c496cu: goto label_2c496c;
        case 0x2c4970u: goto label_2c4970;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4978u: goto label_2c4978;
        case 0x2c497cu: goto label_2c497c;
        case 0x2c4980u: goto label_2c4980;
        case 0x2c4984u: goto label_2c4984;
        case 0x2c4988u: goto label_2c4988;
        case 0x2c498cu: goto label_2c498c;
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        case 0x2c4a18u: goto label_2c4a18;
        case 0x2c4a1cu: goto label_2c4a1c;
        case 0x2c4a20u: goto label_2c4a20;
        case 0x2c4a24u: goto label_2c4a24;
        case 0x2c4a28u: goto label_2c4a28;
        case 0x2c4a2cu: goto label_2c4a2c;
        case 0x2c4a30u: goto label_2c4a30;
        case 0x2c4a34u: goto label_2c4a34;
        case 0x2c4a38u: goto label_2c4a38;
        case 0x2c4a3cu: goto label_2c4a3c;
        case 0x2c4a40u: goto label_2c4a40;
        case 0x2c4a44u: goto label_2c4a44;
        default: break;
    }

    ctx->pc = 0x2c4890u;

label_2c4890:
    // 0x2c4890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c4894:
    // 0x2c4894: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c4894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c4898:
    // 0x2c4898: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c4898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2c489c:
    // 0x2c489c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c489cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c48a0:
    // 0x2c48a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2c48a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2c48a4:
    // 0x2c48a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c48a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c48a8:
    // 0x2c48a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c48a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c48ac:
    // 0x2c48ac: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c48acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2c48b0:
    // 0x2c48b0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2c48b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c48b4:
    // 0x2c48b4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c48b8:
    // 0x2c48b8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2c48b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c48bc:
    // 0x2c48bc: 0xc0e409a  jal         func_390268
label_2c48c0:
    if (ctx->pc == 0x2C48C0u) {
        ctx->pc = 0x2C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48BCu;
        // 0x2c48c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C48C4u;
        goto label_2c48c4;
    }
    ctx->pc = 0x2C48BCu;
    SET_GPR_U32(ctx, 31, 0x2C48C4u);
    ctx->pc = 0x2C48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C48BCu;
    // 0x2c48c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C48BCu, 0x2C48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48C4u;
label_2c48c4:
    // 0x2c48c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c48c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c48c8:
    // 0x2c48c8: 0xc0a34d6  jal         func_28D358
label_2c48cc:
    if (ctx->pc == 0x2C48CCu) {
        ctx->pc = 0x2C48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48C8u;
        // 0x2c48cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C48D0u;
        goto label_2c48d0;
    }
    ctx->pc = 0x2C48C8u;
    SET_GPR_U32(ctx, 31, 0x2C48D0u);
    ctx->pc = 0x2C48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C48C8u;
    // 0x2c48cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2C48C8u, 0x2C48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48D0u;
label_2c48d0:
    // 0x2c48d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c48d4:
    // 0x2c48d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c48d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c48d8:
    // 0x2c48d8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c48d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c48dc:
    // 0x2c48dc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c48dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c48e0:
    // 0x2c48e0: 0x40f809  jalr        $v0
label_2c48e4:
    if (ctx->pc == 0x2C48E4u) {
        ctx->pc = 0x2C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48E0u;
        // 0x2c48e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C48E8u;
        goto label_2c48e8;
    }
    ctx->pc = 0x2C48E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C48E8u);
        ctx->pc = 0x2C48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48E0u;
        // 0x2c48e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C48E0u, 0x2C48E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C48E8u;
label_2c48e8:
    // 0x2c48e8: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2c48ec:
    // 0x2c48ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c48ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c48f0:
    // 0x2c48f0: 0x24a55120  addiu       $a1, $a1, 0x5120
    ctx->pc = 0x2c48f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20768));
label_2c48f4:
    // 0x2c48f4: 0xc08e2a2  jal         func_238A88
label_2c48f8:
    if (ctx->pc == 0x2C48F8u) {
        ctx->pc = 0x2C48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48F4u;
        // 0x2c48f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C48FCu;
        goto label_2c48fc;
    }
    ctx->pc = 0x2C48F4u;
    SET_GPR_U32(ctx, 31, 0x2C48FCu);
    ctx->pc = 0x2C48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C48F4u;
    // 0x2c48f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x2C48F4u, 0x2C48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C48FCu;
label_2c48fc:
    // 0x2c48fc: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2c4900:
    if (ctx->pc == 0x2C4900u) {
        ctx->pc = 0x2C4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48FCu;
        // 0x2c4900: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4904u;
        goto label_2c4904;
    }
    ctx->pc = 0x2C48FCu;
    {
        const bool branch_taken_0x2c48fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48FCu;
        // 0x2c4900: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48fc) {
            ctx->pc = 0x2C494Cu;
            goto label_2c494c;
        }
    }
    ctx->pc = 0x2C4904u;
label_2c4904:
    // 0x2c4904: 0xc0a367c  jal         func_28D9F0
label_2c4908:
    if (ctx->pc == 0x2C4908u) {
        ctx->pc = 0x2C4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4904u;
        // 0x2c4908: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C490Cu;
        goto label_2c490c;
    }
    ctx->pc = 0x2C4904u;
    SET_GPR_U32(ctx, 31, 0x2C490Cu);
    ctx->pc = 0x2C4908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4904u;
    // 0x2c4908: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4904u, 0x2C490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C490Cu;
label_2c490c:
    // 0x2c490c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c490cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c4910:
    // 0x2c4910: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_2c4914:
    if (ctx->pc == 0x2C4914u) {
        ctx->pc = 0x2C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4910u;
        // 0x2c4914: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4918u;
        goto label_2c4918;
    }
    ctx->pc = 0x2C4910u;
    {
        const bool branch_taken_0x2c4910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4910u;
        // 0x2c4914: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4910) {
            ctx->pc = 0x2C4948u;
            goto label_2c4948;
        }
    }
    ctx->pc = 0x2C4918u;
label_2c4918:
    // 0x2c4918: 0x86100092  lh          $s0, 0x92($s0)
    ctx->pc = 0x2c4918u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2c491c:
    // 0x2c491c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2c491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2c4920:
    // 0x2c4920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4924:
    // 0x2c4924: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c4924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2c4928:
    // 0x2c4928: 0xc0884f6  jal         func_2213D8
label_2c492c:
    if (ctx->pc == 0x2C492Cu) {
        ctx->pc = 0x2C492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4928u;
        // 0x2c492c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4930u;
        goto label_2c4930;
    }
    ctx->pc = 0x2C4928u;
    SET_GPR_U32(ctx, 31, 0x2C4930u);
    ctx->pc = 0x2C492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4928u;
    // 0x2c492c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2C4928u, 0x2C4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4930u;
label_2c4930:
    // 0x2c4930: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c4930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4934:
    // 0x2c4934: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c4934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c4938:
    // 0x2c4938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c493c:
    // 0x2c493c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c493cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2c4940:
    // 0x2c4940: 0xc0bf800  jal         func_2FE000
label_2c4944:
    if (ctx->pc == 0x2C4944u) {
        ctx->pc = 0x2C4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4940u;
        // 0x2c4944: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4948u;
        goto label_2c4948;
    }
    ctx->pc = 0x2C4940u;
    SET_GPR_U32(ctx, 31, 0x2C4948u);
    ctx->pc = 0x2C4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4940u;
    // 0x2c4944: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2C4940u, 0x2C4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4948u;
label_2c4948:
    // 0x2c4948: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c4948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c494c:
    // 0x2c494c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2c494cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_2c4950:
    // 0x2c4950: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2c4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2c4954:
    // 0x2c4954: 0x8e71489c  lw          $s1, 0x489C($s3)
    ctx->pc = 0x2c4954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2c4958:
    // 0x2c4958: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2c4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2c495c:
    // 0x2c495c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4960:
    // 0x2c4960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4964:
    // 0x2c4964: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2c4964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2c4968:
    // 0x2c4968: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2c4968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2c496c:
    // 0x2c496c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c496cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c4970:
    // 0x2c4970: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2c4970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2c4974:
    // 0x2c4974: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2c4974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2c4978:
    // 0x2c4978: 0xe4a0012c  swc1        $f0, 0x12C($a1)
    ctx->pc = 0x2c4978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 300), bits); }
label_2c497c:
    // 0x2c497c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4980:
    // 0x2c4980: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2c4980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_2c4984:
    // 0x2c4984: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2c4984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c4988:
    // 0x2c4988: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c4988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2c498c:
    // 0x2c498c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c4990:
    // 0x2c4990: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c4990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2c4994:
    // 0x2c4994: 0xc136ad6  jal         func_4DAB58
label_2c4998:
    if (ctx->pc == 0x2C4998u) {
        ctx->pc = 0x2C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4994u;
        // 0x2c4998: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C499Cu;
        goto label_2c499c;
    }
    ctx->pc = 0x2C4994u;
    SET_GPR_U32(ctx, 31, 0x2C499Cu);
    ctx->pc = 0x2C4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4994u;
    // 0x2c4998: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2C4994u, 0x2C499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C499Cu;
label_2c499c:
    // 0x2c499c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c499cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c49a0:
    // 0x2c49a0: 0xc136ad4  jal         func_4DAB50
label_2c49a4:
    if (ctx->pc == 0x2C49A4u) {
        ctx->pc = 0x2C49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49A0u;
        // 0x2c49a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49A8u;
        goto label_2c49a8;
    }
    ctx->pc = 0x2C49A0u;
    SET_GPR_U32(ctx, 31, 0x2C49A8u);
    ctx->pc = 0x2C49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C49A0u;
    // 0x2c49a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2C49A0u, 0x2C49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49A8u;
label_2c49a8:
    // 0x2c49a8: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2c49ac:
    // 0x2c49ac: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2c49acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2c49b0:
    // 0x2c49b0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2c49b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c49b4:
    // 0x2c49b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c49b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c49b8:
    // 0x2c49b8: 0x908356e2  lbu         $v1, 0x56E2($a0)
    ctx->pc = 0x2c49b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_2c49bc:
    // 0x2c49bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c49bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c49c0:
    // 0x2c49c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c49c4:
    if (ctx->pc == 0x2C49C4u) {
        ctx->pc = 0x2C49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49C0u;
        // 0x2c49c4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49C8u;
        goto label_2c49c8;
    }
    ctx->pc = 0x2C49C0u;
    {
        const bool branch_taken_0x2c49c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49C0u;
        // 0x2c49c4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49c0) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C49C8u;
label_2c49c8:
    // 0x2c49c8: 0xc107444  jal         func_41D110
label_2c49cc:
    if (ctx->pc == 0x2C49CCu) {
        ctx->pc = 0x2C49D0u;
        goto label_2c49d0;
    }
    ctx->pc = 0x2C49C8u;
    SET_GPR_U32(ctx, 31, 0x2C49D0u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x2C49C8u, 0x2C49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49D0u;
label_2c49d0:
    // 0x2c49d0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x2c49d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c49d4:
    // 0x2c49d4: 0x50a00016  beql        $a1, $zero, . + 4 + (0x16 << 2)
label_2c49d8:
    if (ctx->pc == 0x2C49D8u) {
        ctx->pc = 0x2C49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49D4u;
        // 0x2c49d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49DCu;
        goto label_2c49dc;
    }
    ctx->pc = 0x2C49D4u;
    {
        const bool branch_taken_0x2c49d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49d4) {
            ctx->pc = 0x2C49D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C49D4u;
            // 0x2c49d8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C49DCu;
label_2c49dc:
    // 0x2c49dc: 0xc073a8e  jal         func_1CEA38
label_2c49e0:
    if (ctx->pc == 0x2C49E0u) {
        ctx->pc = 0x2C49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49DCu;
        // 0x2c49e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49E4u;
        goto label_2c49e4;
    }
    ctx->pc = 0x2C49DCu;
    SET_GPR_U32(ctx, 31, 0x2C49E4u);
    ctx->pc = 0x2C49E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C49DCu;
    // 0x2c49e0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x2C49DCu, 0x2C49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49E4u;
label_2c49e4:
    // 0x2c49e4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2c49e8:
    if (ctx->pc == 0x2C49E8u) {
        ctx->pc = 0x2C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49E4u;
        // 0x2c49e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49ECu;
        goto label_2c49ec;
    }
    ctx->pc = 0x2C49E4u;
    {
        const bool branch_taken_0x2c49e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c49e4) {
            ctx->pc = 0x2C49E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C49E4u;
            // 0x2c49e8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C49ECu;
label_2c49ec:
    // 0x2c49ec: 0x8e65489c  lw          $a1, 0x489C($s3)
    ctx->pc = 0x2c49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_2c49f0:
    // 0x2c49f0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2c49f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2c49f4:
    // 0x2c49f4: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x2c49f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2c49f8:
    // 0x2c49f8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_2c49fc:
    if (ctx->pc == 0x2C49FCu) {
        ctx->pc = 0x2C49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49F8u;
        // 0x2c49fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A00u;
        goto label_2c4a00;
    }
    ctx->pc = 0x2C49F8u;
    {
        const bool branch_taken_0x2c49f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c49f8) {
            ctx->pc = 0x2C49FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C49F8u;
            // 0x2c49fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4A30u;
            goto label_2c4a30;
        }
    }
    ctx->pc = 0x2C4A00u;
label_2c4a00:
    // 0x2c4a00: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2c4a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2c4a04:
    // 0x2c4a04: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_2c4a08:
    if (ctx->pc == 0x2C4A08u) {
        ctx->pc = 0x2C4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A04u;
        // 0x2c4a08: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A0Cu;
        goto label_2c4a0c;
    }
    ctx->pc = 0x2C4A04u;
    {
        const bool branch_taken_0x2c4a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A04u;
        // 0x2c4a08: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a04) {
            ctx->pc = 0x2C4A2Cu;
            goto label_2c4a2c;
        }
    }
    ctx->pc = 0x2C4A0Cu;
label_2c4a0c:
    // 0x2c4a0c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_2c4a10:
    if (ctx->pc == 0x2C4A10u) {
        ctx->pc = 0x2C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A0Cu;
        // 0x2c4a10: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A14u;
        goto label_2c4a14;
    }
    ctx->pc = 0x2C4A0Cu;
    {
        const bool branch_taken_0x2c4a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A0Cu;
        // 0x2c4a10: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4a0c) {
            ctx->pc = 0x2C4A2Cu;
            goto label_2c4a2c;
        }
    }
    ctx->pc = 0x2C4A14u;
label_2c4a14:
    // 0x2c4a14: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2c4a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_2c4a18:
    // 0x2c4a18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2c4a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c4a1c:
    // 0x2c4a1c: 0x24849250  addiu       $a0, $a0, -0x6DB0
    ctx->pc = 0x2c4a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
label_2c4a20:
    // 0x2c4a20: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2c4a20u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2c4a24:
    // 0x2c4a24: 0xc07387a  jal         func_1CE1E8
label_2c4a28:
    if (ctx->pc == 0x2C4A28u) {
        ctx->pc = 0x2C4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A24u;
        // 0x2c4a28: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A2Cu;
        goto label_2c4a2c;
    }
    ctx->pc = 0x2C4A24u;
    SET_GPR_U32(ctx, 31, 0x2C4A2Cu);
    ctx->pc = 0x2C4A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4A24u;
    // 0x2c4a28: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x2C4A24u, 0x2C4A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A2Cu;
label_2c4a2c:
    // 0x2c4a2c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c4a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c4a30:
    // 0x2c4a30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c4a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c4a34:
    // 0x2c4a34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c4a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c4a38:
    // 0x2c4a38: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2c4a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4a3c:
    // 0x2c4a3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4a40:
    // 0x2c4a40: 0x3e00008  jr          $ra
label_2c4a44:
    if (ctx->pc == 0x2C4A44u) {
        ctx->pc = 0x2C4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A40u;
        // 0x2c4a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A48u;
        goto label_fallthrough_0x2c4a40;
    }
    ctx->pc = 0x2C4A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A40u;
        // 0x2c4a44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c4a40:
    ctx->pc = 0x2C4A48u;
}
