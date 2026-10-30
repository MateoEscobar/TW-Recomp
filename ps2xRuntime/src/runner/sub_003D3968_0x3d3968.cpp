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

// Function: sub_003D3968
// Address: 0x3d3968 - 0x3d3af0
void sub_003D3968_0x3d3968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3968_0x3d3968");
#endif

    switch (ctx->pc) {
        case 0x3d3968u: goto label_3d3968;
        case 0x3d396cu: goto label_3d396c;
        case 0x3d3970u: goto label_3d3970;
        case 0x3d3974u: goto label_3d3974;
        case 0x3d3978u: goto label_3d3978;
        case 0x3d397cu: goto label_3d397c;
        case 0x3d3980u: goto label_3d3980;
        case 0x3d3984u: goto label_3d3984;
        case 0x3d3988u: goto label_3d3988;
        case 0x3d398cu: goto label_3d398c;
        case 0x3d3990u: goto label_3d3990;
        case 0x3d3994u: goto label_3d3994;
        case 0x3d3998u: goto label_3d3998;
        case 0x3d399cu: goto label_3d399c;
        case 0x3d39a0u: goto label_3d39a0;
        case 0x3d39a4u: goto label_3d39a4;
        case 0x3d39a8u: goto label_3d39a8;
        case 0x3d39acu: goto label_3d39ac;
        case 0x3d39b0u: goto label_3d39b0;
        case 0x3d39b4u: goto label_3d39b4;
        case 0x3d39b8u: goto label_3d39b8;
        case 0x3d39bcu: goto label_3d39bc;
        case 0x3d39c0u: goto label_3d39c0;
        case 0x3d39c4u: goto label_3d39c4;
        case 0x3d39c8u: goto label_3d39c8;
        case 0x3d39ccu: goto label_3d39cc;
        case 0x3d39d0u: goto label_3d39d0;
        case 0x3d39d4u: goto label_3d39d4;
        case 0x3d39d8u: goto label_3d39d8;
        case 0x3d39dcu: goto label_3d39dc;
        case 0x3d39e0u: goto label_3d39e0;
        case 0x3d39e4u: goto label_3d39e4;
        case 0x3d39e8u: goto label_3d39e8;
        case 0x3d39ecu: goto label_3d39ec;
        case 0x3d39f0u: goto label_3d39f0;
        case 0x3d39f4u: goto label_3d39f4;
        case 0x3d39f8u: goto label_3d39f8;
        case 0x3d39fcu: goto label_3d39fc;
        case 0x3d3a00u: goto label_3d3a00;
        case 0x3d3a04u: goto label_3d3a04;
        case 0x3d3a08u: goto label_3d3a08;
        case 0x3d3a0cu: goto label_3d3a0c;
        case 0x3d3a10u: goto label_3d3a10;
        case 0x3d3a14u: goto label_3d3a14;
        case 0x3d3a18u: goto label_3d3a18;
        case 0x3d3a1cu: goto label_3d3a1c;
        case 0x3d3a20u: goto label_3d3a20;
        case 0x3d3a24u: goto label_3d3a24;
        case 0x3d3a28u: goto label_3d3a28;
        case 0x3d3a2cu: goto label_3d3a2c;
        case 0x3d3a30u: goto label_3d3a30;
        case 0x3d3a34u: goto label_3d3a34;
        case 0x3d3a38u: goto label_3d3a38;
        case 0x3d3a3cu: goto label_3d3a3c;
        case 0x3d3a40u: goto label_3d3a40;
        case 0x3d3a44u: goto label_3d3a44;
        case 0x3d3a48u: goto label_3d3a48;
        case 0x3d3a4cu: goto label_3d3a4c;
        case 0x3d3a50u: goto label_3d3a50;
        case 0x3d3a54u: goto label_3d3a54;
        case 0x3d3a58u: goto label_3d3a58;
        case 0x3d3a5cu: goto label_3d3a5c;
        case 0x3d3a60u: goto label_3d3a60;
        case 0x3d3a64u: goto label_3d3a64;
        case 0x3d3a68u: goto label_3d3a68;
        case 0x3d3a6cu: goto label_3d3a6c;
        case 0x3d3a70u: goto label_3d3a70;
        case 0x3d3a74u: goto label_3d3a74;
        case 0x3d3a78u: goto label_3d3a78;
        case 0x3d3a7cu: goto label_3d3a7c;
        case 0x3d3a80u: goto label_3d3a80;
        case 0x3d3a84u: goto label_3d3a84;
        case 0x3d3a88u: goto label_3d3a88;
        case 0x3d3a8cu: goto label_3d3a8c;
        case 0x3d3a90u: goto label_3d3a90;
        case 0x3d3a94u: goto label_3d3a94;
        case 0x3d3a98u: goto label_3d3a98;
        case 0x3d3a9cu: goto label_3d3a9c;
        case 0x3d3aa0u: goto label_3d3aa0;
        case 0x3d3aa4u: goto label_3d3aa4;
        case 0x3d3aa8u: goto label_3d3aa8;
        case 0x3d3aacu: goto label_3d3aac;
        case 0x3d3ab0u: goto label_3d3ab0;
        case 0x3d3ab4u: goto label_3d3ab4;
        case 0x3d3ab8u: goto label_3d3ab8;
        case 0x3d3abcu: goto label_3d3abc;
        case 0x3d3ac0u: goto label_3d3ac0;
        case 0x3d3ac4u: goto label_3d3ac4;
        case 0x3d3ac8u: goto label_3d3ac8;
        case 0x3d3accu: goto label_3d3acc;
        case 0x3d3ad0u: goto label_3d3ad0;
        case 0x3d3ad4u: goto label_3d3ad4;
        case 0x3d3ad8u: goto label_3d3ad8;
        case 0x3d3adcu: goto label_3d3adc;
        case 0x3d3ae0u: goto label_3d3ae0;
        case 0x3d3ae4u: goto label_3d3ae4;
        case 0x3d3ae8u: goto label_3d3ae8;
        case 0x3d3aecu: goto label_3d3aec;
        default: break;
    }

    ctx->pc = 0x3d3968u;

