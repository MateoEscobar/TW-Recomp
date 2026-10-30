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

// Function: sub_0021C7C8
// Address: 0x21c7c8 - 0x21cb78
void sub_0021C7C8_0x21c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C7C8_0x21c7c8");
#endif

    switch (ctx->pc) {
        case 0x21c7c8u: goto label_21c7c8;
        case 0x21c7ccu: goto label_21c7cc;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7d4u: goto label_21c7d4;
        case 0x21c7d8u: goto label_21c7d8;
        case 0x21c7dcu: goto label_21c7dc;
        case 0x21c7e0u: goto label_21c7e0;
        case 0x21c7e4u: goto label_21c7e4;
        case 0x21c7e8u: goto label_21c7e8;
        case 0x21c7ecu: goto label_21c7ec;
        case 0x21c7f0u: goto label_21c7f0;
        case 0x21c7f4u: goto label_21c7f4;
        case 0x21c7f8u: goto label_21c7f8;
        case 0x21c7fcu: goto label_21c7fc;
        case 0x21c800u: goto label_21c800;
        case 0x21c804u: goto label_21c804;
        case 0x21c808u: goto label_21c808;
        case 0x21c80cu: goto label_21c80c;
        case 0x21c810u: goto label_21c810;
        case 0x21c814u: goto label_21c814;
        case 0x21c818u: goto label_21c818;
        case 0x21c81cu: goto label_21c81c;
        case 0x21c820u: goto label_21c820;
        case 0x21c824u: goto label_21c824;
        case 0x21c828u: goto label_21c828;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c830u: goto label_21c830;
        case 0x21c834u: goto label_21c834;
        case 0x21c838u: goto label_21c838;
        case 0x21c83cu: goto label_21c83c;
        case 0x21c840u: goto label_21c840;
        case 0x21c844u: goto label_21c844;
        case 0x21c848u: goto label_21c848;
        case 0x21c84cu: goto label_21c84c;
        case 0x21c850u: goto label_21c850;
        case 0x21c854u: goto label_21c854;
        case 0x21c858u: goto label_21c858;
        case 0x21c85cu: goto label_21c85c;
        case 0x21c860u: goto label_21c860;
        case 0x21c864u: goto label_21c864;
        case 0x21c868u: goto label_21c868;
        case 0x21c86cu: goto label_21c86c;
        case 0x21c870u: goto label_21c870;
        case 0x21c874u: goto label_21c874;
        case 0x21c878u: goto label_21c878;
        case 0x21c87cu: goto label_21c87c;
        case 0x21c880u: goto label_21c880;
        case 0x21c884u: goto label_21c884;
        case 0x21c888u: goto label_21c888;
        case 0x21c88cu: goto label_21c88c;
        case 0x21c890u: goto label_21c890;
        case 0x21c894u: goto label_21c894;
        case 0x21c898u: goto label_21c898;
        case 0x21c89cu: goto label_21c89c;
        case 0x21c8a0u: goto label_21c8a0;
        case 0x21c8a4u: goto label_21c8a4;
        case 0x21c8a8u: goto label_21c8a8;
        case 0x21c8acu: goto label_21c8ac;
        case 0x21c8b0u: goto label_21c8b0;
        case 0x21c8b4u: goto label_21c8b4;
        case 0x21c8b8u: goto label_21c8b8;
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8c0u: goto label_21c8c0;
        case 0x21c8c4u: goto label_21c8c4;
        case 0x21c8c8u: goto label_21c8c8;
        case 0x21c8ccu: goto label_21c8cc;
        case 0x21c8d0u: goto label_21c8d0;
        case 0x21c8d4u: goto label_21c8d4;
        case 0x21c8d8u: goto label_21c8d8;
        case 0x21c8dcu: goto label_21c8dc;
        case 0x21c8e0u: goto label_21c8e0;
        case 0x21c8e4u: goto label_21c8e4;
        case 0x21c8e8u: goto label_21c8e8;
        case 0x21c8ecu: goto label_21c8ec;
        case 0x21c8f0u: goto label_21c8f0;
        case 0x21c8f4u: goto label_21c8f4;
        case 0x21c8f8u: goto label_21c8f8;
        case 0x21c8fcu: goto label_21c8fc;
        case 0x21c900u: goto label_21c900;
        case 0x21c904u: goto label_21c904;
        case 0x21c908u: goto label_21c908;
        case 0x21c90cu: goto label_21c90c;
        case 0x21c910u: goto label_21c910;
        case 0x21c914u: goto label_21c914;
        case 0x21c918u: goto label_21c918;
        case 0x21c91cu: goto label_21c91c;
        case 0x21c920u: goto label_21c920;
        case 0x21c924u: goto label_21c924;
        case 0x21c928u: goto label_21c928;
        case 0x21c92cu: goto label_21c92c;
        case 0x21c930u: goto label_21c930;
        case 0x21c934u: goto label_21c934;
        case 0x21c938u: goto label_21c938;
        case 0x21c93cu: goto label_21c93c;
        case 0x21c940u: goto label_21c940;
        case 0x21c944u: goto label_21c944;
        case 0x21c948u: goto label_21c948;
        case 0x21c94cu: goto label_21c94c;
        case 0x21c950u: goto label_21c950;
        case 0x21c954u: goto label_21c954;
        case 0x21c958u: goto label_21c958;
        case 0x21c95cu: goto label_21c95c;
        case 0x21c960u: goto label_21c960;
        case 0x21c964u: goto label_21c964;
        case 0x21c968u: goto label_21c968;
        case 0x21c96cu: goto label_21c96c;
        case 0x21c970u: goto label_21c970;
        case 0x21c974u: goto label_21c974;
        case 0x21c978u: goto label_21c978;
        case 0x21c97cu: goto label_21c97c;
        case 0x21c980u: goto label_21c980;
        case 0x21c984u: goto label_21c984;
        case 0x21c988u: goto label_21c988;
        case 0x21c98cu: goto label_21c98c;
        case 0x21c990u: goto label_21c990;
        case 0x21c994u: goto label_21c994;
        case 0x21c998u: goto label_21c998;
        case 0x21c99cu: goto label_21c99c;
        case 0x21c9a0u: goto label_21c9a0;
        case 0x21c9a4u: goto label_21c9a4;
        case 0x21c9a8u: goto label_21c9a8;
        case 0x21c9acu: goto label_21c9ac;
        case 0x21c9b0u: goto label_21c9b0;
        case 0x21c9b4u: goto label_21c9b4;
        case 0x21c9b8u: goto label_21c9b8;
        case 0x21c9bcu: goto label_21c9bc;
        case 0x21c9c0u: goto label_21c9c0;
        case 0x21c9c4u: goto label_21c9c4;
        case 0x21c9c8u: goto label_21c9c8;
        case 0x21c9ccu: goto label_21c9cc;
        case 0x21c9d0u: goto label_21c9d0;
        case 0x21c9d4u: goto label_21c9d4;
        case 0x21c9d8u: goto label_21c9d8;
        case 0x21c9dcu: goto label_21c9dc;
        case 0x21c9e0u: goto label_21c9e0;
        case 0x21c9e4u: goto label_21c9e4;
        case 0x21c9e8u: goto label_21c9e8;
        case 0x21c9ecu: goto label_21c9ec;
        case 0x21c9f0u: goto label_21c9f0;
        case 0x21c9f4u: goto label_21c9f4;
        case 0x21c9f8u: goto label_21c9f8;
        case 0x21c9fcu: goto label_21c9fc;
        case 0x21ca00u: goto label_21ca00;
        case 0x21ca04u: goto label_21ca04;
        case 0x21ca08u: goto label_21ca08;
        case 0x21ca0cu: goto label_21ca0c;
        case 0x21ca10u: goto label_21ca10;
        case 0x21ca14u: goto label_21ca14;
        case 0x21ca18u: goto label_21ca18;
        case 0x21ca1cu: goto label_21ca1c;
        case 0x21ca20u: goto label_21ca20;
        case 0x21ca24u: goto label_21ca24;
        case 0x21ca28u: goto label_21ca28;
        case 0x21ca2cu: goto label_21ca2c;
        case 0x21ca30u: goto label_21ca30;
        case 0x21ca34u: goto label_21ca34;
        case 0x21ca38u: goto label_21ca38;
        case 0x21ca3cu: goto label_21ca3c;
        case 0x21ca40u: goto label_21ca40;
        case 0x21ca44u: goto label_21ca44;
        case 0x21ca48u: goto label_21ca48;
        case 0x21ca4cu: goto label_21ca4c;
        case 0x21ca50u: goto label_21ca50;
        case 0x21ca54u: goto label_21ca54;
        case 0x21ca58u: goto label_21ca58;
        case 0x21ca5cu: goto label_21ca5c;
        case 0x21ca60u: goto label_21ca60;
        case 0x21ca64u: goto label_21ca64;
        case 0x21ca68u: goto label_21ca68;
        case 0x21ca6cu: goto label_21ca6c;
        case 0x21ca70u: goto label_21ca70;
        case 0x21ca74u: goto label_21ca74;
        case 0x21ca78u: goto label_21ca78;
        case 0x21ca7cu: goto label_21ca7c;
        case 0x21ca80u: goto label_21ca80;
        case 0x21ca84u: goto label_21ca84;
        case 0x21ca88u: goto label_21ca88;
        case 0x21ca8cu: goto label_21ca8c;
        case 0x21ca90u: goto label_21ca90;
        case 0x21ca94u: goto label_21ca94;
        case 0x21ca98u: goto label_21ca98;
        case 0x21ca9cu: goto label_21ca9c;
        case 0x21caa0u: goto label_21caa0;
        case 0x21caa4u: goto label_21caa4;
        case 0x21caa8u: goto label_21caa8;
        case 0x21caacu: goto label_21caac;
        case 0x21cab0u: goto label_21cab0;
        case 0x21cab4u: goto label_21cab4;
        case 0x21cab8u: goto label_21cab8;
        case 0x21cabcu: goto label_21cabc;
        case 0x21cac0u: goto label_21cac0;
        case 0x21cac4u: goto label_21cac4;
        case 0x21cac8u: goto label_21cac8;
        case 0x21caccu: goto label_21cacc;
        case 0x21cad0u: goto label_21cad0;
        case 0x21cad4u: goto label_21cad4;
        case 0x21cad8u: goto label_21cad8;
        case 0x21cadcu: goto label_21cadc;
        case 0x21cae0u: goto label_21cae0;
        case 0x21cae4u: goto label_21cae4;
        case 0x21cae8u: goto label_21cae8;
        case 0x21caecu: goto label_21caec;
        case 0x21caf0u: goto label_21caf0;
        case 0x21caf4u: goto label_21caf4;
        case 0x21caf8u: goto label_21caf8;
        case 0x21cafcu: goto label_21cafc;
        case 0x21cb00u: goto label_21cb00;
        case 0x21cb04u: goto label_21cb04;
        case 0x21cb08u: goto label_21cb08;
        case 0x21cb0cu: goto label_21cb0c;
        case 0x21cb10u: goto label_21cb10;
        case 0x21cb14u: goto label_21cb14;
        case 0x21cb18u: goto label_21cb18;
        case 0x21cb1cu: goto label_21cb1c;
        case 0x21cb20u: goto label_21cb20;
        case 0x21cb24u: goto label_21cb24;
        case 0x21cb28u: goto label_21cb28;
        case 0x21cb2cu: goto label_21cb2c;
        case 0x21cb30u: goto label_21cb30;
        case 0x21cb34u: goto label_21cb34;
        case 0x21cb38u: goto label_21cb38;
        case 0x21cb3cu: goto label_21cb3c;
        case 0x21cb40u: goto label_21cb40;
        case 0x21cb44u: goto label_21cb44;
        case 0x21cb48u: goto label_21cb48;
        case 0x21cb4cu: goto label_21cb4c;
        case 0x21cb50u: goto label_21cb50;
        case 0x21cb54u: goto label_21cb54;
        case 0x21cb58u: goto label_21cb58;
        case 0x21cb5cu: goto label_21cb5c;
        case 0x21cb60u: goto label_21cb60;
        case 0x21cb64u: goto label_21cb64;
        case 0x21cb68u: goto label_21cb68;
        case 0x21cb6cu: goto label_21cb6c;
        case 0x21cb70u: goto label_21cb70;
        case 0x21cb74u: goto label_21cb74;
        default: break;
    }

    ctx->pc = 0x21c7c8u;

