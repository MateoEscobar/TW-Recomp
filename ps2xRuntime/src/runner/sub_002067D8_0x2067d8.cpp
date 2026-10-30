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

// Function: sub_002067D8
// Address: 0x2067d8 - 0x206c60
void sub_002067D8_0x2067d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002067D8_0x2067d8");
#endif

    switch (ctx->pc) {
        case 0x2067d8u: goto label_2067d8;
        case 0x2067dcu: goto label_2067dc;
        case 0x2067e0u: goto label_2067e0;
        case 0x2067e4u: goto label_2067e4;
        case 0x2067e8u: goto label_2067e8;
        case 0x2067ecu: goto label_2067ec;
        case 0x2067f0u: goto label_2067f0;
        case 0x2067f4u: goto label_2067f4;
        case 0x2067f8u: goto label_2067f8;
        case 0x2067fcu: goto label_2067fc;
        case 0x206800u: goto label_206800;
        case 0x206804u: goto label_206804;
        case 0x206808u: goto label_206808;
        case 0x20680cu: goto label_20680c;
        case 0x206810u: goto label_206810;
        case 0x206814u: goto label_206814;
        case 0x206818u: goto label_206818;
        case 0x20681cu: goto label_20681c;
        case 0x206820u: goto label_206820;
        case 0x206824u: goto label_206824;
        case 0x206828u: goto label_206828;
        case 0x20682cu: goto label_20682c;
        case 0x206830u: goto label_206830;
        case 0x206834u: goto label_206834;
        case 0x206838u: goto label_206838;
        case 0x20683cu: goto label_20683c;
        case 0x206840u: goto label_206840;
        case 0x206844u: goto label_206844;
        case 0x206848u: goto label_206848;
        case 0x20684cu: goto label_20684c;
        case 0x206850u: goto label_206850;
        case 0x206854u: goto label_206854;
        case 0x206858u: goto label_206858;
        case 0x20685cu: goto label_20685c;
        case 0x206860u: goto label_206860;
        case 0x206864u: goto label_206864;
        case 0x206868u: goto label_206868;
        case 0x20686cu: goto label_20686c;
        case 0x206870u: goto label_206870;
        case 0x206874u: goto label_206874;
        case 0x206878u: goto label_206878;
        case 0x20687cu: goto label_20687c;
        case 0x206880u: goto label_206880;
        case 0x206884u: goto label_206884;
        case 0x206888u: goto label_206888;
        case 0x20688cu: goto label_20688c;
        case 0x206890u: goto label_206890;
        case 0x206894u: goto label_206894;
        case 0x206898u: goto label_206898;
        case 0x20689cu: goto label_20689c;
        case 0x2068a0u: goto label_2068a0;
        case 0x2068a4u: goto label_2068a4;
        case 0x2068a8u: goto label_2068a8;
        case 0x2068acu: goto label_2068ac;
        case 0x2068b0u: goto label_2068b0;
        case 0x2068b4u: goto label_2068b4;
        case 0x2068b8u: goto label_2068b8;
        case 0x2068bcu: goto label_2068bc;
        case 0x2068c0u: goto label_2068c0;
        case 0x2068c4u: goto label_2068c4;
        case 0x2068c8u: goto label_2068c8;
        case 0x2068ccu: goto label_2068cc;
        case 0x2068d0u: goto label_2068d0;
        case 0x2068d4u: goto label_2068d4;
        case 0x2068d8u: goto label_2068d8;
        case 0x2068dcu: goto label_2068dc;
        case 0x2068e0u: goto label_2068e0;
        case 0x2068e4u: goto label_2068e4;
        case 0x2068e8u: goto label_2068e8;
        case 0x2068ecu: goto label_2068ec;
        case 0x2068f0u: goto label_2068f0;
        case 0x2068f4u: goto label_2068f4;
        case 0x2068f8u: goto label_2068f8;
        case 0x2068fcu: goto label_2068fc;
        case 0x206900u: goto label_206900;
        case 0x206904u: goto label_206904;
        case 0x206908u: goto label_206908;
        case 0x20690cu: goto label_20690c;
        case 0x206910u: goto label_206910;
        case 0x206914u: goto label_206914;
        case 0x206918u: goto label_206918;
        case 0x20691cu: goto label_20691c;
        case 0x206920u: goto label_206920;
        case 0x206924u: goto label_206924;
        case 0x206928u: goto label_206928;
        case 0x20692cu: goto label_20692c;
        case 0x206930u: goto label_206930;
        case 0x206934u: goto label_206934;
        case 0x206938u: goto label_206938;
        case 0x20693cu: goto label_20693c;
        case 0x206940u: goto label_206940;
        case 0x206944u: goto label_206944;
        case 0x206948u: goto label_206948;
        case 0x20694cu: goto label_20694c;
        case 0x206950u: goto label_206950;
        case 0x206954u: goto label_206954;
        case 0x206958u: goto label_206958;
        case 0x20695cu: goto label_20695c;
        case 0x206960u: goto label_206960;
        case 0x206964u: goto label_206964;
        case 0x206968u: goto label_206968;
        case 0x20696cu: goto label_20696c;
        case 0x206970u: goto label_206970;
        case 0x206974u: goto label_206974;
        case 0x206978u: goto label_206978;
        case 0x20697cu: goto label_20697c;
        case 0x206980u: goto label_206980;
        case 0x206984u: goto label_206984;
        case 0x206988u: goto label_206988;
        case 0x20698cu: goto label_20698c;
        case 0x206990u: goto label_206990;
        case 0x206994u: goto label_206994;
        case 0x206998u: goto label_206998;
        case 0x20699cu: goto label_20699c;
        case 0x2069a0u: goto label_2069a0;
        case 0x2069a4u: goto label_2069a4;
        case 0x2069a8u: goto label_2069a8;
        case 0x2069acu: goto label_2069ac;
        case 0x2069b0u: goto label_2069b0;
        case 0x2069b4u: goto label_2069b4;
        case 0x2069b8u: goto label_2069b8;
        case 0x2069bcu: goto label_2069bc;
        case 0x2069c0u: goto label_2069c0;
        case 0x2069c4u: goto label_2069c4;
        case 0x2069c8u: goto label_2069c8;
        case 0x2069ccu: goto label_2069cc;
        case 0x2069d0u: goto label_2069d0;
        case 0x2069d4u: goto label_2069d4;
        case 0x2069d8u: goto label_2069d8;
        case 0x2069dcu: goto label_2069dc;
        case 0x2069e0u: goto label_2069e0;
        case 0x2069e4u: goto label_2069e4;
        case 0x2069e8u: goto label_2069e8;
        case 0x2069ecu: goto label_2069ec;
        case 0x2069f0u: goto label_2069f0;
        case 0x2069f4u: goto label_2069f4;
        case 0x2069f8u: goto label_2069f8;
        case 0x2069fcu: goto label_2069fc;
        case 0x206a00u: goto label_206a00;
        case 0x206a04u: goto label_206a04;
        case 0x206a08u: goto label_206a08;
        case 0x206a0cu: goto label_206a0c;
        case 0x206a10u: goto label_206a10;
        case 0x206a14u: goto label_206a14;
        case 0x206a18u: goto label_206a18;
        case 0x206a1cu: goto label_206a1c;
        case 0x206a20u: goto label_206a20;
        case 0x206a24u: goto label_206a24;
        case 0x206a28u: goto label_206a28;
        case 0x206a2cu: goto label_206a2c;
        case 0x206a30u: goto label_206a30;
        case 0x206a34u: goto label_206a34;
        case 0x206a38u: goto label_206a38;
        case 0x206a3cu: goto label_206a3c;
        case 0x206a40u: goto label_206a40;
        case 0x206a44u: goto label_206a44;
        case 0x206a48u: goto label_206a48;
        case 0x206a4cu: goto label_206a4c;
        case 0x206a50u: goto label_206a50;
        case 0x206a54u: goto label_206a54;
        case 0x206a58u: goto label_206a58;
        case 0x206a5cu: goto label_206a5c;
        case 0x206a60u: goto label_206a60;
        case 0x206a64u: goto label_206a64;
        case 0x206a68u: goto label_206a68;
        case 0x206a6cu: goto label_206a6c;
        case 0x206a70u: goto label_206a70;
        case 0x206a74u: goto label_206a74;
        case 0x206a78u: goto label_206a78;
        case 0x206a7cu: goto label_206a7c;
        case 0x206a80u: goto label_206a80;
        case 0x206a84u: goto label_206a84;
        case 0x206a88u: goto label_206a88;
        case 0x206a8cu: goto label_206a8c;
        case 0x206a90u: goto label_206a90;
        case 0x206a94u: goto label_206a94;
        case 0x206a98u: goto label_206a98;
        case 0x206a9cu: goto label_206a9c;
        case 0x206aa0u: goto label_206aa0;
        case 0x206aa4u: goto label_206aa4;
        case 0x206aa8u: goto label_206aa8;
        case 0x206aacu: goto label_206aac;
        case 0x206ab0u: goto label_206ab0;
        case 0x206ab4u: goto label_206ab4;
        case 0x206ab8u: goto label_206ab8;
        case 0x206abcu: goto label_206abc;
        case 0x206ac0u: goto label_206ac0;
        case 0x206ac4u: goto label_206ac4;
        case 0x206ac8u: goto label_206ac8;
        case 0x206accu: goto label_206acc;
        case 0x206ad0u: goto label_206ad0;
        case 0x206ad4u: goto label_206ad4;
        case 0x206ad8u: goto label_206ad8;
        case 0x206adcu: goto label_206adc;
        case 0x206ae0u: goto label_206ae0;
        case 0x206ae4u: goto label_206ae4;
        case 0x206ae8u: goto label_206ae8;
        case 0x206aecu: goto label_206aec;
        case 0x206af0u: goto label_206af0;
        case 0x206af4u: goto label_206af4;
        case 0x206af8u: goto label_206af8;
        case 0x206afcu: goto label_206afc;
        case 0x206b00u: goto label_206b00;
        case 0x206b04u: goto label_206b04;
        case 0x206b08u: goto label_206b08;
        case 0x206b0cu: goto label_206b0c;
        case 0x206b10u: goto label_206b10;
        case 0x206b14u: goto label_206b14;
        case 0x206b18u: goto label_206b18;
        case 0x206b1cu: goto label_206b1c;
        case 0x206b20u: goto label_206b20;
        case 0x206b24u: goto label_206b24;
        case 0x206b28u: goto label_206b28;
        case 0x206b2cu: goto label_206b2c;
        case 0x206b30u: goto label_206b30;
        case 0x206b34u: goto label_206b34;
        case 0x206b38u: goto label_206b38;
        case 0x206b3cu: goto label_206b3c;
        case 0x206b40u: goto label_206b40;
        case 0x206b44u: goto label_206b44;
        case 0x206b48u: goto label_206b48;
        case 0x206b4cu: goto label_206b4c;
        case 0x206b50u: goto label_206b50;
        case 0x206b54u: goto label_206b54;
        case 0x206b58u: goto label_206b58;
        case 0x206b5cu: goto label_206b5c;
        case 0x206b60u: goto label_206b60;
        case 0x206b64u: goto label_206b64;
        case 0x206b68u: goto label_206b68;
        case 0x206b6cu: goto label_206b6c;
        case 0x206b70u: goto label_206b70;
        case 0x206b74u: goto label_206b74;
        case 0x206b78u: goto label_206b78;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b80u: goto label_206b80;
        case 0x206b84u: goto label_206b84;
        case 0x206b88u: goto label_206b88;
        case 0x206b8cu: goto label_206b8c;
        case 0x206b90u: goto label_206b90;
        case 0x206b94u: goto label_206b94;
        case 0x206b98u: goto label_206b98;
        case 0x206b9cu: goto label_206b9c;
        case 0x206ba0u: goto label_206ba0;
        case 0x206ba4u: goto label_206ba4;
        case 0x206ba8u: goto label_206ba8;
        case 0x206bacu: goto label_206bac;
        case 0x206bb0u: goto label_206bb0;
        case 0x206bb4u: goto label_206bb4;
        case 0x206bb8u: goto label_206bb8;
        case 0x206bbcu: goto label_206bbc;
        case 0x206bc0u: goto label_206bc0;
        case 0x206bc4u: goto label_206bc4;
        case 0x206bc8u: goto label_206bc8;
        case 0x206bccu: goto label_206bcc;
        case 0x206bd0u: goto label_206bd0;
        case 0x206bd4u: goto label_206bd4;
        case 0x206bd8u: goto label_206bd8;
        case 0x206bdcu: goto label_206bdc;
        case 0x206be0u: goto label_206be0;
        case 0x206be4u: goto label_206be4;
        case 0x206be8u: goto label_206be8;
        case 0x206becu: goto label_206bec;
        case 0x206bf0u: goto label_206bf0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206bf8u: goto label_206bf8;
        case 0x206bfcu: goto label_206bfc;
        case 0x206c00u: goto label_206c00;
        case 0x206c04u: goto label_206c04;
        case 0x206c08u: goto label_206c08;
        case 0x206c0cu: goto label_206c0c;
        case 0x206c10u: goto label_206c10;
        case 0x206c14u: goto label_206c14;
        case 0x206c18u: goto label_206c18;
        case 0x206c1cu: goto label_206c1c;
        case 0x206c20u: goto label_206c20;
        case 0x206c24u: goto label_206c24;
        case 0x206c28u: goto label_206c28;
        case 0x206c2cu: goto label_206c2c;
        case 0x206c30u: goto label_206c30;
        case 0x206c34u: goto label_206c34;
        case 0x206c38u: goto label_206c38;
        case 0x206c3cu: goto label_206c3c;
        case 0x206c40u: goto label_206c40;
        case 0x206c44u: goto label_206c44;
        case 0x206c48u: goto label_206c48;
        case 0x206c4cu: goto label_206c4c;
        case 0x206c50u: goto label_206c50;
        case 0x206c54u: goto label_206c54;
        case 0x206c58u: goto label_206c58;
        case 0x206c5cu: goto label_206c5c;
        default: break;
    }

    ctx->pc = 0x2067d8u;

