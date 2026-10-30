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

// Function: sub_0023D8C8
// Address: 0x23d8c8 - 0x23db48
void sub_0023D8C8_0x23d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D8C8_0x23d8c8");
#endif

    switch (ctx->pc) {
        case 0x23d8c8u: goto label_23d8c8;
        case 0x23d8ccu: goto label_23d8cc;
        case 0x23d8d0u: goto label_23d8d0;
        case 0x23d8d4u: goto label_23d8d4;
        case 0x23d8d8u: goto label_23d8d8;
        case 0x23d8dcu: goto label_23d8dc;
        case 0x23d8e0u: goto label_23d8e0;
        case 0x23d8e4u: goto label_23d8e4;
        case 0x23d8e8u: goto label_23d8e8;
        case 0x23d8ecu: goto label_23d8ec;
        case 0x23d8f0u: goto label_23d8f0;
        case 0x23d8f4u: goto label_23d8f4;
        case 0x23d8f8u: goto label_23d8f8;
        case 0x23d8fcu: goto label_23d8fc;
        case 0x23d900u: goto label_23d900;
        case 0x23d904u: goto label_23d904;
        case 0x23d908u: goto label_23d908;
        case 0x23d90cu: goto label_23d90c;
        case 0x23d910u: goto label_23d910;
        case 0x23d914u: goto label_23d914;
        case 0x23d918u: goto label_23d918;
        case 0x23d91cu: goto label_23d91c;
        case 0x23d920u: goto label_23d920;
        case 0x23d924u: goto label_23d924;
        case 0x23d928u: goto label_23d928;
        case 0x23d92cu: goto label_23d92c;
        case 0x23d930u: goto label_23d930;
        case 0x23d934u: goto label_23d934;
        case 0x23d938u: goto label_23d938;
        case 0x23d93cu: goto label_23d93c;
        case 0x23d940u: goto label_23d940;
        case 0x23d944u: goto label_23d944;
        case 0x23d948u: goto label_23d948;
        case 0x23d94cu: goto label_23d94c;
        case 0x23d950u: goto label_23d950;
        case 0x23d954u: goto label_23d954;
        case 0x23d958u: goto label_23d958;
        case 0x23d95cu: goto label_23d95c;
        case 0x23d960u: goto label_23d960;
        case 0x23d964u: goto label_23d964;
        case 0x23d968u: goto label_23d968;
        case 0x23d96cu: goto label_23d96c;
        case 0x23d970u: goto label_23d970;
        case 0x23d974u: goto label_23d974;
        case 0x23d978u: goto label_23d978;
        case 0x23d97cu: goto label_23d97c;
        case 0x23d980u: goto label_23d980;
        case 0x23d984u: goto label_23d984;
        case 0x23d988u: goto label_23d988;
        case 0x23d98cu: goto label_23d98c;
        case 0x23d990u: goto label_23d990;
        case 0x23d994u: goto label_23d994;
        case 0x23d998u: goto label_23d998;
        case 0x23d99cu: goto label_23d99c;
        case 0x23d9a0u: goto label_23d9a0;
        case 0x23d9a4u: goto label_23d9a4;
        case 0x23d9a8u: goto label_23d9a8;
        case 0x23d9acu: goto label_23d9ac;
        case 0x23d9b0u: goto label_23d9b0;
        case 0x23d9b4u: goto label_23d9b4;
        case 0x23d9b8u: goto label_23d9b8;
        case 0x23d9bcu: goto label_23d9bc;
        case 0x23d9c0u: goto label_23d9c0;
        case 0x23d9c4u: goto label_23d9c4;
        case 0x23d9c8u: goto label_23d9c8;
        case 0x23d9ccu: goto label_23d9cc;
        case 0x23d9d0u: goto label_23d9d0;
        case 0x23d9d4u: goto label_23d9d4;
        case 0x23d9d8u: goto label_23d9d8;
        case 0x23d9dcu: goto label_23d9dc;
        case 0x23d9e0u: goto label_23d9e0;
        case 0x23d9e4u: goto label_23d9e4;
        case 0x23d9e8u: goto label_23d9e8;
        case 0x23d9ecu: goto label_23d9ec;
        case 0x23d9f0u: goto label_23d9f0;
        case 0x23d9f4u: goto label_23d9f4;
        case 0x23d9f8u: goto label_23d9f8;
        case 0x23d9fcu: goto label_23d9fc;
        case 0x23da00u: goto label_23da00;
        case 0x23da04u: goto label_23da04;
        case 0x23da08u: goto label_23da08;
        case 0x23da0cu: goto label_23da0c;
        case 0x23da10u: goto label_23da10;
        case 0x23da14u: goto label_23da14;
        case 0x23da18u: goto label_23da18;
        case 0x23da1cu: goto label_23da1c;
        case 0x23da20u: goto label_23da20;
        case 0x23da24u: goto label_23da24;
        case 0x23da28u: goto label_23da28;
        case 0x23da2cu: goto label_23da2c;
        case 0x23da30u: goto label_23da30;
        case 0x23da34u: goto label_23da34;
        case 0x23da38u: goto label_23da38;
        case 0x23da3cu: goto label_23da3c;
        case 0x23da40u: goto label_23da40;
        case 0x23da44u: goto label_23da44;
        case 0x23da48u: goto label_23da48;
        case 0x23da4cu: goto label_23da4c;
        case 0x23da50u: goto label_23da50;
        case 0x23da54u: goto label_23da54;
        case 0x23da58u: goto label_23da58;
        case 0x23da5cu: goto label_23da5c;
        case 0x23da60u: goto label_23da60;
        case 0x23da64u: goto label_23da64;
        case 0x23da68u: goto label_23da68;
        case 0x23da6cu: goto label_23da6c;
        case 0x23da70u: goto label_23da70;
        case 0x23da74u: goto label_23da74;
        case 0x23da78u: goto label_23da78;
        case 0x23da7cu: goto label_23da7c;
        case 0x23da80u: goto label_23da80;
        case 0x23da84u: goto label_23da84;
        case 0x23da88u: goto label_23da88;
        case 0x23da8cu: goto label_23da8c;
        case 0x23da90u: goto label_23da90;
        case 0x23da94u: goto label_23da94;
        case 0x23da98u: goto label_23da98;
        case 0x23da9cu: goto label_23da9c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daa4u: goto label_23daa4;
        case 0x23daa8u: goto label_23daa8;
        case 0x23daacu: goto label_23daac;
        case 0x23dab0u: goto label_23dab0;
        case 0x23dab4u: goto label_23dab4;
        case 0x23dab8u: goto label_23dab8;
        case 0x23dabcu: goto label_23dabc;
        case 0x23dac0u: goto label_23dac0;
        case 0x23dac4u: goto label_23dac4;
        case 0x23dac8u: goto label_23dac8;
        case 0x23daccu: goto label_23dacc;
        case 0x23dad0u: goto label_23dad0;
        case 0x23dad4u: goto label_23dad4;
        case 0x23dad8u: goto label_23dad8;
        case 0x23dadcu: goto label_23dadc;
        case 0x23dae0u: goto label_23dae0;
        case 0x23dae4u: goto label_23dae4;
        case 0x23dae8u: goto label_23dae8;
        case 0x23daecu: goto label_23daec;
        case 0x23daf0u: goto label_23daf0;
        case 0x23daf4u: goto label_23daf4;
        case 0x23daf8u: goto label_23daf8;
        case 0x23dafcu: goto label_23dafc;
        case 0x23db00u: goto label_23db00;
        case 0x23db04u: goto label_23db04;
        case 0x23db08u: goto label_23db08;
        case 0x23db0cu: goto label_23db0c;
        case 0x23db10u: goto label_23db10;
        case 0x23db14u: goto label_23db14;
        case 0x23db18u: goto label_23db18;
        case 0x23db1cu: goto label_23db1c;
        case 0x23db20u: goto label_23db20;
        case 0x23db24u: goto label_23db24;
        case 0x23db28u: goto label_23db28;
        case 0x23db2cu: goto label_23db2c;
        case 0x23db30u: goto label_23db30;
        case 0x23db34u: goto label_23db34;
        case 0x23db38u: goto label_23db38;
        case 0x23db3cu: goto label_23db3c;
        case 0x23db40u: goto label_23db40;
        case 0x23db44u: goto label_23db44;
        default: break;
    }

    ctx->pc = 0x23d8c8u;

