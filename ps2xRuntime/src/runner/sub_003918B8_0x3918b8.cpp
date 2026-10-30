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

// Function: sub_003918B8
// Address: 0x3918b8 - 0x391b08
void sub_003918B8_0x3918b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003918B8_0x3918b8");
#endif

    switch (ctx->pc) {
        case 0x3918b8u: goto label_3918b8;
        case 0x3918bcu: goto label_3918bc;
        case 0x3918c0u: goto label_3918c0;
        case 0x3918c4u: goto label_3918c4;
        case 0x3918c8u: goto label_3918c8;
        case 0x3918ccu: goto label_3918cc;
        case 0x3918d0u: goto label_3918d0;
        case 0x3918d4u: goto label_3918d4;
        case 0x3918d8u: goto label_3918d8;
        case 0x3918dcu: goto label_3918dc;
        case 0x3918e0u: goto label_3918e0;
        case 0x3918e4u: goto label_3918e4;
        case 0x3918e8u: goto label_3918e8;
        case 0x3918ecu: goto label_3918ec;
        case 0x3918f0u: goto label_3918f0;
        case 0x3918f4u: goto label_3918f4;
        case 0x3918f8u: goto label_3918f8;
        case 0x3918fcu: goto label_3918fc;
        case 0x391900u: goto label_391900;
        case 0x391904u: goto label_391904;
        case 0x391908u: goto label_391908;
        case 0x39190cu: goto label_39190c;
        case 0x391910u: goto label_391910;
        case 0x391914u: goto label_391914;
        case 0x391918u: goto label_391918;
        case 0x39191cu: goto label_39191c;
        case 0x391920u: goto label_391920;
        case 0x391924u: goto label_391924;
        case 0x391928u: goto label_391928;
        case 0x39192cu: goto label_39192c;
        case 0x391930u: goto label_391930;
        case 0x391934u: goto label_391934;
        case 0x391938u: goto label_391938;
        case 0x39193cu: goto label_39193c;
        case 0x391940u: goto label_391940;
        case 0x391944u: goto label_391944;
        case 0x391948u: goto label_391948;
        case 0x39194cu: goto label_39194c;
        case 0x391950u: goto label_391950;
        case 0x391954u: goto label_391954;
        case 0x391958u: goto label_391958;
        case 0x39195cu: goto label_39195c;
        case 0x391960u: goto label_391960;
        case 0x391964u: goto label_391964;
        case 0x391968u: goto label_391968;
        case 0x39196cu: goto label_39196c;
        case 0x391970u: goto label_391970;
        case 0x391974u: goto label_391974;
        case 0x391978u: goto label_391978;
        case 0x39197cu: goto label_39197c;
        case 0x391980u: goto label_391980;
        case 0x391984u: goto label_391984;
        case 0x391988u: goto label_391988;
        case 0x39198cu: goto label_39198c;
        case 0x391990u: goto label_391990;
        case 0x391994u: goto label_391994;
        case 0x391998u: goto label_391998;
        case 0x39199cu: goto label_39199c;
        case 0x3919a0u: goto label_3919a0;
        case 0x3919a4u: goto label_3919a4;
        case 0x3919a8u: goto label_3919a8;
        case 0x3919acu: goto label_3919ac;
        case 0x3919b0u: goto label_3919b0;
        case 0x3919b4u: goto label_3919b4;
        case 0x3919b8u: goto label_3919b8;
        case 0x3919bcu: goto label_3919bc;
        case 0x3919c0u: goto label_3919c0;
        case 0x3919c4u: goto label_3919c4;
        case 0x3919c8u: goto label_3919c8;
        case 0x3919ccu: goto label_3919cc;
        case 0x3919d0u: goto label_3919d0;
        case 0x3919d4u: goto label_3919d4;
        case 0x3919d8u: goto label_3919d8;
        case 0x3919dcu: goto label_3919dc;
        case 0x3919e0u: goto label_3919e0;
        case 0x3919e4u: goto label_3919e4;
        case 0x3919e8u: goto label_3919e8;
        case 0x3919ecu: goto label_3919ec;
        case 0x3919f0u: goto label_3919f0;
        case 0x3919f4u: goto label_3919f4;
        case 0x3919f8u: goto label_3919f8;
        case 0x3919fcu: goto label_3919fc;
        case 0x391a00u: goto label_391a00;
        case 0x391a04u: goto label_391a04;
        case 0x391a08u: goto label_391a08;
        case 0x391a0cu: goto label_391a0c;
        case 0x391a10u: goto label_391a10;
        case 0x391a14u: goto label_391a14;
        case 0x391a18u: goto label_391a18;
        case 0x391a1cu: goto label_391a1c;
        case 0x391a20u: goto label_391a20;
        case 0x391a24u: goto label_391a24;
        case 0x391a28u: goto label_391a28;
        case 0x391a2cu: goto label_391a2c;
        case 0x391a30u: goto label_391a30;
        case 0x391a34u: goto label_391a34;
        case 0x391a38u: goto label_391a38;
        case 0x391a3cu: goto label_391a3c;
        case 0x391a40u: goto label_391a40;
        case 0x391a44u: goto label_391a44;
        case 0x391a48u: goto label_391a48;
        case 0x391a4cu: goto label_391a4c;
        case 0x391a50u: goto label_391a50;
        case 0x391a54u: goto label_391a54;
        case 0x391a58u: goto label_391a58;
        case 0x391a5cu: goto label_391a5c;
        case 0x391a60u: goto label_391a60;
        case 0x391a64u: goto label_391a64;
        case 0x391a68u: goto label_391a68;
        case 0x391a6cu: goto label_391a6c;
        case 0x391a70u: goto label_391a70;
        case 0x391a74u: goto label_391a74;
        case 0x391a78u: goto label_391a78;
        case 0x391a7cu: goto label_391a7c;
        case 0x391a80u: goto label_391a80;
        case 0x391a84u: goto label_391a84;
        case 0x391a88u: goto label_391a88;
        case 0x391a8cu: goto label_391a8c;
        case 0x391a90u: goto label_391a90;
        case 0x391a94u: goto label_391a94;
        case 0x391a98u: goto label_391a98;
        case 0x391a9cu: goto label_391a9c;
        case 0x391aa0u: goto label_391aa0;
        case 0x391aa4u: goto label_391aa4;
        case 0x391aa8u: goto label_391aa8;
        case 0x391aacu: goto label_391aac;
        case 0x391ab0u: goto label_391ab0;
        case 0x391ab4u: goto label_391ab4;
        case 0x391ab8u: goto label_391ab8;
        case 0x391abcu: goto label_391abc;
        case 0x391ac0u: goto label_391ac0;
        case 0x391ac4u: goto label_391ac4;
        case 0x391ac8u: goto label_391ac8;
        case 0x391accu: goto label_391acc;
        case 0x391ad0u: goto label_391ad0;
        case 0x391ad4u: goto label_391ad4;
        case 0x391ad8u: goto label_391ad8;
        case 0x391adcu: goto label_391adc;
        case 0x391ae0u: goto label_391ae0;
        case 0x391ae4u: goto label_391ae4;
        case 0x391ae8u: goto label_391ae8;
        case 0x391aecu: goto label_391aec;
        case 0x391af0u: goto label_391af0;
        case 0x391af4u: goto label_391af4;
        case 0x391af8u: goto label_391af8;
        case 0x391afcu: goto label_391afc;
        case 0x391b00u: goto label_391b00;
        case 0x391b04u: goto label_391b04;
        default: break;
    }

    ctx->pc = 0x3918b8u;