label_3d3968:
    // 0x3d3968: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3d3968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3d396c:
    // 0x3d396c: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x3d396cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_3d3970:
    // 0x3d3970: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x3d3970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_3d3974:
    // 0x3d3974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d3974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d3978:
    // 0x3d3978: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x3d3978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_3d397c:
    // 0x3d397c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d397cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d3980:
    // 0x3d3980: 0x7fb304b0  sq          $s3, 0x4B0($sp)
    ctx->pc = 0x3d3980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 19));
label_3d3984:
    // 0x3d3984: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d3984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d3988:
    // 0x3d3988: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d3988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d398c:
    // 0x3d398c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d398cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d3990:
    // 0x3d3990: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d3990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d3994:
    // 0x3d3994: 0x40f809  jalr        $v0
label_3d3998:
    if (ctx->pc == 0x3D3998u) {
        ctx->pc = 0x3D3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3994u;
        // 0x3d3998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D399Cu;
        goto label_3d399c;
    }
    ctx->pc = 0x3D3994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D399Cu);
        ctx->pc = 0x3D3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3994u;
        // 0x3d3998: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3994u, 0x3D399Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D399Cu;
label_3d399c:
    // 0x3d399c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d399cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d39a0:
    // 0x3d39a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d39a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d39a4:
    // 0x3d39a4: 0xc0e858c  jal         func_3A1630
label_3d39a8:
    if (ctx->pc == 0x3D39A8u) {
        ctx->pc = 0x3D39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39A4u;
        // 0x3d39a8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D39ACu;
        goto label_3d39ac;
    }
    ctx->pc = 0x3D39A4u;
    SET_GPR_U32(ctx, 31, 0x3D39ACu);
    ctx->pc = 0x3D39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39A4u;
    // 0x3d39a8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D39A4u, 0x3D39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D39ACu;
label_3d39ac:
    // 0x3d39ac: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x3d39acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3d39b0:
    // 0x3d39b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d39b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d39b4:
    // 0x3d39b4: 0xc0ea14c  jal         func_3A8530
label_3d39b8:
    if (ctx->pc == 0x3D39B8u) {
        ctx->pc = 0x3D39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39B4u;
        // 0x3d39b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D39BCu;
        goto label_3d39bc;
    }
    ctx->pc = 0x3D39B4u;
    SET_GPR_U32(ctx, 31, 0x3D39BCu);
    ctx->pc = 0x3D39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39B4u;
    // 0x3d39b8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D39B4u, 0x3D39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D39BCu;
label_3d39bc:
    // 0x3d39bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d39bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d39c0:
    // 0x3d39c0: 0xc0ea12a  jal         func_3A84A8
