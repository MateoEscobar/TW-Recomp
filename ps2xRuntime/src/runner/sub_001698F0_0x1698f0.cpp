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

// Function: sub_001698F0
// Address: 0x1698f0 - 0x169a20
void sub_001698F0_0x1698f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001698F0_0x1698f0");
#endif

    switch (ctx->pc) {
        case 0x1698f0u: goto label_1698f0;
        case 0x1698f4u: goto label_1698f4;
        case 0x1698f8u: goto label_1698f8;
        case 0x1698fcu: goto label_1698fc;
        case 0x169900u: goto label_169900;
        case 0x169904u: goto label_169904;
        case 0x169908u: goto label_169908;
        case 0x16990cu: goto label_16990c;
        case 0x169910u: goto label_169910;
        case 0x169914u: goto label_169914;
        case 0x169918u: goto label_169918;
        case 0x16991cu: goto label_16991c;
        case 0x169920u: goto label_169920;
        case 0x169924u: goto label_169924;
        case 0x169928u: goto label_169928;
        case 0x16992cu: goto label_16992c;
        case 0x169930u: goto label_169930;
        case 0x169934u: goto label_169934;
        case 0x169938u: goto label_169938;
        case 0x16993cu: goto label_16993c;
        case 0x169940u: goto label_169940;
        case 0x169944u: goto label_169944;
        case 0x169948u: goto label_169948;
        case 0x16994cu: goto label_16994c;
        case 0x169950u: goto label_169950;
        case 0x169954u: goto label_169954;
        case 0x169958u: goto label_169958;
        case 0x16995cu: goto label_16995c;
        case 0x169960u: goto label_169960;
        case 0x169964u: goto label_169964;
        case 0x169968u: goto label_169968;
        case 0x16996cu: goto label_16996c;
        case 0x169970u: goto label_169970;
        case 0x169974u: goto label_169974;
        case 0x169978u: goto label_169978;
        case 0x16997cu: goto label_16997c;
        case 0x169980u: goto label_169980;
        case 0x169984u: goto label_169984;
        case 0x169988u: goto label_169988;
        case 0x16998cu: goto label_16998c;
        case 0x169990u: goto label_169990;
        case 0x169994u: goto label_169994;
        case 0x169998u: goto label_169998;
        case 0x16999cu: goto label_16999c;
        case 0x1699a0u: goto label_1699a0;
        case 0x1699a4u: goto label_1699a4;
        case 0x1699a8u: goto label_1699a8;
        case 0x1699acu: goto label_1699ac;
        case 0x1699b0u: goto label_1699b0;
        case 0x1699b4u: goto label_1699b4;
        case 0x1699b8u: goto label_1699b8;
        case 0x1699bcu: goto label_1699bc;
        case 0x1699c0u: goto label_1699c0;
        case 0x1699c4u: goto label_1699c4;
        case 0x1699c8u: goto label_1699c8;
        case 0x1699ccu: goto label_1699cc;
        case 0x1699d0u: goto label_1699d0;
        case 0x1699d4u: goto label_1699d4;
        case 0x1699d8u: goto label_1699d8;
        case 0x1699dcu: goto label_1699dc;
        case 0x1699e0u: goto label_1699e0;
        case 0x1699e4u: goto label_1699e4;
        case 0x1699e8u: goto label_1699e8;
        case 0x1699ecu: goto label_1699ec;
        case 0x1699f0u: goto label_1699f0;
        case 0x1699f4u: goto label_1699f4;
        case 0x1699f8u: goto label_1699f8;
        case 0x1699fcu: goto label_1699fc;
        case 0x169a00u: goto label_169a00;
        case 0x169a04u: goto label_169a04;
        case 0x169a08u: goto label_169a08;
        case 0x169a0cu: goto label_169a0c;
        case 0x169a10u: goto label_169a10;
        case 0x169a14u: goto label_169a14;
        case 0x169a18u: goto label_169a18;
        case 0x169a1cu: goto label_169a1c;
        default: break;
    }

    ctx->pc = 0x1698f0u;