label_3918b8:
    // 0x3918b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3918b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3918bc:
    // 0x3918bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3918bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3918c0:
    // 0x3918c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3918c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3918c4:
    // 0x3918c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3918c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3918c8:
    // 0x3918c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3918c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3918cc:
    // 0x3918cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3918ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3918d0:
    // 0x3918d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3918d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3918d4:
    // 0x3918d4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3918d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3918d8:
    // 0x3918d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3918d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3918dc:
    // 0x3918dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3918dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3918e0:
    // 0x3918e0: 0xc0e8570  jal         func_3A15C0
label_3918e4:
    if (ctx->pc == 0x3918E4u) {
        ctx->pc = 0x3918E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918E0u;
        // 0x3918e4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918E8u;
        goto label_3918e8;
    }
    ctx->pc = 0x3918E0u;
    SET_GPR_U32(ctx, 31, 0x3918E8u);
    ctx->pc = 0x3918E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3918E0u;
    // 0x3918e4: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x3918E0u, 0x3918E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3918E8u;
label_3918e8:
    // 0x3918e8: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x3918e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_3918ec:
    // 0x3918ec: 0xc0e44f6  jal         func_3913D8
label_3918f0:
    if (ctx->pc == 0x3918F0u) {
        ctx->pc = 0x3918F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918ECu;
        // 0x3918f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3918F4u;
        goto label_3918f4;
    }
    ctx->pc = 0x3918ECu;
    SET_GPR_U32(ctx, 31, 0x3918F4u);
    ctx->pc = 0x3918F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3918ECu;
    // 0x3918f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3913D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3913D8u, 0x3918ECu, 0x3918F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3918F4u;
