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

// Function: sub_003E4838
// Address: 0x3e4838 - 0x3e4be0
void sub_003E4838_0x3e4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4838_0x3e4838");
#endif

    switch (ctx->pc) {
        case 0x3e4838u: goto label_3e4838;
        case 0x3e483cu: goto label_3e483c;
        case 0x3e4840u: goto label_3e4840;
        case 0x3e4844u: goto label_3e4844;
        case 0x3e4848u: goto label_3e4848;
        case 0x3e484cu: goto label_3e484c;
        case 0x3e4850u: goto label_3e4850;
        case 0x3e4854u: goto label_3e4854;
        case 0x3e4858u: goto label_3e4858;
        case 0x3e485cu: goto label_3e485c;
        case 0x3e4860u: goto label_3e4860;
        case 0x3e4864u: goto label_3e4864;
        case 0x3e4868u: goto label_3e4868;
        case 0x3e486cu: goto label_3e486c;
        case 0x3e4870u: goto label_3e4870;
        case 0x3e4874u: goto label_3e4874;
        case 0x3e4878u: goto label_3e4878;
        case 0x3e487cu: goto label_3e487c;
        case 0x3e4880u: goto label_3e4880;
        case 0x3e4884u: goto label_3e4884;
        case 0x3e4888u: goto label_3e4888;
        case 0x3e488cu: goto label_3e488c;
        case 0x3e4890u: goto label_3e4890;
        case 0x3e4894u: goto label_3e4894;
        case 0x3e4898u: goto label_3e4898;
        case 0x3e489cu: goto label_3e489c;
        case 0x3e48a0u: goto label_3e48a0;
        case 0x3e48a4u: goto label_3e48a4;
        case 0x3e48a8u: goto label_3e48a8;
        case 0x3e48acu: goto label_3e48ac;
        case 0x3e48b0u: goto label_3e48b0;
        case 0x3e48b4u: goto label_3e48b4;
        case 0x3e48b8u: goto label_3e48b8;
        case 0x3e48bcu: goto label_3e48bc;
        case 0x3e48c0u: goto label_3e48c0;
        case 0x3e48c4u: goto label_3e48c4;
        case 0x3e48c8u: goto label_3e48c8;
        case 0x3e48ccu: goto label_3e48cc;
        case 0x3e48d0u: goto label_3e48d0;
        case 0x3e48d4u: goto label_3e48d4;
        case 0x3e48d8u: goto label_3e48d8;
        case 0x3e48dcu: goto label_3e48dc;
        case 0x3e48e0u: goto label_3e48e0;
        case 0x3e48e4u: goto label_3e48e4;
        case 0x3e48e8u: goto label_3e48e8;
        case 0x3e48ecu: goto label_3e48ec;
        case 0x3e48f0u: goto label_3e48f0;
        case 0x3e48f4u: goto label_3e48f4;
        case 0x3e48f8u: goto label_3e48f8;
        case 0x3e48fcu: goto label_3e48fc;
        case 0x3e4900u: goto label_3e4900;
        case 0x3e4904u: goto label_3e4904;
        case 0x3e4908u: goto label_3e4908;
        case 0x3e490cu: goto label_3e490c;
        case 0x3e4910u: goto label_3e4910;
        case 0x3e4914u: goto label_3e4914;
        case 0x3e4918u: goto label_3e4918;
        case 0x3e491cu: goto label_3e491c;
        case 0x3e4920u: goto label_3e4920;
        case 0x3e4924u: goto label_3e4924;
        case 0x3e4928u: goto label_3e4928;
        case 0x3e492cu: goto label_3e492c;
        case 0x3e4930u: goto label_3e4930;
        case 0x3e4934u: goto label_3e4934;
        case 0x3e4938u: goto label_3e4938;
        case 0x3e493cu: goto label_3e493c;
        case 0x3e4940u: goto label_3e4940;
        case 0x3e4944u: goto label_3e4944;
        case 0x3e4948u: goto label_3e4948;
        case 0x3e494cu: goto label_3e494c;
        case 0x3e4950u: goto label_3e4950;
        case 0x3e4954u: goto label_3e4954;
        case 0x3e4958u: goto label_3e4958;
        case 0x3e495cu: goto label_3e495c;
        case 0x3e4960u: goto label_3e4960;
        case 0x3e4964u: goto label_3e4964;
        case 0x3e4968u: goto label_3e4968;
        case 0x3e496cu: goto label_3e496c;
        case 0x3e4970u: goto label_3e4970;
        case 0x3e4974u: goto label_3e4974;
        case 0x3e4978u: goto label_3e4978;
        case 0x3e497cu: goto label_3e497c;
        case 0x3e4980u: goto label_3e4980;
        case 0x3e4984u: goto label_3e4984;
        case 0x3e4988u: goto label_3e4988;
        case 0x3e498cu: goto label_3e498c;
        case 0x3e4990u: goto label_3e4990;
        case 0x3e4994u: goto label_3e4994;
        case 0x3e4998u: goto label_3e4998;
        case 0x3e499cu: goto label_3e499c;
        case 0x3e49a0u: goto label_3e49a0;
        case 0x3e49a4u: goto label_3e49a4;
        case 0x3e49a8u: goto label_3e49a8;
        case 0x3e49acu: goto label_3e49ac;
        case 0x3e49b0u: goto label_3e49b0;
        case 0x3e49b4u: goto label_3e49b4;
        case 0x3e49b8u: goto label_3e49b8;
        case 0x3e49bcu: goto label_3e49bc;
        case 0x3e49c0u: goto label_3e49c0;
        case 0x3e49c4u: goto label_3e49c4;
        case 0x3e49c8u: goto label_3e49c8;
        case 0x3e49ccu: goto label_3e49cc;
        case 0x3e49d0u: goto label_3e49d0;
        case 0x3e49d4u: goto label_3e49d4;
        case 0x3e49d8u: goto label_3e49d8;
        case 0x3e49dcu: goto label_3e49dc;
        case 0x3e49e0u: goto label_3e49e0;
        case 0x3e49e4u: goto label_3e49e4;
        case 0x3e49e8u: goto label_3e49e8;
        case 0x3e49ecu: goto label_3e49ec;
        case 0x3e49f0u: goto label_3e49f0;
        case 0x3e49f4u: goto label_3e49f4;
        case 0x3e49f8u: goto label_3e49f8;
        case 0x3e49fcu: goto label_3e49fc;
        case 0x3e4a00u: goto label_3e4a00;
        case 0x3e4a04u: goto label_3e4a04;
        case 0x3e4a08u: goto label_3e4a08;
        case 0x3e4a0cu: goto label_3e4a0c;
        case 0x3e4a10u: goto label_3e4a10;
        case 0x3e4a14u: goto label_3e4a14;
        case 0x3e4a18u: goto label_3e4a18;
        case 0x3e4a1cu: goto label_3e4a1c;
        case 0x3e4a20u: goto label_3e4a20;
        case 0x3e4a24u: goto label_3e4a24;
        case 0x3e4a28u: goto label_3e4a28;
        case 0x3e4a2cu: goto label_3e4a2c;
        case 0x3e4a30u: goto label_3e4a30;
        case 0x3e4a34u: goto label_3e4a34;
        case 0x3e4a38u: goto label_3e4a38;
        case 0x3e4a3cu: goto label_3e4a3c;
        case 0x3e4a40u: goto label_3e4a40;
        case 0x3e4a44u: goto label_3e4a44;
        case 0x3e4a48u: goto label_3e4a48;
        case 0x3e4a4cu: goto label_3e4a4c;
        case 0x3e4a50u: goto label_3e4a50;
        case 0x3e4a54u: goto label_3e4a54;
        case 0x3e4a58u: goto label_3e4a58;
        case 0x3e4a5cu: goto label_3e4a5c;
        case 0x3e4a60u: goto label_3e4a60;
        case 0x3e4a64u: goto label_3e4a64;
        case 0x3e4a68u: goto label_3e4a68;
        case 0x3e4a6cu: goto label_3e4a6c;
        case 0x3e4a70u: goto label_3e4a70;
        case 0x3e4a74u: goto label_3e4a74;
        case 0x3e4a78u: goto label_3e4a78;
        case 0x3e4a7cu: goto label_3e4a7c;
        case 0x3e4a80u: goto label_3e4a80;
        case 0x3e4a84u: goto label_3e4a84;
        case 0x3e4a88u: goto label_3e4a88;
        case 0x3e4a8cu: goto label_3e4a8c;
        case 0x3e4a90u: goto label_3e4a90;
        case 0x3e4a94u: goto label_3e4a94;
        case 0x3e4a98u: goto label_3e4a98;
        case 0x3e4a9cu: goto label_3e4a9c;
        case 0x3e4aa0u: goto label_3e4aa0;
        case 0x3e4aa4u: goto label_3e4aa4;
        case 0x3e4aa8u: goto label_3e4aa8;
        case 0x3e4aacu: goto label_3e4aac;
        case 0x3e4ab0u: goto label_3e4ab0;
        case 0x3e4ab4u: goto label_3e4ab4;
        case 0x3e4ab8u: goto label_3e4ab8;
        case 0x3e4abcu: goto label_3e4abc;
        case 0x3e4ac0u: goto label_3e4ac0;
        case 0x3e4ac4u: goto label_3e4ac4;
        case 0x3e4ac8u: goto label_3e4ac8;
        case 0x3e4accu: goto label_3e4acc;
        case 0x3e4ad0u: goto label_3e4ad0;
        case 0x3e4ad4u: goto label_3e4ad4;
        case 0x3e4ad8u: goto label_3e4ad8;
        case 0x3e4adcu: goto label_3e4adc;
        case 0x3e4ae0u: goto label_3e4ae0;
        case 0x3e4ae4u: goto label_3e4ae4;
        case 0x3e4ae8u: goto label_3e4ae8;
        case 0x3e4aecu: goto label_3e4aec;
        case 0x3e4af0u: goto label_3e4af0;
        case 0x3e4af4u: goto label_3e4af4;
        case 0x3e4af8u: goto label_3e4af8;
        case 0x3e4afcu: goto label_3e4afc;
        case 0x3e4b00u: goto label_3e4b00;
        case 0x3e4b04u: goto label_3e4b04;
        case 0x3e4b08u: goto label_3e4b08;
        case 0x3e4b0cu: goto label_3e4b0c;
        case 0x3e4b10u: goto label_3e4b10;
        case 0x3e4b14u: goto label_3e4b14;
        case 0x3e4b18u: goto label_3e4b18;
        case 0x3e4b1cu: goto label_3e4b1c;
        case 0x3e4b20u: goto label_3e4b20;
        case 0x3e4b24u: goto label_3e4b24;
        case 0x3e4b28u: goto label_3e4b28;
        case 0x3e4b2cu: goto label_3e4b2c;
        case 0x3e4b30u: goto label_3e4b30;
        case 0x3e4b34u: goto label_3e4b34;
        case 0x3e4b38u: goto label_3e4b38;
        case 0x3e4b3cu: goto label_3e4b3c;
        case 0x3e4b40u: goto label_3e4b40;
        case 0x3e4b44u: goto label_3e4b44;
        case 0x3e4b48u: goto label_3e4b48;
        case 0x3e4b4cu: goto label_3e4b4c;
        case 0x3e4b50u: goto label_3e4b50;
        case 0x3e4b54u: goto label_3e4b54;
        case 0x3e4b58u: goto label_3e4b58;
        case 0x3e4b5cu: goto label_3e4b5c;
        case 0x3e4b60u: goto label_3e4b60;
        case 0x3e4b64u: goto label_3e4b64;
        case 0x3e4b68u: goto label_3e4b68;
        case 0x3e4b6cu: goto label_3e4b6c;
        case 0x3e4b70u: goto label_3e4b70;
        case 0x3e4b74u: goto label_3e4b74;
        case 0x3e4b78u: goto label_3e4b78;
        case 0x3e4b7cu: goto label_3e4b7c;
        case 0x3e4b80u: goto label_3e4b80;
        case 0x3e4b84u: goto label_3e4b84;
        case 0x3e4b88u: goto label_3e4b88;
        case 0x3e4b8cu: goto label_3e4b8c;
        case 0x3e4b90u: goto label_3e4b90;
        case 0x3e4b94u: goto label_3e4b94;
        case 0x3e4b98u: goto label_3e4b98;
        case 0x3e4b9cu: goto label_3e4b9c;
        case 0x3e4ba0u: goto label_3e4ba0;
        case 0x3e4ba4u: goto label_3e4ba4;
        case 0x3e4ba8u: goto label_3e4ba8;
        case 0x3e4bacu: goto label_3e4bac;
        case 0x3e4bb0u: goto label_3e4bb0;
        case 0x3e4bb4u: goto label_3e4bb4;
        case 0x3e4bb8u: goto label_3e4bb8;
        case 0x3e4bbcu: goto label_3e4bbc;
        case 0x3e4bc0u: goto label_3e4bc0;
        case 0x3e4bc4u: goto label_3e4bc4;
        case 0x3e4bc8u: goto label_3e4bc8;
        case 0x3e4bccu: goto label_3e4bcc;
        case 0x3e4bd0u: goto label_3e4bd0;
        case 0x3e4bd4u: goto label_3e4bd4;
        case 0x3e4bd8u: goto label_3e4bd8;
        case 0x3e4bdcu: goto label_3e4bdc;
        default: break;
    }

    ctx->pc = 0x3e4838u;

