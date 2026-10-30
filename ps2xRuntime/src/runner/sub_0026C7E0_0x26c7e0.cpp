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

// Function: sub_0026C7E0
// Address: 0x26c7e0 - 0x26cb20
void sub_0026C7E0_0x26c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C7E0_0x26c7e0");
#endif

    switch (ctx->pc) {
        case 0x26c7e0u: goto label_26c7e0;
        case 0x26c7e4u: goto label_26c7e4;
        case 0x26c7e8u: goto label_26c7e8;
        case 0x26c7ecu: goto label_26c7ec;
        case 0x26c7f0u: goto label_26c7f0;
        case 0x26c7f4u: goto label_26c7f4;
        case 0x26c7f8u: goto label_26c7f8;
        case 0x26c7fcu: goto label_26c7fc;
        case 0x26c800u: goto label_26c800;
        case 0x26c804u: goto label_26c804;
        case 0x26c808u: goto label_26c808;
        case 0x26c80cu: goto label_26c80c;
        case 0x26c810u: goto label_26c810;
        case 0x26c814u: goto label_26c814;
        case 0x26c818u: goto label_26c818;
        case 0x26c81cu: goto label_26c81c;
        case 0x26c820u: goto label_26c820;
        case 0x26c824u: goto label_26c824;
        case 0x26c828u: goto label_26c828;
        case 0x26c82cu: goto label_26c82c;
        case 0x26c830u: goto label_26c830;
        case 0x26c834u: goto label_26c834;
        case 0x26c838u: goto label_26c838;
        case 0x26c83cu: goto label_26c83c;
        case 0x26c840u: goto label_26c840;
        case 0x26c844u: goto label_26c844;
        case 0x26c848u: goto label_26c848;
        case 0x26c84cu: goto label_26c84c;
        case 0x26c850u: goto label_26c850;
        case 0x26c854u: goto label_26c854;
        case 0x26c858u: goto label_26c858;
        case 0x26c85cu: goto label_26c85c;
        case 0x26c860u: goto label_26c860;
        case 0x26c864u: goto label_26c864;
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca0cu: goto label_26ca0c;
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        default: break;
    }

    ctx->pc = 0x26c7e0u;

label_26c7e0:
    // 0x26c7e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26c7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26c7e4:
    // 0x26c7e4: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x26c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_26c7e8:
    // 0x26c7e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26c7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26c7ec:
    // 0x26c7ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26c7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26c7f0:
    // 0x26c7f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26c7f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c7f4:
    // 0x26c7f4: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x26c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_26c7f8:
    // 0x26c7f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26c7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26c7fc:
    // 0x26c7fc: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x26c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_26c800:
    // 0x26c800: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26c800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26c804:
    // 0x26c804: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26c808:
    // 0x26c808: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26c80c:
    // 0x26c80c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26c810:
    // 0x26c810: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26c810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26c814:
    // 0x26c814: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26c814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26c818:
    // 0x26c818: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26c818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26c81c:
    // 0x26c81c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26c820:
    // 0x26c820: 0xc0e409a  jal         func_390268
label_26c824:
    if (ctx->pc == 0x26C824u) {
        ctx->pc = 0x26C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C820u;
        // 0x26c824: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C828u;
        goto label_26c828;
    }
    ctx->pc = 0x26C820u;
    SET_GPR_U32(ctx, 31, 0x26C828u);
    ctx->pc = 0x26C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C820u;
    // 0x26c824: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26C820u, 0x26C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C828u;
label_26c828:
    // 0x26c828: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x26c828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
label_26c82c:
    // 0x26c82c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26c82cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c830:
    // 0x26c830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c834:
    // 0x26c834: 0xc089998  jal         func_226660
label_26c838:
    if (ctx->pc == 0x26C838u) {
        ctx->pc = 0x26C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C834u;
        // 0x26c838: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C83Cu;
        goto label_26c83c;
    }
    ctx->pc = 0x26C834u;
    SET_GPR_U32(ctx, 31, 0x26C83Cu);
    ctx->pc = 0x26C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C834u;
    // 0x26c838: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26C834u, 0x26C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C83Cu;