label_21c7c8:
    // 0x21c7c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21c7cc:
    // 0x21c7cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_21c7d0:
    // 0x21c7d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21c7d4:
    // 0x21c7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c7d8:
    // 0x21c7d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21c7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_21c7dc:
    // 0x21c7dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21c7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21c7e0:
    // 0x21c7e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_21c7e4:
    // 0x21c7e4: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x21c7e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
label_21c7e8:
    // 0x21c7e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21c7ec:
    // 0x21c7ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21c7f0:
    // 0x21c7f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21c7f4:
    // 0x21c7f4: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x21c7f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_21c7f8:
    // 0x21c7f8: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x21c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_21c7fc:
    // 0x21c7fc: 0x60f809  jalr        $v1
label_21c800:
    if (ctx->pc == 0x21C800u) {
        ctx->pc = 0x21C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7FCu;
        // 0x21c800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C804u;
        goto label_21c804;
    }
    ctx->pc = 0x21C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21C804u);
        ctx->pc = 0x21C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7FCu;
        // 0x21c800: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7FCu, 0x21C804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C804u;
label_21c804:
    // 0x21c804: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21c808:
    // 0x21c808: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21c808u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21c80c:
    // 0x21c80c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_21c810:
    if (ctx->pc == 0x21C810u) {
        ctx->pc = 0x21C810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C80Cu;
        // 0x21c810: 0x8e220168  lw          $v0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C814u;
        goto label_21c814;
    }
    ctx->pc = 0x21C80Cu;
    {
        const bool branch_taken_0x21c80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c80c) {
            ctx->pc = 0x21C810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C80Cu;
            // 0x21c810: 0x8e220168  lw          $v0, 0x168($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C860u;
            goto label_21c860;
        }
    }
    ctx->pc = 0x21C814u;
