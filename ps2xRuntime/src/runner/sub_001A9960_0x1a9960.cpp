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

// Function: sub_001A9960
// Address: 0x1a9960 - 0x1a9a78
void sub_001A9960_0x1a9960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9960_0x1a9960");
#endif

    switch (ctx->pc) {
        case 0x1a9960u: goto label_1a9960;
        case 0x1a9964u: goto label_1a9964;
        case 0x1a9968u: goto label_1a9968;
        case 0x1a996cu: goto label_1a996c;
        case 0x1a9970u: goto label_1a9970;
        case 0x1a9974u: goto label_1a9974;
        case 0x1a9978u: goto label_1a9978;
        case 0x1a997cu: goto label_1a997c;
        case 0x1a9980u: goto label_1a9980;
        case 0x1a9984u: goto label_1a9984;
        case 0x1a9988u: goto label_1a9988;
        case 0x1a998cu: goto label_1a998c;
        case 0x1a9990u: goto label_1a9990;
        case 0x1a9994u: goto label_1a9994;
        case 0x1a9998u: goto label_1a9998;
        case 0x1a999cu: goto label_1a999c;
        case 0x1a99a0u: goto label_1a99a0;
        case 0x1a99a4u: goto label_1a99a4;
        case 0x1a99a8u: goto label_1a99a8;
        case 0x1a99acu: goto label_1a99ac;
        case 0x1a99b0u: goto label_1a99b0;
        case 0x1a99b4u: goto label_1a99b4;
        case 0x1a99b8u: goto label_1a99b8;
        case 0x1a99bcu: goto label_1a99bc;
        case 0x1a99c0u: goto label_1a99c0;
        case 0x1a99c4u: goto label_1a99c4;
        case 0x1a99c8u: goto label_1a99c8;
        case 0x1a99ccu: goto label_1a99cc;
        case 0x1a99d0u: goto label_1a99d0;
        case 0x1a99d4u: goto label_1a99d4;
        case 0x1a99d8u: goto label_1a99d8;
        case 0x1a99dcu: goto label_1a99dc;
        case 0x1a99e0u: goto label_1a99e0;
        case 0x1a99e4u: goto label_1a99e4;
        case 0x1a99e8u: goto label_1a99e8;
        case 0x1a99ecu: goto label_1a99ec;
        case 0x1a99f0u: goto label_1a99f0;
        case 0x1a99f4u: goto label_1a99f4;
        case 0x1a99f8u: goto label_1a99f8;
        case 0x1a99fcu: goto label_1a99fc;
        case 0x1a9a00u: goto label_1a9a00;
        case 0x1a9a04u: goto label_1a9a04;
        case 0x1a9a08u: goto label_1a9a08;
        case 0x1a9a0cu: goto label_1a9a0c;
        case 0x1a9a10u: goto label_1a9a10;
        case 0x1a9a14u: goto label_1a9a14;
        case 0x1a9a18u: goto label_1a9a18;
        case 0x1a9a1cu: goto label_1a9a1c;
        case 0x1a9a20u: goto label_1a9a20;
        case 0x1a9a24u: goto label_1a9a24;
        case 0x1a9a28u: goto label_1a9a28;
        case 0x1a9a2cu: goto label_1a9a2c;
        case 0x1a9a30u: goto label_1a9a30;
        case 0x1a9a34u: goto label_1a9a34;
        case 0x1a9a38u: goto label_1a9a38;
        case 0x1a9a3cu: goto label_1a9a3c;
        case 0x1a9a40u: goto label_1a9a40;
        case 0x1a9a44u: goto label_1a9a44;
        case 0x1a9a48u: goto label_1a9a48;
        case 0x1a9a4cu: goto label_1a9a4c;
        case 0x1a9a50u: goto label_1a9a50;
        case 0x1a9a54u: goto label_1a9a54;
        case 0x1a9a58u: goto label_1a9a58;
        case 0x1a9a5cu: goto label_1a9a5c;
        case 0x1a9a60u: goto label_1a9a60;
        case 0x1a9a64u: goto label_1a9a64;
        case 0x1a9a68u: goto label_1a9a68;
        case 0x1a9a6cu: goto label_1a9a6c;
        case 0x1a9a70u: goto label_1a9a70;
        case 0x1a9a74u: goto label_1a9a74;
        default: break;
    }

    ctx->pc = 0x1a9960u;