label_3e4838:
    // 0x3e4838: 0x27bdf6a0  addiu       $sp, $sp, -0x960
    ctx->pc = 0x3e4838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964896));
label_3e483c:
    // 0x3e483c: 0x7fb00930  sq          $s0, 0x930($sp)
    ctx->pc = 0x3e483cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 16));
label_3e4840:
    // 0x3e4840: 0x7fb30900  sq          $s3, 0x900($sp)
    ctx->pc = 0x3e4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 19));
label_3e4844:
    // 0x3e4844: 0x7fb508e0  sq          $s5, 0x8E0($sp)
    ctx->pc = 0x3e4844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 21));
label_3e4848:
    // 0x3e4848: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e4848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e484c:
    // 0x3e484c: 0x7fb10920  sq          $s1, 0x920($sp)
    ctx->pc = 0x3e484cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 17));
label_3e4850:
    // 0x3e4850: 0x7fb20910  sq          $s2, 0x910($sp)
    ctx->pc = 0x3e4850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 18));
label_3e4854:
    // 0x3e4854: 0x7fb408f0  sq          $s4, 0x8F0($sp)
    ctx->pc = 0x3e4854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 20));
label_3e4858:
    // 0x3e4858: 0x7fb608d0  sq          $s6, 0x8D0($sp)
    ctx->pc = 0x3e4858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 22));