label_3918f4:
    // 0x3918f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3918f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3918f8:
    // 0x3918f8: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x3918f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_3918fc:
    // 0x3918fc: 0xc0e44cc  jal         func_391330
label_391900:
    if (ctx->pc == 0x391900u) {
        ctx->pc = 0x391900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3918FCu;
        // 0x391900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391904u;
        goto label_391904;
    }
    ctx->pc = 0x3918FCu;
    SET_GPR_U32(ctx, 31, 0x391904u);
    ctx->pc = 0x391900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3918FCu;
    // 0x391900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3918FCu, 0x391904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391904u;
label_391904:
    // 0x391904: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x391904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_391908:
    // 0x391908: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x391908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_39190c:
    // 0x39190c: 0xae6300c0  sw          $v1, 0xC0($s3)
    ctx->pc = 0x39190cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 3));
label_391910:
    // 0x391910: 0xa6700112  sh          $s0, 0x112($s3)
    ctx->pc = 0x391910u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 274), (uint16_t)GPR_U32(ctx, 16));
label_391914:
    // 0x391914: 0x24910190  addiu       $s1, $a0, 0x190
    ctx->pc = 0x391914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
label_391918:
    // 0x391918: 0x84900190  lh          $s0, 0x190($a0)
    ctx->pc = 0x391918u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 400)));
label_39191c:
    // 0x39191c: 0x9444005c  lhu         $a0, 0x5C($v0)
    ctx->pc = 0x39191cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
label_391920:
    // 0x391920: 0xc0f15b2  jal         func_3C56C8
label_391924:
    if (ctx->pc == 0x391924u) {
        ctx->pc = 0x391924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391920u;
        // 0x391924: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391928u;
        goto label_391928;
    }
    ctx->pc = 0x391920u;
    SET_GPR_U32(ctx, 31, 0x391928u);
    ctx->pc = 0x391924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391920u;
    // 0x391924: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56C8u, 0x391920u, 0x391928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391928u;
label_391928:
    // 0x391928: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x391928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39192c:
    // 0x39192c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39192cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391930:
    // 0x391930: 0x60f809  jalr        $v1
label_391934:
    if (ctx->pc == 0x391934u) {
        ctx->pc = 0x391934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391930u;
        // 0x391934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391938u;
        goto label_391938;
    }
    ctx->pc = 0x391930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391938u);
        ctx->pc = 0x391934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391930u;
        // 0x391934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391930u, 0x391938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391938u;
label_391938:
    // 0x391938: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x391938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_39193c:
    // 0x39193c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x39193cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_391940:
    // 0x391940: 0x8ca4d268  lw          $a0, -0x2D98($a1)
    ctx->pc = 0x391940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955624)));
label_391944:
    // 0x391944: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x391944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_391948:
    // 0x391948: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x391948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39194c:
    // 0x39194c: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x39194cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_391950:
    // 0x391950: 0xae6400c8  sw          $a0, 0xC8($s3)
    ctx->pc = 0x391950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 4));
label_391954:
    // 0x391954: 0x8ca2d268  lw          $v0, -0x2D98($a1)
    ctx->pc = 0x391954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294955624)));
label_391958:
    // 0x391958: 0xae6000d0  sw          $zero, 0xD0($s3)
    ctx->pc = 0x391958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 0));
label_39195c:
    // 0x39195c: 0xae6200cc  sw          $v0, 0xCC($s3)
    ctx->pc = 0x39195cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 204), GPR_U32(ctx, 2));
label_391960:
    // 0x391960: 0xae6000c4  sw          $zero, 0xC4($s3)
    ctx->pc = 0x391960u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 0));
label_391964:
    // 0x391964: 0xae6000d4  sw          $zero, 0xD4($s3)
    ctx->pc = 0x391964u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 0));