label_2067d8:
    // 0x2067d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2067d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2067dc:
    // 0x2067dc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2067dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2067e0:
    // 0x2067e0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2067e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2067e4:
    // 0x2067e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2067e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2067e8:
    // 0x2067e8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2067e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2067ec:
    // 0x2067ec: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2067ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2067f0:
    // 0x2067f0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2067f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2067f4:
    // 0x2067f4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2067f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2067f8:
    // 0x2067f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2067f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2067fc:
    // 0x2067fc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2067fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_206800:
    // 0x206800: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x206800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_206804:
    // 0x206804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x206804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_206808:
    // 0x206808: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x206808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_20680c:
    // 0x20680c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x20680cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_206810:
    // 0x206810: 0x14400107  bnez        $v0, . + 4 + (0x107 << 2)
label_206814:
    if (ctx->pc == 0x206814u) {
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206810u;
        // 0x206814: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206818u;
        goto label_206818;
    }
    ctx->pc = 0x206810u;
    {
        const bool branch_taken_0x206810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206810u;
        // 0x206814: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206810) {
            ctx->pc = 0x206C30u;
            goto label_206c30;
        }
    }
    ctx->pc = 0x206818u;
label_206818:
    // 0x206818: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x206818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20681c:
    // 0x20681c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x20681cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_206820:
    // 0x206820: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x206820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_206824:
    // 0x206824: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x206824u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_206828:
    // 0x206828: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x206828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_20682c:
    // 0x20682c: 0x40f809  jalr        $v0