label_23d8c8:
    // 0x23d8c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23d8cc:
    // 0x23d8cc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x23d8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_23d8d0:
    // 0x23d8d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x23d8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_23d8d4:
    // 0x23d8d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23d8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23d8d8:
    // 0x23d8d8: 0xc0e87c0  jal         func_3A1F00
label_23d8dc:
    if (ctx->pc == 0x23D8DCu) {
        ctx->pc = 0x23D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8D8u;
        // 0x23d8dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8E0u;
        goto label_23d8e0;
    }
    ctx->pc = 0x23D8D8u;
    SET_GPR_U32(ctx, 31, 0x23D8E0u);
    ctx->pc = 0x23D8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8D8u;
    // 0x23d8dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x23D8D8u, 0x23D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8E0u;
label_23d8e0:
    // 0x23d8e0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x23d8e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d8e4:
    // 0x23d8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d8e8:
    // 0x23d8e8: 0xc08f598  jal         func_23D660
label_23d8ec:
    if (ctx->pc == 0x23D8ECu) {
        ctx->pc = 0x23D8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8E8u;
        // 0x23d8ec: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8F0u;
        goto label_23d8f0;
    }
    ctx->pc = 0x23D8E8u;
    SET_GPR_U32(ctx, 31, 0x23D8F0u);
    ctx->pc = 0x23D8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D8E8u;
    // 0x23d8ec: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D660u, 0x23D8E8u, 0x23D8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D8F0u;