label_3e485c:
    // 0x3e485c: 0x7fb708c0  sq          $s7, 0x8C0($sp)
    ctx->pc = 0x3e485cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 23));
label_3e4860:
    // 0x3e4860: 0xffbf08b0  sd          $ra, 0x8B0($sp)
    ctx->pc = 0x3e4860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2224), GPR_U64(ctx, 31));
label_3e4864:
    // 0x3e4864: 0xe7b70958  swc1        $f23, 0x958($sp)
    ctx->pc = 0x3e4864u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2392), bits); }
label_3e4868:
    // 0x3e4868: 0xe7b60950  swc1        $f22, 0x950($sp)
    ctx->pc = 0x3e4868u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2384), bits); }
label_3e486c:
    // 0x3e486c: 0xe7b50948  swc1        $f21, 0x948($sp)
    ctx->pc = 0x3e486cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2376), bits); }
label_3e4870:
    // 0x3e4870: 0xe7b40940  swc1        $f20, 0x940($sp)
    ctx->pc = 0x3e4870u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2368), bits); }
label_3e4874:
    // 0x3e4874: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e4874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e4878:
    // 0x3e4878: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e4878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e487c:
    // 0x3e487c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e4880:
    // 0x3e4880: 0x40f809  jalr        $v0
label_3e4884:
    if (ctx->pc == 0x3E4884u) {
        ctx->pc = 0x3E4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4880u;
        // 0x3e4884: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4888u;
        goto label_3e4888;
    }
    ctx->pc = 0x3E4880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E4888u);
        ctx->pc = 0x3E4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4880u;
        // 0x3e4884: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4880u, 0x3E4888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E4888u;
label_3e4888:
    // 0x3e4888: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3e4888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e488c:
    // 0x3e488c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e488cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e4890:
    // 0x3e4890: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3e4890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3e4894:
    // 0x3e4894: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e4894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e4898:
    // 0x3e4898: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3e4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3e489c:
    // 0x3e489c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e48a0:
    // 0x3e48a0: 0x0  nop
    ctx->pc = 0x3e48a0u;
    // NOP
label_3e48a4:
    // 0x3e48a4: 0x0  nop
    ctx->pc = 0x3e48a4u;
    // NOP
label_3e48a8:
    // 0x3e48a8: 0x0  nop
    ctx->pc = 0x3e48a8u;
    // NOP
label_3e48ac:
    // 0x3e48ac: 0x0  nop
    ctx->pc = 0x3e48acu;
    // NOP
label_3e48b0:
    // 0x3e48b0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3e48b4:
    if (ctx->pc == 0x3E48B4u) {
        ctx->pc = 0x3E48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48B0u;
        // 0x3e48b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48B8u;
        goto label_3e48b8;
    }
    ctx->pc = 0x3E48B0u;
    {
        const bool branch_taken_0x3e48b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48B0u;
        // 0x3e48b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e48b0) {
            ctx->pc = 0x3E48A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e48a0;
        }
    }
    ctx->pc = 0x3E48B8u;
label_3e48b8:
    // 0x3e48b8: 0xc138ddc  jal         func_4E3770