label_26c83c:
    // 0x26c83c: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_26c840:
    if (ctx->pc == 0x26C840u) {
        ctx->pc = 0x26C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C83Cu;
        // 0x26c840: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C844u;
        goto label_26c844;
    }
    ctx->pc = 0x26C83Cu;
    {
        const bool branch_taken_0x26c83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C83Cu;
        // 0x26c840: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c83c) {
            ctx->pc = 0x26CAF4u;
            goto label_26caf4;
        }
    }
    ctx->pc = 0x26C844u;
label_26c844:
    // 0x26c844: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_26c848:
    if (ctx->pc == 0x26C848u) {
        ctx->pc = 0x26C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C844u;
        // 0x26c848: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C84Cu;
        goto label_26c84c;
    }
    ctx->pc = 0x26C844u;
    {
        const bool branch_taken_0x26c844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C844u;
        // 0x26c848: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c844) {
            ctx->pc = 0x26C860u;
            goto label_26c860;
        }
    }
    ctx->pc = 0x26C84Cu;
label_26c84c:
    // 0x26c84c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26c84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c850:
    // 0x26c850: 0xc089998  jal         func_226660
label_26c854:
    if (ctx->pc == 0x26C854u) {
        ctx->pc = 0x26C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C850u;
        // 0x26c854: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C858u;
        goto label_26c858;
    }
    ctx->pc = 0x26C850u;
    SET_GPR_U32(ctx, 31, 0x26C858u);
    ctx->pc = 0x26C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C850u;
    // 0x26c854: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26C850u, 0x26C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C858u;
label_26c858:
    // 0x26c858: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
label_26c85c:
    if (ctx->pc == 0x26C85Cu) {
        ctx->pc = 0x26C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C858u;
        // 0x26c85c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C860u;
        goto label_26c860;
    }
    ctx->pc = 0x26C858u;
    {
        const bool branch_taken_0x26c858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C858u;
        // 0x26c85c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c858) {
            ctx->pc = 0x26CAF4u;
            goto label_26caf4;
        }
    }
    ctx->pc = 0x26C860u;
label_26c860:
    // 0x26c860: 0xc088e70  jal         func_2239C0
label_26c864:
    if (ctx->pc == 0x26C864u) {
        ctx->pc = 0x26C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C860u;
        // 0x26c864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C868u;
        goto label_26c868;
    }
    ctx->pc = 0x26C860u;
    SET_GPR_U32(ctx, 31, 0x26C868u);
    ctx->pc = 0x26C864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C860u;
    // 0x26c864: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x26C860u, 0x26C868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C868u;
label_26c868:
    // 0x26c868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26c86c:
    if (ctx->pc == 0x26C86Cu) {
        ctx->pc = 0x26C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C868u;
        // 0x26c86c: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C870u;
        goto label_26c870;
    }
    ctx->pc = 0x26C868u;
    {
        const bool branch_taken_0x26c868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C868u;
        // 0x26c86c: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c868) {
            ctx->pc = 0x26C87Cu;
            goto label_26c87c;
        }
    }
    ctx->pc = 0x26C870u;
label_26c870:
    // 0x26c870: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26c870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_26c874:
    // 0x26c874: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x26c874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_26c878:
    // 0x26c878: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26c878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26c87c:
    // 0x26c87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c880:
    // 0x26c880: 0xc08b2c0  jal         func_22CB00
label_26c884:
    if (ctx->pc == 0x26C884u) {
        ctx->pc = 0x26C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C880u;
        // 0x26c884: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C888u;
        goto label_26c888;
    }
    ctx->pc = 0x26C880u;
    SET_GPR_U32(ctx, 31, 0x26C888u);
    ctx->pc = 0x26C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C880u;
    // 0x26c884: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26C880u, 0x26C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C888u;
label_26c888:
    // 0x26c888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26c888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26c88c:
    // 0x26c88c: 0xc0a0152  jal         func_280548