label_206830:
    if (ctx->pc == 0x206830u) {
        ctx->pc = 0x206830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20682Cu;
        // 0x206830: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206834u;
        goto label_206834;
    }
    ctx->pc = 0x20682Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206834u);
        ctx->pc = 0x206830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20682Cu;
        // 0x206830: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20682Cu, 0x206834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206834u;
label_206834:
    // 0x206834: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x206834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206838:
    // 0x206838: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_20683c:
    if (ctx->pc == 0x20683Cu) {
        ctx->pc = 0x206840u;
        goto label_206840;
    }
    ctx->pc = 0x206838u;
    {
        const bool branch_taken_0x206838 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x206838) {
            ctx->pc = 0x206858u;
            goto label_206858;
        }
    }
    ctx->pc = 0x206840u;
label_206840:
    // 0x206840: 0xc080ebe  jal         func_203AF8
label_206844:
    if (ctx->pc == 0x206844u) {
        ctx->pc = 0x206848u;
        goto label_206848;
    }
    ctx->pc = 0x206840u;
    SET_GPR_U32(ctx, 31, 0x206848u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x206840u, 0x206848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206848u;
label_206848:
    // 0x206848: 0xc080ee2  jal         func_203B88
label_20684c:
    if (ctx->pc == 0x20684Cu) {
        ctx->pc = 0x20684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206848u;
        // 0x20684c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206850u;
        goto label_206850;
    }
    ctx->pc = 0x206848u;
    SET_GPR_U32(ctx, 31, 0x206850u);
    ctx->pc = 0x20684Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206848u;
    // 0x20684c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B88u, 0x206848u, 0x206850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206850u;
label_206850:
    // 0x206850: 0x10000005  b           . + 4 + (0x5 << 2)
label_206854:
    if (ctx->pc == 0x206854u) {
        ctx->pc = 0x206858u;
        goto label_206858;
    }
    ctx->pc = 0x206850u;
    {
        const bool branch_taken_0x206850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206850) {
            ctx->pc = 0x206868u;
            goto label_206868;
        }
    }
    ctx->pc = 0x206858u;
label_206858:
    // 0x206858: 0xc080ebe  jal         func_203AF8
label_20685c:
    if (ctx->pc == 0x20685Cu) {
        ctx->pc = 0x206860u;
        goto label_206860;
    }
    ctx->pc = 0x206858u;
    SET_GPR_U32(ctx, 31, 0x206860u);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x206858u, 0x206860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206860u;