label_3e48bc:
    if (ctx->pc == 0x3E48BCu) {
        ctx->pc = 0x3E48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48B8u;
        // 0x3e48bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48C0u;
        goto label_3e48c0;
    }
    ctx->pc = 0x3E48B8u;
    SET_GPR_U32(ctx, 31, 0x3E48C0u);
    ctx->pc = 0x3E48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48B8u;
    // 0x3e48bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3E48B8u, 0x3E48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48C0u;
label_3e48c0:
    // 0x3e48c0: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x3e48c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e48c4:
    // 0x3e48c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e48c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e48c8:
    // 0x3e48c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e48c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e48cc:
    // 0x3e48cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e48ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e48d0:
    // 0x3e48d0: 0xc0e947e  jal         func_3A51F8
label_3e48d4:
    if (ctx->pc == 0x3E48D4u) {
        ctx->pc = 0x3E48D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48D0u;
        // 0x3e48d4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48D8u;
        goto label_3e48d8;
    }
    ctx->pc = 0x3E48D0u;
    SET_GPR_U32(ctx, 31, 0x3E48D8u);
    ctx->pc = 0x3E48D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48D0u;
    // 0x3e48d4: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3E48D0u, 0x3E48D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48D8u;
label_3e48d8:
    // 0x3e48d8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_3e48dc:
    if (ctx->pc == 0x3E48DCu) {
        ctx->pc = 0x3E48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48D8u;
        // 0x3e48dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48E0u;
        goto label_3e48e0;
    }
    ctx->pc = 0x3E48D8u;
    {
        const bool branch_taken_0x3e48d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48d8) {
            ctx->pc = 0x3E48DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E48D8u;
            // 0x3e48dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4918u;
            goto label_3e4918;
        }
    }
    ctx->pc = 0x3E48E0u;
label_3e48e0:
    // 0x3e48e0: 0xc0e9694  jal         func_3A5A50
label_3e48e4:
    if (ctx->pc == 0x3E48E4u) {
        ctx->pc = 0x3E48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48E0u;
        // 0x3e48e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48E8u;
        goto label_3e48e8;
    }
    ctx->pc = 0x3E48E0u;
    SET_GPR_U32(ctx, 31, 0x3E48E8u);
    ctx->pc = 0x3E48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48E0u;
    // 0x3e48e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3E48E0u, 0x3E48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48E8u;
label_3e48e8:
    // 0x3e48e8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3e48ec:
    if (ctx->pc == 0x3E48ECu) {
        ctx->pc = 0x3E48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48E8u;
        // 0x3e48ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E48F0u;
        goto label_3e48f0;
    }
    ctx->pc = 0x3E48E8u;
    {
        const bool branch_taken_0x3e48e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48e8) {
            ctx->pc = 0x3E48ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E48E8u;
            // 0x3e48ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4918u;
            goto label_3e4918;
        }
    }
    ctx->pc = 0x3E48F0u;
label_3e48f0:
    // 0x3e48f0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3e48f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3e48f4:
    // 0x3e48f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e48f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e48f8:
    // 0x3e48f8: 0xc0e94a0  jal         func_3A5280
label_3e48fc:
    if (ctx->pc == 0x3E48FCu) {
        ctx->pc = 0x3E48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E48F8u;
        // 0x3e48fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4900u;
        goto label_3e4900;
    }
    ctx->pc = 0x3E48F8u;
    SET_GPR_U32(ctx, 31, 0x3E4900u);
    ctx->pc = 0x3E48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48F8u;
    // 0x3e48fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3E48F8u, 0x3E4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4900u;
label_3e4900:
    // 0x3e4900: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3e4904:
    if (ctx->pc == 0x3E4904u) {
        ctx->pc = 0x3E4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4900u;
        // 0x3e4904: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4908u;
        goto label_3e4908;
    }
    ctx->pc = 0x3E4900u;
    {
        const bool branch_taken_0x3e4900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4900) {
            ctx->pc = 0x3E4904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4900u;
            // 0x3e4904: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4918u;
            goto label_3e4918;
        }
    }
    ctx->pc = 0x3E4908u;
label_3e4908:
    // 0x3e4908: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x3e4908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_3e490c:
    // 0x3e490c: 0x2c420078  sltiu       $v0, $v0, 0x78
    ctx->pc = 0x3e490cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_3e4910:
    // 0x3e4910: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3e4914:
    if (ctx->pc == 0x3E4914u) {
        ctx->pc = 0x3E4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4910u;
        // 0x3e4914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4918u;
        goto label_3e4918;
    }
    ctx->pc = 0x3E4910u;
    {
        const bool branch_taken_0x3e4910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4910) {
            ctx->pc = 0x3E4914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4910u;
            // 0x3e4914: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4918u;
            goto label_3e4918;
        }
    }
    ctx->pc = 0x3E4918u;
label_3e4918:
    // 0x3e4918: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3e491c:
    if (ctx->pc == 0x3E491Cu) {
        ctx->pc = 0x3E491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4918u;
        // 0x3e491c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4920u;
        goto label_3e4920;
    }
    ctx->pc = 0x3E4918u;
    {
        const bool branch_taken_0x3e4918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4918u;
        // 0x3e491c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4918) {
            ctx->pc = 0x3E4938u;
            goto label_3e4938;
        }
    }
    ctx->pc = 0x3E4920u;
label_3e4920:
    // 0x3e4920: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e4920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4924:
    // 0x3e4924: 0xc1073cc  jal         func_41CF30
label_3e4928:
    if (ctx->pc == 0x3E4928u) {
        ctx->pc = 0x3E4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4924u;
        // 0x3e4928: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E492Cu;
        goto label_3e492c;
    }
    ctx->pc = 0x3E4924u;
    SET_GPR_U32(ctx, 31, 0x3E492Cu);
    ctx->pc = 0x3E4928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4924u;
    // 0x3e4928: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3E4924u, 0x3E492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E492Cu;
label_3e492c:
    // 0x3e492c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3e492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3e4930:
    // 0x3e4930: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