label_26c890:
    if (ctx->pc == 0x26C890u) {
        ctx->pc = 0x26C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C88Cu;
        // 0x26c890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C894u;
        goto label_26c894;
    }
    ctx->pc = 0x26C88Cu;
    SET_GPR_U32(ctx, 31, 0x26C894u);
    ctx->pc = 0x26C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C88Cu;
    // 0x26c890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26C88Cu, 0x26C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C894u;
label_26c894:
    // 0x26c894: 0xc08bf92  jal         func_22FE48
label_26c898:
    if (ctx->pc == 0x26C898u) {
        ctx->pc = 0x26C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C894u;
        // 0x26c898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C89Cu;
        goto label_26c89c;
    }
    ctx->pc = 0x26C894u;
    SET_GPR_U32(ctx, 31, 0x26C89Cu);
    ctx->pc = 0x26C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C894u;
    // 0x26c898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26C894u, 0x26C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C89Cu;
label_26c89c:
    // 0x26c89c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26c8a0:
    // 0x26c8a0: 0x8e3600d8  lw          $s6, 0xD8($s1)
    ctx->pc = 0x26c8a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26c8a4:
    // 0x26c8a4: 0x2457e160  addiu       $s7, $v0, -0x1EA0
    ctx->pc = 0x26c8a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26c8a8:
    // 0x26c8a8: 0xc041532  jal         func_1054C8
label_26c8ac:
    if (ctx->pc == 0x26C8ACu) {
        ctx->pc = 0x26C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8A8u;
        // 0x26c8ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8B0u;
        goto label_26c8b0;
    }
    ctx->pc = 0x26C8A8u;
    SET_GPR_U32(ctx, 31, 0x26C8B0u);
    ctx->pc = 0x26C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8A8u;
    // 0x26c8ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C8A8u, 0x26C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8B0u;
label_26c8b0:
    // 0x26c8b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c8b4:
    // 0x26c8b4: 0xc041532  jal         func_1054C8
label_26c8b8:
    if (ctx->pc == 0x26C8B8u) {
        ctx->pc = 0x26C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8B4u;
        // 0x26c8b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8BCu;
        goto label_26c8bc;
    }
    ctx->pc = 0x26C8B4u;
    SET_GPR_U32(ctx, 31, 0x26C8BCu);
    ctx->pc = 0x26C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8B4u;
    // 0x26c8b8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C8B4u, 0x26C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8BCu;
label_26c8bc:
    // 0x26c8bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26c8bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c8c0:
    // 0x26c8c0: 0xc041532  jal         func_1054C8
label_26c8c4:
    if (ctx->pc == 0x26C8C4u) {
        ctx->pc = 0x26C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C0u;
        // 0x26c8c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8C8u;
        goto label_26c8c8;
    }
    ctx->pc = 0x26C8C0u;
    SET_GPR_U32(ctx, 31, 0x26C8C8u);
    ctx->pc = 0x26C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8C0u;
    // 0x26c8c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C8C0u, 0x26C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8C8u;
label_26c8c8:
    // 0x26c8c8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26c8cc:
    if (ctx->pc == 0x26C8CCu) {
        ctx->pc = 0x26C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C8u;
        // 0x26c8cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8D0u;
        goto label_26c8d0;
    }
    ctx->pc = 0x26C8C8u;
    {
        const bool branch_taken_0x26c8c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C8u;
        // 0x26c8cc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8c8) {
            ctx->pc = 0x26C8F0u;
            goto label_26c8f0;
        }
    }
    ctx->pc = 0x26C8D0u;
label_26c8d0:
    // 0x26c8d0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26c8d4:
    // 0x26c8d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26c8d8:
    // 0x26c8d8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26c8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c8dc:
    // 0x26c8dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c8e0:
    // 0x26c8e0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26c8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26c8e4:
    // 0x26c8e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c8e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c8e8:
    // 0x26c8e8: 0xc04159e  jal         func_105678
label_26c8ec:
    if (ctx->pc == 0x26C8ECu) {
        ctx->pc = 0x26C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8E8u;
        // 0x26c8ec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8F0u;
        goto label_26c8f0;
    }
    ctx->pc = 0x26C8E8u;
    SET_GPR_U32(ctx, 31, 0x26C8F0u);
    ctx->pc = 0x26C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8E8u;
    // 0x26c8ec: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26C8E8u, 0x26C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8F0u;