label_21c814:
    // 0x21c814: 0xc087502  jal         func_21D408
label_21c818:
    if (ctx->pc == 0x21C818u) {
        ctx->pc = 0x21C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C814u;
        // 0x21c818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C81Cu;
        goto label_21c81c;
    }
    ctx->pc = 0x21C814u;
    SET_GPR_U32(ctx, 31, 0x21C81Cu);
    ctx->pc = 0x21C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C814u;
    // 0x21c818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21C814u, 0x21C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C81Cu;
label_21c81c:
    // 0x21c81c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x21c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_21c820:
    // 0x21c820: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21c824:
    // 0x21c824: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_21c828:
    if (ctx->pc == 0x21C828u) {
        ctx->pc = 0x21C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C824u;
        // 0x21c828: 0x8e220168  lw          $v0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C82Cu;
        goto label_21c82c;
    }
    ctx->pc = 0x21C824u;
    {
        const bool branch_taken_0x21c824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c824) {
            ctx->pc = 0x21C828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C824u;
            // 0x21c828: 0x8e220168  lw          $v0, 0x168($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C860u;
            goto label_21c860;
        }
    }
    ctx->pc = 0x21C82Cu;
label_21c82c:
    // 0x21c82c: 0xc089f76  jal         func_227DD8
label_21c830:
    if (ctx->pc == 0x21C830u) {
        ctx->pc = 0x21C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C82Cu;
        // 0x21c830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C834u;
        goto label_21c834;
    }
    ctx->pc = 0x21C82Cu;
    SET_GPR_U32(ctx, 31, 0x21C834u);
    ctx->pc = 0x21C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C82Cu;
    // 0x21c830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x21C82Cu, 0x21C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C834u;
label_21c834:
    // 0x21c834: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_21c838:
    if (ctx->pc == 0x21C838u) {
        ctx->pc = 0x21C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C834u;
        // 0x21c838: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C83Cu;
        goto label_21c83c;
    }
    ctx->pc = 0x21C834u;
    {
        const bool branch_taken_0x21c834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C834u;
        // 0x21c838: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c834) {
            ctx->pc = 0x21C84Cu;
            goto label_21c84c;
        }
    }
    ctx->pc = 0x21C83Cu;
label_21c83c:
    // 0x21c83c: 0xc088edc  jal         func_223B70
label_21c840:
    if (ctx->pc == 0x21C840u) {
        ctx->pc = 0x21C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C83Cu;
        // 0x21c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C844u;
        goto label_21c844;
    }
    ctx->pc = 0x21C83Cu;
    SET_GPR_U32(ctx, 31, 0x21C844u);
    ctx->pc = 0x21C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C83Cu;
    // 0x21c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x21C83Cu, 0x21C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C844u;
label_21c844:
    // 0x21c844: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21c848:
    if (ctx->pc == 0x21C848u) {
        ctx->pc = 0x21C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C844u;
        // 0x21c848: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C84Cu;
        goto label_21c84c;
    }
    ctx->pc = 0x21C844u;
    {
        const bool branch_taken_0x21c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C844u;
        // 0x21c848: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c844) {
            ctx->pc = 0x21C85Cu;
            goto label_21c85c;
        }
    }
    ctx->pc = 0x21C84Cu;
label_21c84c:
    // 0x21c84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c850:
    // 0x21c850: 0xc06ce68  jal         func_1B39A0
label_21c854:
    if (ctx->pc == 0x21C854u) {
        ctx->pc = 0x21C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C850u;
        // 0x21c854: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C858u;
        goto label_21c858;
    }
    ctx->pc = 0x21C850u;
    SET_GPR_U32(ctx, 31, 0x21C858u);
    ctx->pc = 0x21C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C850u;
    // 0x21c854: 0x26040840  addiu       $a0, $s0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B39A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B39A0u, 0x21C850u, 0x21C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C858u;
label_21c858:
    // 0x21c858: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x21c858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c85c:
    // 0x21c85c: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x21c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_21c860:
    // 0x21c860: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21c864:
    // 0x21c864: 0xc043d5e  jal         func_10F578
label_21c868:
    if (ctx->pc == 0x21C868u) {
        ctx->pc = 0x21C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C864u;
        // 0x21c868: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C86Cu;
        goto label_21c86c;
    }
    ctx->pc = 0x21C864u;
    SET_GPR_U32(ctx, 31, 0x21C86Cu);
    ctx->pc = 0x21C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C864u;
    // 0x21c868: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21C864u, 0x21C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C86Cu;
label_21c86c:
    // 0x21c86c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21c870:
    if (ctx->pc == 0x21C870u) {
        ctx->pc = 0x21C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C86Cu;
        // 0x21c870: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C874u;
        goto label_21c874;
    }
    ctx->pc = 0x21C86Cu;
    {
        const bool branch_taken_0x21c86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C86Cu;
        // 0x21c870: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c86c) {
            ctx->pc = 0x21C884u;
            goto label_21c884;
        }
    }
    ctx->pc = 0x21C874u;
label_21c874:
    // 0x21c874: 0x8e250168  lw          $a1, 0x168($s1)
    ctx->pc = 0x21c874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_21c878:
    // 0x21c878: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21c87c:
    // 0x21c87c: 0xc0440c6  jal         func_110318
label_21c880:
    if (ctx->pc == 0x21C880u) {
        ctx->pc = 0x21C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C87Cu;
        // 0x21c880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C884u;
        goto label_21c884;
    }
    ctx->pc = 0x21C87Cu;
    SET_GPR_U32(ctx, 31, 0x21C884u);
    ctx->pc = 0x21C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C87Cu;
    // 0x21c880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21C87Cu, 0x21C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C884u;
label_21c884:
    // 0x21c884: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x21c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_21c888:
    // 0x21c888: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x21c888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_21c88c:
    // 0x21c88c: 0xc043d5e  jal         func_10F578
label_21c890:
    if (ctx->pc == 0x21C890u) {
        ctx->pc = 0x21C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C88Cu;
        // 0x21c890: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C894u;
        goto label_21c894;
    }
    ctx->pc = 0x21C88Cu;
    SET_GPR_U32(ctx, 31, 0x21C894u);
    ctx->pc = 0x21C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C88Cu;
    // 0x21c890: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21C88Cu, 0x21C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C894u;
label_21c894:
    // 0x21c894: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21c898:
    if (ctx->pc == 0x21C898u) {
        ctx->pc = 0x21C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C894u;
        // 0x21c898: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C89Cu;
        goto label_21c89c;
    }
    ctx->pc = 0x21C894u;
    {
        const bool branch_taken_0x21c894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C894u;
        // 0x21c898: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c894) {
            ctx->pc = 0x21C8ACu;
            goto label_21c8ac;
        }
    }
    ctx->pc = 0x21C89Cu;