label_1698f0:
    // 0x1698f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1698f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1698f4:
    // 0x1698f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1698f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1698f8:
    // 0x1698f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1698f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1698fc:
    // 0x1698fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1698fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_169900:
    // 0x169900: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169900u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_169904:
    // 0x169904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_169908:
    // 0x169908: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x169908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_16990c:
    // 0x16990c: 0x8e0205ec  lw          $v0, 0x5EC($s0)
    ctx->pc = 0x16990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
label_169910:
    // 0x169910: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_169914:
    if (ctx->pc == 0x169914u) {
        ctx->pc = 0x169914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169910u;
        // 0x169914: 0x8c710048  lw          $s1, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169918u;
        goto label_169918;
    }
    ctx->pc = 0x169910u;
    {
        const bool branch_taken_0x169910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169910u;
        // 0x169914: 0x8c710048  lw          $s1, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169910) {
            ctx->pc = 0x169924u;
            goto label_169924;
        }
    }
    ctx->pc = 0x169918u;
label_169918:
    // 0x169918: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x169918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_16991c:
    // 0x16991c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_169920:
    if (ctx->pc == 0x169920u) {
        ctx->pc = 0x169920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16991Cu;
        // 0x169920: 0xae0005ec  sw          $zero, 0x5EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169924u;
        goto label_169924;
    }
    ctx->pc = 0x16991Cu;
    {
        const bool branch_taken_0x16991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16991c) {
            ctx->pc = 0x169920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16991Cu;
            // 0x169920: 0xae0005ec  sw          $zero, 0x5EC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1516), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169924u;
            goto label_169924;
        }
    }
    ctx->pc = 0x169924u;
label_169924:
    // 0x169924: 0x8e0505e8  lw          $a1, 0x5E8($s0)
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1512)));
label_169928:
    // 0x169928: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
label_16992c:
    if (ctx->pc == 0x16992Cu) {
        ctx->pc = 0x16992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169928u;
        // 0x16992c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169930u;
        goto label_169930;
    }
    ctx->pc = 0x169928u;
    {
        const bool branch_taken_0x169928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169928u;
        // 0x16992c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169928) {
            ctx->pc = 0x169974u;
            goto label_169974;
        }
    }
    ctx->pc = 0x169930u;
label_169930:
    // 0x169930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x169930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169934:
    // 0x169934: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x169934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_169938:
    // 0x169938: 0x8c63028c  lw          $v1, 0x28C($v1)
    ctx->pc = 0x169938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 652)));
label_16993c:
    // 0x16993c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_169940:
    if (ctx->pc == 0x169940u) {
        ctx->pc = 0x169940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16993Cu;
        // 0x169940: 0xb1102b  sltu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169944u;
        goto label_169944;
    }
    ctx->pc = 0x16993Cu;
    {
        const bool branch_taken_0x16993c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x169940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16993Cu;
        // 0x169940: 0xb1102b  sltu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16993c) {
            ctx->pc = 0x169958u;
            goto label_169958;
        }
    }
    ctx->pc = 0x169944u;
label_169944:
    // 0x169944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_169948:
    // 0x169948: 0xc05a61e  jal         func_169878
label_16994c:
    if (ctx->pc == 0x16994Cu) {
        ctx->pc = 0x16994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169948u;
        // 0x16994c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169950u;
        goto label_169950;
    }
    ctx->pc = 0x169948u;
    SET_GPR_U32(ctx, 31, 0x169950u);
    ctx->pc = 0x16994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169948u;
    // 0x16994c: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x169948u, 0x169950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169950u;
label_169950:
    // 0x169950: 0x1000002f  b           . + 4 + (0x2F << 2)
label_169954:
    if (ctx->pc == 0x169954u) {
        ctx->pc = 0x169954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169950u;
        // 0x169954: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169958u;
        goto label_169958;
    }
    ctx->pc = 0x169950u;
    {
        const bool branch_taken_0x169950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169950u;
        // 0x169954: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169950) {
            ctx->pc = 0x169A10u;
            goto label_169a10;
        }
    }
    ctx->pc = 0x169958u;
label_169958:
    // 0x169958: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_16995c:
    if (ctx->pc == 0x16995Cu) {
        ctx->pc = 0x16995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169958u;
        // 0x16995c: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169960u;
        goto label_169960;
    }
    ctx->pc = 0x169958u;
    {
        const bool branch_taken_0x169958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169958) {
            ctx->pc = 0x16995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169958u;
            // 0x16995c: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169978u;
            goto label_169978;
        }
    }
    ctx->pc = 0x169960u;