label_391968:
    // 0x391968: 0xae7200d8  sw          $s2, 0xD8($s3)
    ctx->pc = 0x391968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 18));
label_39196c:
    // 0x39196c: 0xae7200dc  sw          $s2, 0xDC($s3)
    ctx->pc = 0x39196cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 18));
label_391970:
    // 0x391970: 0xae7200e0  sw          $s2, 0xE0($s3)
    ctx->pc = 0x391970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 18));
label_391974:
    // 0x391974: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x391974u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_391978:
    // 0x391978: 0xa2660108  sb          $a2, 0x108($s3)
    ctx->pc = 0x391978u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 264), (uint8_t)GPR_U32(ctx, 6));
label_39197c:
    // 0x39197c: 0x7e6200b0  sq          $v0, 0xB0($s3)
    ctx->pc = 0x39197cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 2));
label_391980:
    // 0x391980: 0xae6000f4  sw          $zero, 0xF4($s3)
    ctx->pc = 0x391980u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 244), GPR_U32(ctx, 0));
label_391984:
    // 0x391984: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x391984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
label_391988:
    // 0x391988: 0xae600130  sw          $zero, 0x130($s3)
    ctx->pc = 0x391988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 304), GPR_U32(ctx, 0));
label_39198c:
    // 0x39198c: 0xae600104  sw          $zero, 0x104($s3)
    ctx->pc = 0x39198cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 260), GPR_U32(ctx, 0));
label_391990:
    // 0x391990: 0xae600134  sw          $zero, 0x134($s3)
    ctx->pc = 0x391990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
label_391994:
    // 0x391994: 0xae600138  sw          $zero, 0x138($s3)
    ctx->pc = 0x391994u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 312), GPR_U32(ctx, 0));
label_391998:
    // 0x391998: 0xa2600109  sb          $zero, 0x109($s3)
    ctx->pc = 0x391998u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 265), (uint8_t)GPR_U32(ctx, 0));
label_39199c:
    // 0x39199c: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x39199cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
label_3919a0:
    // 0x3919a0: 0xae60011c  sw          $zero, 0x11C($s3)
    ctx->pc = 0x3919a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 0));
label_3919a4:
    // 0x3919a4: 0xa2600116  sb          $zero, 0x116($s3)
    ctx->pc = 0x3919a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 278), (uint8_t)GPR_U32(ctx, 0));
label_3919a8:
    // 0x3919a8: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x3919a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950192)));
label_3919ac:
    // 0x3919ac: 0xc0e8568  jal         func_3A15A0
label_3919b0:
    if (ctx->pc == 0x3919B0u) {
        ctx->pc = 0x3919B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919ACu;
        // 0x3919b0: 0xae6200e8  sw          $v0, 0xE8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919B4u;
        goto label_3919b4;
    }
    ctx->pc = 0x3919ACu;
    SET_GPR_U32(ctx, 31, 0x3919B4u);
    ctx->pc = 0x3919B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919ACu;
    // 0x3919b0: 0xae6200e8  sw          $v0, 0xE8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x3919ACu, 0x3919B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919B4u;
label_3919b4:
    // 0x3919b4: 0xae6000ec  sw          $zero, 0xEC($s3)
    ctx->pc = 0x3919b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 0));
label_3919b8:
    // 0x3919b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3919b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3919bc:
    // 0x3919bc: 0xae6000f0  sw          $zero, 0xF0($s3)
    ctx->pc = 0x3919bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 0));
label_3919c0:
    // 0x3919c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3919c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3919c4:
    // 0x3919c4: 0xc0e549a  jal         func_395268
label_3919c8:
    if (ctx->pc == 0x3919C8u) {
        ctx->pc = 0x3919C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919C4u;
        // 0x3919c8: 0xe6600050  swc1        $f0, 0x50($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919CCu;
        goto label_3919cc;
    }
    ctx->pc = 0x3919C4u;
    SET_GPR_U32(ctx, 31, 0x3919CCu);
    ctx->pc = 0x3919C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919C4u;
    // 0x3919c8: 0xe6600050  swc1        $f0, 0x50($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x395268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395268u, 0x3919C4u, 0x3919CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919CCu;
label_3919cc:
    // 0x3919cc: 0xa260010f  sb          $zero, 0x10F($s3)
    ctx->pc = 0x3919ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 271), (uint8_t)GPR_U32(ctx, 0));