label_3d39c4:
    if (ctx->pc == 0x3D39C4u) {
        ctx->pc = 0x3D39C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39C0u;
        // 0x3d39c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D39C8u;
        goto label_3d39c8;
    }
    ctx->pc = 0x3D39C0u;
    SET_GPR_U32(ctx, 31, 0x3D39C8u);
    ctx->pc = 0x3D39C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39C0u;
    // 0x3d39c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D39C0u, 0x3D39C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D39C8u;
label_3d39c8:
    // 0x3d39c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d39c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d39cc:
    // 0x3d39cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d39ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d39d0:
    // 0x3d39d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d39d4:
    // 0x3d39d4: 0xc0ea12a  jal         func_3A84A8
label_3d39d8:
    if (ctx->pc == 0x3D39D8u) {
        ctx->pc = 0x3D39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39D4u;
        // 0x3d39d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D39DCu;
        goto label_3d39dc;
    }
    ctx->pc = 0x3D39D4u;
    SET_GPR_U32(ctx, 31, 0x3D39DCu);
    ctx->pc = 0x3D39D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39D4u;
    // 0x3d39d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D39D4u, 0x3D39DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D39DCu;
label_3d39dc:
    // 0x3d39dc: 0x7ba60020  lq          $a2, 0x20($sp)
    ctx->pc = 0x3d39dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d39e0:
    // 0x3d39e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3d39e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3d39e4:
    // 0x3d39e4: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x3d39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_3d39e8:
    // 0x3d39e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d39e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d39ec:
    // 0x3d39ec: 0x7e060010  sq          $a2, 0x10($s0)
    ctx->pc = 0x3d39ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 6));
label_3d39f0:
    // 0x3d39f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d39f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d39f4:
    // 0x3d39f4: 0x7fa60000  sq          $a2, 0x0($sp)
    ctx->pc = 0x3d39f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 6));
label_3d39f8:
    // 0x3d39f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3d39f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3d39fc:
    // 0x3d39fc: 0xc0e9132  jal         func_3A44C8
label_3d3a00:
    if (ctx->pc == 0x3D3A00u) {
        ctx->pc = 0x3D3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D39FCu;
        // 0x3d3a00: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3A04u;
        goto label_3d3a04;
    }
    ctx->pc = 0x3D39FCu;
    SET_GPR_U32(ctx, 31, 0x3D3A04u);
    ctx->pc = 0x3D3A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D39FCu;
    // 0x3d3a00: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3D39FCu, 0x3D3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3A04u;
label_3d3a04:
    // 0x3d3a04: 0x3c01be19  lui         $at, 0xBE19
    ctx->pc = 0x3d3a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48665 << 16));
label_3d3a08:
    // 0x3d3a08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d3a08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d3a0c:
    // 0x3d3a0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d3a0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d3a10:
    // 0x3d3a10: 0x27a40470  addiu       $a0, $sp, 0x470
    ctx->pc = 0x3d3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3d3a14:
    // 0x3d3a14: 0xafa00470  sw          $zero, 0x470($sp)
    ctx->pc = 0x3d3a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 0));
label_3d3a18:
    // 0x3d3a18: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3d3a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3d3a1c:
    // 0x3d3a1c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3d3a1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d3a20:
    // 0x3d3a20: 0x26314ca8  addiu       $s1, $s1, 0x4CA8
    ctx->pc = 0x3d3a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19624));
label_3d3a24:
    // 0x3d3a24: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x3d3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3d3a28:
    // 0x3d3a28: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3d3a28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d3a2c:
    // 0x3d3a2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d3a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d3a30:
    // 0x3d3a30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d3a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d3a34:
    // 0x3d3a34: 0xafa00478  sw          $zero, 0x478($sp)
    ctx->pc = 0x3d3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1144), GPR_U32(ctx, 0));
label_3d3a38:
    // 0x3d3a38: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x3d3a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_3d3a3c:
    // 0x3d3a3c: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x3d3a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_3d3a40:
    // 0x3d3a40: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d3a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d3a44:
    // 0x3d3a44: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3d3a44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3d3a48:
    // 0x3d3a48: 0x7fa20460  sq          $v0, 0x460($sp)
    ctx->pc = 0x3d3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 2));