label_3e4934:
    if (ctx->pc == 0x3E4934u) {
        ctx->pc = 0x3E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4930u;
        // 0x3e4934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4938u;
        goto label_3e4938;
    }
    ctx->pc = 0x3E4930u;
    {
        const bool branch_taken_0x3e4930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4930u;
        // 0x3e4934: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4930) {
            ctx->pc = 0x3E4BA0u;
            goto label_3e4ba0;
        }
    }
    ctx->pc = 0x3E4938u;
label_3e4938:
    // 0x3e4938: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x3e4938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e493c:
    // 0x3e493c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e493cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e4940:
    // 0x3e4940: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3e4940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3e4944:
    // 0x3e4944: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3e4944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3e4948:
    // 0x3e4948: 0x2454b8b8  addiu       $s4, $v0, -0x4748
    ctx->pc = 0x3e4948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
label_3e494c:
    // 0x3e494c: 0x86320070  lh          $s2, 0x70($s1)
    ctx->pc = 0x3e494cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3e4950:
    // 0x3e4950: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e4954:
    // 0x3e4954: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3e4954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3e4958:
    // 0x3e4958: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3e4958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3e495c:
    // 0x3e495c: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3e495cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3e4960:
    // 0x3e4960: 0x2729021  addu        $s2, $s3, $s2
    ctx->pc = 0x3e4960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3e4964:
    // 0x3e4964: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4964u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e4968:
    // 0x3e4968: 0xc0cd518  jal         func_335460
label_3e496c:
    if (ctx->pc == 0x3E496Cu) {
        ctx->pc = 0x3E496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4968u;
        // 0x3e496c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4970u;
        goto label_3e4970;
    }
    ctx->pc = 0x3E4968u;
    SET_GPR_U32(ctx, 31, 0x3E4970u);
    ctx->pc = 0x3E496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4968u;
    // 0x3e496c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4968u, 0x3E4970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4970u;
label_3e4970:
    // 0x3e4970: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x3e4970u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_3e4974:
    // 0x3e4974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e4978:
    // 0x3e4978: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e497c:
    // 0x3e497c: 0xc0cd518  jal         func_335460
label_3e4980:
    if (ctx->pc == 0x3E4980u) {
        ctx->pc = 0x3E4980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E497Cu;
        // 0x3e4980: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4984u;
        goto label_3e4984;
    }
    ctx->pc = 0x3E497Cu;
    SET_GPR_U32(ctx, 31, 0x3E4984u);
    ctx->pc = 0x3E4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E497Cu;
    // 0x3e4980: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E497Cu, 0x3E4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4984u;
label_3e4984:
    // 0x3e4984: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3e4984u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3e4988:
    // 0x3e4988: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3e4988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3e498c:
    // 0x3e498c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e498cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3e4990:
    // 0x3e4990: 0xc0cd518  jal         func_335460
label_3e4994:
    if (ctx->pc == 0x3E4994u) {
        ctx->pc = 0x3E4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4990u;
        // 0x3e4994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4998u;
        goto label_3e4998;
    }
    ctx->pc = 0x3E4990u;
    SET_GPR_U32(ctx, 31, 0x3E4998u);
    ctx->pc = 0x3E4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4990u;
    // 0x3e4994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4990u, 0x3E4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4998u;
label_3e4998:
    // 0x3e4998: 0x27b00440  addiu       $s0, $sp, 0x440
    ctx->pc = 0x3e4998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3e499c:
    // 0x3e499c: 0xe7b60440  swc1        $f22, 0x440($sp)
    ctx->pc = 0x3e499cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_3e49a0:
    // 0x3e49a0: 0xe7b50444  swc1        $f21, 0x444($sp)
    ctx->pc = 0x3e49a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
label_3e49a4:
    // 0x3e49a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3e49a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e49a8:
    // 0x3e49a8: 0xe7a00448  swc1        $f0, 0x448($sp)
    ctx->pc = 0x3e49a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
label_3e49ac:
    // 0x3e49ac: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3e49acu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e49b0:
    // 0x3e49b0: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e49b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e49b4:
    // 0x3e49b4: 0xc0e87c0  jal         func_3A1F00
label_3e49b8:
    if (ctx->pc == 0x3E49B8u) {
        ctx->pc = 0x3E49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49B4u;
        // 0x3e49b8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E49BCu;
        goto label_3e49bc;
    }
    ctx->pc = 0x3E49B4u;
    SET_GPR_U32(ctx, 31, 0x3E49BCu);
    ctx->pc = 0x3E49B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49B4u;
    // 0x3e49b8: 0x7fa20430  sq          $v0, 0x430($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x3E49B4u, 0x3E49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49BCu;
label_3e49bc:
    // 0x3e49bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e49bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e49c0:
    // 0x3e49c0: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3e49c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e49c4:
    // 0x3e49c4: 0xc136b18  jal         func_4DAC60
label_3e49c8:
    if (ctx->pc == 0x3E49C8u) {
        ctx->pc = 0x3E49C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49C4u;
        // 0x3e49c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E49CCu;
        goto label_3e49cc;
    }
    ctx->pc = 0x3E49C4u;
    SET_GPR_U32(ctx, 31, 0x3E49CCu);
    ctx->pc = 0x3E49C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E49C4u;
    // 0x3e49c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E49C4u, 0x3E49CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E49CCu;
label_3e49cc:
    // 0x3e49cc: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3e49ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e49d0:
    // 0x3e49d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e49d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e49d4:
    // 0x3e49d4: 0x7fa30420  sq          $v1, 0x420($sp)
    ctx->pc = 0x3e49d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 3));
label_3e49d8:
    // 0x3e49d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e49d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e49dc:
    // 0x3e49dc: 0x40f809  jalr        $v0
label_3e49e0:
    if (ctx->pc == 0x3E49E0u) {
        ctx->pc = 0x3E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49DCu;
        // 0x3e49e0: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E49E4u;
        goto label_3e49e4;
    }
    ctx->pc = 0x3E49DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E49E4u);
        ctx->pc = 0x3E49E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49DCu;
        // 0x3e49e0: 0x27a50420  addiu       $a1, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E49DCu, 0x3E49E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E49E4u;