label_23d8f0:
    // 0x23d8f0: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x23d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_23d8f4:
    // 0x23d8f4: 0x5040008f  beql        $v0, $zero, . + 4 + (0x8F << 2)
label_23d8f8:
    if (ctx->pc == 0x23D8F8u) {
        ctx->pc = 0x23D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D8F4u;
        // 0x23d8f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D8FCu;
        goto label_23d8fc;
    }
    ctx->pc = 0x23D8F4u;
    {
        const bool branch_taken_0x23d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d8f4) {
            ctx->pc = 0x23D8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D8F4u;
            // 0x23d8f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB34u;
            goto label_23db34;
        }
    }
    ctx->pc = 0x23D8FCu;
label_23d8fc:
    // 0x23d8fc: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_23d900:
    // 0x23d900: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_23d904:
    if (ctx->pc == 0x23D904u) {
        ctx->pc = 0x23D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D900u;
        // 0x23d904: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D908u;
        goto label_23d908;
    }
    ctx->pc = 0x23D900u;
    {
        const bool branch_taken_0x23d900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D900u;
        // 0x23d904: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d900) {
            ctx->pc = 0x23DA58u;
            goto label_23da58;
        }
    }
    ctx->pc = 0x23D908u;
label_23d908:
    // 0x23d908: 0x8e020280  lw          $v0, 0x280($s0)
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_23d90c:
    // 0x23d90c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23d90cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_23d910:
    // 0x23d910: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_23d914:
    if (ctx->pc == 0x23D914u) {
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D918u;
        goto label_23d918;
    }
    ctx->pc = 0x23D910u;
    {
        const bool branch_taken_0x23d910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D910u;
        // 0x23d914: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d910) {
            ctx->pc = 0x23DA5Cu;
            goto label_23da5c;
        }
    }
    ctx->pc = 0x23D918u;
label_23d918:
    // 0x23d918: 0xc088f04  jal         func_223C10