label_206860:
    // 0x206860: 0xc080ede  jal         func_203B78
label_206864:
    if (ctx->pc == 0x206864u) {
        ctx->pc = 0x206864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206860u;
        // 0x206864: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206868u;
        goto label_206868;
    }
    ctx->pc = 0x206860u;
    SET_GPR_U32(ctx, 31, 0x206868u);
    ctx->pc = 0x206864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206860u;
    // 0x206864: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B78u, 0x206860u, 0x206868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206868u;
label_206868:
    // 0x206868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_20686c:
    // 0x20686c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20686cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_206870:
    // 0x206870: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206874:
    // 0x206874: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x206874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_206878:
    // 0x206878: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x206878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20687c:
    // 0x20687c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x20687cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_206880:
    // 0x206880: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x206880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_206884:
    // 0x206884: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x206884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_206888:
    // 0x206888: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x206888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_20688c:
    // 0x20688c: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x20688cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_206890:
    // 0x206890: 0x8c4927e4  lw          $t1, 0x27E4($v0)
    ctx->pc = 0x206890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_206894:
    // 0x206894: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206898:
    // 0x206898: 0x24758950  addiu       $s5, $v1, -0x76B0
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936912));
label_20689c:
    // 0x20689c: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20689cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_2068a0:
    // 0x2068a0: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x2068a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2068a4:
    // 0x2068a4: 0x24a58940  addiu       $a1, $a1, -0x76C0
    ctx->pc = 0x2068a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936896));
label_2068a8:
    // 0x2068a8: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2068a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2068ac:
    // 0x2068ac: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2068acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2068b0:
    // 0x2068b0: 0x85040050  lh          $a0, 0x50($t0)
    ctx->pc = 0x2068b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
label_2068b4:
    // 0x2068b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2068b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2068b8:
    // 0x2068b8: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x2068b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_2068bc:
    // 0x2068bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2068bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2068c0:
    // 0x2068c0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2068c4:
    // 0x2068c4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2068c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2068c8:
    // 0x2068c8: 0x40f809  jalr        $v0
label_2068cc:
    if (ctx->pc == 0x2068CCu) {
        ctx->pc = 0x2068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068C8u;
        // 0x2068cc: 0x24090029  addiu       $t1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2068D0u;
        goto label_2068d0;
    }
    ctx->pc = 0x2068C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2068D0u);
        ctx->pc = 0x2068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068C8u;
        // 0x2068cc: 0x24090029  addiu       $t1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2068C8u, 0x2068D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2068D0u;
label_2068d0:
    // 0x2068d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2068d4:
    if (ctx->pc == 0x2068D4u) {
        ctx->pc = 0x2068D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D0u;
        // 0x2068d4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2068D8u;
        goto label_2068d8;
    }
    ctx->pc = 0x2068D0u;
    {
        const bool branch_taken_0x2068d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D0u;
        // 0x2068d4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068d0) {
            ctx->pc = 0x2068E4u;
            goto label_2068e4;
        }
    }
    ctx->pc = 0x2068D8u;
label_2068d8:
    // 0x2068d8: 0xc0733e2  jal         func_1CCF88
label_2068dc:
    if (ctx->pc == 0x2068DCu) {
        ctx->pc = 0x2068DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D8u;
        // 0x2068dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2068E0u;
        goto label_2068e0;
    }
    ctx->pc = 0x2068D8u;
    SET_GPR_U32(ctx, 31, 0x2068E0u);
    ctx->pc = 0x2068DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068D8u;
    // 0x2068dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x2068D8u, 0x2068E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068E0u;
label_2068e0:
    // 0x2068e0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2068e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2068e4:
    // 0x2068e4: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2068e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_2068e8:
    // 0x2068e8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2068e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_2068ec:
    // 0x2068ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2068ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2068f0:
    // 0x2068f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2068f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2068f4:
    // 0x2068f4: 0xc05e602  jal         func_179808
label_2068f8:
    if (ctx->pc == 0x2068F8u) {
        ctx->pc = 0x2068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068F4u;
        // 0x2068f8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2068FCu;
        goto label_2068fc;
    }
    ctx->pc = 0x2068F4u;
    SET_GPR_U32(ctx, 31, 0x2068FCu);
    ctx->pc = 0x2068F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2068F4u;
    // 0x2068f8: 0xae42008c  sw          $v0, 0x8C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x2068F4u, 0x2068FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2068FCu;
label_2068fc:
    // 0x2068fc: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x2068fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
label_206900:
    // 0x206900: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x206900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_206904:
    // 0x206904: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x206904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_206908:
    // 0x206908: 0x8e27d328  lw          $a3, -0x2CD8($s1)
    ctx->pc = 0x206908u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294955816)));
label_20690c:
    // 0x20690c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x20690cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_206910:
    // 0x206910: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x206910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_206914:
    // 0x206914: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206918:
    // 0x206918: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x206918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20691c:
    // 0x20691c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20691cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206920:
    // 0x206920: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x206920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_206924:
    // 0x206924: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206928:
    // 0x206928: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x206928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
label_20692c:
    // 0x20692c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x20692cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_206930:
    // 0x206930: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x206930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_206934:
    // 0x206934: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x206934u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206938:
    // 0x206938: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x206938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_20693c:
    // 0x20693c: 0x40f809  jalr        $v0
label_206940:
    if (ctx->pc == 0x206940u) {
        ctx->pc = 0x206940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20693Cu;
        // 0x206940: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206944u;
        goto label_206944;
    }
    ctx->pc = 0x20693Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206944u);
        ctx->pc = 0x206940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20693Cu;
        // 0x206940: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20693Cu, 0x206944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206944u;
label_206944:
    // 0x206944: 0xc067b9c  jal         func_19EE70
label_206948:
    if (ctx->pc == 0x206948u) {
        ctx->pc = 0x206948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206944u;
        // 0x206948: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20694Cu;
        goto label_20694c;
    }
    ctx->pc = 0x206944u;
    SET_GPR_U32(ctx, 31, 0x20694Cu);
    ctx->pc = 0x206948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206944u;
    // 0x206948: 0x2404008f  addiu       $a0, $zero, 0x8F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206944u, 0x20694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20694Cu;