label_169960:
    // 0x169960: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_169964:
    if (ctx->pc == 0x169964u) {
        ctx->pc = 0x169964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169960u;
        // 0x169964: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169968u;
        goto label_169968;
    }
    ctx->pc = 0x169960u;
    {
        const bool branch_taken_0x169960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169960) {
            ctx->pc = 0x169964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169960u;
            // 0x169964: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169978u;
            goto label_169978;
        }
    }
    ctx->pc = 0x169968u;
label_169968:
    // 0x169968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16996c:
    // 0x16996c: 0xc05a688  jal         func_169A20
label_169970:
    if (ctx->pc == 0x169970u) {
        ctx->pc = 0x169970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16996Cu;
        // 0x169970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169974u;
        goto label_169974;
    }
    ctx->pc = 0x16996Cu;
    SET_GPR_U32(ctx, 31, 0x169974u);
    ctx->pc = 0x169970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16996Cu;
    // 0x169970: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A20u, 0x16996Cu, 0x169974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169974u;
label_169974:
    // 0x169974: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x169974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_169978:
    // 0x169978: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_16997c:
    if (ctx->pc == 0x16997Cu) {
        ctx->pc = 0x16997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169978u;
        // 0x16997c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x169980u;
        goto label_169980;
    }
    ctx->pc = 0x169978u;
    {
        const bool branch_taken_0x169978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169978u;
        // 0x16997c: 0x51102b  sltu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169978) {
            ctx->pc = 0x169A0Cu;
            goto label_169a0c;
        }
    }
    ctx->pc = 0x169980u;
label_169980:
    // 0x169980: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_169984:
    if (ctx->pc == 0x169984u) {
        ctx->pc = 0x169984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169980u;
        // 0x169984: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169988u;
        goto label_169988;
    }
    ctx->pc = 0x169980u;
    {
        const bool branch_taken_0x169980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169980u;
        // 0x169984: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169980) {
            ctx->pc = 0x169A0Cu;
            goto label_169a0c;
        }
    }
    ctx->pc = 0x169988u;
label_169988:
    // 0x169988: 0xae0005f0  sw          $zero, 0x5F0($s0)
    ctx->pc = 0x169988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
label_16998c:
    // 0x16998c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x16998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_169990:
    // 0x169990: 0xc0e409a  jal         func_390268
label_169994:
    if (ctx->pc == 0x169994u) {
        ctx->pc = 0x169994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169990u;
        // 0x169994: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169998u;
        goto label_169998;
    }
    ctx->pc = 0x169990u;
    SET_GPR_U32(ctx, 31, 0x169998u);
    ctx->pc = 0x169994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169990u;
    // 0x169994: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169990u, 0x169998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169998u;
label_169998:
    // 0x169998: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_16999c:
    if (ctx->pc == 0x16999Cu) {
        ctx->pc = 0x16999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169998u;
        // 0x16999c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699A0u;
        goto label_1699a0;
    }
    ctx->pc = 0x169998u;
    {
        const bool branch_taken_0x169998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169998) {
            ctx->pc = 0x16999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169998u;
            // 0x16999c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A10u;
            goto label_169a10;
        }
    }
    ctx->pc = 0x1699A0u;
label_1699a0:
    // 0x1699a0: 0xc087502  jal         func_21D408
label_1699a4:
    if (ctx->pc == 0x1699A4u) {
        ctx->pc = 0x1699A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699A0u;
        // 0x1699a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699A8u;
        goto label_1699a8;
    }
    ctx->pc = 0x1699A0u;
    SET_GPR_U32(ctx, 31, 0x1699A8u);
    ctx->pc = 0x1699A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699A0u;
    // 0x1699a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1699A0u, 0x1699A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699A8u;
label_1699a8:
    // 0x1699a8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_1699ac:
    // 0x1699ac: 0x14700018  bne         $v1, $s0, . + 4 + (0x18 << 2)
label_1699b0:
    if (ctx->pc == 0x1699B0u) {
        ctx->pc = 0x1699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699ACu;
        // 0x1699b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699B4u;
        goto label_1699b4;
    }
    ctx->pc = 0x1699ACu;
    {
        const bool branch_taken_0x1699ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1699B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699ACu;
        // 0x1699b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699ac) {
            ctx->pc = 0x169A10u;
            goto label_169a10;
        }
    }
    ctx->pc = 0x1699B4u;