label_23d91c:
    if (ctx->pc == 0x23D91Cu) {
        ctx->pc = 0x23D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D918u;
        // 0x23d91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D920u;
        goto label_23d920;
    }
    ctx->pc = 0x23D918u;
    SET_GPR_U32(ctx, 31, 0x23D920u);
    ctx->pc = 0x23D91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D918u;
    // 0x23d91c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x23D918u, 0x23D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D920u;
label_23d920:
    // 0x23d920: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
label_23d924:
    if (ctx->pc == 0x23D924u) {
        ctx->pc = 0x23D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D920u;
        // 0x23d924: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D928u;
        goto label_23d928;
    }
    ctx->pc = 0x23D920u;
    {
        const bool branch_taken_0x23d920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d920) {
            ctx->pc = 0x23D924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D920u;
            // 0x23d924: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DA58u;
            goto label_23da58;
        }
    }
    ctx->pc = 0x23D928u;
label_23d928:
    // 0x23d928: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x23d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23d92c:
    // 0x23d92c: 0x3c110400  lui         $s1, 0x400
    ctx->pc = 0x23d92cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
label_23d930:
    // 0x23d930: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x23d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_23d934:
    // 0x23d934: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_23d938:
    if (ctx->pc == 0x23D938u) {
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D93Cu;
        goto label_23d93c;
    }
    ctx->pc = 0x23D934u;
    {
        const bool branch_taken_0x23d934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D934u;
        // 0x23d938: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d934) {
            ctx->pc = 0x23DA34u;
            goto label_23da34;
        }
    }
    ctx->pc = 0x23D93Cu;
label_23d93c:
    // 0x23d93c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23d940:
    // 0x23d940: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d944:
    // 0x23d944: 0xc136b18  jal         func_4DAC60
label_23d948:
    if (ctx->pc == 0x23D948u) {
        ctx->pc = 0x23D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D944u;
        // 0x23d948: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D94Cu;
        goto label_23d94c;
    }
    ctx->pc = 0x23D944u;
    SET_GPR_U32(ctx, 31, 0x23D94Cu);
    ctx->pc = 0x23D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D944u;
    // 0x23d948: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23D944u, 0x23D94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D94Cu;
label_23d94c:
    // 0x23d94c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23d94cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d950:
    // 0x23d950: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d954:
    // 0x23d954: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x23d954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23d958:
    // 0x23d958: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23d95c:
    // 0x23d95c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_23d960:
    // 0x23d960: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x23d960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_23d964:
    // 0x23d964: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x23d964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_23d968:
    // 0x23d968: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x23d968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_23d96c:
    // 0x23d96c: 0x60f809  jalr        $v1
label_23d970:
    if (ctx->pc == 0x23D970u) {
        ctx->pc = 0x23D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D96Cu;
        // 0x23d970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D974u;
        goto label_23d974;
    }
    ctx->pc = 0x23D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23D974u);
        ctx->pc = 0x23D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D96Cu;
        // 0x23d970: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D96Cu, 0x23D974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D974u;
label_23d974:
    // 0x23d974: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x23d974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_23d978:
    // 0x23d978: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x23d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_23d97c:
    // 0x23d97c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_23d980:
    if (ctx->pc == 0x23D980u) {
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D984u;
        goto label_23d984;
    }
    ctx->pc = 0x23D97Cu;
    {
        const bool branch_taken_0x23d97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D97Cu;
        // 0x23d980: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d97c) {
            ctx->pc = 0x23DA34u;
            goto label_23da34;
        }
    }
    ctx->pc = 0x23D984u;
label_23d984:
    // 0x23d984: 0xc6010238  lwc1        $f1, 0x238($s0)
    ctx->pc = 0x23d984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d988:
    // 0x23d988: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x23d988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
label_23d98c:
    // 0x23d98c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x23d98cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_23d990:
    // 0x23d990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d994:
    // 0x23d994: 0x0  nop
    ctx->pc = 0x23d994u;
    // NOP
