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

// Function: sub_003F08C0
// Address: 0x3f08c0 - 0x3f0988
void sub_003F08C0_0x3f08c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F08C0_0x3f08c0");
#endif

    switch (ctx->pc) {
        case 0x3f08c0u: goto label_3f08c0;
        case 0x3f08c4u: goto label_3f08c4;
        case 0x3f08c8u: goto label_3f08c8;
        case 0x3f08ccu: goto label_3f08cc;
        case 0x3f08d0u: goto label_3f08d0;
        case 0x3f08d4u: goto label_3f08d4;
        case 0x3f08d8u: goto label_3f08d8;
        case 0x3f08dcu: goto label_3f08dc;
        case 0x3f08e0u: goto label_3f08e0;
        case 0x3f08e4u: goto label_3f08e4;
        case 0x3f08e8u: goto label_3f08e8;
        case 0x3f08ecu: goto label_3f08ec;
        case 0x3f08f0u: goto label_3f08f0;
        case 0x3f08f4u: goto label_3f08f4;
        case 0x3f08f8u: goto label_3f08f8;
        case 0x3f08fcu: goto label_3f08fc;
        case 0x3f0900u: goto label_3f0900;
        case 0x3f0904u: goto label_3f0904;
        case 0x3f0908u: goto label_3f0908;
        case 0x3f090cu: goto label_3f090c;
        case 0x3f0910u: goto label_3f0910;
        case 0x3f0914u: goto label_3f0914;
        case 0x3f0918u: goto label_3f0918;
        case 0x3f091cu: goto label_3f091c;
        case 0x3f0920u: goto label_3f0920;
        case 0x3f0924u: goto label_3f0924;
        case 0x3f0928u: goto label_3f0928;
        case 0x3f092cu: goto label_3f092c;
        case 0x3f0930u: goto label_3f0930;
        case 0x3f0934u: goto label_3f0934;
        case 0x3f0938u: goto label_3f0938;
        case 0x3f093cu: goto label_3f093c;
        case 0x3f0940u: goto label_3f0940;
        case 0x3f0944u: goto label_3f0944;
        case 0x3f0948u: goto label_3f0948;
        case 0x3f094cu: goto label_3f094c;
        case 0x3f0950u: goto label_3f0950;
        case 0x3f0954u: goto label_3f0954;
        case 0x3f0958u: goto label_3f0958;
        case 0x3f095cu: goto label_3f095c;
        case 0x3f0960u: goto label_3f0960;
        case 0x3f0964u: goto label_3f0964;
        case 0x3f0968u: goto label_3f0968;
        case 0x3f096cu: goto label_3f096c;
        case 0x3f0970u: goto label_3f0970;
        case 0x3f0974u: goto label_3f0974;
        case 0x3f0978u: goto label_3f0978;
        case 0x3f097cu: goto label_3f097c;
        case 0x3f0980u: goto label_3f0980;
        case 0x3f0984u: goto label_3f0984;
        default: break;
    }

    ctx->pc = 0x3f08c0u;

label_3f08c0:
    // 0x3f08c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f08c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3f08c4:
    // 0x3f08c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f08c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3f08c8:
    // 0x3f08c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f08c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f08cc:
    // 0x3f08cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f08ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f08d0:
    // 0x3f08d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f08d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f08d4:
    // 0x3f08d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f08d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f08d8:
    // 0x3f08d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f08d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f08dc:
    // 0x3f08dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f08e0:
    // 0x3f08e0: 0x40f809  jalr        $v0
label_3f08e4:
    if (ctx->pc == 0x3F08E4u) {
        ctx->pc = 0x3F08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08E0u;
        // 0x3f08e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F08E8u;
        goto label_3f08e8;
    }
    ctx->pc = 0x3F08E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F08E8u);
        ctx->pc = 0x3F08E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08E0u;
        // 0x3f08e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F08E0u, 0x3F08E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F08E8u;
label_3f08e8:
    // 0x3f08e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3f08e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f08ec:
    // 0x3f08ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3f08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f08f0:
    // 0x3f08f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3f08f4:
    if (ctx->pc == 0x3F08F4u) {
        ctx->pc = 0x3F08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08F0u;
        // 0x3f08f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F08F8u;
        goto label_3f08f8;
    }
    ctx->pc = 0x3F08F0u;
    {
        const bool branch_taken_0x3f08f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F08F0u;
        // 0x3f08f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f08f0) {
            ctx->pc = 0x3F0910u;
            goto label_3f0910;
        }
    }
    ctx->pc = 0x3F08F8u;
label_3f08f8:
    // 0x3f08f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f08f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f08fc:
    // 0x3f08fc: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x3f08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_3f0900:
    // 0x3f0900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3f0900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0904:
    // 0x3f0904: 0xc0e637e  jal         func_398DF8