label_26c8f0:
    // 0x26c8f0: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26c8f4:
    // 0x26c8f4: 0x241e000b  addiu       $fp, $zero, 0xB
    ctx->pc = 0x26c8f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_26c8f8:
    // 0x26c8f8: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
label_26c8fc:
    if (ctx->pc == 0x26C8FCu) {
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F8u;
        // 0x26c8fc: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C900u;
        goto label_26c900;
    }
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F8u;
        // 0x26c8fc: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26C95Cu;
            goto label_26c95c;
        }
    }
    ctx->pc = 0x26C900u;
label_26c900:
    // 0x26c900: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26c900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26c904:
    // 0x26c904: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c908:
    // 0x26c908: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c90c:
    // 0x26c90c: 0x40f809  jalr        $v0
label_26c910:
    if (ctx->pc == 0x26C910u) {
        ctx->pc = 0x26C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C90Cu;
        // 0x26c910: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C914u;
        goto label_26c914;
    }
    ctx->pc = 0x26C90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C914u);
        ctx->pc = 0x26C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C90Cu;
        // 0x26c910: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C90Cu, 0x26C914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C914u;
label_26c914:
    // 0x26c914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26c918:
    // 0x26c918: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c91c:
    // 0x26c91c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26c91cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26c920:
    // 0x26c920: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26c920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26c924:
    // 0x26c924: 0x40f809  jalr        $v0
label_26c928:
    if (ctx->pc == 0x26C928u) {
        ctx->pc = 0x26C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C924u;
        // 0x26c928: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C92Cu;
        goto label_26c92c;
    }
    ctx->pc = 0x26C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26C92Cu);
        ctx->pc = 0x26C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C924u;
        // 0x26c928: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C924u, 0x26C92Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C92Cu;
label_26c92c:
    // 0x26c92c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26c930:
    // 0x26c930: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26c930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26c934:
    // 0x26c934: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26c934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c938:
    // 0x26c938: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26c938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c93c:
    // 0x26c93c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x26c93cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26c940:
    // 0x26c940: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26c940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26c944:
    // 0x26c944: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26c944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c948:
    // 0x26c948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26c948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c94c:
    // 0x26c94c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26c94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26c950:
    // 0x26c950: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26c954:
    // 0x26c954: 0xc04229e  jal         func_108A78
label_26c958:
    if (ctx->pc == 0x26C958u) {
        ctx->pc = 0x26C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C954u;
        // 0x26c958: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C95Cu;
        goto label_26c95c;
    }
    ctx->pc = 0x26C954u;
    SET_GPR_U32(ctx, 31, 0x26C95Cu);
    ctx->pc = 0x26C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C954u;
    // 0x26c958: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26C954u, 0x26C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C95Cu;
label_26c95c:
    // 0x26c95c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26c960:
    if (ctx->pc == 0x26C960u) {
        ctx->pc = 0x26C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C95Cu;
        // 0x26c960: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C964u;
        goto label_26c964;
    }
    ctx->pc = 0x26C95Cu;
    {
        const bool branch_taken_0x26c95c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C95Cu;
        // 0x26c960: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c95c) {
            ctx->pc = 0x26C984u;
            goto label_26c984;
        }
    }
    ctx->pc = 0x26C964u;
label_26c964:
    // 0x26c964: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26c964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26c968:
    // 0x26c968: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26c968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26c96c:
    // 0x26c96c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26c96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26c970:
    // 0x26c970: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26c970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26c974:
    // 0x26c974: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26c974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26c978:
    // 0x26c978: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26c978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c97c:
    // 0x26c97c: 0xc041b20  jal         func_106C80
label_26c980:
    if (ctx->pc == 0x26C980u) {
        ctx->pc = 0x26C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C97Cu;
        // 0x26c980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C984u;
        goto label_26c984;
    }
    ctx->pc = 0x26C97Cu;
    SET_GPR_U32(ctx, 31, 0x26C984u);
    ctx->pc = 0x26C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C97Cu;
    // 0x26c980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26C97Cu, 0x26C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C984u;