label_3919d0:
    // 0x3919d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3919d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3919d4:
    // 0x3919d4: 0xa260010a  sb          $zero, 0x10A($s3)
    ctx->pc = 0x3919d4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 266), (uint8_t)GPR_U32(ctx, 0));
label_3919d8:
    // 0x3919d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3919d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3919dc:
    // 0x3919dc: 0xc0e5748  jal         func_395D20
label_3919e0:
    if (ctx->pc == 0x3919E0u) {
        ctx->pc = 0x3919E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919DCu;
        // 0x3919e0: 0xa260010b  sb          $zero, 0x10B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 267), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919E4u;
        goto label_3919e4;
    }
    ctx->pc = 0x3919DCu;
    SET_GPR_U32(ctx, 31, 0x3919E4u);
    ctx->pc = 0x3919E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919DCu;
    // 0x3919e0: 0xa260010b  sb          $zero, 0x10B($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 267), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x3919DCu, 0x3919E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919E4u;
label_3919e4:
    // 0x3919e4: 0xa6720114  sh          $s2, 0x114($s3)
    ctx->pc = 0x3919e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 276), (uint16_t)GPR_U32(ctx, 18));
label_3919e8:
    // 0x3919e8: 0xae600124  sw          $zero, 0x124($s3)
    ctx->pc = 0x3919e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 0));
label_3919ec:
    // 0x3919ec: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x3919ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_3919f0:
    // 0x3919f0: 0xc0e44cc  jal         func_391330
label_3919f4:
    if (ctx->pc == 0x3919F4u) {
        ctx->pc = 0x3919F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3919F0u;
        // 0x3919f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3919F8u;
        goto label_3919f8;
    }
    ctx->pc = 0x3919F0u;
    SET_GPR_U32(ctx, 31, 0x3919F8u);
    ctx->pc = 0x3919F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3919F0u;
    // 0x3919f4: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3919F0u, 0x3919F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3919F8u;
label_3919f8:
    // 0x3919f8: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x3919f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
label_3919fc:
    // 0x3919fc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3919fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_391a00:
    // 0x391a00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_391a04:
    if (ctx->pc == 0x391A04u) {
        ctx->pc = 0x391A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A00u;
        // 0x391a04: 0xa263010d  sb          $v1, 0x10D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 269), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A08u;
        goto label_391a08;
    }
    ctx->pc = 0x391A00u;
    {
        const bool branch_taken_0x391a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A00u;
        // 0x391a04: 0xa263010d  sb          $v1, 0x10D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 269), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a00) {
            ctx->pc = 0x391A10u;
            goto label_391a10;
        }
    }
    ctx->pc = 0x391A08u;
label_391a08:
    // 0x391a08: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x391a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_391a0c:
    // 0x391a0c: 0xa262010d  sb          $v0, 0x10D($s3)
    ctx->pc = 0x391a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 269), (uint8_t)GPR_U32(ctx, 2));
label_391a10:
    // 0x391a10: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x391a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_391a14:
    // 0x391a14: 0xc0e44cc  jal         func_391330
label_391a18:
    if (ctx->pc == 0x391A18u) {
        ctx->pc = 0x391A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A14u;
        // 0x391a18: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A1Cu;
        goto label_391a1c;
    }
    ctx->pc = 0x391A14u;
    SET_GPR_U32(ctx, 31, 0x391A1Cu);
    ctx->pc = 0x391A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A14u;
    // 0x391a18: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391A14u, 0x391A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A1Cu;
label_391a1c:
    // 0x391a1c: 0x8043005b  lb          $v1, 0x5B($v0)
    ctx->pc = 0x391a1cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 91)));
label_391a20:
    // 0x391a20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x391a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_391a24:
    // 0x391a24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_391a28:
    if (ctx->pc == 0x391A28u) {
        ctx->pc = 0x391A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A24u;
        // 0x391a28: 0xa263010e  sb          $v1, 0x10E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 270), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A2Cu;
        goto label_391a2c;
    }
    ctx->pc = 0x391A24u;
    {
        const bool branch_taken_0x391a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A24u;
        // 0x391a28: 0xa263010e  sb          $v1, 0x10E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 270), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391a24) {
            ctx->pc = 0x391A34u;
            goto label_391a34;
        }
    }
    ctx->pc = 0x391A2Cu;