label_21c89c:
    // 0x21c89c: 0x8e250180  lw          $a1, 0x180($s1)
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
label_21c8a0:
    // 0x21c8a0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21c8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21c8a4:
    // 0x21c8a4: 0xc0440c6  jal         func_110318
label_21c8a8:
    if (ctx->pc == 0x21C8A8u) {
        ctx->pc = 0x21C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8A4u;
        // 0x21c8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8ACu;
        goto label_21c8ac;
    }
    ctx->pc = 0x21C8A4u;
    SET_GPR_U32(ctx, 31, 0x21C8ACu);
    ctx->pc = 0x21C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8A4u;
    // 0x21c8a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21C8A4u, 0x21C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8ACu;
label_21c8ac:
    // 0x21c8ac: 0xc0e4060  jal         func_390180
label_21c8b0:
    if (ctx->pc == 0x21C8B0u) {
        ctx->pc = 0x21C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8ACu;
        // 0x21c8b0: 0x26240364  addiu       $a0, $s1, 0x364 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8B4u;
        goto label_21c8b4;
    }
    ctx->pc = 0x21C8ACu;
    SET_GPR_U32(ctx, 31, 0x21C8B4u);
    ctx->pc = 0x21C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8ACu;
    // 0x21c8b0: 0x26240364  addiu       $a0, $s1, 0x364 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 868));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x21C8ACu, 0x21C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8B4u;
label_21c8b4:
    // 0x21c8b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c8b8:
    // 0x21c8b8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_21c8bc:
    if (ctx->pc == 0x21C8BCu) {
        ctx->pc = 0x21C8C0u;
        goto label_21c8c0;
    }
    ctx->pc = 0x21C8B8u;
    {
        const bool branch_taken_0x21c8b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c8b8) {
            ctx->pc = 0x21C8D4u;
            goto label_21c8d4;
        }
    }
    ctx->pc = 0x21C8C0u;
label_21c8c0:
    // 0x21c8c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21c8c4:
    // 0x21c8c4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x21c8c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_21c8c8:
    // 0x21c8c8: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x21c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_21c8cc:
    // 0x21c8cc: 0x60f809  jalr        $v1
label_21c8d0:
    if (ctx->pc == 0x21C8D0u) {
        ctx->pc = 0x21C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8CCu;
        // 0x21c8d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8D4u;
        goto label_21c8d4;
    }
    ctx->pc = 0x21C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21C8D4u);
        ctx->pc = 0x21C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8CCu;
        // 0x21c8d0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C8CCu, 0x21C8D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C8D4u;
label_21c8d4:
    // 0x21c8d4: 0xc087502  jal         func_21D408
label_21c8d8:
    if (ctx->pc == 0x21C8D8u) {
        ctx->pc = 0x21C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8D4u;
        // 0x21c8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8DCu;
        goto label_21c8dc;
    }
    ctx->pc = 0x21C8D4u;
    SET_GPR_U32(ctx, 31, 0x21C8DCu);
    ctx->pc = 0x21C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8D4u;
    // 0x21c8d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21C8D4u, 0x21C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8DCu;
label_21c8dc:
    // 0x21c8dc: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_21c8e0:
    if (ctx->pc == 0x21C8E0u) {
        ctx->pc = 0x21C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8DCu;
        // 0x21c8e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8E4u;
        goto label_21c8e4;
    }
    ctx->pc = 0x21C8DCu;
    {
        const bool branch_taken_0x21c8dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8DCu;
        // 0x21c8e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8dc) {
            ctx->pc = 0x21C90Cu;
            goto label_21c90c;
        }
    }
    ctx->pc = 0x21C8E4u;
label_21c8e4:
    // 0x21c8e4: 0x8e70020c  lw          $s0, 0x20C($s3)
    ctx->pc = 0x21c8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_21c8e8:
    // 0x21c8e8: 0xc0591f8  jal         func_1647E0
label_21c8ec:
    if (ctx->pc == 0x21C8ECu) {
        ctx->pc = 0x21C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8E8u;
        // 0x21c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8F0u;
        goto label_21c8f0;
    }
    ctx->pc = 0x21C8E8u;
    SET_GPR_U32(ctx, 31, 0x21C8F0u);
    ctx->pc = 0x21C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8E8u;
    // 0x21c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x21C8E8u, 0x21C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8F0u;
label_21c8f0:
    // 0x21c8f0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x21c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_21c8f4:
    // 0x21c8f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_21c8f8:
    if (ctx->pc == 0x21C8F8u) {
        ctx->pc = 0x21C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8F4u;
        // 0x21c8f8: 0xae2005a0  sw          $zero, 0x5A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8FCu;
        goto label_21c8fc;
    }
    ctx->pc = 0x21C8F4u;
    {
        const bool branch_taken_0x21c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c8f4) {
            ctx->pc = 0x21C8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C8F4u;
            // 0x21c8f8: 0xae2005a0  sw          $zero, 0x5A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C908u;
            goto label_21c908;
        }
    }
    ctx->pc = 0x21C8FCu;
label_21c8fc:
    // 0x21c8fc: 0xc059578  jal         func_1655E0
label_21c900:
    if (ctx->pc == 0x21C900u) {
        ctx->pc = 0x21C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8FCu;
        // 0x21c900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C904u;
        goto label_21c904;
    }
    ctx->pc = 0x21C8FCu;
    SET_GPR_U32(ctx, 31, 0x21C904u);
    ctx->pc = 0x21C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8FCu;
    // 0x21c900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1655E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1655E0u, 0x21C8FCu, 0x21C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C904u;
label_21c904:
    // 0x21c904: 0xae2005a0  sw          $zero, 0x5A0($s1)
    ctx->pc = 0x21c904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1440), GPR_U32(ctx, 0));
label_21c908:
    // 0x21c908: 0xae2005a4  sw          $zero, 0x5A4($s1)
    ctx->pc = 0x21c908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1444), GPR_U32(ctx, 0));
label_21c90c:
    // 0x21c90c: 0xc089bfc  jal         func_226FF0
label_21c910:
    if (ctx->pc == 0x21C910u) {
        ctx->pc = 0x21C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C90Cu;
        // 0x21c910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C914u;
        goto label_21c914;
    }
    ctx->pc = 0x21C90Cu;
    SET_GPR_U32(ctx, 31, 0x21C914u);
    ctx->pc = 0x21C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C90Cu;
    // 0x21c910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x21C90Cu, 0x21C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C914u;
label_21c914:
    // 0x21c914: 0xc0e57ce  jal         func_395F38
label_21c918:
    if (ctx->pc == 0x21C918u) {
        ctx->pc = 0x21C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C914u;
        // 0x21c918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C91Cu;
        goto label_21c91c;
    }
    ctx->pc = 0x21C914u;
    SET_GPR_U32(ctx, 31, 0x21C91Cu);
    ctx->pc = 0x21C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C914u;
    // 0x21c918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x21C914u, 0x21C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C91Cu;