label_26c984:
    // 0x26c984: 0xc05d484  jal         func_175210
label_26c988:
    if (ctx->pc == 0x26C988u) {
        ctx->pc = 0x26C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C984u;
        // 0x26c988: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C98Cu;
        goto label_26c98c;
    }
    ctx->pc = 0x26C984u;
    SET_GPR_U32(ctx, 31, 0x26C98Cu);
    ctx->pc = 0x26C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C984u;
    // 0x26c988: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26C984u, 0x26C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C98Cu;
label_26c98c:
    // 0x26c98c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c990:
    // 0x26c990: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26c990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26c994:
    // 0x26c994: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26c998:
    // 0x26c998: 0xa0f809  jalr        $a1
label_26c99c:
    if (ctx->pc == 0x26C99Cu) {
        ctx->pc = 0x26C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C998u;
        // 0x26c99c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9A0u;
        goto label_26c9a0;
    }
    ctx->pc = 0x26C998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26C9A0u);
        ctx->pc = 0x26C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C998u;
        // 0x26c99c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C998u, 0x26C9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26C9A0u;
label_26c9a0:
    // 0x26c9a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c9a4:
    // 0x26c9a4: 0xc087016  jal         func_21C058
label_26c9a8:
    if (ctx->pc == 0x26C9A8u) {
        ctx->pc = 0x26C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9A4u;
        // 0x26c9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9ACu;
        goto label_26c9ac;
    }
    ctx->pc = 0x26C9A4u;
    SET_GPR_U32(ctx, 31, 0x26C9ACu);
    ctx->pc = 0x26C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9A4u;
    // 0x26c9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26C9A4u, 0x26C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9ACu;
label_26c9ac:
    // 0x26c9ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26c9b0:
    // 0x26c9b0: 0xc05d53a  jal         func_1754E8
label_26c9b4:
    if (ctx->pc == 0x26C9B4u) {
        ctx->pc = 0x26C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9B0u;
        // 0x26c9b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9B8u;
        goto label_26c9b8;
    }
    ctx->pc = 0x26C9B0u;
    SET_GPR_U32(ctx, 31, 0x26C9B8u);
    ctx->pc = 0x26C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9B0u;
    // 0x26c9b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26C9B0u, 0x26C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9B8u;
label_26c9b8:
    // 0x26c9b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26c9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26c9bc:
    // 0x26c9bc: 0xc05d4f6  jal         func_1753D8
label_26c9c0:
    if (ctx->pc == 0x26C9C0u) {
        ctx->pc = 0x26C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9BCu;
        // 0x26c9c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9C4u;
        goto label_26c9c4;
    }
    ctx->pc = 0x26C9BCu;
    SET_GPR_U32(ctx, 31, 0x26C9C4u);
    ctx->pc = 0x26C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9BCu;
    // 0x26c9c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26C9BCu, 0x26C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9C4u;
label_26c9c4:
    // 0x26c9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26c9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c9c8:
    // 0x26c9c8: 0xc089990  jal         func_226640
label_26c9cc:
    if (ctx->pc == 0x26C9CCu) {
        ctx->pc = 0x26C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9C8u;
        // 0x26c9cc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9D0u;
        goto label_26c9d0;
    }
    ctx->pc = 0x26C9C8u;
    SET_GPR_U32(ctx, 31, 0x26C9D0u);
    ctx->pc = 0x26C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9C8u;
    // 0x26c9cc: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26C9C8u, 0x26C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9D0u;
label_26c9d0:
    // 0x26c9d0: 0x12600048  beqz        $s3, . + 4 + (0x48 << 2)
label_26c9d4:
    if (ctx->pc == 0x26C9D4u) {
        ctx->pc = 0x26C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D0u;
        // 0x26c9d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9D8u;
        goto label_26c9d8;
    }
    ctx->pc = 0x26C9D0u;
    {
        const bool branch_taken_0x26c9d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D0u;
        // 0x26c9d4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9d0) {
            ctx->pc = 0x26CAF4u;
            goto label_26caf4;
        }
    }
    ctx->pc = 0x26C9D8u;