label_1699b4:
    // 0x1699b4: 0x8e22489c  lw          $v0, 0x489C($s1)
    ctx->pc = 0x1699b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
label_1699b8:
    // 0x1699b8: 0x244502bc  addiu       $a1, $v0, 0x2BC
    ctx->pc = 0x1699b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 700));
label_1699bc:
    // 0x1699bc: 0x50a00015  beql        $a1, $zero, . + 4 + (0x15 << 2)
label_1699c0:
    if (ctx->pc == 0x1699C0u) {
        ctx->pc = 0x1699C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699BCu;
        // 0x1699c0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699C4u;
        goto label_1699c4;
    }
    ctx->pc = 0x1699BCu;
    {
        const bool branch_taken_0x1699bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1699bc) {
            ctx->pc = 0x1699C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1699BCu;
            // 0x1699c0: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169A14u;
            goto label_169a14;
        }
    }
    ctx->pc = 0x1699C4u;
label_1699c4:
    // 0x1699c4: 0x804202bc  lb          $v0, 0x2BC($v0)
    ctx->pc = 0x1699c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 700)));
label_1699c8:
    // 0x1699c8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1699cc:
    if (ctx->pc == 0x1699CCu) {
        ctx->pc = 0x1699CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C8u;
        // 0x1699cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699D0u;
        goto label_1699d0;
    }
    ctx->pc = 0x1699C8u;
    {
        const bool branch_taken_0x1699c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C8u;
        // 0x1699cc: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699c8) {
            ctx->pc = 0x169A0Cu;
            goto label_169a0c;
        }
    }
    ctx->pc = 0x1699D0u;
label_1699d0:
    // 0x1699d0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x1699d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_1699d4:
    // 0x1699d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1699d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1699d8:
    // 0x1699d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1699d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1699dc:
    // 0x1699dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1699dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1699e0:
    // 0x1699e0: 0x40f809  jalr        $v0
label_1699e4:
    if (ctx->pc == 0x1699E4u) {
        ctx->pc = 0x1699E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699E0u;
        // 0x1699e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699E8u;
        goto label_1699e8;
    }
    ctx->pc = 0x1699E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1699E8u);
        ctx->pc = 0x1699E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699E0u;
        // 0x1699e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1699E0u, 0x1699E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1699E8u;
label_1699e8:
    // 0x1699e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1699ec:
    if (ctx->pc == 0x1699ECu) {
        ctx->pc = 0x1699ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699E8u;
        // 0x1699ec: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1699F0u;
        goto label_1699f0;
    }
    ctx->pc = 0x1699E8u;
    {
        const bool branch_taken_0x1699e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699E8u;
        // 0x1699ec: 0x8e072b04  lw          $a3, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699e8) {
            ctx->pc = 0x169A0Cu;
            goto label_169a0c;
        }
    }
    ctx->pc = 0x1699F0u;
label_1699f0:
    // 0x1699f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1699f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1699f4:
    // 0x1699f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1699f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1699f8:
    // 0x1699f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1699f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1699fc:
    // 0x1699fc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1699fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_169a00:
    // 0x169a00: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x169a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_169a04:
    // 0x169a04: 0x60f809  jalr        $v1
label_169a08:
    if (ctx->pc == 0x169A08u) {
        ctx->pc = 0x169A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A04u;
        // 0x169a08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A0Cu;
        goto label_169a0c;
    }
    ctx->pc = 0x169A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x169A0Cu);
        ctx->pc = 0x169A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A04u;
        // 0x169a08: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A04u, 0x169A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x169A0Cu;
label_169a0c:
    // 0x169a0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x169a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_169a10:
    // 0x169a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_169a14:
    // 0x169a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_169a18:
    // 0x169a18: 0x3e00008  jr          $ra
label_169a1c:
    if (ctx->pc == 0x169A1Cu) {
        ctx->pc = 0x169A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A18u;
        // 0x169a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x169A20u;
        goto label_fallthrough_0x169a18;
    }
    ctx->pc = 0x169A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A18u;
        // 0x169a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x169a18:
    ctx->pc = 0x169A20u;
}