label_23d998:
    // 0x23d998: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d99c:
    // 0x23d99c: 0x0  nop
    ctx->pc = 0x23d99cu;
    // NOP
label_23d9a0:
    // 0x23d9a0: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_23d9a4:
    if (ctx->pc == 0x23D9A4u) {
        ctx->pc = 0x23D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9A0u;
        // 0x23d9a4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9A8u;
        goto label_23d9a8;
    }
    ctx->pc = 0x23D9A0u;
    {
        const bool branch_taken_0x23d9a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9A0u;
        // 0x23d9a4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9a0) {
            ctx->pc = 0x23DA38u;
            goto label_23da38;
        }
    }
    ctx->pc = 0x23D9A8u;
label_23d9a8:
    // 0x23d9a8: 0xc089fda  jal         func_227F68
label_23d9ac:
    if (ctx->pc == 0x23D9ACu) {
        ctx->pc = 0x23D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9A8u;
        // 0x23d9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9B0u;
        goto label_23d9b0;
    }
    ctx->pc = 0x23D9A8u;
    SET_GPR_U32(ctx, 31, 0x23D9B0u);
    ctx->pc = 0x23D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9A8u;
    // 0x23d9ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x23D9A8u, 0x23D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9B0u;
label_23d9b0:
    // 0x23d9b0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_23d9b4:
    if (ctx->pc == 0x23D9B4u) {
        ctx->pc = 0x23D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9B0u;
        // 0x23d9b4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9B8u;
        goto label_23d9b8;
    }
    ctx->pc = 0x23D9B0u;
    {
        const bool branch_taken_0x23d9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9B0u;
        // 0x23d9b4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9b0) {
            ctx->pc = 0x23DA34u;
            goto label_23da34;
        }
    }
    ctx->pc = 0x23D9B8u;
label_23d9b8:
    // 0x23d9b8: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x23d9b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_23d9bc:
    // 0x23d9bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x23d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_23d9c0:
    // 0x23d9c0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x23d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_23d9c4:
    // 0x23d9c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23d9c8:
    // 0x23d9c8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_23d9cc:
    // 0x23d9cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23d9d0:
    // 0x23d9d0: 0xc0cd8ec  jal         func_3363B0
label_23d9d4:
    if (ctx->pc == 0x23D9D4u) {
        ctx->pc = 0x23D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D9D0u;
        // 0x23d9d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D9D8u;
        goto label_23d9d8;
    }
    ctx->pc = 0x23D9D0u;
    SET_GPR_U32(ctx, 31, 0x23D9D8u);
    ctx->pc = 0x23D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D9D0u;
    // 0x23d9d4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x23D9D0u, 0x23D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D9D8u;
label_23d9d8:
    // 0x23d9d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23d9dc:
    // 0x23d9dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23d9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_23d9e0:
    // 0x23d9e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23d9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d9e4:
    // 0x23d9e4: 0xc60c0238  lwc1        $f12, 0x238($s0)
    ctx->pc = 0x23d9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23d9e8:
    // 0x23d9e8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23d9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23d9ec:
    // 0x23d9ec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_23d9f0:
    // 0x23d9f0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23d9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_23d9f4:
    // 0x23d9f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d9f8:
    // 0x23d9f8: 0x46036301  sub.s       $f12, $f12, $f3
    ctx->pc = 0x23d9f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
label_23d9fc:
    // 0x23d9fc: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x23d9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_23da00:
    // 0x23da00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x23da00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_23da04:
    // 0x23da04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23da04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23da08:
    // 0x23da08: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23da08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23da0c:
    // 0x23da0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23da0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23da10:
    // 0x23da10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23da10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23da14:
    // 0x23da14: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x23da14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_23da18:
    // 0x23da18: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_23da1c:
    // 0x23da1c: 0x46026300  add.s       $f12, $f12, $f2
    ctx->pc = 0x23da1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_23da20:
    // 0x23da20: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x23da20u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