label_3e49e4:
    // 0x3e49e4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3e49e8:
    // 0x3e49e8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e49e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e49ec:
    // 0x3e49ec: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e49f0:
    // 0x3e49f0: 0x40f809  jalr        $v0
label_3e49f4:
    if (ctx->pc == 0x3E49F4u) {
        ctx->pc = 0x3E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49F0u;
        // 0x3e49f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E49F8u;
        goto label_3e49f8;
    }
    ctx->pc = 0x3E49F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E49F8u);
        ctx->pc = 0x3E49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E49F0u;
        // 0x3e49f4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E49F0u, 0x3E49F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E49F8u;
label_3e49f8:
    // 0x3e49f8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3e49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3e49fc:
    // 0x3e49fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e49fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e4a00:
    // 0x3e4a00: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_3e4a04:
    if (ctx->pc == 0x3E4A04u) {
        ctx->pc = 0x3E4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A00u;
        // 0x3e4a04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4A08u;
        goto label_3e4a08;
    }
    ctx->pc = 0x3E4A00u;
    {
        const bool branch_taken_0x3e4a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A00u;
        // 0x3e4a04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a00) {
            ctx->pc = 0x3E4B6Cu;
            goto label_3e4b6c;
        }
    }
    ctx->pc = 0x3E4A08u;
label_3e4a08:
    // 0x3e4a08: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3e4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3e4a0c:
    // 0x3e4a0c: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x3e4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_3e4a10:
    // 0x3e4a10: 0x7a6400a0  lq          $a0, 0xA0($s3)
    ctx->pc = 0x3e4a10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 160)));
label_3e4a14:
    // 0x3e4a14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e4a18:
    // 0x3e4a18: 0x7a650010  lq          $a1, 0x10($s3)
    ctx->pc = 0x3e4a18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3e4a1c:
    // 0x3e4a1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e4a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e4a20:
    // 0x3e4a20: 0x7fa40420  sq          $a0, 0x420($sp)
    ctx->pc = 0x3e4a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 4));
label_3e4a24:
    // 0x3e4a24: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3e4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3e4a28:
    // 0x3e4a28: 0x7fa50430  sq          $a1, 0x430($sp)
    ctx->pc = 0x3e4a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 5));
label_3e4a2c:
    // 0x3e4a2c: 0xe7b7042c  swc1        $f23, 0x42C($sp)
    ctx->pc = 0x3e4a2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
label_3e4a30:
    // 0x3e4a30: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x3e4a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3e4a34:
    // 0x3e4a34: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3e4a38:
    if (ctx->pc == 0x3E4A38u) {
        ctx->pc = 0x3E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A34u;
        // 0x3e4a38: 0xc67400bc  lwc1        $f20, 0xBC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4A3Cu;
        goto label_3e4a3c;
    }
    ctx->pc = 0x3E4A34u;
    {
        const bool branch_taken_0x3e4a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A34u;
        // 0x3e4a38: 0xc67400bc  lwc1        $f20, 0xBC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a34) {
            ctx->pc = 0x3E4B64u;
            goto label_3e4b64;
        }
    }
    ctx->pc = 0x3E4A3Cu;
label_3e4a3c:
    // 0x3e4a3c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3e4a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e4a40:
    // 0x3e4a40: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3e4a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3e4a44:
    // 0x3e4a44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3e4a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3e4a48:
    // 0x3e4a48: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3e4a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3e4a4c:
    // 0x3e4a4c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3e4a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3e4a50:
    // 0x3e4a50: 0x27b00460  addiu       $s0, $sp, 0x460
    ctx->pc = 0x3e4a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3e4a54:
    // 0x3e4a54: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x3e4a54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
label_3e4a58:
    // 0x3e4a58: 0x27b40470  addiu       $s4, $sp, 0x470
    ctx->pc = 0x3e4a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3e4a5c:
    // 0x3e4a5c: 0x27b60880  addiu       $s6, $sp, 0x880
    ctx->pc = 0x3e4a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3e4a60:
    // 0x3e4a60: 0x4616a342  mul.s       $f13, $f20, $f22
    ctx->pc = 0x3e4a60u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_3e4a64:
    // 0x3e4a64: 0x0  nop
    ctx->pc = 0x3e4a64u;
    // NOP
label_3e4a68:
    // 0x3e4a68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3e4a68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3e4a6c:
    // 0x3e4a6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4a70:
    // 0x3e4a70: 0xc0cd518  jal         func_335460
label_3e4a74:
    if (ctx->pc == 0x3E4A74u) {
        ctx->pc = 0x3E4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A70u;
        // 0x3e4a74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4A78u;
        goto label_3e4a78;
    }
    ctx->pc = 0x3E4A70u;
    SET_GPR_U32(ctx, 31, 0x3E4A78u);
    ctx->pc = 0x3E4A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A70u;
    // 0x3e4a74: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4A70u, 0x3E4A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A78u;
label_3e4a78:
    // 0x3e4a78: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3e4a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3e4a7c:
    // 0x3e4a7c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3e4a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3e4a80:
    // 0x3e4a80: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3e4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3e4a84:
    // 0x3e4a84: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3e4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3e4a88:
    // 0x3e4a88: 0xafa00464  sw          $zero, 0x464($sp)
    ctx->pc = 0x3e4a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 0));
label_3e4a8c:
    // 0x3e4a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4a90:
    // 0x3e4a90: 0xe617000c  swc1        $f23, 0xC($s0)
    ctx->pc = 0x3e4a90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3e4a94:
    // 0x3e4a94: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e4a94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e4a98:
    // 0x3e4a98: 0xc136b18  jal         func_4DAC60
label_3e4a9c:
    if (ctx->pc == 0x3E4A9Cu) {
        ctx->pc = 0x3E4A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A98u;
        // 0x3e4a9c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4AA0u;
        goto label_3e4aa0;
    }
    ctx->pc = 0x3E4A98u;
    SET_GPR_U32(ctx, 31, 0x3E4AA0u);
    ctx->pc = 0x3E4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A98u;
    // 0x3e4a9c: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3E4A98u, 0x3E4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AA0u;