label_21c91c:
    // 0x21c91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c920:
    // 0x21c920: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21c924:
    if (ctx->pc == 0x21C924u) {
        ctx->pc = 0x21C928u;
        goto label_21c928;
    }
    ctx->pc = 0x21C920u;
    {
        const bool branch_taken_0x21c920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c920) {
            ctx->pc = 0x21C944u;
            goto label_21c944;
        }
    }
    ctx->pc = 0x21C928u;
label_21c928:
    // 0x21c928: 0xc095fce  jal         func_257F38
label_21c92c:
    if (ctx->pc == 0x21C92Cu) {
        ctx->pc = 0x21C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C928u;
        // 0x21c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C930u;
        goto label_21c930;
    }
    ctx->pc = 0x21C928u;
    SET_GPR_U32(ctx, 31, 0x21C930u);
    ctx->pc = 0x21C92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C928u;
    // 0x21c92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x21C928u, 0x21C930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C930u;
label_21c930:
    // 0x21c930: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x21c930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21c934:
    // 0x21c934: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x21c934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_21c938:
    // 0x21c938: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x21c938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_21c93c:
    // 0x21c93c: 0x60f809  jalr        $v1
label_21c940:
    if (ctx->pc == 0x21C940u) {
        ctx->pc = 0x21C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C93Cu;
        // 0x21c940: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C944u;
        goto label_21c944;
    }
    ctx->pc = 0x21C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21C944u);
        ctx->pc = 0x21C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C93Cu;
        // 0x21c940: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C93Cu, 0x21C944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C944u;
label_21c944:
    // 0x21c944: 0xc093390  jal         func_24CE40
label_21c948:
    if (ctx->pc == 0x21C948u) {
        ctx->pc = 0x21C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C944u;
        // 0x21c948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C94Cu;
        goto label_21c94c;
    }
    ctx->pc = 0x21C944u;
    SET_GPR_U32(ctx, 31, 0x21C94Cu);
    ctx->pc = 0x21C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C944u;
    // 0x21c948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CE40u, 0x21C944u, 0x21C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C94Cu;
label_21c94c:
    // 0x21c94c: 0xc0934d0  jal         func_24D340
label_21c950:
    if (ctx->pc == 0x21C950u) {
        ctx->pc = 0x21C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C94Cu;
        // 0x21c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C954u;
        goto label_21c954;
    }
    ctx->pc = 0x21C94Cu;
    SET_GPR_U32(ctx, 31, 0x21C954u);
    ctx->pc = 0x21C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C94Cu;
    // 0x21c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D340u, 0x21C94Cu, 0x21C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C954u;
label_21c954:
    // 0x21c954: 0xc093290  jal         func_24CA40
label_21c958:
    if (ctx->pc == 0x21C958u) {
        ctx->pc = 0x21C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C954u;
        // 0x21c958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C95Cu;
        goto label_21c95c;
    }
    ctx->pc = 0x21C954u;
    SET_GPR_U32(ctx, 31, 0x21C95Cu);
    ctx->pc = 0x21C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C954u;
    // 0x21c958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA40u, 0x21C954u, 0x21C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C95Cu;
label_21c95c:
    // 0x21c95c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21c960:
    // 0x21c960: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_21c964:
    if (ctx->pc == 0x21C964u) {
        ctx->pc = 0x21C968u;
        goto label_21c968;
    }
    ctx->pc = 0x21C960u;
    {
        const bool branch_taken_0x21c960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c960) {
            ctx->pc = 0x21C9C4u;
            goto label_21c9c4;
        }
    }
    ctx->pc = 0x21C968u;
label_21c968:
    // 0x21c968: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21c968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21c96c:
    // 0x21c96c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x21c96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_21c970:
    // 0x21c970: 0xc08997c  jal         func_2265F0
label_21c974:
    if (ctx->pc == 0x21C974u) {
        ctx->pc = 0x21C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C970u;
        // 0x21c974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C978u;
        goto label_21c978;
    }
    ctx->pc = 0x21C970u;
    SET_GPR_U32(ctx, 31, 0x21C978u);
    ctx->pc = 0x21C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C970u;
    // 0x21c974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x21C970u, 0x21C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C978u;
label_21c978:
    // 0x21c978: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_21c97c:
    if (ctx->pc == 0x21C97Cu) {
        ctx->pc = 0x21C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C978u;
        // 0x21c97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C980u;
        goto label_21c980;
    }
    ctx->pc = 0x21C978u;
    {
        const bool branch_taken_0x21c978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C978u;
        // 0x21c97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c978) {
            ctx->pc = 0x21C9C4u;
            goto label_21c9c4;
        }
    }
    ctx->pc = 0x21C980u;
label_21c980:
    // 0x21c980: 0xc08c0ca  jal         func_230328
label_21c984:
    if (ctx->pc == 0x21C984u) {
        ctx->pc = 0x21C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C980u;
        // 0x21c984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C988u;
        goto label_21c988;
    }
    ctx->pc = 0x21C980u;
    SET_GPR_U32(ctx, 31, 0x21C988u);
    ctx->pc = 0x21C984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C980u;
    // 0x21c984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230328u, 0x21C980u, 0x21C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C988u;
label_21c988:
    // 0x21c988: 0xc08c1d0  jal         func_230740
label_21c98c:
    if (ctx->pc == 0x21C98Cu) {
        ctx->pc = 0x21C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C988u;
        // 0x21c98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C990u;
        goto label_21c990;
    }
    ctx->pc = 0x21C988u;
    SET_GPR_U32(ctx, 31, 0x21C990u);
    ctx->pc = 0x21C98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C988u;
    // 0x21c98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230740u, 0x21C988u, 0x21C990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C990u;
label_21c990:
    // 0x21c990: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x21c990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_21c994:
    // 0x21c994: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x21c994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_21c998:
    // 0x21c998: 0xc089974  jal         func_2265D0
label_21c99c:
    if (ctx->pc == 0x21C99Cu) {
        ctx->pc = 0x21C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C998u;
        // 0x21c99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9A0u;
        goto label_21c9a0;
    }
    ctx->pc = 0x21C998u;
    SET_GPR_U32(ctx, 31, 0x21C9A0u);
    ctx->pc = 0x21C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C998u;
    // 0x21c99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x21C998u, 0x21C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9A0u;
label_21c9a0:
    // 0x21c9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c9a4:
    // 0x21c9a4: 0xc089988  jal         func_226620
label_21c9a8:
    if (ctx->pc == 0x21C9A8u) {
        ctx->pc = 0x21C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9A4u;
        // 0x21c9a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9ACu;
        goto label_21c9ac;
    }
    ctx->pc = 0x21C9A4u;
    SET_GPR_U32(ctx, 31, 0x21C9ACu);
    ctx->pc = 0x21C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9A4u;
    // 0x21c9a8: 0x3c050004  lui         $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x21C9A4u, 0x21C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9ACu;
label_21c9ac:
    // 0x21c9ac: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x21c9acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21c9b0:
    // 0x21c9b0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21c9b4:
    // 0x21c9b4: 0x24425390  addiu       $v0, $v0, 0x5390
    ctx->pc = 0x21c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21392));