label_20694c:
    // 0x20694c: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_206950:
    // 0x206950: 0xc073478  jal         func_1CD1E0
label_206954:
    if (ctx->pc == 0x206954u) {
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206950u;
        // 0x206954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206958u;
        goto label_206958;
    }
    ctx->pc = 0x206950u;
    SET_GPR_U32(ctx, 31, 0x206958u);
    ctx->pc = 0x206954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206950u;
    // 0x206954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x206950u, 0x206958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206958u;
label_206958:
    // 0x206958: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_20695c:
    // 0x20695c: 0x24468990  addiu       $a2, $v0, -0x7670
    ctx->pc = 0x20695cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936976));
label_206960:
    // 0x206960: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x206960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_206964:
    // 0x206964: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x206964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_206968:
    // 0x206968: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x206968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_20696c:
    // 0x20696c: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x20696cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_206970:
    // 0x206970: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x206970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_206974:
    // 0x206974: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x206974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_206978:
    // 0x206978: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x206978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_20697c:
    // 0x20697c: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x20697cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_206980:
    // 0x206980: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
label_206984:
    if (ctx->pc == 0x206984u) {
        ctx->pc = 0x206984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206980u;
        // 0x206984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206988u;
        goto label_206988;
    }
    ctx->pc = 0x206980u;
    {
        const bool branch_taken_0x206980 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x206984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206980u;
        // 0x206984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206980) {
            ctx->pc = 0x20698Cu;
            goto label_20698c;
        }
    }
    ctx->pc = 0x206988u;
label_206988:
    // 0x206988: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x206988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_20698c:
    // 0x20698c: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x20698cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_206990:
    // 0x206990: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x206990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_206994:
    // 0x206994: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x206994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
label_206998:
    // 0x206998: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x206998u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20699c:
    // 0x20699c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2069a0:
    // 0x2069a0: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x2069a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_2069a4:
    // 0x2069a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2069a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2069a8:
    // 0x2069a8: 0x24090033  addiu       $t1, $zero, 0x33
    ctx->pc = 0x2069a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_2069ac:
    // 0x2069ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2069acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2069b0:
    // 0x2069b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2069b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069b4:
    // 0x2069b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2069b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2069b8:
    // 0x2069b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2069b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2069bc:
    // 0x2069bc: 0x40f809  jalr        $v0
label_2069c0:
    if (ctx->pc == 0x2069C0u) {
        ctx->pc = 0x2069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069BCu;
        // 0x2069c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069C4u;
        goto label_2069c4;
    }
    ctx->pc = 0x2069BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2069C4u);
        ctx->pc = 0x2069C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069BCu;
        // 0x2069c0: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2069BCu, 0x2069C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2069C4u;
label_2069c4:
    // 0x2069c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2069c8:
    if (ctx->pc == 0x2069C8u) {
        ctx->pc = 0x2069CCu;
        goto label_2069cc;
    }
    ctx->pc = 0x2069C4u;
    {
        const bool branch_taken_0x2069c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069c4) {
            ctx->pc = 0x2069D4u;
            goto label_2069d4;
        }
    }
    ctx->pc = 0x2069CCu;
label_2069cc:
    // 0x2069cc: 0xc074fbc  jal         func_1D3EF0
label_2069d0:
    if (ctx->pc == 0x2069D0u) {
        ctx->pc = 0x2069D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069CCu;
        // 0x2069d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069D4u;
        goto label_2069d4;
    }
    ctx->pc = 0x2069CCu;
    SET_GPR_U32(ctx, 31, 0x2069D4u);
    ctx->pc = 0x2069D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2069CCu;
    // 0x2069d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3EF0u, 0x2069CCu, 0x2069D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069D4u;
label_2069d4:
    // 0x2069d4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_2069d8:
    if (ctx->pc == 0x2069D8u) {
        ctx->pc = 0x2069D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069D4u;
        // 0x2069d8: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2069DCu;
        goto label_2069dc;
    }
    ctx->pc = 0x2069D4u;
    {
        const bool branch_taken_0x2069d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069D4u;
        // 0x2069d8: 0xae420090  sw          $v0, 0x90($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069d4) {
            ctx->pc = 0x2069ECu;
            goto label_2069ec;
        }
    }
    ctx->pc = 0x2069DCu;
label_2069dc:
    // 0x2069dc: 0xc080ed2  jal         func_203B48
label_2069e0:
    if (ctx->pc == 0x2069E0u) {
        ctx->pc = 0x2069E4u;
        goto label_2069e4;
    }
    ctx->pc = 0x2069DCu;
    SET_GPR_U32(ctx, 31, 0x2069E4u);
    ctx->pc = 0x203B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B48u, 0x2069DCu, 0x2069E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069E4u;
label_2069e4:
    // 0x2069e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2069e8:
    if (ctx->pc == 0x2069E8u) {
        ctx->pc = 0x2069ECu;
        goto label_2069ec;
    }
    ctx->pc = 0x2069E4u;
    {
        const bool branch_taken_0x2069e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069e4) {
            ctx->pc = 0x2069F4u;
            goto label_2069f4;
        }
    }
    ctx->pc = 0x2069ECu;
label_2069ec:
    // 0x2069ec: 0xc080ece  jal         func_203B38
label_2069f0:
    if (ctx->pc == 0x2069F0u) {
        ctx->pc = 0x2069F4u;
        goto label_2069f4;
    }
    ctx->pc = 0x2069ECu;
    SET_GPR_U32(ctx, 31, 0x2069F4u);
    ctx->pc = 0x203B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B38u, 0x2069ECu, 0x2069F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2069F4u;