label_391a2c:
    // 0x391a2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x391a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_391a30:
    // 0x391a30: 0xa262010e  sb          $v0, 0x10E($s3)
    ctx->pc = 0x391a30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 270), (uint8_t)GPR_U32(ctx, 2));
label_391a34:
    // 0x391a34: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x391a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_391a38:
    // 0x391a38: 0xc0e44cc  jal         func_391330
label_391a3c:
    if (ctx->pc == 0x391A3Cu) {
        ctx->pc = 0x391A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A38u;
        // 0x391a3c: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A40u;
        goto label_391a40;
    }
    ctx->pc = 0x391A38u;
    SET_GPR_U32(ctx, 31, 0x391A40u);
    ctx->pc = 0x391A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A38u;
    // 0x391a3c: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391A38u, 0x391A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A40u;
label_391a40:
    // 0x391a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391a44:
    // 0x391a44: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x391a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_391a48:
    // 0x391a48: 0x80820086  lb          $v0, 0x86($a0)
    ctx->pc = 0x391a48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
label_391a4c:
    // 0x391a4c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_391a50:
    if (ctx->pc == 0x391A50u) {
        ctx->pc = 0x391A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A4Cu;
        // 0x391a50: 0x94820058  lhu         $v0, 0x58($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A54u;
        goto label_391a54;
    }
    ctx->pc = 0x391A4Cu;
    {
        const bool branch_taken_0x391a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x391a4c) {
            ctx->pc = 0x391A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391A4Cu;
            // 0x391a50: 0x94820058  lhu         $v0, 0x58($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391A60u;
            goto label_391a60;
        }
    }
    ctx->pc = 0x391A54u;
label_391a54:
    // 0x391a54: 0x8082005a  lb          $v0, 0x5A($a0)
    ctx->pc = 0x391a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 90)));
label_391a58:
    // 0x391a58: 0xae620124  sw          $v0, 0x124($s3)
    ctx->pc = 0x391a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 2));
label_391a5c:
    // 0x391a5c: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x391a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
label_391a60:
    // 0x391a60: 0xa2600117  sb          $zero, 0x117($s3)
    ctx->pc = 0x391a60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 279), (uint8_t)GPR_U32(ctx, 0));
label_391a64:
    // 0x391a64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x391a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391a68:
    // 0x391a68: 0xa260013c  sb          $zero, 0x13C($s3)
    ctx->pc = 0x391a68u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 316), (uint8_t)GPR_U32(ctx, 0));
label_391a6c:
    // 0x391a6c: 0xa260010c  sb          $zero, 0x10C($s3)
    ctx->pc = 0x391a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 268), (uint8_t)GPR_U32(ctx, 0));
label_391a70:
    // 0x391a70: 0xc0e4752  jal         func_391D48
label_391a74:
    if (ctx->pc == 0x391A74u) {
        ctx->pc = 0x391A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A70u;
        // 0x391a74: 0xae620128  sw          $v0, 0x128($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A78u;
        goto label_391a78;
    }
    ctx->pc = 0x391A70u;
    SET_GPR_U32(ctx, 31, 0x391A78u);
    ctx->pc = 0x391A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A70u;
    // 0x391a74: 0xae620128  sw          $v0, 0x128($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391D48u, 0x391A70u, 0x391A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A78u;
label_391a78:
    // 0x391a78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x391a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_391a7c:
    // 0x391a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391a80:
    // 0x391a80: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x391a80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_391a84:
    // 0x391a84: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x391a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_391a88:
    // 0x391a88: 0x60f809  jalr        $v1
label_391a8c:
    if (ctx->pc == 0x391A8Cu) {
        ctx->pc = 0x391A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A88u;
        // 0x391a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391A90u;
        goto label_391a90;
    }
    ctx->pc = 0x391A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x391A90u);
        ctx->pc = 0x391A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A88u;
        // 0x391a8c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391A88u, 0x391A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391A90u;
label_391a90:
    // 0x391a90: 0xc0e3fce  jal         func_38FF38
label_391a94:
    if (ctx->pc == 0x391A94u) {
        ctx->pc = 0x391A98u;
        goto label_391a98;
    }
    ctx->pc = 0x391A90u;
    SET_GPR_U32(ctx, 31, 0x391A98u);
    ctx->pc = 0x38FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF38u, 0x391A90u, 0x391A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391A98u;