label_26c9d8:
    // 0x26c9d8: 0xc08bf92  jal         func_22FE48
label_26c9dc:
    if (ctx->pc == 0x26C9DCu) {
        ctx->pc = 0x26C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9D8u;
        // 0x26c9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9E0u;
        goto label_26c9e0;
    }
    ctx->pc = 0x26C9D8u;
    SET_GPR_U32(ctx, 31, 0x26C9E0u);
    ctx->pc = 0x26C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9D8u;
    // 0x26c9dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x26C9D8u, 0x26C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9E0u;
label_26c9e0:
    // 0x26c9e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c9e4:
    // 0x26c9e4: 0xc041532  jal         func_1054C8
label_26c9e8:
    if (ctx->pc == 0x26C9E8u) {
        ctx->pc = 0x26C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9E4u;
        // 0x26c9e8: 0x8e7600d8  lw          $s6, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9ECu;
        goto label_26c9ec;
    }
    ctx->pc = 0x26C9E4u;
    SET_GPR_U32(ctx, 31, 0x26C9ECu);
    ctx->pc = 0x26C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9E4u;
    // 0x26c9e8: 0x8e7600d8  lw          $s6, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C9E4u, 0x26C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9ECu;
label_26c9ec:
    // 0x26c9ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26c9f0:
    // 0x26c9f0: 0xc041532  jal         func_1054C8
label_26c9f4:
    if (ctx->pc == 0x26C9F4u) {
        ctx->pc = 0x26C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9F0u;
        // 0x26c9f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9F8u;
        goto label_26c9f8;
    }
    ctx->pc = 0x26C9F0u;
    SET_GPR_U32(ctx, 31, 0x26C9F8u);
    ctx->pc = 0x26C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9F0u;
    // 0x26c9f4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C9F0u, 0x26C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9F8u;
label_26c9f8:
    // 0x26c9f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26c9f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c9fc:
    // 0x26c9fc: 0xc041532  jal         func_1054C8
label_26ca00:
    if (ctx->pc == 0x26CA00u) {
        ctx->pc = 0x26CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9FCu;
        // 0x26ca00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA04u;
        goto label_26ca04;
    }
    ctx->pc = 0x26C9FCu;
    SET_GPR_U32(ctx, 31, 0x26CA04u);
    ctx->pc = 0x26CA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9FCu;
    // 0x26ca00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26C9FCu, 0x26CA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA04u;
label_26ca04:
    // 0x26ca04: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_26ca08:
    if (ctx->pc == 0x26CA08u) {
        ctx->pc = 0x26CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA04u;
        // 0x26ca08: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA0Cu;
        goto label_26ca0c;
    }
    ctx->pc = 0x26CA04u;
    {
        const bool branch_taken_0x26ca04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA04u;
        // 0x26ca08: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca04) {
            ctx->pc = 0x26CA30u;
            goto label_26ca30;
        }
    }
    ctx->pc = 0x26CA0Cu;
label_26ca0c:
    // 0x26ca0c: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26ca10:
    // 0x26ca10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26ca14:
    // 0x26ca14: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ca14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ca18:
    // 0x26ca18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ca1c:
    // 0x26ca1c: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26ca1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26ca20:
    // 0x26ca20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26ca20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ca24:
    // 0x26ca24: 0xc04159e  jal         func_105678
label_26ca28:
    if (ctx->pc == 0x26CA28u) {
        ctx->pc = 0x26CA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA24u;
        // 0x26ca28: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA2Cu;
        goto label_26ca2c;
    }
    ctx->pc = 0x26CA24u;
    SET_GPR_U32(ctx, 31, 0x26CA2Cu);
    ctx->pc = 0x26CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA24u;
    // 0x26ca28: 0x8e6500d8  lw          $a1, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26CA24u, 0x26CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA2Cu;