label_3f0908:
    if (ctx->pc == 0x3F0908u) {
        ctx->pc = 0x3F0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0904u;
        // 0x3f0908: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F090Cu;
        goto label_3f090c;
    }
    ctx->pc = 0x3F0904u;
    SET_GPR_U32(ctx, 31, 0x3F090Cu);
    ctx->pc = 0x3F0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0904u;
    // 0x3f0908: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x3F0904u, 0x3F090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F090Cu;
label_3f090c:
    // 0x3f090c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3f090cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3f0910:
    // 0x3f0910: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3f0910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3f0914:
    // 0x3f0914: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3f0914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f0918:
    // 0x3f0918: 0xc0cd4ee  jal         func_3353B8
label_3f091c:
    if (ctx->pc == 0x3F091Cu) {
        ctx->pc = 0x3F091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0918u;
        // 0x3f091c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0920u;
        goto label_3f0920;
    }
    ctx->pc = 0x3F0918u;
    SET_GPR_U32(ctx, 31, 0x3F0920u);
    ctx->pc = 0x3F091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0918u;
    // 0x3f091c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3F0918u, 0x3F0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0920u;
label_3f0920:
    // 0x3f0920: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3f0920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f0924:
    // 0x3f0924: 0xc0e858c  jal         func_3A1630
label_3f0928:
    if (ctx->pc == 0x3F0928u) {
        ctx->pc = 0x3F0928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0924u;
        // 0x3f0928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F092Cu;
        goto label_3f092c;
    }
    ctx->pc = 0x3F0924u;
    SET_GPR_U32(ctx, 31, 0x3F092Cu);
    ctx->pc = 0x3F0928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0924u;
    // 0x3f0928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0924u, 0x3F092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F092Cu;
label_3f092c:
    // 0x3f092c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3f092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0930:
    // 0x3f0930: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3f0930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3f0934:
    // 0x3f0934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f0938:
    // 0x3f0938: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_3f093c:
    if (ctx->pc == 0x3F093Cu) {
        ctx->pc = 0x3F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0938u;
        // 0x3f093c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0940u;
        goto label_3f0940;
    }
    ctx->pc = 0x3F0938u;
    {
        const bool branch_taken_0x3f0938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0938u;
        // 0x3f093c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0938) {
            ctx->pc = 0x3F0950u;
            goto label_3f0950;
        }
    }
    ctx->pc = 0x3F0940u;
label_3f0940:
    // 0x3f0940: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3f0940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3f0944:
    // 0x3f0944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f0944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0948:
    // 0x3f0948: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f094c:
    if (ctx->pc == 0x3F094Cu) {
        ctx->pc = 0x3F094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0948u;
        // 0x3f094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0950u;
        goto label_3f0950;
    }
    ctx->pc = 0x3F0948u;
    {
        const bool branch_taken_0x3f0948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0948u;
        // 0x3f094c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f0948) {
            ctx->pc = 0x3F0960u;
            goto label_3f0960;
        }
    }
    ctx->pc = 0x3F0950u;
label_3f0950:
    // 0x3f0950: 0xc0e9344  jal         func_3A4D10
label_3f0954:
    if (ctx->pc == 0x3F0954u) {
        ctx->pc = 0x3F0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0950u;
        // 0x3f0954: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0958u;
        goto label_3f0958;
    }
    ctx->pc = 0x3F0950u;
    SET_GPR_U32(ctx, 31, 0x3F0958u);
    ctx->pc = 0x3F0954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0950u;
    // 0x3f0954: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3F0950u, 0x3F0958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0958u;
label_3f0958:
    // 0x3f0958: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3f0958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f095c:
    // 0x3f095c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f095cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0960:
    // 0x3f0960: 0xc0e9132  jal         func_3A44C8
label_3f0964:
    if (ctx->pc == 0x3F0964u) {
        ctx->pc = 0x3F0968u;
        goto label_3f0968;
    }
    ctx->pc = 0x3F0960u;
    SET_GPR_U32(ctx, 31, 0x3F0968u);
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F0960u, 0x3F0968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0968u;
label_3f0968:
    // 0x3f0968: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3f0968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3f096c:
    // 0x3f096c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f096cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0970:
    // 0x3f0970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f0970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f0974:
    // 0x3f0974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f0974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0978:
    // 0x3f0978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f0978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f097c:
    // 0x3f097c: 0x3e00008  jr          $ra
label_3f0980:
    if (ctx->pc == 0x3F0980u) {
        ctx->pc = 0x3F0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F097Cu;
        // 0x3f0980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0984u;
        goto label_3f0984;
    }
    ctx->pc = 0x3F097Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F097Cu;
        // 0x3f0980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F097Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F0984u;
label_3f0984:
    // 0x3f0984: 0x0  nop
    ctx->pc = 0x3f0984u;
    // NOP
    ctx->pc = 0x3f0988u;
}