label_2069f4:
    // 0x2069f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2069f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2069f8:
    // 0x2069f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2069f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2069fc:
    // 0x2069fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2069fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_206a00:
    // 0x206a00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x206a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_206a04:
    // 0x206a04: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x206a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_206a08:
    // 0x206a08: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x206a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_206a0c:
    // 0x206a0c: 0xe682000c  swc1        $f2, 0xC($s4)
    ctx->pc = 0x206a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_206a10:
    // 0x206a10: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x206a10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_206a14:
    // 0x206a14: 0xc7ac0018  lwc1        $f12, 0x18($sp)
    ctx->pc = 0x206a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_206a18:
    // 0x206a18: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x206a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_206a1c:
    // 0x206a1c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206a20:
    // 0x206a20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206a24:
    // 0x206a24: 0x26470050  addiu       $a3, $s2, 0x50
    ctx->pc = 0x206a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_206a28:
    // 0x206a28: 0xc075044  jal         func_1D4110
label_206a2c:
    if (ctx->pc == 0x206A2Cu) {
        ctx->pc = 0x206A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A28u;
        // 0x206a2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A30u;
        goto label_206a30;
    }
    ctx->pc = 0x206A28u;
    SET_GPR_U32(ctx, 31, 0x206A30u);
    ctx->pc = 0x206A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A28u;
    // 0x206a2c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4110u, 0x206A28u, 0x206A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A30u;
label_206a30:
    // 0x206a30: 0xc080ebe  jal         func_203AF8
label_206a34:
    if (ctx->pc == 0x206A34u) {
        ctx->pc = 0x206A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A30u;
        // 0x206a34: 0x8ef1d328  lw          $s1, -0x2CD8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955816)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A38u;
        goto label_206a38;
    }
    ctx->pc = 0x206A30u;
    SET_GPR_U32(ctx, 31, 0x206A38u);
    ctx->pc = 0x206A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A30u;
    // 0x206a34: 0x8ef1d328  lw          $s1, -0x2CD8($s7) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294955816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x206A30u, 0x206A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A38u;
label_206a38:
    // 0x206a38: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x206a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206a3c:
    // 0x206a3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x206a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_206a40:
    // 0x206a40: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x206a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_206a44:
    // 0x206a44: 0xe440008c  swc1        $f0, 0x8C($v0)
    ctx->pc = 0x206a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 140), bits); }
label_206a48:
    // 0x206a48: 0xac500088  sw          $s0, 0x88($v0)
    ctx->pc = 0x206a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 16));
label_206a4c:
    // 0x206a4c: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x206a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206a50:
    // 0x206a50: 0xc067b9c  jal         func_19EE70
label_206a54:
    if (ctx->pc == 0x206A54u) {
        ctx->pc = 0x206A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A50u;
        // 0x206a54: 0xac650094  sw          $a1, 0x94($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A58u;
        goto label_206a58;
    }
    ctx->pc = 0x206A50u;
    SET_GPR_U32(ctx, 31, 0x206A58u);
    ctx->pc = 0x206A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A50u;
    // 0x206a54: 0xac650094  sw          $a1, 0x94($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206A50u, 0x206A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A58u;
label_206a58:
    // 0x206a58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206a5c:
    // 0x206a5c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x206a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_206a60:
    // 0x206a60: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x206a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_206a64:
    // 0x206a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206a68:
    // 0x206a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206a6c:
    // 0x206a6c: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206a70:
    // 0x206a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206a74:
    // 0x206a74: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x206a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_206a78:
    // 0x206a78: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x206a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206a7c:
    // 0x206a7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x206a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206a80:
    // 0x206a80: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x206a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206a84:
    // 0x206a84: 0xc07508c  jal         func_1D4230
label_206a88:
    if (ctx->pc == 0x206A88u) {
        ctx->pc = 0x206A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A84u;
        // 0x206a88: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A8Cu;
        goto label_206a8c;
    }
    ctx->pc = 0x206A84u;
    SET_GPR_U32(ctx, 31, 0x206A8Cu);
    ctx->pc = 0x206A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A84u;
    // 0x206a88: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x206A84u, 0x206A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A8Cu;
label_206a8c:
    // 0x206a8c: 0xc067b9c  jal         func_19EE70
label_206a90:
    if (ctx->pc == 0x206A90u) {
        ctx->pc = 0x206A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206A8Cu;
        // 0x206a90: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206A94u;
        goto label_206a94;
    }
    ctx->pc = 0x206A8Cu;
    SET_GPR_U32(ctx, 31, 0x206A94u);
    ctx->pc = 0x206A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A8Cu;
    // 0x206a90: 0x24040091  addiu       $a0, $zero, 0x91 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206A8Cu, 0x206A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A94u;
label_206a94:
    // 0x206a94: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x206a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_206a98:
    // 0x206a98: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x206a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_206a9c:
    // 0x206a9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206aa0:
    // 0x206aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206aa4:
    // 0x206aa4: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206aa8:
    // 0x206aa8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206aac:
    // 0x206aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206ab0:
    // 0x206ab0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206ab4:
    // 0x206ab4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206ab8:
    // 0x206ab8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x206ab8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206abc:
    // 0x206abc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x206abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_206ac0:
    // 0x206ac0: 0xc07508c  jal         func_1D4230
label_206ac4:
    if (ctx->pc == 0x206AC4u) {
        ctx->pc = 0x206AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC0u;
        // 0x206ac4: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AC8u;
        goto label_206ac8;
    }
    ctx->pc = 0x206AC0u;
    SET_GPR_U32(ctx, 31, 0x206AC8u);
    ctx->pc = 0x206AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC0u;
    // 0x206ac4: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x206AC0u, 0x206AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AC8u;
label_206ac8:
    // 0x206ac8: 0xc067b9c  jal         func_19EE70
label_206acc:
    if (ctx->pc == 0x206ACCu) {
        ctx->pc = 0x206ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AC8u;
        // 0x206acc: 0x24040092  addiu       $a0, $zero, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206AD0u;
        goto label_206ad0;
    }
    ctx->pc = 0x206AC8u;
    SET_GPR_U32(ctx, 31, 0x206AD0u);
    ctx->pc = 0x206ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AC8u;
    // 0x206acc: 0x24040092  addiu       $a0, $zero, 0x92 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206AC8u, 0x206AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AD0u;