label_23da24:
    // 0x23da24: 0x46036328  max.s       $f12, $f12, $f3
    ctx->pc = 0x23da24u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[3]);
label_23da28:
    // 0x23da28: 0xc136b24  jal         func_4DAC90
label_23da2c:
    if (ctx->pc == 0x23DA2Cu) {
        ctx->pc = 0x23DA30u;
        goto label_23da30;
    }
    ctx->pc = 0x23DA28u;
    SET_GPR_U32(ctx, 31, 0x23DA30u);
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23DA28u, 0x23DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA30u;
label_23da30:
    // 0x23da30: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_23da34:
    // 0x23da34: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23da34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23da38:
    // 0x23da38: 0x8c447198  lw          $a0, 0x7198($v0)
    ctx->pc = 0x23da38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_23da3c:
    // 0x23da3c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23da3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23da40:
    // 0x23da40: 0xc46c02cc  lwc1        $f12, 0x2CC($v1)
    ctx->pc = 0x23da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23da44:
    // 0x23da44: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x23da44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23da48:
    // 0x23da48: 0xc0cf89e  jal         func_33E278
label_23da4c:
    if (ctx->pc == 0x23DA4Cu) {
        ctx->pc = 0x23DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA48u;
        // 0x23da4c: 0x8e0501a0  lw          $a1, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA50u;
        goto label_23da50;
    }
    ctx->pc = 0x23DA48u;
    SET_GPR_U32(ctx, 31, 0x23DA50u);
    ctx->pc = 0x23DA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA48u;
    // 0x23da4c: 0x8e0501a0  lw          $a1, 0x1A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E278u, 0x23DA48u, 0x23DA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA50u;
label_23da50:
    // 0x23da50: 0x10000019  b           . + 4 + (0x19 << 2)
label_23da54:
    if (ctx->pc == 0x23DA54u) {
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA58u;
        goto label_23da58;
    }
    ctx->pc = 0x23DA50u;
    {
        const bool branch_taken_0x23da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA50u;
        // 0x23da54: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da50) {
            ctx->pc = 0x23DAB8u;
            goto label_23dab8;
        }
    }
    ctx->pc = 0x23DA58u;
label_23da58:
    // 0x23da58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23da58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23da5c:
    // 0x23da5c: 0xc136b18  jal         func_4DAC60
label_23da60:
    if (ctx->pc == 0x23DA60u) {
        ctx->pc = 0x23DA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA5Cu;
        // 0x23da60: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA64u;
        goto label_23da64;
    }
    ctx->pc = 0x23DA5Cu;
    SET_GPR_U32(ctx, 31, 0x23DA64u);
    ctx->pc = 0x23DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA5Cu;
    // 0x23da60: 0x260602f0  addiu       $a2, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23DA5Cu, 0x23DA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA64u;
label_23da64:
    // 0x23da64: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x23da64u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23da68:
    // 0x23da68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23da68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23da6c:
    // 0x23da6c: 0xc44c02cc  lwc1        $f12, 0x2CC($v0)
    ctx->pc = 0x23da6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23da70:
    // 0x23da70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23da70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23da74:
    // 0x23da74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23da74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23da78:
    // 0x23da78: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x23da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_23da7c:
    // 0x23da7c: 0xc136b24  jal         func_4DAC90
label_23da80:
    if (ctx->pc == 0x23DA80u) {
        ctx->pc = 0x23DA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA7Cu;
        // 0x23da80: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DA84u;
        goto label_23da84;
    }
    ctx->pc = 0x23DA7Cu;
    SET_GPR_U32(ctx, 31, 0x23DA84u);
    ctx->pc = 0x23DA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA7Cu;
    // 0x23da80: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23DA7Cu, 0x23DA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DA84u;
label_23da84:
    // 0x23da84: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x23da84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23da88:
    // 0x23da88: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23da8c:
    // 0x23da8c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x23da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_23da90:
    // 0x23da90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x23da90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23da94:
    // 0x23da94: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x23da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_23da98:
    // 0x23da98: 0xc136b18  jal         func_4DAC60