label_391a98:
    // 0x391a98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x391a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391a9c:
    // 0x391a9c: 0xc0e3ff4  jal         func_38FFD0
label_391aa0:
    if (ctx->pc == 0x391AA0u) {
        ctx->pc = 0x391AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391A9Cu;
        // 0x391aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AA4u;
        goto label_391aa4;
    }
    ctx->pc = 0x391A9Cu;
    SET_GPR_U32(ctx, 31, 0x391AA4u);
    ctx->pc = 0x391AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391A9Cu;
    // 0x391aa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x391A9Cu, 0x391AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AA4u;
label_391aa4:
    // 0x391aa4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x391aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391aa8:
    // 0x391aa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391aac:
    // 0x391aac: 0xc047e78  jal         func_11F9E0
label_391ab0:
    if (ctx->pc == 0x391AB0u) {
        ctx->pc = 0x391AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AACu;
        // 0x391ab0: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AB4u;
        goto label_391ab4;
    }
    ctx->pc = 0x391AACu;
    SET_GPR_U32(ctx, 31, 0x391AB4u);
    ctx->pc = 0x391AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391AACu;
    // 0x391ab0: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x391AACu, 0x391AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AB4u;
label_391ab4:
    // 0x391ab4: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x391ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_391ab8:
    // 0x391ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_391abc:
    // 0x391abc: 0xc0e44cc  jal         func_391330
label_391ac0:
    if (ctx->pc == 0x391AC0u) {
        ctx->pc = 0x391AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ABCu;
        // 0x391ac0: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AC4u;
        goto label_391ac4;
    }
    ctx->pc = 0x391ABCu;
    SET_GPR_U32(ctx, 31, 0x391AC4u);
    ctx->pc = 0x391AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391ABCu;
    // 0x391ac0: 0x96650112  lhu         $a1, 0x112($s3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x391ABCu, 0x391AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AC4u;
label_391ac4:
    // 0x391ac4: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x391ac4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_391ac8:
    // 0x391ac8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x391ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_391acc:
    // 0x391acc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_391ad0:
    if (ctx->pc == 0x391AD0u) {
        ctx->pc = 0x391AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ACCu;
        // 0x391ad0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AD4u;
        goto label_391ad4;
    }
    ctx->pc = 0x391ACCu;
    {
        const bool branch_taken_0x391acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x391acc) {
            ctx->pc = 0x391AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391ACCu;
            // 0x391ad0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391AE8u;
            goto label_391ae8;
        }
    }
    ctx->pc = 0x391AD4u;
label_391ad4:
    // 0x391ad4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_391ad8:
    if (ctx->pc == 0x391AD8u) {
        ctx->pc = 0x391AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AD4u;
        // 0x391ad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391ADCu;
        goto label_391adc;
    }
    ctx->pc = 0x391AD4u;
    {
        const bool branch_taken_0x391ad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x391AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AD4u;
        // 0x391ad8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391ad4) {
            ctx->pc = 0x391AE8u;
            goto label_391ae8;
        }
    }
    ctx->pc = 0x391ADCu;
label_391adc:
    // 0x391adc: 0xc049914  jal         func_126450
label_391ae0:
    if (ctx->pc == 0x391AE0u) {
        ctx->pc = 0x391AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391ADCu;
        // 0x391ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391AE4u;
        goto label_391ae4;
    }
    ctx->pc = 0x391ADCu;
    SET_GPR_U32(ctx, 31, 0x391AE4u);
    ctx->pc = 0x391AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391ADCu;
    // 0x391ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126450u, 0x391ADCu, 0x391AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391AE4u;
label_391ae4:
    // 0x391ae4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x391ae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_391ae8:
    // 0x391ae8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x391ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_391aec:
    // 0x391aec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x391aecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_391af0:
    // 0x391af0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x391af0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_391af4:
    // 0x391af4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x391af4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_391af8:
    // 0x391af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_391afc:
    // 0x391afc: 0x3e00008  jr          $ra
label_391b00:
    if (ctx->pc == 0x391B00u) {
        ctx->pc = 0x391B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AFCu;
        // 0x391b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391B04u;
        goto label_391b04;
    }
    ctx->pc = 0x391AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391AFCu;
        // 0x391b00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391B04u;
label_391b04:
    // 0x391b04: 0x0  nop
    ctx->pc = 0x391b04u;
    // NOP
    ctx->pc = 0x391b08u;
}