label_26ca2c:
    // 0x26ca2c: 0x0  nop
    ctx->pc = 0x26ca2cu;
    // NOP
label_26ca30:
    // 0x26ca30: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26ca34:
    // 0x26ca34: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_26ca38:
    if (ctx->pc == 0x26CA38u) {
        ctx->pc = 0x26CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA34u;
        // 0x26ca38: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA3Cu;
        goto label_26ca3c;
    }
    ctx->pc = 0x26CA34u;
    {
        const bool branch_taken_0x26ca34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA34u;
        // 0x26ca38: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca34) {
            ctx->pc = 0x26CA7Cu;
            goto label_26ca7c;
        }
    }
    ctx->pc = 0x26CA3Cu;
label_26ca3c:
    // 0x26ca3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26ca3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26ca40:
    // 0x26ca40: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26ca40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26ca44:
    // 0x26ca44: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26ca48:
    // 0x26ca48: 0x40f809  jalr        $v0
label_26ca4c:
    if (ctx->pc == 0x26CA4Cu) {
        ctx->pc = 0x26CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA48u;
        // 0x26ca4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA50u;
        goto label_26ca50;
    }
    ctx->pc = 0x26CA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CA50u);
        ctx->pc = 0x26CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA48u;
        // 0x26ca4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CA48u, 0x26CA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CA50u;
label_26ca50:
    // 0x26ca50: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_26ca54:
    // 0x26ca54: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x26ca54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26ca58:
    // 0x26ca58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ca58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ca5c:
    // 0x26ca5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26ca5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26ca60:
    // 0x26ca60: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x26ca60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26ca64:
    // 0x26ca64: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26ca64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26ca68:
    // 0x26ca68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26ca6c:
    // 0x26ca6c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26ca70:
    // 0x26ca70: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x26ca70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26ca74:
    // 0x26ca74: 0xc041664  jal         func_105990
label_26ca78:
    if (ctx->pc == 0x26CA78u) {
        ctx->pc = 0x26CA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA74u;
        // 0x26ca78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA7Cu;
        goto label_26ca7c;
    }
    ctx->pc = 0x26CA74u;
    SET_GPR_U32(ctx, 31, 0x26CA7Cu);
    ctx->pc = 0x26CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA74u;
    // 0x26ca78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26CA74u, 0x26CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA7Cu;
label_26ca7c:
    // 0x26ca7c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26ca80:
    if (ctx->pc == 0x26CA80u) {
        ctx->pc = 0x26CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA7Cu;
        // 0x26ca80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA84u;
        goto label_26ca84;
    }
    ctx->pc = 0x26CA7Cu;
    {
        const bool branch_taken_0x26ca7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA7Cu;
        // 0x26ca80: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca7c) {
            ctx->pc = 0x26CAA4u;
            goto label_26caa4;
        }
    }
    ctx->pc = 0x26CA84u;
label_26ca84:
    // 0x26ca84: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26ca84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26ca88:
    // 0x26ca88: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26ca88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26ca8c:
    // 0x26ca8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26ca8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26ca90:
    // 0x26ca90: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26ca94:
    // 0x26ca94: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26ca94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26ca98:
    // 0x26ca98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26ca98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26ca9c:
    // 0x26ca9c: 0xc041b20  jal         func_106C80
label_26caa0:
    if (ctx->pc == 0x26CAA0u) {
        ctx->pc = 0x26CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA9Cu;
        // 0x26caa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAA4u;
        goto label_26caa4;
    }
    ctx->pc = 0x26CA9Cu;
    SET_GPR_U32(ctx, 31, 0x26CAA4u);
    ctx->pc = 0x26CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA9Cu;
    // 0x26caa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26CA9Cu, 0x26CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAA4u;
label_26caa4:
    // 0x26caa4: 0xc05d484  jal         func_175210
label_26caa8:
    if (ctx->pc == 0x26CAA8u) {
        ctx->pc = 0x26CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAA4u;
        // 0x26caa8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAACu;
        goto label_26caac;
    }
    ctx->pc = 0x26CAA4u;
    SET_GPR_U32(ctx, 31, 0x26CAACu);
    ctx->pc = 0x26CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAA4u;
    // 0x26caa8: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26CAA4u, 0x26CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAACu;