label_23da9c:
    if (ctx->pc == 0x23DA9Cu) {
        ctx->pc = 0x23DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DA98u;
        // 0x23da9c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAA0u;
        goto label_23daa0;
    }
    ctx->pc = 0x23DA98u;
    SET_GPR_U32(ctx, 31, 0x23DAA0u);
    ctx->pc = 0x23DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DA98u;
    // 0x23da9c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23DA98u, 0x23DAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAA0u;
label_23daa0:
    // 0x23daa0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x23daa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23daa4:
    // 0x23daa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23daa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23daa8:
    // 0x23daa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23daac:
    // 0x23daac: 0xc086c2e  jal         func_21B0B8
label_23dab0:
    if (ctx->pc == 0x23DAB0u) {
        ctx->pc = 0x23DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAACu;
        // 0x23dab0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAB4u;
        goto label_23dab4;
    }
    ctx->pc = 0x23DAACu;
    SET_GPR_U32(ctx, 31, 0x23DAB4u);
    ctx->pc = 0x23DAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAACu;
    // 0x23dab0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x23DAACu, 0x23DAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAB4u;
label_23dab4:
    // 0x23dab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23dab8:
    // 0x23dab8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x23dab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_23dabc:
    // 0x23dabc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x23dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_23dac0:
    // 0x23dac0: 0x40f809  jalr        $v0
label_23dac4:
    if (ctx->pc == 0x23DAC4u) {
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAC8u;
        goto label_23dac8;
    }
    ctx->pc = 0x23DAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23DAC8u);
        ctx->pc = 0x23DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAC0u;
        // 0x23dac4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DAC0u, 0x23DAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DAC8u;
label_23dac8:
    // 0x23dac8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_23dacc:
    // 0x23dacc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23daccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23dad0:
    // 0x23dad0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_23dad4:
    if (ctx->pc == 0x23DAD4u) {
        ctx->pc = 0x23DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD0u;
        // 0x23dad4: 0x8e0601a0  lw          $a2, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAD8u;
        goto label_23dad8;
    }
    ctx->pc = 0x23DAD0u;
    {
        const bool branch_taken_0x23dad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dad0) {
            ctx->pc = 0x23DAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAD0u;
            // 0x23dad4: 0x8e0601a0  lw          $a2, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB0Cu;
            goto label_23db0c;
        }
    }
    ctx->pc = 0x23DAD8u;
label_23dad8:
    // 0x23dad8: 0xc088f04  jal         func_223C10
label_23dadc:
    if (ctx->pc == 0x23DADCu) {
        ctx->pc = 0x23DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAD8u;
        // 0x23dadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAE0u;
        goto label_23dae0;
    }
    ctx->pc = 0x23DAD8u;
    SET_GPR_U32(ctx, 31, 0x23DAE0u);
    ctx->pc = 0x23DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAD8u;
    // 0x23dadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C10u, 0x23DAD8u, 0x23DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAE0u;
label_23dae0:
    // 0x23dae0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_23dae4:
    if (ctx->pc == 0x23DAE4u) {
        ctx->pc = 0x23DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAE0u;
        // 0x23dae4: 0x8e0601a0  lw          $a2, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAE8u;
        goto label_23dae8;
    }
    ctx->pc = 0x23DAE0u;
    {
        const bool branch_taken_0x23dae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dae0) {
            ctx->pc = 0x23DAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23DAE0u;
            // 0x23dae4: 0x8e0601a0  lw          $a2, 0x1A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23DB0Cu;
            goto label_23db0c;
        }
    }
    ctx->pc = 0x23DAE8u;
label_23dae8:
    // 0x23dae8: 0xc088654  jal         func_221950