label_206ad0:
    // 0x206ad0: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206ad4:
    // 0x206ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206ad8:
    // 0x206ad8: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_206adc:
    // 0x206adc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x206adcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_206ae0:
    // 0x206ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206ae4:
    // 0x206ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206ae8:
    // 0x206ae8: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x206ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_206aec:
    // 0x206aec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206aecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206af0:
    // 0x206af0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206af4:
    // 0x206af4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x206af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206af8:
    // 0x206af8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x206af8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206afc:
    // 0x206afc: 0xc07508c  jal         func_1D4230
label_206b00:
    if (ctx->pc == 0x206B00u) {
        ctx->pc = 0x206B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206AFCu;
        // 0x206b00: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B04u;
        goto label_206b04;
    }
    ctx->pc = 0x206AFCu;
    SET_GPR_U32(ctx, 31, 0x206B04u);
    ctx->pc = 0x206B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AFCu;
    // 0x206b00: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x206AFCu, 0x206B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B04u;
label_206b04:
    // 0x206b04: 0x52600016  beql        $s3, $zero, . + 4 + (0x16 << 2)
label_206b08:
    if (ctx->pc == 0x206B08u) {
        ctx->pc = 0x206B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B04u;
        // 0x206b08: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B0Cu;
        goto label_206b0c;
    }
    ctx->pc = 0x206B04u;
    {
        const bool branch_taken_0x206b04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x206b04) {
            ctx->pc = 0x206B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206B04u;
            // 0x206b08: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206B60u;
            goto label_206b60;
        }
    }
    ctx->pc = 0x206B0Cu;
label_206b0c:
    // 0x206b0c: 0xc067b9c  jal         func_19EE70
label_206b10:
    if (ctx->pc == 0x206B10u) {
        ctx->pc = 0x206B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B0Cu;
        // 0x206b10: 0x24040093  addiu       $a0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B14u;
        goto label_206b14;
    }
    ctx->pc = 0x206B0Cu;
    SET_GPR_U32(ctx, 31, 0x206B14u);
    ctx->pc = 0x206B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B0Cu;
    // 0x206b10: 0x24040093  addiu       $a0, $zero, 0x93 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206B0Cu, 0x206B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B14u;
label_206b14:
    // 0x206b14: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206b18:
    // 0x206b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x206b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206b1c:
    // 0x206b1c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x206b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_206b20:
    // 0x206b20: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x206b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_206b24:
    // 0x206b24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x206b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_206b28:
    // 0x206b28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206b2c:
    // 0x206b2c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x206b2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206b30:
    // 0x206b30: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x206b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_206b34:
    // 0x206b34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206b34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206b38:
    // 0x206b38: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_206b3c:
    // 0x206b3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206b40:
    // 0x206b40: 0xc07508c  jal         func_1D4230
label_206b44:
    if (ctx->pc == 0x206B44u) {
        ctx->pc = 0x206B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B40u;
        // 0x206b44: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B48u;
        goto label_206b48;
    }
    ctx->pc = 0x206B40u;
    SET_GPR_U32(ctx, 31, 0x206B48u);
    ctx->pc = 0x206B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B40u;
    // 0x206b44: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x206B40u, 0x206B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B48u;
label_206b48:
    // 0x206b48: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x206b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206b4c:
    // 0x206b4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x206b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_206b50:
    // 0x206b50: 0xc0752e2  jal         func_1D4B88
label_206b54:
    if (ctx->pc == 0x206B54u) {
        ctx->pc = 0x206B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B50u;
        // 0x206b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B58u;
        goto label_206b58;
    }
    ctx->pc = 0x206B50u;
    SET_GPR_U32(ctx, 31, 0x206B58u);
    ctx->pc = 0x206B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B50u;
    // 0x206b54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x206B50u, 0x206B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B58u;
label_206b58:
    // 0x206b58: 0x10000005  b           . + 4 + (0x5 << 2)
label_206b5c:
    if (ctx->pc == 0x206B5Cu) {
        ctx->pc = 0x206B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B58u;
        // 0x206b5c: 0x8e450090  lw          $a1, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B60u;
        goto label_206b60;
    }
    ctx->pc = 0x206B58u;
    {
        const bool branch_taken_0x206b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B58u;
        // 0x206b5c: 0x8e450090  lw          $a1, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b58) {
            ctx->pc = 0x206B70u;
            goto label_206b70;
        }
    }
    ctx->pc = 0x206B60u;
label_206b60:
    // 0x206b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206b64:
    // 0x206b64: 0xc0752e2  jal         func_1D4B88
label_206b68:
    if (ctx->pc == 0x206B68u) {
        ctx->pc = 0x206B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B64u;
        // 0x206b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B6Cu;
        goto label_206b6c;
    }
    ctx->pc = 0x206B64u;
    SET_GPR_U32(ctx, 31, 0x206B6Cu);
    ctx->pc = 0x206B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B64u;
    // 0x206b68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x206B64u, 0x206B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B6Cu;
label_206b6c:
    // 0x206b6c: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x206b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_206b70:
    // 0x206b70: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206b74:
    // 0x206b74: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x206b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_206b78:
    // 0x206b78: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x206b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_206b7c:
    // 0x206b7c: 0x60f809  jalr        $v1
label_206b80:
    if (ctx->pc == 0x206B80u) {
        ctx->pc = 0x206B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B7Cu;
        // 0x206b80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B84u;
        goto label_206b84;
    }
    ctx->pc = 0x206B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206B84u);
        ctx->pc = 0x206B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B7Cu;
        // 0x206b80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206B7Cu, 0x206B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206B84u;
label_206b84:
    // 0x206b84: 0xc080ebe  jal         func_203AF8
label_206b88:
    if (ctx->pc == 0x206B88u) {
        ctx->pc = 0x206B8Cu;
        goto label_206b8c;
    }
    ctx->pc = 0x206B84u;
    SET_GPR_U32(ctx, 31, 0x206B8Cu);
    ctx->pc = 0x203AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203AF8u, 0x206B84u, 0x206B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B8Cu;