label_1a9960:
    // 0x1a9960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a9964:
    // 0x1a9964: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a9964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a9968:
    // 0x1a9968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a9968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a996c:
    // 0x1a996c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a9970:
    // 0x1a9970: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a9970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1a9974:
    // 0x1a9974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9978:
    // 0x1a9978: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a997c:
    // 0x1a997c: 0xc06a59e  jal         func_1A9678
label_1a9980:
    if (ctx->pc == 0x1A9980u) {
        ctx->pc = 0x1A9980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A997Cu;
        // 0x1a9980: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9984u;
        goto label_1a9984;
    }
    ctx->pc = 0x1A997Cu;
    SET_GPR_U32(ctx, 31, 0x1A9984u);
    ctx->pc = 0x1A9980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A997Cu;
    // 0x1a9980: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9678u, 0x1A997Cu, 0x1A9984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9984u;
label_1a9984:
    // 0x1a9984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9988:
    // 0x1a9988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a9988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a998c:
    // 0x1a998c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9990:
    // 0x1a9990: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a9990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a9994:
    // 0x1a9994: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a9994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a9998:
    // 0x1a9998: 0x60f809  jalr        $v1
label_1a999c:
    if (ctx->pc == 0x1A999Cu) {
        ctx->pc = 0x1A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9998u;
        // 0x1a999c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99A0u;
        goto label_1a99a0;
    }
    ctx->pc = 0x1A9998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A99A0u);
        ctx->pc = 0x1A999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9998u;
        // 0x1a999c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9998u, 0x1A99A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99A0u;
label_1a99a0:
    // 0x1a99a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a99a4:
    // 0x1a99a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a99a8:
    // 0x1a99a8: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_1a99ac:
    if (ctx->pc == 0x1A99ACu) {
        ctx->pc = 0x1A99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99A8u;
        // 0x1a99ac: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99B0u;
        goto label_1a99b0;
    }
    ctx->pc = 0x1A99A8u;
    {
        const bool branch_taken_0x1a99a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99A8u;
        // 0x1a99ac: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99a8) {
            ctx->pc = 0x1A99F8u;
            goto label_1a99f8;
        }
    }
    ctx->pc = 0x1A99B0u;
label_1a99b0:
    // 0x1a99b0: 0x8e420188  lw          $v0, 0x188($s2)
    ctx->pc = 0x1a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
label_1a99b4:
    // 0x1a99b4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a99b8:
    // 0x1a99b8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_1a99bc:
    if (ctx->pc == 0x1A99BCu) {
        ctx->pc = 0x1A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99B8u;
        // 0x1a99bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99C0u;
        goto label_1a99c0;
    }
    ctx->pc = 0x1A99B8u;
    {
        const bool branch_taken_0x1a99b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99B8u;
        // 0x1a99bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99b8) {
            ctx->pc = 0x1A99ECu;
            goto label_1a99ec;
        }
    }
    ctx->pc = 0x1A99C0u;
label_1a99c0:
    // 0x1a99c0: 0xc06a59e  jal         func_1A9678
label_1a99c4:
    if (ctx->pc == 0x1A99C4u) {
        ctx->pc = 0x1A99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99C0u;
        // 0x1a99c4: 0xae430188  sw          $v1, 0x188($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99C8u;
        goto label_1a99c8;
    }
    ctx->pc = 0x1A99C0u;
    SET_GPR_U32(ctx, 31, 0x1A99C8u);
    ctx->pc = 0x1A99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A99C0u;
    // 0x1a99c4: 0xae430188  sw          $v1, 0x188($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9678u, 0x1A99C0u, 0x1A99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A99C8u;