label_21c9b8:
    // 0x21c9b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21c9bc:
    // 0x21c9bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21c9c0:
    // 0x21c9c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x21c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_21c9c4:
    // 0x21c9c4: 0xc0e4060  jal         func_390180
label_21c9c8:
    if (ctx->pc == 0x21C9C8u) {
        ctx->pc = 0x21C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9C4u;
        // 0x21c9c8: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9CCu;
        goto label_21c9cc;
    }
    ctx->pc = 0x21C9C4u;
    SET_GPR_U32(ctx, 31, 0x21C9CCu);
    ctx->pc = 0x21C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9C4u;
    // 0x21c9c8: 0x26240360  addiu       $a0, $s1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x21C9C4u, 0x21C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9CCu;
label_21c9cc:
    // 0x21c9cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_21c9d0:
    if (ctx->pc == 0x21C9D0u) {
        ctx->pc = 0x21C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9CCu;
        // 0x21c9d0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9D4u;
        goto label_21c9d4;
    }
    ctx->pc = 0x21C9CCu;
    {
        const bool branch_taken_0x21c9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c9cc) {
            ctx->pc = 0x21C9D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C9CCu;
            // 0x21c9d0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C9E0u;
            goto label_21c9e0;
        }
    }
    ctx->pc = 0x21C9D4u;
label_21c9d4:
    // 0x21c9d4: 0xc089ce2  jal         func_227388
label_21c9d8:
    if (ctx->pc == 0x21C9D8u) {
        ctx->pc = 0x21C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9D4u;
        // 0x21c9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9DCu;
        goto label_21c9dc;
    }
    ctx->pc = 0x21C9D4u;
    SET_GPR_U32(ctx, 31, 0x21C9DCu);
    ctx->pc = 0x21C9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9D4u;
    // 0x21c9d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x21C9D4u, 0x21C9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C9DCu;
label_21c9dc:
    // 0x21c9dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21c9e0:
    // 0x21c9e0: 0x26900840  addiu       $s0, $s4, 0x840
    ctx->pc = 0x21c9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
label_21c9e4:
    // 0x21c9e4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21c9e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21c9e8:
    // 0x21c9e8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21c9ec:
    // 0x21c9ec: 0x40f809  jalr        $v0
label_21c9f0:
    if (ctx->pc == 0x21C9F0u) {
        ctx->pc = 0x21C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9ECu;
        // 0x21c9f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C9F4u;
        goto label_21c9f4;
    }
    ctx->pc = 0x21C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C9F4u);
        ctx->pc = 0x21C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9ECu;
        // 0x21c9f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C9ECu, 0x21C9F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C9F4u;
label_21c9f4:
    // 0x21c9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c9f8:
    // 0x21c9f8: 0x260415d0  addiu       $a0, $s0, 0x15D0
    ctx->pc = 0x21c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
label_21c9fc:
    // 0x21c9fc: 0xc071462  jal         func_1C5188
label_21ca00:
    if (ctx->pc == 0x21CA00u) {
        ctx->pc = 0x21CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C9FCu;
        // 0x21ca00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA04u;
        goto label_21ca04;
    }
    ctx->pc = 0x21C9FCu;
    SET_GPR_U32(ctx, 31, 0x21CA04u);
    ctx->pc = 0x21CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C9FCu;
    // 0x21ca00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x21C9FCu, 0x21CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA04u;
label_21ca04:
    // 0x21ca04: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ca04u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21ca08:
    // 0x21ca08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_21ca0c:
    if (ctx->pc == 0x21CA0Cu) {
        ctx->pc = 0x21CA10u;
        goto label_21ca10;
    }
    ctx->pc = 0x21CA08u;
    {
        const bool branch_taken_0x21ca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ca08) {
            ctx->pc = 0x21CA30u;
            goto label_21ca30;
        }
    }
    ctx->pc = 0x21CA10u;
label_21ca10:
    // 0x21ca10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21ca14:
    // 0x21ca14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21ca14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21ca18:
    // 0x21ca18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21ca1c:
    // 0x21ca1c: 0x40f809  jalr        $v0
label_21ca20:
    if (ctx->pc == 0x21CA20u) {
        ctx->pc = 0x21CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA1Cu;
        // 0x21ca20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA24u;
        goto label_21ca24;
    }
    ctx->pc = 0x21CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CA24u);
        ctx->pc = 0x21CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA1Cu;
        // 0x21ca20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CA1Cu, 0x21CA24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CA24u;
label_21ca24:
    // 0x21ca24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21ca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ca28:
    // 0x21ca28: 0xc06cad6  jal         func_1B2B58
label_21ca2c:
    if (ctx->pc == 0x21CA2Cu) {
        ctx->pc = 0x21CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA28u;
        // 0x21ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA30u;
        goto label_21ca30;
    }
    ctx->pc = 0x21CA28u;
    SET_GPR_U32(ctx, 31, 0x21CA30u);
    ctx->pc = 0x21CA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA28u;
    // 0x21ca2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x21CA28u, 0x21CA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA30u;
label_21ca30:
    // 0x21ca30: 0xc086b6c  jal         func_21ADB0
label_21ca34:
    if (ctx->pc == 0x21CA34u) {
        ctx->pc = 0x21CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA30u;
        // 0x21ca34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA38u;
        goto label_21ca38;
    }
    ctx->pc = 0x21CA30u;
    SET_GPR_U32(ctx, 31, 0x21CA38u);
    ctx->pc = 0x21CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA30u;
    // 0x21ca34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ADB0u, 0x21CA30u, 0x21CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA38u;
label_21ca38:
    // 0x21ca38: 0x86650210  lh          $a1, 0x210($s3)
    ctx->pc = 0x21ca38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 528)));
label_21ca3c:
    // 0x21ca3c: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_21ca40:
    if (ctx->pc == 0x21CA40u) {
        ctx->pc = 0x21CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA3Cu;
        // 0x21ca40: 0x8e64020c  lw          $a0, 0x20C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA44u;
        goto label_21ca44;
    }
    ctx->pc = 0x21CA3Cu;
    {
        const bool branch_taken_0x21ca3c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x21CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA3Cu;
        // 0x21ca40: 0x8e64020c  lw          $a0, 0x20C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca3c) {
            ctx->pc = 0x21CA54u;
            goto label_21ca54;
        }
    }
    ctx->pc = 0x21CA44u;
label_21ca44:
    // 0x21ca44: 0xc059caa  jal         func_1672A8
label_21ca48:
    if (ctx->pc == 0x21CA48u) {
        ctx->pc = 0x21CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA44u;
        // 0x21ca48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA4Cu;
        goto label_21ca4c;
    }
    ctx->pc = 0x21CA44u;
    SET_GPR_U32(ctx, 31, 0x21CA4Cu);
    ctx->pc = 0x21CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA44u;
    // 0x21ca48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672A8u, 0x21CA44u, 0x21CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA4Cu;