label_206b8c:
    // 0x206b8c: 0xc080ec2  jal         func_203B08
label_206b90:
    if (ctx->pc == 0x206B90u) {
        ctx->pc = 0x206B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B8Cu;
        // 0x206b90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x206B94u;
        goto label_206b94;
    }
    ctx->pc = 0x206B8Cu;
    SET_GPR_U32(ctx, 31, 0x206B94u);
    ctx->pc = 0x206B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B8Cu;
    // 0x206b90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x203B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203B08u, 0x206B8Cu, 0x206B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B94u;
label_206b94:
    // 0x206b94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_206b98:
    // 0x206b98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_206b9c:
    // 0x206b9c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x206b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_206ba0:
    // 0x206ba0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x206ba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_206ba4:
    // 0x206ba4: 0x24488950  addiu       $t0, $v0, -0x76B0
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936912));
label_206ba8:
    // 0x206ba8: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x206ba8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_206bac:
    // 0x206bac: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x206bacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_206bb0:
    // 0x206bb0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x206bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_206bb4:
    // 0x206bb4: 0x24a589b0  addiu       $a1, $a1, -0x7650
    ctx->pc = 0x206bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
label_206bb8:
    // 0x206bb8: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x206bb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_206bbc:
    // 0x206bbc: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x206bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_206bc0:
    // 0x206bc0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x206bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_206bc4:
    // 0x206bc4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x206bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_206bc8:
    // 0x206bc8: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x206bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_206bcc:
    // 0x206bcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x206bccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206bd0:
    // 0x206bd0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x206bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_206bd4:
    // 0x206bd4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x206bd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206bd8:
    // 0x206bd8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x206bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_206bdc:
    // 0x206bdc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x206bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_206be0:
    // 0x206be0: 0x40f809  jalr        $v0
label_206be4:
    if (ctx->pc == 0x206BE4u) {
        ctx->pc = 0x206BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE0u;
        // 0x206be4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BE8u;
        goto label_206be8;
    }
    ctx->pc = 0x206BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206BE8u);
        ctx->pc = 0x206BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE0u;
        // 0x206be4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206BE0u, 0x206BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206BE8u;
label_206be8:
    // 0x206be8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_206bec:
    if (ctx->pc == 0x206BECu) {
        ctx->pc = 0x206BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BE8u;
        // 0x206bec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BF0u;
        goto label_206bf0;
    }
    ctx->pc = 0x206BE8u;
    {
        const bool branch_taken_0x206be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206be8) {
            ctx->pc = 0x206BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206BE8u;
            // 0x206bec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206BFCu;
            goto label_206bfc;
        }
    }
    ctx->pc = 0x206BF0u;
label_206bf0:
    // 0x206bf0: 0xc073a9c  jal         func_1CEA70
label_206bf4:
    if (ctx->pc == 0x206BF4u) {
        ctx->pc = 0x206BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206BF0u;
        // 0x206bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206BF8u;
        goto label_206bf8;
    }
    ctx->pc = 0x206BF0u;
    SET_GPR_U32(ctx, 31, 0x206BF8u);
    ctx->pc = 0x206BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206BF0u;
    // 0x206bf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA70u, 0x206BF0u, 0x206BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206BF8u;
label_206bf8:
    // 0x206bf8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x206bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206bfc:
    // 0x206bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x206bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_206c00:
    // 0x206c00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c04:
    // 0x206c04: 0xc073ad0  jal         func_1CEB40
label_206c08:
    if (ctx->pc == 0x206C08u) {
        ctx->pc = 0x206C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C04u;
        // 0x206c08: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C0Cu;
        goto label_206c0c;
    }
    ctx->pc = 0x206C04u;
    SET_GPR_U32(ctx, 31, 0x206C0Cu);
    ctx->pc = 0x206C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C04u;
    // 0x206c08: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB40u, 0x206C04u, 0x206C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C0Cu;
label_206c0c:
    // 0x206c0c: 0xc067b9c  jal         func_19EE70
label_206c10:
    if (ctx->pc == 0x206C10u) {
        ctx->pc = 0x206C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C0Cu;
        // 0x206c10: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C14u;
        goto label_206c14;
    }
    ctx->pc = 0x206C0Cu;
    SET_GPR_U32(ctx, 31, 0x206C14u);
    ctx->pc = 0x206C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C0Cu;
    // 0x206c10: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x206C0Cu, 0x206C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C14u;
label_206c14:
    // 0x206c14: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x206c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_206c18:
    // 0x206c18: 0xc073b0a  jal         func_1CEC28
label_206c1c:
    if (ctx->pc == 0x206C1Cu) {
        ctx->pc = 0x206C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C18u;
        // 0x206c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C20u;
        goto label_206c20;
    }
    ctx->pc = 0x206C18u;
    SET_GPR_U32(ctx, 31, 0x206C20u);
    ctx->pc = 0x206C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206C18u;
    // 0x206c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC28u, 0x206C18u, 0x206C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206C20u;
label_206c20:
    // 0x206c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c24:
    // 0x206c24: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x206c24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_206c28:
    // 0x206c28: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x206c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_206c2c:
    // 0x206c2c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x206c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_206c30:
    // 0x206c30: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x206c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_206c34:
    // 0x206c34: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x206c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_206c38:
    // 0x206c38: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x206c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_206c3c:
    // 0x206c3c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x206c3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_206c40:
    // 0x206c40: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x206c40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_206c44:
    // 0x206c44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x206c44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_206c48:
    // 0x206c48: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x206c48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_206c4c:
    // 0x206c4c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x206c4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_206c50:
    // 0x206c50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x206c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_206c54:
    // 0x206c54: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x206c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_206c58:
    // 0x206c58: 0x3e00008  jr          $ra
label_206c5c:
    if (ctx->pc == 0x206C5Cu) {
        ctx->pc = 0x206C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C58u;
        // 0x206c5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206C60u;
        goto label_fallthrough_0x206c58;
    }
    ctx->pc = 0x206C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206C58u;
        // 0x206c5c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206c58:
    ctx->pc = 0x206C60u;
}