label_3d3a4c:
    // 0x3d3a4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3d3a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d3a50:
    // 0x3d3a50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3d3a50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d3a54:
    // 0x3d3a54: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d3a54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3a58:
    // 0x3d3a58: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d3a58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d3a5c:
    // 0x3d3a5c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d3a5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d3a60:
    // 0x3d3a60: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d3a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3a64:
    // 0x3d3a64: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d3a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3a68:
    // 0x3d3a68: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d3a68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d3a6c:
    // 0x3d3a6c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d3a6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3a70:
    // 0x3d3a70: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d3a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d3a74:
    // 0x3d3a74: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d3a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d3a78:
    // 0x3d3a78: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d3a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3a7c:
    // 0x3d3a7c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d3a7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d3a80:
    // 0x3d3a80: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d3a80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d3a84:
    // 0x3d3a84: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d3a84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3a88:
    // 0x3d3a88: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d3a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d3a8c:
    // 0x3d3a8c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3d3a8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d3a90:
    // 0x3d3a90: 0x27a60450  addiu       $a2, $sp, 0x450
    ctx->pc = 0x3d3a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d3a94:
    // 0x3d3a94: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3d3a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3d3a98:
    // 0x3d3a98: 0x7fa30480  sq          $v1, 0x480($sp)
    ctx->pc = 0x3d3a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 3));
label_3d3a9c:
    // 0x3d3a9c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x3d3a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3d3aa0:
    // 0x3d3aa0: 0xc136b18  jal         func_4DAC60
label_3d3aa4:
    if (ctx->pc == 0x3D3AA4u) {
        ctx->pc = 0x3D3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AA0u;
        // 0x3d3aa4: 0x7fa30490  sq          $v1, 0x490($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AA8u;
        goto label_3d3aa8;
    }
    ctx->pc = 0x3D3AA0u;
    SET_GPR_U32(ctx, 31, 0x3D3AA8u);
    ctx->pc = 0x3D3AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3AA0u;
    // 0x3d3aa4: 0x7fa30490  sq          $v1, 0x490($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D3AA0u, 0x3D3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3AA8u;
label_3d3aa8:
    // 0x3d3aa8: 0x7ba20470  lq          $v0, 0x470($sp)
    ctx->pc = 0x3d3aa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d3aac:
    // 0x3d3aac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d3aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d3ab0:
    // 0x3d3ab0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ab4:
    // 0x3d3ab4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3d3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3d3ab8:
    // 0x3d3ab8: 0xc0e9f6a  jal         func_3A7DA8
label_3d3abc:
    if (ctx->pc == 0x3D3ABCu) {
        ctx->pc = 0x3D3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AB8u;
        // 0x3d3abc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AC0u;
        goto label_3d3ac0;
    }
    ctx->pc = 0x3D3AB8u;
    SET_GPR_U32(ctx, 31, 0x3D3AC0u);
    ctx->pc = 0x3D3ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3AB8u;
    // 0x3d3abc: 0x7fa20440  sq          $v0, 0x440($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7DA8u, 0x3D3AB8u, 0x3D3AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3AC0u;
label_3d3ac0:
    // 0x3d3ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d3ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d3ac4:
    // 0x3d3ac4: 0xc0f15bc  jal         func_3C56F0
label_3d3ac8:
    if (ctx->pc == 0x3D3AC8u) {
        ctx->pc = 0x3D3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AC4u;
        // 0x3d3ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3ACCu;
        goto label_3d3acc;
    }
    ctx->pc = 0x3D3AC4u;
    SET_GPR_U32(ctx, 31, 0x3D3ACCu);
    ctx->pc = 0x3D3AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3AC4u;
    // 0x3d3ac8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D3AC4u, 0x3D3ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3ACCu;
label_3d3acc:
    // 0x3d3acc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3d3accu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3d3ad0:
    // 0x3d3ad0: 0x7bb004e0  lq          $s0, 0x4E0($sp)
    ctx->pc = 0x3d3ad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d3ad4:
    // 0x3d3ad4: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x3d3ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d3ad8:
    // 0x3d3ad8: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x3d3ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d3adc:
    // 0x3d3adc: 0x7bb304b0  lq          $s3, 0x4B0($sp)
    ctx->pc = 0x3d3adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d3ae0:
    // 0x3d3ae0: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d3ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d3ae4:
    // 0x3d3ae4: 0x3e00008  jr          $ra
label_3d3ae8:
    if (ctx->pc == 0x3D3AE8u) {
        ctx->pc = 0x3D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AE4u;
        // 0x3d3ae8: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D3AECu;
        goto label_3d3aec;
    }
    ctx->pc = 0x3D3AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3AE4u;
        // 0x3d3ae8: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3AECu;
label_3d3aec:
    // 0x3d3aec: 0x0  nop
    ctx->pc = 0x3d3aecu;
    // NOP
    ctx->pc = 0x3d3af0u;
}