label_1a99c8:
    // 0x1a99c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a99c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a99cc:
    // 0x1a99cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a99d0:
    // 0x1a99d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a99d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a99d4:
    // 0x1a99d4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a99d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a99d8:
    // 0x1a99d8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a99dc:
    // 0x1a99dc: 0x60f809  jalr        $v1
label_1a99e0:
    if (ctx->pc == 0x1A99E0u) {
        ctx->pc = 0x1A99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99DCu;
        // 0x1a99e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99E4u;
        goto label_1a99e4;
    }
    ctx->pc = 0x1A99DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A99E4u);
        ctx->pc = 0x1A99E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99DCu;
        // 0x1a99e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99DCu, 0x1A99E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A99E4u;
label_1a99e4:
    // 0x1a99e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a99e8:
    if (ctx->pc == 0x1A99E8u) {
        ctx->pc = 0x1A99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99E4u;
        // 0x1a99e8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A99ECu;
        goto label_1a99ec;
    }
    ctx->pc = 0x1A99E4u;
    {
        const bool branch_taken_0x1a99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99E4u;
        // 0x1a99e8: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99e4) {
            ctx->pc = 0x1A99F8u;
            goto label_1a99f8;
        }
    }
    ctx->pc = 0x1A99ECu;
label_1a99ec:
    // 0x1a99ec: 0x8e42018c  lw          $v0, 0x18C($s2)
    ctx->pc = 0x1a99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
label_1a99f0:
    // 0x1a99f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a99f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a99f4:
    // 0x1a99f4: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x1a99f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
label_1a99f8:
    // 0x1a99f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a99fc:
    // 0x1a99fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a9a00:
    if (ctx->pc == 0x1A9A00u) {
        ctx->pc = 0x1A9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99FCu;
        // 0x1a9a00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A04u;
        goto label_1a9a04;
    }
    ctx->pc = 0x1A99FCu;
    {
        const bool branch_taken_0x1a99fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99FCu;
        // 0x1a9a00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99fc) {
            ctx->pc = 0x1A9A14u;
            goto label_1a9a14;
        }
    }
    ctx->pc = 0x1A9A04u;
label_1a9a04:
    // 0x1a9a04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a9a08:
    if (ctx->pc == 0x1A9A08u) {
        ctx->pc = 0x1A9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A04u;
        // 0x1a9a08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A0Cu;
        goto label_1a9a0c;
    }
    ctx->pc = 0x1A9A04u;
    {
        const bool branch_taken_0x1a9a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A04u;
        // 0x1a9a08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a04) {
            ctx->pc = 0x1A9A14u;
            goto label_1a9a14;
        }
    }
    ctx->pc = 0x1A9A0Cu;
label_1a9a0c:
    // 0x1a9a0c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1a9a10:
    if (ctx->pc == 0x1A9A10u) {
        ctx->pc = 0x1A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A0Cu;
        // 0x1a9a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A14u;
        goto label_1a9a14;
    }
    ctx->pc = 0x1A9A0Cu;
    {
        const bool branch_taken_0x1a9a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A0Cu;
        // 0x1a9a10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a0c) {
            ctx->pc = 0x1A9A30u;
            goto label_1a9a30;
        }
    }
    ctx->pc = 0x1A9A14u;
label_1a9a14:
    // 0x1a9a14: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x1a9a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a9a18:
    // 0x1a9a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a1c:
    // 0x1a9a1c: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1a9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a9a20:
    // 0x1a9a20: 0xc06a5bc  jal         func_1A96F0