label_23daec:
    if (ctx->pc == 0x23DAECu) {
        ctx->pc = 0x23DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAE8u;
        // 0x23daec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAF0u;
        goto label_23daf0;
    }
    ctx->pc = 0x23DAE8u;
    SET_GPR_U32(ctx, 31, 0x23DAF0u);
    ctx->pc = 0x23DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DAE8u;
    // 0x23daec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221950u, 0x23DAE8u, 0x23DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DAF0u;
label_23daf0:
    // 0x23daf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23daf4:
    if (ctx->pc == 0x23DAF4u) {
        ctx->pc = 0x23DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAF0u;
        // 0x23daf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DAF8u;
        goto label_23daf8;
    }
    ctx->pc = 0x23DAF0u;
    {
        const bool branch_taken_0x23daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DAF0u;
        // 0x23daf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23daf0) {
            ctx->pc = 0x23DB08u;
            goto label_23db08;
        }
    }
    ctx->pc = 0x23DAF8u;
label_23daf8:
    // 0x23daf8: 0x8e050280  lw          $a1, 0x280($s0)
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 640)));
label_23dafc:
    // 0x23dafc: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x23dafcu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_23db00:
    // 0x23db00: 0xc08faae  jal         func_23EAB8
label_23db04:
    if (ctx->pc == 0x23DB04u) {
        ctx->pc = 0x23DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB00u;
        // 0x23db04: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB08u;
        goto label_23db08;
    }
    ctx->pc = 0x23DB00u;
    SET_GPR_U32(ctx, 31, 0x23DB08u);
    ctx->pc = 0x23DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB00u;
    // 0x23db04: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EAB8u, 0x23DB00u, 0x23DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB08u;
label_23db08:
    // 0x23db08: 0x8e0601a0  lw          $a2, 0x1A0($s0)
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_23db0c:
    // 0x23db0c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_23db10:
    if (ctx->pc == 0x23DB10u) {
        ctx->pc = 0x23DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB0Cu;
        // 0x23db10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB14u;
        goto label_23db14;
    }
    ctx->pc = 0x23DB0Cu;
    {
        const bool branch_taken_0x23db0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB0Cu;
        // 0x23db10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db0c) {
            ctx->pc = 0x23DB30u;
            goto label_23db30;
        }
    }
    ctx->pc = 0x23DB14u;
label_23db14:
    // 0x23db14: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x23db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_23db18:
    // 0x23db18: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x23db18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_23db1c:
    // 0x23db1c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x23db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_23db20:
    // 0x23db20: 0x60f809  jalr        $v1
label_23db24:
    if (ctx->pc == 0x23DB24u) {
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB28u;
        goto label_23db28;
    }
    ctx->pc = 0x23DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23DB28u);
        ctx->pc = 0x23DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB20u;
        // 0x23db24: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB20u, 0x23DB28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23DB28u;
label_23db28:
    // 0x23db28: 0xc0d0970  jal         func_3425C0
label_23db2c:
    if (ctx->pc == 0x23DB2Cu) {
        ctx->pc = 0x23DB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB28u;
        // 0x23db2c: 0x8e0401a0  lw          $a0, 0x1A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB30u;
        goto label_23db30;
    }
    ctx->pc = 0x23DB28u;
    SET_GPR_U32(ctx, 31, 0x23DB30u);
    ctx->pc = 0x23DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23DB28u;
    // 0x23db2c: 0x8e0401a0  lw          $a0, 0x1A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x23DB28u, 0x23DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DB30u;
label_23db30:
    // 0x23db30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x23db30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23db34:
    // 0x23db34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23db34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23db38:
    // 0x23db38: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23db3c:
    // 0x23db3c: 0x3e00008  jr          $ra
label_23db40:
    if (ctx->pc == 0x23DB40u) {
        ctx->pc = 0x23DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB3Cu;
        // 0x23db40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23DB44u;
        goto label_23db44;
    }
    ctx->pc = 0x23DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DB3Cu;
        // 0x23db40: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DB44u;
label_23db44:
    // 0x23db44: 0x0  nop
    ctx->pc = 0x23db44u;
    // NOP
    ctx->pc = 0x23db48u;
}