label_26caac:
    // 0x26caac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26caacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26cab0:
    // 0x26cab0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26cab0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26cab4:
    // 0x26cab4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26cab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26cab8:
    // 0x26cab8: 0xa0f809  jalr        $a1
label_26cabc:
    if (ctx->pc == 0x26CABCu) {
        ctx->pc = 0x26CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB8u;
        // 0x26cabc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAC0u;
        goto label_26cac0;
    }
    ctx->pc = 0x26CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26CAC0u);
        ctx->pc = 0x26CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB8u;
        // 0x26cabc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CAB8u, 0x26CAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CAC0u;
label_26cac0:
    // 0x26cac0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cac4:
    // 0x26cac4: 0xc087016  jal         func_21C058
label_26cac8:
    if (ctx->pc == 0x26CAC8u) {
        ctx->pc = 0x26CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAC4u;
        // 0x26cac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CACCu;
        goto label_26cacc;
    }
    ctx->pc = 0x26CAC4u;
    SET_GPR_U32(ctx, 31, 0x26CACCu);
    ctx->pc = 0x26CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAC4u;
    // 0x26cac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26CAC4u, 0x26CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CACCu;
label_26cacc:
    // 0x26cacc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26caccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26cad0:
    // 0x26cad0: 0xc05d53a  jal         func_1754E8
label_26cad4:
    if (ctx->pc == 0x26CAD4u) {
        ctx->pc = 0x26CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD0u;
        // 0x26cad4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAD8u;
        goto label_26cad8;
    }
    ctx->pc = 0x26CAD0u;
    SET_GPR_U32(ctx, 31, 0x26CAD8u);
    ctx->pc = 0x26CAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAD0u;
    // 0x26cad4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26CAD0u, 0x26CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAD8u;
label_26cad8:
    // 0x26cad8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26cad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26cadc:
    // 0x26cadc: 0xc05d4f6  jal         func_1753D8
label_26cae0:
    if (ctx->pc == 0x26CAE0u) {
        ctx->pc = 0x26CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CADCu;
        // 0x26cae0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAE4u;
        goto label_26cae4;
    }
    ctx->pc = 0x26CADCu;
    SET_GPR_U32(ctx, 31, 0x26CAE4u);
    ctx->pc = 0x26CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CADCu;
    // 0x26cae0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26CADCu, 0x26CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAE4u;
label_26cae4:
    // 0x26cae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26cae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26cae8:
    // 0x26cae8: 0xc089990  jal         func_226640
label_26caec:
    if (ctx->pc == 0x26CAECu) {
        ctx->pc = 0x26CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAE8u;
        // 0x26caec: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAF0u;
        goto label_26caf0;
    }
    ctx->pc = 0x26CAE8u;
    SET_GPR_U32(ctx, 31, 0x26CAF0u);
    ctx->pc = 0x26CAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAE8u;
    // 0x26caec: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26CAE8u, 0x26CAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAF0u;
label_26caf0:
    // 0x26caf0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26caf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26caf4:
    // 0x26caf4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26caf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26caf8:
    // 0x26caf8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26caf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26cafc:
    // 0x26cafc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26cafcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26cb00:
    // 0x26cb00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26cb00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26cb04:
    // 0x26cb04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26cb04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26cb08:
    // 0x26cb08: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26cb08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26cb0c:
    // 0x26cb0c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26cb0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26cb10:
    // 0x26cb10: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26cb10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26cb14:
    // 0x26cb14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26cb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26cb18:
    // 0x26cb18: 0x3e00008  jr          $ra
label_26cb1c:
    if (ctx->pc == 0x26CB1Cu) {
        ctx->pc = 0x26CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB18u;
        // 0x26cb1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB20u;
        goto label_fallthrough_0x26cb18;
    }
    ctx->pc = 0x26CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB18u;
        // 0x26cb1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26cb18:
    ctx->pc = 0x26CB20u;
}