label_3e4aa0:
    // 0x3e4aa0: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e4aa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e4aa4:
    // 0x3e4aa4: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3e4aa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3e4aa8:
    // 0x3e4aa8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3e4aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_3e4aac:
    // 0x3e4aac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4ab0:
    // 0x3e4ab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ab4:
    // 0x3e4ab4: 0xc0cd518  jal         func_335460
label_3e4ab8:
    if (ctx->pc == 0x3E4AB8u) {
        ctx->pc = 0x3E4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AB4u;
        // 0x3e4ab8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4ABCu;
        goto label_3e4abc;
    }
    ctx->pc = 0x3E4AB4u;
    SET_GPR_U32(ctx, 31, 0x3E4ABCu);
    ctx->pc = 0x3E4AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AB4u;
    // 0x3e4ab8: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4AB4u, 0x3E4ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4ABCu;
label_3e4abc:
    // 0x3e4abc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3e4abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ac0:
    // 0x3e4ac0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e4ac0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3e4ac4:
    // 0x3e4ac4: 0xc136b24  jal         func_4DAC90
label_3e4ac8:
    if (ctx->pc == 0x3E4AC8u) {
        ctx->pc = 0x3E4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AC4u;
        // 0x3e4ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4ACCu;
        goto label_3e4acc;
    }
    ctx->pc = 0x3E4AC4u;
    SET_GPR_U32(ctx, 31, 0x3E4ACCu);
    ctx->pc = 0x3E4AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AC4u;
    // 0x3e4ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3E4AC4u, 0x3E4ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4ACCu;
label_3e4acc:
    // 0x3e4acc: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3e4accu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3e4ad0:
    // 0x3e4ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4ad4:
    // 0x3e4ad4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3e4ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3e4ad8:
    // 0x3e4ad8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e4ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e4adc:
    // 0x3e4adc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3e4adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3e4ae0:
    // 0x3e4ae0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3e4ae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3e4ae4:
    // 0x3e4ae4: 0xc0cd518  jal         func_335460
label_3e4ae8:
    if (ctx->pc == 0x3E4AE8u) {
        ctx->pc = 0x3E4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4AE4u;
        // 0x3e4ae8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4AECu;
        goto label_3e4aec;
    }
    ctx->pc = 0x3E4AE4u;
    SET_GPR_U32(ctx, 31, 0x3E4AECu);
    ctx->pc = 0x3E4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AE4u;
    // 0x3e4ae8: 0x7fa20450  sq          $v0, 0x450($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4AE4u, 0x3E4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AECu;
label_3e4aec:
    // 0x3e4aec: 0xc7a10458  lwc1        $f1, 0x458($sp)
    ctx->pc = 0x3e4aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e4af0:
    // 0x3e4af0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x3e4af0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_3e4af4:
    // 0x3e4af4: 0x7ba20440  lq          $v0, 0x440($sp)
    ctx->pc = 0x3e4af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3e4af8:
    // 0x3e4af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e4af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e4afc:
    // 0x3e4afc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3e4afcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3e4b00:
    // 0x3e4b00: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3e4b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3e4b04:
    // 0x3e4b04: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e4b04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e4b08:
    // 0x3e4b08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3e4b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3e4b0c:
    // 0x3e4b0c: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3e4b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3e4b10:
    // 0x3e4b10: 0xe7a10458  swc1        $f1, 0x458($sp)
    ctx->pc = 0x3e4b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1112), bits); }
label_3e4b14:
    // 0x3e4b14: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3e4b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3e4b18:
    // 0x3e4b18: 0xc0cd518  jal         func_335460
label_3e4b1c:
    if (ctx->pc == 0x3E4B1Cu) {
        ctx->pc = 0x3E4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B18u;
        // 0x3e4b1c: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B20u;
        goto label_3e4b20;
    }
    ctx->pc = 0x3E4B18u;
    SET_GPR_U32(ctx, 31, 0x3E4B20u);
    ctx->pc = 0x3E4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B18u;
    // 0x3e4b1c: 0x7fa20880  sq          $v0, 0x880($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3E4B18u, 0x3E4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B20u;
label_3e4b20:
    // 0x3e4b20: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3e4b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3e4b24:
    // 0x3e4b24: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x3e4b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3e4b28:
    // 0x3e4b28: 0x27a70890  addiu       $a3, $sp, 0x890
    ctx->pc = 0x3e4b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3e4b2c:
    // 0x3e4b2c: 0x27a808a0  addiu       $t0, $sp, 0x8A0
    ctx->pc = 0x3e4b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
label_3e4b30:
    // 0x3e4b30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b34:
    // 0x3e4b34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e4b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b38:
    // 0x3e4b38: 0xafa208a0  sw          $v0, 0x8A0($sp)
    ctx->pc = 0x3e4b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2208), GPR_U32(ctx, 2));
label_3e4b3c:
    // 0x3e4b3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3e4b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b40:
    // 0x3e4b40: 0xc0e9fd0  jal         func_3A7F40
label_3e4b44:
    if (ctx->pc == 0x3E4B44u) {
        ctx->pc = 0x3E4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B40u;
        // 0x3e4b44: 0xe7a00890  swc1        $f0, 0x890($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B48u;
        goto label_3e4b48;
    }
    ctx->pc = 0x3E4B40u;
    SET_GPR_U32(ctx, 31, 0x3E4B48u);
    ctx->pc = 0x3E4B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B40u;
    // 0x3e4b44: 0xe7a00890  swc1        $f0, 0x890($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3E4B40u, 0x3E4B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B48u;
label_3e4b48:
    // 0x3e4b48: 0x26e45408  addiu       $a0, $s7, 0x5408
    ctx->pc = 0x3e4b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21512));
label_3e4b4c:
    // 0x3e4b4c: 0xc0f15bc  jal         func_3C56F0