label_1a9a24:
    if (ctx->pc == 0x1A9A24u) {
        ctx->pc = 0x1A9A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A20u;
        // 0x1a9a24: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A28u;
        goto label_1a9a28;
    }
    ctx->pc = 0x1A9A20u;
    SET_GPR_U32(ctx, 31, 0x1A9A28u);
    ctx->pc = 0x1A9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A20u;
    // 0x1a9a24: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A96F0u, 0x1A9A20u, 0x1A9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A28u;
label_1a9a28:
    // 0x1a9a28: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a9a2c:
    if (ctx->pc == 0x1A9A2Cu) {
        ctx->pc = 0x1A9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A28u;
        // 0x1a9a2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A30u;
        goto label_1a9a30;
    }
    ctx->pc = 0x1A9A28u;
    {
        const bool branch_taken_0x1a9a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A28u;
        // 0x1a9a2c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a28) {
            ctx->pc = 0x1A9A64u;
            goto label_1a9a64;
        }
    }
    ctx->pc = 0x1A9A30u;
label_1a9a30:
    // 0x1a9a30: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1a9a34:
    if (ctx->pc == 0x1A9A34u) {
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A38u;
        goto label_1a9a38;
    }
    ctx->pc = 0x1A9A30u;
    {
        const bool branch_taken_0x1a9a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A30u;
        // 0x1a9a34: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a30) {
            ctx->pc = 0x1A9A64u;
            goto label_1a9a64;
        }
    }
    ctx->pc = 0x1A9A38u;
label_1a9a38:
    // 0x1a9a38: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1a9a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1a9a3c:
    // 0x1a9a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9a40:
    // 0x1a9a40: 0xc06a624  jal         func_1A9890
label_1a9a44:
    if (ctx->pc == 0x1A9A44u) {
        ctx->pc = 0x1A9A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A40u;
        // 0x1a9a44: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A48u;
        goto label_1a9a48;
    }
    ctx->pc = 0x1A9A40u;
    SET_GPR_U32(ctx, 31, 0x1A9A48u);
    ctx->pc = 0x1A9A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A40u;
    // 0x1a9a44: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9890u, 0x1A9A40u, 0x1A9A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A48u;
label_1a9a48:
    // 0x1a9a48: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1a9a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a9a4c:
    // 0x1a9a4c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1a9a50:
    if (ctx->pc == 0x1A9A50u) {
        ctx->pc = 0x1A9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A4Cu;
        // 0x1a9a50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A54u;
        goto label_1a9a54;
    }
    ctx->pc = 0x1A9A4Cu;
    {
        const bool branch_taken_0x1a9a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A4Cu;
        // 0x1a9a50: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a4c) {
            ctx->pc = 0x1A9A64u;
            goto label_1a9a64;
        }
    }
    ctx->pc = 0x1A9A54u;
label_1a9a54:
    // 0x1a9a54: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1a9a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a9a58:
    // 0x1a9a58: 0xc06a5f0  jal         func_1A97C0
label_1a9a5c:
    if (ctx->pc == 0x1A9A5Cu) {
        ctx->pc = 0x1A9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A58u;
        // 0x1a9a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A60u;
        goto label_1a9a60;
    }
    ctx->pc = 0x1A9A58u;
    SET_GPR_U32(ctx, 31, 0x1A9A60u);
    ctx->pc = 0x1A9A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9A58u;
    // 0x1a9a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A97C0u, 0x1A9A58u, 0x1A9A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9A60u;
label_1a9a60:
    // 0x1a9a60: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a9a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9a64:
    // 0x1a9a64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a9a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9a68:
    // 0x1a9a68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a9a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9a6c:
    // 0x1a9a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9a70:
    // 0x1a9a70: 0x3e00008  jr          $ra
label_1a9a74:
    if (ctx->pc == 0x1A9A74u) {
        ctx->pc = 0x1A9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A70u;
        // 0x1a9a74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9A78u;
        goto label_fallthrough_0x1a9a70;
    }
    ctx->pc = 0x1A9A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9A70u;
        // 0x1a9a74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9a70:
    ctx->pc = 0x1A9A78u;
}