label_21ca4c:
    // 0x21ca4c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x21ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_21ca50:
    // 0x21ca50: 0xa6620210  sh          $v0, 0x210($s3)
    ctx->pc = 0x21ca50u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 528), (uint16_t)GPR_U32(ctx, 2));
label_21ca54:
    // 0x21ca54: 0xc085f76  jal         func_217DD8
label_21ca58:
    if (ctx->pc == 0x21CA58u) {
        ctx->pc = 0x21CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA54u;
        // 0x21ca58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA5Cu;
        goto label_21ca5c;
    }
    ctx->pc = 0x21CA54u;
    SET_GPR_U32(ctx, 31, 0x21CA5Cu);
    ctx->pc = 0x21CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA54u;
    // 0x21ca58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217DD8u, 0x21CA54u, 0x21CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA5Cu;
label_21ca5c:
    // 0x21ca5c: 0xc0e1294  jal         func_384A50
label_21ca60:
    if (ctx->pc == 0x21CA60u) {
        ctx->pc = 0x21CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA5Cu;
        // 0x21ca60: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA64u;
        goto label_21ca64;
    }
    ctx->pc = 0x21CA5Cu;
    SET_GPR_U32(ctx, 31, 0x21CA64u);
    ctx->pc = 0x21CA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA5Cu;
    // 0x21ca60: 0x262400e8  addiu       $a0, $s1, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384A50u, 0x21CA5Cu, 0x21CA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA64u;
label_21ca64:
    // 0x21ca64: 0xc0a3e7a  jal         func_28F9E8
label_21ca68:
    if (ctx->pc == 0x21CA68u) {
        ctx->pc = 0x21CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA64u;
        // 0x21ca68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA6Cu;
        goto label_21ca6c;
    }
    ctx->pc = 0x21CA64u;
    SET_GPR_U32(ctx, 31, 0x21CA6Cu);
    ctx->pc = 0x21CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA64u;
    // 0x21ca68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x21CA64u, 0x21CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA6Cu;
label_21ca6c:
    // 0x21ca6c: 0x8e2201a4  lw          $v0, 0x1A4($s1)
    ctx->pc = 0x21ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 420)));
label_21ca70:
    // 0x21ca70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21ca74:
    if (ctx->pc == 0x21CA74u) {
        ctx->pc = 0x21CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA70u;
        // 0x21ca74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA78u;
        goto label_21ca78;
    }
    ctx->pc = 0x21CA70u;
    {
        const bool branch_taken_0x21ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA70u;
        // 0x21ca74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ca70) {
            ctx->pc = 0x21CA88u;
            goto label_21ca88;
        }
    }
    ctx->pc = 0x21CA78u;
label_21ca78:
    // 0x21ca78: 0xc08750a  jal         func_21D428
label_21ca7c:
    if (ctx->pc == 0x21CA7Cu) {
        ctx->pc = 0x21CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA78u;
        // 0x21ca7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA80u;
        goto label_21ca80;
    }
    ctx->pc = 0x21CA78u;
    SET_GPR_U32(ctx, 31, 0x21CA80u);
    ctx->pc = 0x21CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA78u;
    // 0x21ca7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x21CA78u, 0x21CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA80u;
label_21ca80:
    // 0x21ca80: 0xc0a52d8  jal         func_294B60
label_21ca84:
    if (ctx->pc == 0x21CA84u) {
        ctx->pc = 0x21CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA80u;
        // 0x21ca84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA88u;
        goto label_21ca88;
    }
    ctx->pc = 0x21CA80u;
    SET_GPR_U32(ctx, 31, 0x21CA88u);
    ctx->pc = 0x21CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA80u;
    // 0x21ca84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294B60u, 0x21CA80u, 0x21CA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CA88u;
label_21ca88:
    // 0x21ca88: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x21ca88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21ca8c:
    // 0x21ca8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21ca8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_21ca90:
    // 0x21ca90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_21ca94:
    if (ctx->pc == 0x21CA94u) {
        ctx->pc = 0x21CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA90u;
        // 0x21ca94: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CA98u;
        goto label_21ca98;
    }
    ctx->pc = 0x21CA90u;
    {
        const bool branch_taken_0x21ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ca90) {
            ctx->pc = 0x21CA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CA90u;
            // 0x21ca94: 0x8e250380  lw          $a1, 0x380($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CAACu;
            goto label_21caac;
        }
    }
    ctx->pc = 0x21CA98u;
label_21ca98:
    // 0x21ca98: 0xc088ac6  jal         func_222B18
label_21ca9c:
    if (ctx->pc == 0x21CA9Cu) {
        ctx->pc = 0x21CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CA98u;
        // 0x21ca9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAA0u;
        goto label_21caa0;
    }
    ctx->pc = 0x21CA98u;
    SET_GPR_U32(ctx, 31, 0x21CAA0u);
    ctx->pc = 0x21CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CA98u;
    // 0x21ca9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x21CA98u, 0x21CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAA0u;
label_21caa0:
    // 0x21caa0: 0xc10614c  jal         func_418530
label_21caa4:
    if (ctx->pc == 0x21CAA4u) {
        ctx->pc = 0x21CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAA0u;
        // 0x21caa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAA8u;
        goto label_21caa8;
    }
    ctx->pc = 0x21CAA0u;
    SET_GPR_U32(ctx, 31, 0x21CAA8u);
    ctx->pc = 0x21CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAA0u;
    // 0x21caa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418530u, 0x21CAA0u, 0x21CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAA8u;
label_21caa8:
    // 0x21caa8: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x21caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
label_21caac:
    // 0x21caac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21caacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21cab0:
    // 0x21cab0: 0xc06c8bc  jal         func_1B22F0
label_21cab4:
    if (ctx->pc == 0x21CAB4u) {
        ctx->pc = 0x21CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB0u;
        // 0x21cab4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAB8u;
        goto label_21cab8;
    }
    ctx->pc = 0x21CAB0u;
    SET_GPR_U32(ctx, 31, 0x21CAB8u);
    ctx->pc = 0x21CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAB0u;
    // 0x21cab4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B22F0u, 0x21CAB0u, 0x21CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAB8u;
label_21cab8:
    // 0x21cab8: 0x823201b0  lb          $s2, 0x1B0($s1)
    ctx->pc = 0x21cab8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_21cabc:
    // 0x21cabc: 0xae300380  sw          $s0, 0x380($s1)
    ctx->pc = 0x21cabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 16));
label_21cac0:
    // 0x21cac0: 0x1250000f  beq         $s2, $s0, . + 4 + (0xF << 2)
label_21cac4:
    if (ctx->pc == 0x21CAC4u) {
        ctx->pc = 0x21CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC0u;
        // 0x21cac4: 0xa22001b1  sb          $zero, 0x1B1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAC8u;
        goto label_21cac8;
    }
    ctx->pc = 0x21CAC0u;
    {
        const bool branch_taken_0x21cac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x21CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC0u;
        // 0x21cac4: 0xa22001b1  sb          $zero, 0x1B1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cac0) {
            ctx->pc = 0x21CB00u;
            goto label_21cb00;
        }
    }
    ctx->pc = 0x21CAC8u;