label_3e4b50:
    if (ctx->pc == 0x3E4B50u) {
        ctx->pc = 0x3E4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B4Cu;
        // 0x3e4b50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B54u;
        goto label_3e4b54;
    }
    ctx->pc = 0x3E4B4Cu;
    SET_GPR_U32(ctx, 31, 0x3E4B54u);
    ctx->pc = 0x3E4B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B4Cu;
    // 0x3e4b50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3E4B4Cu, 0x3E4B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B54u;
label_3e4b54:
    // 0x3e4b54: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x3e4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_3e4b58:
    // 0x3e4b58: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x3e4b58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e4b5c:
    // 0x3e4b5c: 0x5460ffc2  bnel        $v1, $zero, . + 4 + (-0x3E << 2)
label_3e4b60:
    if (ctx->pc == 0x3E4B60u) {
        ctx->pc = 0x3E4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B5Cu;
        // 0x3e4b60: 0x4616a342  mul.s       $f13, $f20, $f22 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B64u;
        goto label_3e4b64;
    }
    ctx->pc = 0x3E4B5Cu;
    {
        const bool branch_taken_0x3e4b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4b5c) {
            ctx->pc = 0x3E4B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4B5Cu;
            // 0x3e4b60: 0x4616a342  mul.s       $f13, $f20, $f22 (Delay Slot)
            ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4a68;
        }
    }
    ctx->pc = 0x3E4B64u;
label_3e4b64:
    // 0x3e4b64: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e4b68:
    if (ctx->pc == 0x3E4B68u) {
        ctx->pc = 0x3E4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B64u;
        // 0x3e4b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B6Cu;
        goto label_3e4b6c;
    }
    ctx->pc = 0x3E4B64u;
    {
        const bool branch_taken_0x3e4b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B64u;
        // 0x3e4b68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4b64) {
            ctx->pc = 0x3E4BA0u;
            goto label_3e4ba0;
        }
    }
    ctx->pc = 0x3E4B6Cu;
label_3e4b6c:
    // 0x3e4b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e4b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b70:
    // 0x3e4b70: 0xc0cd4ee  jal         func_3353B8
label_3e4b74:
    if (ctx->pc == 0x3E4B74u) {
        ctx->pc = 0x3E4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B70u;
        // 0x3e4b74: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4B78u;
        goto label_3e4b78;
    }
    ctx->pc = 0x3E4B70u;
    SET_GPR_U32(ctx, 31, 0x3E4B78u);
    ctx->pc = 0x3E4B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B70u;
    // 0x3e4b74: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3E4B70u, 0x3E4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B78u;
label_3e4b78:
    // 0x3e4b78: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x3e4b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3e4b7c:
    // 0x3e4b7c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x3e4b7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_3e4b80:
    // 0x3e4b80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e4b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e4b84:
    // 0x3e4b84: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x3e4b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_3e4b88:
    // 0x3e4b88: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x3e4b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_3e4b8c:
    // 0x3e4b8c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3e4b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3e4b90:
    // 0x3e4b90: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x3e4b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_3e4b94:
    // 0x3e4b94: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3e4b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_3e4b98:
    // 0x3e4b98: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3e4b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_3e4b9c:
    // 0x3e4b9c: 0xae6300b4  sw          $v1, 0xB4($s3)
    ctx->pc = 0x3e4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 3));
label_3e4ba0:
    // 0x3e4ba0: 0x7bb00930  lq          $s0, 0x930($sp)
    ctx->pc = 0x3e4ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3e4ba4:
    // 0x3e4ba4: 0x7bb10920  lq          $s1, 0x920($sp)
    ctx->pc = 0x3e4ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3e4ba8:
    // 0x3e4ba8: 0x7bb20910  lq          $s2, 0x910($sp)
    ctx->pc = 0x3e4ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3e4bac:
    // 0x3e4bac: 0x7bb30900  lq          $s3, 0x900($sp)
    ctx->pc = 0x3e4bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3e4bb0:
    // 0x3e4bb0: 0x7bb408f0  lq          $s4, 0x8F0($sp)
    ctx->pc = 0x3e4bb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3e4bb4:
    // 0x3e4bb4: 0x7bb508e0  lq          $s5, 0x8E0($sp)
    ctx->pc = 0x3e4bb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3e4bb8:
    // 0x3e4bb8: 0x7bb608d0  lq          $s6, 0x8D0($sp)
    ctx->pc = 0x3e4bb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3e4bbc:
    // 0x3e4bbc: 0x7bb708c0  lq          $s7, 0x8C0($sp)
    ctx->pc = 0x3e4bbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3e4bc0:
    // 0x3e4bc0: 0xdfbf08b0  ld          $ra, 0x8B0($sp)
    ctx->pc = 0x3e4bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2224)));
label_3e4bc4:
    // 0x3e4bc4: 0xc7b70958  lwc1        $f23, 0x958($sp)
    ctx->pc = 0x3e4bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3e4bc8:
    // 0x3e4bc8: 0xc7b60950  lwc1        $f22, 0x950($sp)
    ctx->pc = 0x3e4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3e4bcc:
    // 0x3e4bcc: 0xc7b50948  lwc1        $f21, 0x948($sp)
    ctx->pc = 0x3e4bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3e4bd0:
    // 0x3e4bd0: 0xc7b40940  lwc1        $f20, 0x940($sp)
    ctx->pc = 0x3e4bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3e4bd4:
    // 0x3e4bd4: 0x3e00008  jr          $ra
label_3e4bd8:
    if (ctx->pc == 0x3E4BD8u) {
        ctx->pc = 0x3E4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4BD4u;
        // 0x3e4bd8: 0x27bd0960  addiu       $sp, $sp, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E4BDCu;
        goto label_3e4bdc;
    }
    ctx->pc = 0x3E4BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4BD4u;
        // 0x3e4bd8: 0x27bd0960  addiu       $sp, $sp, 0x960 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4BDCu;
label_3e4bdc:
    // 0x3e4bdc: 0x0  nop
    ctx->pc = 0x3e4bdcu;
    // NOP
    ctx->pc = 0x3e4be0u;
}