label_21cac8:
    // 0x21cac8: 0xc0874fa  jal         func_21D3E8
label_21cacc:
    if (ctx->pc == 0x21CACCu) {
        ctx->pc = 0x21CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAC8u;
        // 0x21cacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CAD0u;
        goto label_21cad0;
    }
    ctx->pc = 0x21CAC8u;
    SET_GPR_U32(ctx, 31, 0x21CAD0u);
    ctx->pc = 0x21CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAC8u;
    // 0x21cacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21CAC8u, 0x21CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAD0u;
label_21cad0:
    // 0x21cad0: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x21cad0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
label_21cad4:
    // 0x21cad4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_21cad8:
    if (ctx->pc == 0x21CAD8u) {
        ctx->pc = 0x21CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD4u;
        // 0x21cad8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CADCu;
        goto label_21cadc;
    }
    ctx->pc = 0x21CAD4u;
    {
        const bool branch_taken_0x21cad4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAD4u;
        // 0x21cad8: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cad4) {
            ctx->pc = 0x21CAF0u;
            goto label_21caf0;
        }
    }
    ctx->pc = 0x21CADCu;
label_21cadc:
    // 0x21cadc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x21cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_21cae0:
    // 0x21cae0: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x21cae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_21cae4:
    // 0x21cae4: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
label_21cae8:
    // 0x21cae8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_21caec:
    // 0x21caec: 0xa4700042  sh          $s0, 0x42($v1)
    ctx->pc = 0x21caecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 16));
label_21caf0:
    // 0x21caf0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21caf4:
    // 0x21caf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21caf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21caf8:
    // 0x21caf8: 0xc10671a  jal         func_419C68
label_21cafc:
    if (ctx->pc == 0x21CAFCu) {
        ctx->pc = 0x21CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAF8u;
        // 0x21cafc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB00u;
        goto label_21cb00;
    }
    ctx->pc = 0x21CAF8u;
    SET_GPR_U32(ctx, 31, 0x21CB00u);
    ctx->pc = 0x21CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAF8u;
    // 0x21cafc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C68u, 0x21CAF8u, 0x21CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB00u;
label_21cb00:
    // 0x21cb00: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21cb04:
    // 0x21cb04: 0x8c44013c  lw          $a0, 0x13C($v0)
    ctx->pc = 0x21cb04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_21cb08:
    // 0x21cb08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_21cb0c:
    if (ctx->pc == 0x21CB0Cu) {
        ctx->pc = 0x21CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB08u;
        // 0x21cb0c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB10u;
        goto label_21cb10;
    }
    ctx->pc = 0x21CB08u;
    {
        const bool branch_taken_0x21cb08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB08u;
        // 0x21cb0c: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb08) {
            ctx->pc = 0x21CB24u;
            goto label_21cb24;
        }
    }
    ctx->pc = 0x21CB10u;
label_21cb10:
    // 0x21cb10: 0x24060bc1  addiu       $a2, $zero, 0xBC1
    ctx->pc = 0x21cb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3009));
label_21cb14:
    // 0x21cb14: 0xc13b54e  jal         func_4ED538
label_21cb18:
    if (ctx->pc == 0x21CB18u) {
        ctx->pc = 0x21CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB14u;
        // 0x21cb18: 0x24a5a940  addiu       $a1, $a1, -0x56C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB1Cu;
        goto label_21cb1c;
    }
    ctx->pc = 0x21CB14u;
    SET_GPR_U32(ctx, 31, 0x21CB1Cu);
    ctx->pc = 0x21CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB14u;
    // 0x21cb18: 0x24a5a940  addiu       $a1, $a1, -0x56C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED538u, 0x21CB14u, 0x21CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB1Cu;
label_21cb1c:
    // 0x21cb1c: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x21cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_21cb20:
    // 0x21cb20: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x21cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
label_21cb24:
    // 0x21cb24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21cb28:
    // 0x21cb28: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x21cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_21cb2c:
    // 0x21cb2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21cb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21cb30:
    // 0x21cb30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21cb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21cb34:
    // 0x21cb34: 0x40f809  jalr        $v0
label_21cb38:
    if (ctx->pc == 0x21CB38u) {
        ctx->pc = 0x21CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB34u;
        // 0x21cb38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB3Cu;
        goto label_21cb3c;
    }
    ctx->pc = 0x21CB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21CB3Cu);
        ctx->pc = 0x21CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB34u;
        // 0x21cb38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CB34u, 0x21CB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21CB3Cu;
label_21cb3c:
    // 0x21cb3c: 0xc0e400e  jal         func_390038
label_21cb40:
    if (ctx->pc == 0x21CB40u) {
        ctx->pc = 0x21CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB3Cu;
        // 0x21cb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB44u;
        goto label_21cb44;
    }
    ctx->pc = 0x21CB3Cu;
    SET_GPR_U32(ctx, 31, 0x21CB44u);
    ctx->pc = 0x21CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB3Cu;
    // 0x21cb40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390038u, 0x21CB3Cu, 0x21CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB44u;
label_21cb44:
    // 0x21cb44: 0xc0873c8  jal         func_21CF20
label_21cb48:
    if (ctx->pc == 0x21CB48u) {
        ctx->pc = 0x21CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB44u;
        // 0x21cb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB4Cu;
        goto label_21cb4c;
    }
    ctx->pc = 0x21CB44u;
    SET_GPR_U32(ctx, 31, 0x21CB4Cu);
    ctx->pc = 0x21CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB44u;
    // 0x21cb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CF20u, 0x21CB44u, 0x21CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB4Cu;
label_21cb4c:
    // 0x21cb4c: 0xc0a3e7a  jal         func_28F9E8
label_21cb50:
    if (ctx->pc == 0x21CB50u) {
        ctx->pc = 0x21CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB4Cu;
        // 0x21cb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB54u;
        goto label_21cb54;
    }
    ctx->pc = 0x21CB4Cu;
    SET_GPR_U32(ctx, 31, 0x21CB54u);
    ctx->pc = 0x21CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB4Cu;
    // 0x21cb50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x21CB4Cu, 0x21CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB54u;
label_21cb54:
    // 0x21cb54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21cb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21cb58:
    // 0x21cb58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21cb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21cb5c:
    // 0x21cb5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21cb5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21cb60:
    // 0x21cb60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21cb60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21cb64:
    // 0x21cb64: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21cb64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21cb68:
    // 0x21cb68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21cb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21cb6c:
    // 0x21cb6c: 0x3e00008  jr          $ra
label_21cb70:
    if (ctx->pc == 0x21CB70u) {
        ctx->pc = 0x21CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB6Cu;
        // 0x21cb70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21CB74u;
        goto label_21cb74;
    }
    ctx->pc = 0x21CB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB6Cu;
        // 0x21cb70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CB74u;
label_21cb74:
    // 0x21cb74: 0x0  nop
    ctx->pc = 0x21cb74u;
    // NOP
    ctx->pc = 0x21cb78u;
}
