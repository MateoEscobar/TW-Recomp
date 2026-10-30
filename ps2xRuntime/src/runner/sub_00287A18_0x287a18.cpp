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

// Function: sub_00287A18
// Address: 0x287a18 - 0x287fe0
void sub_00287A18_0x287a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287A18_0x287a18");
#endif

    switch (ctx->pc) {
        case 0x287a38u: goto label_287a38;
        case 0x287a44u: goto label_287a44;
        case 0x287a50u: goto label_287a50;
        case 0x287a70u: goto label_287a70;
        case 0x287a88u: goto label_287a88;
        case 0x287a98u: goto label_287a98;
        case 0x287aacu: goto label_287aac;
        case 0x287ac0u: goto label_287ac0;
        case 0x287aecu: goto label_287aec;
        case 0x287afcu: goto label_287afc;
        case 0x287b04u: goto label_287b04;
        case 0x287b10u: goto label_287b10;
        case 0x287b2cu: goto label_287b2c;
        case 0x287b40u: goto label_287b40;
        case 0x287b50u: goto label_287b50;
        case 0x287b60u: goto label_287b60;
        case 0x287b7cu: goto label_287b7c;
        case 0x287b88u: goto label_287b88;
        case 0x287b98u: goto label_287b98;
        case 0x287bb0u: goto label_287bb0;
        case 0x287bc0u: goto label_287bc0;
        case 0x287bd0u: goto label_287bd0;
        case 0x287be0u: goto label_287be0;
        case 0x287bf0u: goto label_287bf0;
        case 0x287c10u: goto label_287c10;
        case 0x287c28u: goto label_287c28;
        case 0x287c38u: goto label_287c38;
        case 0x287c48u: goto label_287c48;
        case 0x287c6cu: goto label_287c6c;
        case 0x287ca0u: goto label_287ca0;
        case 0x287cb0u: goto label_287cb0;
        case 0x287cb8u: goto label_287cb8;
        case 0x287cd0u: goto label_287cd0;
        case 0x287cd8u: goto label_287cd8;
        case 0x287cf4u: goto label_287cf4;
        case 0x287d08u: goto label_287d08;
        case 0x287d18u: goto label_287d18;
        case 0x287d28u: goto label_287d28;
        case 0x287d38u: goto label_287d38;
        case 0x287d48u: goto label_287d48;
        case 0x287d58u: goto label_287d58;
        case 0x287d68u: goto label_287d68;
        case 0x287dacu: goto label_287dac;
        case 0x287dbcu: goto label_287dbc;
        case 0x287dccu: goto label_287dcc;
        case 0x287de4u: goto label_287de4;
        case 0x287df4u: goto label_287df4;
        case 0x287e18u: goto label_287e18;
        case 0x287e28u: goto label_287e28;
        case 0x287e38u: goto label_287e38;
        case 0x287e4cu: goto label_287e4c;
        case 0x287e5cu: goto label_287e5c;
        case 0x287e6cu: goto label_287e6c;
        case 0x287e80u: goto label_287e80;
        case 0x287e88u: goto label_287e88;
        case 0x287e9cu: goto label_287e9c;
        case 0x287eb0u: goto label_287eb0;
        case 0x287eb8u: goto label_287eb8;
        case 0x287ec8u: goto label_287ec8;
        case 0x287ed8u: goto label_287ed8;
        case 0x287eecu: goto label_287eec;
        case 0x287ef4u: goto label_287ef4;
        case 0x287f08u: goto label_287f08;
        case 0x287f18u: goto label_287f18;
        case 0x287f28u: goto label_287f28;
        case 0x287f38u: goto label_287f38;
        case 0x287f4cu: goto label_287f4c;
        case 0x287f68u: goto label_287f68;
        case 0x287f78u: goto label_287f78;
        case 0x287f94u: goto label_287f94;
        case 0x287facu: goto label_287fac;
        case 0x287fc0u: goto label_287fc0;
        default: break;
    }

    ctx->pc = 0x287a18u;

    // 0x287a18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x287a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x287a1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x287a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x287a20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x287a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x287a24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x287a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x287a28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x287a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x287a2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287a30: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287A30u;
    SET_GPR_U32(ctx, 31, 0x287A38u);
    ctx->pc = 0x287A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A30u;
    // 0x287a34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287A30u, 0x287A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A38u;
label_287a38:
    // 0x287a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a3c: 0xc089b98  jal         func_226E60
    ctx->pc = 0x287A3Cu;
    SET_GPR_U32(ctx, 31, 0x287A44u);
    ctx->pc = 0x287A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A3Cu;
    // 0x287a40: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x287A3Cu, 0x287A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A44u;
label_287a44:
    // 0x287a44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a48: 0xc089baa  jal         func_226EA8
    ctx->pc = 0x287A48u;
    SET_GPR_U32(ctx, 31, 0x287A50u);
    ctx->pc = 0x287A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A48u;
    // 0x287a4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x287A48u, 0x287A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A50u;
label_287a50:
    // 0x287a50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a54: 0x3405f7f3  ori         $a1, $zero, 0xF7F3
    ctx->pc = 0x287a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63475);
    // 0x287a58: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x287a5c: 0x34a5d3e8  ori         $a1, $a1, 0xD3E8
    ctx->pc = 0x287a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54248);
    // 0x287a60: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x287a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x287a64: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x287a64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x287a68: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x287A68u;
    SET_GPR_U32(ctx, 31, 0x287A70u);
    ctx->pc = 0x287A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A68u;
    // 0x287a6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x287A68u, 0x287A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A70u;
label_287a70:
    // 0x287a70: 0x14400154  bnez        $v0, . + 4 + (0x154 << 2)
    ctx->pc = 0x287A70u;
    {
        const bool branch_taken_0x287a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A70u;
        // 0x287a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a70) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287A78u;
    // 0x287a78: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x287a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x287a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a80: 0xc089998  jal         func_226660
    ctx->pc = 0x287A80u;
    SET_GPR_U32(ctx, 31, 0x287A88u);
    ctx->pc = 0x287A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A80u;
    // 0x287a84: 0x34a5101f  ori         $a1, $a1, 0x101F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4127);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x287A80u, 0x287A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A88u;
label_287a88:
    // 0x287a88: 0x1440014e  bnez        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x287A88u;
    {
        const bool branch_taken_0x287a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287A88u;
        // 0x287a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a88) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287A90u;
    // 0x287a90: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x287A90u;
    SET_GPR_U32(ctx, 31, 0x287A98u);
    ctx->pc = 0x287A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287A90u;
    // 0x287a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x287A90u, 0x287A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287A98u;
label_287a98:
    // 0x287a98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x287a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287a9c: 0x5043000c  beql        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x287A9Cu;
    {
        const bool branch_taken_0x287a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x287a9c) {
            ctx->pc = 0x287AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287A9Cu;
            // 0x287aa0: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287AD0u;
            goto label_287ad0;
        }
    }
    ctx->pc = 0x287AA4u;
    // 0x287aa4: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x287AA4u;
    SET_GPR_U32(ctx, 31, 0x287AACu);
    ctx->pc = 0x287AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AA4u;
    // 0x287aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x287AA4u, 0x287AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AACu;
label_287aac:
    // 0x287aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287ab0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x287AB0u;
    {
        const bool branch_taken_0x287ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x287ab0) {
            ctx->pc = 0x287AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287AB0u;
            // 0x287ab4: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287AD0u;
            goto label_287ad0;
        }
    }
    ctx->pc = 0x287AB8u;
    // 0x287ab8: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x287AB8u;
    SET_GPR_U32(ctx, 31, 0x287AC0u);
    ctx->pc = 0x287ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AB8u;
    // 0x287abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x287AB8u, 0x287AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AC0u;
label_287ac0:
    // 0x287ac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x287ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287ac4: 0x5443006b  bnel        $v0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x287AC4u;
    {
        const bool branch_taken_0x287ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x287ac4) {
            ctx->pc = 0x287AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287AC4u;
            // 0x287ac8: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287C74u;
            goto label_287c74;
        }
    }
    ctx->pc = 0x287ACCu;
    // 0x287acc: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x287accu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_287ad0:
    // 0x287ad0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287ad0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287ad4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287AD4u;
    {
        const bool branch_taken_0x287ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ad4) {
            ctx->pc = 0x287AFCu;
            goto label_287afc;
        }
    }
    ctx->pc = 0x287ADCu;
    // 0x287adc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x287adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x287ae0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287ae4: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x287AE4u;
    SET_GPR_U32(ctx, 31, 0x287AECu);
    ctx->pc = 0x287AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AE4u;
    // 0x287ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x287AE4u, 0x287AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AECu;
label_287aec:
    // 0x287aec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287af4: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x287AF4u;
    SET_GPR_U32(ctx, 31, 0x287AFCu);
    ctx->pc = 0x287AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AF4u;
    // 0x287af8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x287AF4u, 0x287AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287AFCu;
label_287afc:
    // 0x287afc: 0xc089b98  jal         func_226E60
    ctx->pc = 0x287AFCu;
    SET_GPR_U32(ctx, 31, 0x287B04u);
    ctx->pc = 0x287B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287AFCu;
    // 0x287b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x287AFCu, 0x287B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B04u;
label_287b04:
    // 0x287b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b08: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x287B08u;
    SET_GPR_U32(ctx, 31, 0x287B10u);
    ctx->pc = 0x287B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B08u;
    // 0x287b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x287B08u, 0x287B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B10u;
label_287b10:
    // 0x287b10: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x287B10u;
    {
        const bool branch_taken_0x287b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B10u;
        // 0x287b14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b10) {
            ctx->pc = 0x287B98u;
            goto label_287b98;
        }
    }
    ctx->pc = 0x287B18u;
    // 0x287b18: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x287b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
    // 0x287b1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287B1Cu;
    {
        const bool branch_taken_0x287b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b1c) {
            ctx->pc = 0x287B38u;
            goto label_287b38;
        }
    }
    ctx->pc = 0x287B24u;
    // 0x287b24: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287B24u;
    SET_GPR_U32(ctx, 31, 0x287B2Cu);
    ctx->pc = 0x287B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B24u;
    // 0x287b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287B24u, 0x287B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B2Cu;
label_287b2c:
    // 0x287b2c: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x287b2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x287b30: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x287B30u;
    {
        const bool branch_taken_0x287b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287b30) {
            ctx->pc = 0x287B98u;
            goto label_287b98;
        }
    }
    ctx->pc = 0x287B38u;
label_287b38:
    // 0x287b38: 0xc088e98  jal         func_223A60
    ctx->pc = 0x287B38u;
    SET_GPR_U32(ctx, 31, 0x287B40u);
    ctx->pc = 0x287B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B38u;
    // 0x287b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x287B38u, 0x287B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B40u;
label_287b40:
    // 0x287b40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287B40u;
    {
        const bool branch_taken_0x287b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287b40) {
            ctx->pc = 0x287B58u;
            goto label_287b58;
        }
    }
    ctx->pc = 0x287B48u;
    // 0x287b48: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x287B48u;
    SET_GPR_U32(ctx, 31, 0x287B50u);
    ctx->pc = 0x287B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B48u;
    // 0x287b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x287B48u, 0x287B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B50u;
label_287b50:
    // 0x287b50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287B50u;
    {
        const bool branch_taken_0x287b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b50) {
            ctx->pc = 0x287B90u;
            goto label_287b90;
        }
    }
    ctx->pc = 0x287B58u;
label_287b58:
    // 0x287b58: 0xc089704  jal         func_225C10
    ctx->pc = 0x287B58u;
    SET_GPR_U32(ctx, 31, 0x287B60u);
    ctx->pc = 0x287B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B58u;
    // 0x287b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x287B58u, 0x287B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B60u;
label_287b60:
    // 0x287b60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x287B60u;
    {
        const bool branch_taken_0x287b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287b60) {
            ctx->pc = 0x287B90u;
            goto label_287b90;
        }
    }
    ctx->pc = 0x287B68u;
    // 0x287b68: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287B68u;
    {
        const bool branch_taken_0x287b68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B68u;
        // 0x287b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b68) {
            ctx->pc = 0x287B7Cu;
            goto label_287b7c;
        }
    }
    ctx->pc = 0x287B70u;
    // 0x287b70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b74: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x287B74u;
    SET_GPR_U32(ctx, 31, 0x287B7Cu);
    ctx->pc = 0x287B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B74u;
    // 0x287b78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x287B74u, 0x287B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B7Cu;
label_287b7c:
    // 0x287b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287b80: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x287B80u;
    SET_GPR_U32(ctx, 31, 0x287B88u);
    ctx->pc = 0x287B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B80u;
    // 0x287b84: 0x240501f5  addiu       $a1, $zero, 0x1F5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x287B80u, 0x287B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B88u;
label_287b88:
    // 0x287b88: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x287B88u;
    {
        const bool branch_taken_0x287b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B88u;
        // 0x287b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b88) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287B90u;
label_287b90:
    // 0x287b90: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287B90u;
    SET_GPR_U32(ctx, 31, 0x287B98u);
    ctx->pc = 0x287B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287B90u;
    // 0x287b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287B90u, 0x287B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287B98u;
label_287b98:
    // 0x287b98: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x287B98u;
    {
        const bool branch_taken_0x287b98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x287B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287B98u;
        // 0x287b9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287b98) {
            ctx->pc = 0x287BB8u;
            goto label_287bb8;
        }
    }
    ctx->pc = 0x287BA0u;
    // 0x287ba0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x287BA0u;
    {
        const bool branch_taken_0x287ba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BA0u;
        // 0x287ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ba0) {
            ctx->pc = 0x287C50u;
            goto label_287c50;
        }
    }
    ctx->pc = 0x287BA8u;
    // 0x287ba8: 0xc098fae  jal         func_263EB8
    ctx->pc = 0x287BA8u;
    SET_GPR_U32(ctx, 31, 0x287BB0u);
    ctx->pc = 0x287BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BA8u;
    // 0x287bac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263EB8u, 0x287BA8u, 0x287BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BB0u;
label_287bb0:
    // 0x287bb0: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x287BB0u;
    {
        const bool branch_taken_0x287bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BB0u;
        // 0x287bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bb0) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287BB8u;
label_287bb8:
    // 0x287bb8: 0xc089480  jal         func_225200
    ctx->pc = 0x287BB8u;
    SET_GPR_U32(ctx, 31, 0x287BC0u);
    ctx->pc = 0x287BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BB8u;
    // 0x287bbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287BB8u, 0x287BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BC0u;
label_287bc0:
    // 0x287bc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287BC0u;
    {
        const bool branch_taken_0x287bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BC0u;
        // 0x287bc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bc0) {
            ctx->pc = 0x287BD8u;
            goto label_287bd8;
        }
    }
    ctx->pc = 0x287BC8u;
    // 0x287bc8: 0xc089428  jal         func_2250A0
    ctx->pc = 0x287BC8u;
    SET_GPR_U32(ctx, 31, 0x287BD0u);
    ctx->pc = 0x287BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BC8u;
    // 0x287bcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x287BC8u, 0x287BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BD0u;
label_287bd0:
    // 0x287bd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x287BD0u;
    {
        const bool branch_taken_0x287bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287bd0) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287BD8u;
label_287bd8:
    // 0x287bd8: 0xc08a170  jal         func_2285C0
    ctx->pc = 0x287BD8u;
    SET_GPR_U32(ctx, 31, 0x287BE0u);
    ctx->pc = 0x287BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BD8u;
    // 0x287bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285C0u, 0x287BD8u, 0x287BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BE0u;
label_287be0:
    // 0x287be0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x287BE0u;
    {
        const bool branch_taken_0x287be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287be0) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287BE8u;
    // 0x287be8: 0xc08a17e  jal         func_2285F8
    ctx->pc = 0x287BE8u;
    SET_GPR_U32(ctx, 31, 0x287BF0u);
    ctx->pc = 0x287BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287BE8u;
    // 0x287bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2285F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285F8u, 0x287BE8u, 0x287BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287BF0u;
label_287bf0:
    // 0x287bf0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287BF0u;
    {
        const bool branch_taken_0x287bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287BF0u;
        // 0x287bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287bf0) {
            ctx->pc = 0x287C18u;
            goto label_287c18;
        }
    }
    ctx->pc = 0x287BF8u;
    // 0x287bf8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x287bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c00: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x287c00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x287c04: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x287c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287c08: 0xc098682  jal         func_261A08
    ctx->pc = 0x287C08u;
    SET_GPR_U32(ctx, 31, 0x287C10u);
    ctx->pc = 0x287C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C08u;
    // 0x287c0c: 0x8c460074  lw          $a2, 0x74($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x287C08u, 0x287C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C10u;
label_287c10:
    // 0x287c10: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x287C10u;
    {
        const bool branch_taken_0x287c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C10u;
        // 0x287c14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c10) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287C18u;
label_287c18:
    // 0x287c18: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x287C18u;
    {
        const bool branch_taken_0x287c18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C18u;
        // 0x287c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c18) {
            ctx->pc = 0x287C50u;
            goto label_287c50;
        }
    }
    ctx->pc = 0x287C20u;
    // 0x287c20: 0xc096384  jal         func_258E10
    ctx->pc = 0x287C20u;
    SET_GPR_U32(ctx, 31, 0x287C28u);
    ctx->pc = 0x287C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C20u;
    // 0x287c24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x287C20u, 0x287C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C28u;
label_287c28:
    // 0x287c28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x287C28u;
    {
        const bool branch_taken_0x287c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c28) {
            ctx->pc = 0x287C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287C28u;
            // 0x287c2c: 0x8e0500d4  lw          $a1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287C54u;
            goto label_287c54;
        }
    }
    ctx->pc = 0x287C30u;
    // 0x287c30: 0xc0e409a  jal         func_390268
    ctx->pc = 0x287C30u;
    SET_GPR_U32(ctx, 31, 0x287C38u);
    ctx->pc = 0x287C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C30u;
    // 0x287c34: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x287C30u, 0x287C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C38u;
label_287c38:
    // 0x287c38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x287c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c40: 0xc09be18  jal         func_26F860
    ctx->pc = 0x287C40u;
    SET_GPR_U32(ctx, 31, 0x287C48u);
    ctx->pc = 0x287C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C40u;
    // 0x287c44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F860u, 0x287C40u, 0x287C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C48u;
label_287c48:
    // 0x287c48: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x287C48u;
    {
        const bool branch_taken_0x287c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C48u;
        // 0x287c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c48) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287C50u;
label_287c50:
    // 0x287c50: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x287c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_287c54:
    // 0x287c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x287c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x287c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287c5c: 0xa4a300bc  sh          $v1, 0xBC($a1)
    ctx->pc = 0x287c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 188), (uint16_t)GPR_U32(ctx, 3));
    // 0x287c60: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x287c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287c64: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x287C64u;
    SET_GPR_U32(ctx, 31, 0x287C6Cu);
    ctx->pc = 0x287C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C64u;
    // 0x287c68: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x287C64u, 0x287C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287C6Cu;
label_287c6c:
    // 0x287c6c: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x287C6Cu;
    {
        const bool branch_taken_0x287c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C6Cu;
        // 0x287c70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c6c) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287C74u;
label_287c74:
    // 0x287c74: 0xa44000bc  sh          $zero, 0xBC($v0)
    ctx->pc = 0x287c74u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x287c78: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x287c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x287c7c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x287c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x287c80: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x287c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x287c84: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x287c84u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x287c88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x287C88u;
    {
        const bool branch_taken_0x287c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c88) {
            ctx->pc = 0x287CBCu;
            goto label_287cbc;
        }
    }
    ctx->pc = 0x287C90u;
    // 0x287c90: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x287c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x287c94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x287c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x287c98: 0xc09e9b0  jal         func_27A6C0
    ctx->pc = 0x287C98u;
    SET_GPR_U32(ctx, 31, 0x287CA0u);
    ctx->pc = 0x287C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287C98u;
    // 0x287c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A6C0u, 0x287C98u, 0x287CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CA0u;
label_287ca0:
    // 0x287ca0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x287ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ca8: 0xc089b34  jal         func_226CD0
    ctx->pc = 0x287CA8u;
    SET_GPR_U32(ctx, 31, 0x287CB0u);
    ctx->pc = 0x287CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CA8u;
    // 0x287cac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x287CA8u, 0x287CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CB0u;
label_287cb0:
    // 0x287cb0: 0xc089b98  jal         func_226E60
    ctx->pc = 0x287CB0u;
    SET_GPR_U32(ctx, 31, 0x287CB8u);
    ctx->pc = 0x287CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CB0u;
    // 0x287cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x287CB0u, 0x287CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CB8u;
label_287cb8:
    // 0x287cb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x287cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_287cbc:
    // 0x287cbc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x287CBCu;
    {
        const bool branch_taken_0x287cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CBCu;
        // 0x287cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cbc) {
            ctx->pc = 0x287CD0u;
            goto label_287cd0;
        }
    }
    ctx->pc = 0x287CC4u;
    // 0x287cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x287cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287cc8: 0xc087570  jal         func_21D5C0
    ctx->pc = 0x287CC8u;
    SET_GPR_U32(ctx, 31, 0x287CD0u);
    ctx->pc = 0x287CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CC8u;
    // 0x287ccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D5C0u, 0x287CC8u, 0x287CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CD0u;
label_287cd0:
    // 0x287cd0: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x287CD0u;
    SET_GPR_U32(ctx, 31, 0x287CD8u);
    ctx->pc = 0x287CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CD0u;
    // 0x287cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228340u, 0x287CD0u, 0x287CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CD8u;
label_287cd8:
    // 0x287cd8: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x287CD8u;
    {
        const bool branch_taken_0x287cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287CD8u;
        // 0x287cdc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287cd8) {
            ctx->pc = 0x287E5Cu;
            goto label_287e5c;
        }
    }
    ctx->pc = 0x287CE0u;
    // 0x287ce0: 0x8c43031c  lw          $v1, 0x31C($v0)
    ctx->pc = 0x287ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
    // 0x287ce4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287CE4u;
    {
        const bool branch_taken_0x287ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ce4) {
            ctx->pc = 0x287D00u;
            goto label_287d00;
        }
    }
    ctx->pc = 0x287CECu;
    // 0x287cec: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287CECu;
    SET_GPR_U32(ctx, 31, 0x287CF4u);
    ctx->pc = 0x287CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287CECu;
    // 0x287cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287CECu, 0x287CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287CF4u;
label_287cf4:
    // 0x287cf4: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x287cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x287cf8: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x287CF8u;
    {
        const bool branch_taken_0x287cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x287cf8) {
            ctx->pc = 0x287E5Cu;
            goto label_287e5c;
        }
    }
    ctx->pc = 0x287D00u;
label_287d00:
    // 0x287d00: 0xc088e98  jal         func_223A60
    ctx->pc = 0x287D00u;
    SET_GPR_U32(ctx, 31, 0x287D08u);
    ctx->pc = 0x287D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D00u;
    // 0x287d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A60u, 0x287D00u, 0x287D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D08u;
label_287d08:
    // 0x287d08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287D08u;
    {
        const bool branch_taken_0x287d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d08) {
            ctx->pc = 0x287D20u;
            goto label_287d20;
        }
    }
    ctx->pc = 0x287D10u;
    // 0x287d10: 0xc088ea6  jal         func_223A98
    ctx->pc = 0x287D10u;
    SET_GPR_U32(ctx, 31, 0x287D18u);
    ctx->pc = 0x287D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D10u;
    // 0x287d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A98u, 0x287D10u, 0x287D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D18u;
label_287d18:
    // 0x287d18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287D18u;
    {
        const bool branch_taken_0x287d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287d18) {
            ctx->pc = 0x287D40u;
            goto label_287d40;
        }
    }
    ctx->pc = 0x287D20u;
label_287d20:
    // 0x287d20: 0xc089704  jal         func_225C10
    ctx->pc = 0x287D20u;
    SET_GPR_U32(ctx, 31, 0x287D28u);
    ctx->pc = 0x287D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D20u;
    // 0x287d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225C10u, 0x287D20u, 0x287D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D28u;
label_287d28:
    // 0x287d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287D28u;
    {
        const bool branch_taken_0x287d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D28u;
        // 0x287d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d28) {
            ctx->pc = 0x287D40u;
            goto label_287d40;
        }
    }
    ctx->pc = 0x287D30u;
    // 0x287d30: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x287D30u;
    SET_GPR_U32(ctx, 31, 0x287D38u);
    ctx->pc = 0x287D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D30u;
    // 0x287d34: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x287D30u, 0x287D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D38u;
label_287d38:
    // 0x287d38: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x287D38u;
    {
        const bool branch_taken_0x287d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D38u;
        // 0x287d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d38) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287D40u;
label_287d40:
    // 0x287d40: 0xc088e8c  jal         func_223A30
    ctx->pc = 0x287D40u;
    SET_GPR_U32(ctx, 31, 0x287D48u);
    ctx->pc = 0x287D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D40u;
    // 0x287d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A30u, 0x287D40u, 0x287D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D48u;
label_287d48:
    // 0x287d48: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x287D48u;
    {
        const bool branch_taken_0x287d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d48) {
            ctx->pc = 0x287D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D48u;
            // 0x287d4c: 0x92620018  lbu         $v0, 0x18($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D74u;
            goto label_287d74;
        }
    }
    ctx->pc = 0x287D50u;
    // 0x287d50: 0xc088e90  jal         func_223A40
    ctx->pc = 0x287D50u;
    SET_GPR_U32(ctx, 31, 0x287D58u);
    ctx->pc = 0x287D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D50u;
    // 0x287d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A40u, 0x287D50u, 0x287D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D58u;
label_287d58:
    // 0x287d58: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287D58u;
    {
        const bool branch_taken_0x287d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287d58) {
            ctx->pc = 0x287D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287D58u;
            // 0x287d5c: 0x92620018  lbu         $v0, 0x18($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287D74u;
            goto label_287d74;
        }
    }
    ctx->pc = 0x287D60u;
    // 0x287d60: 0xc088e94  jal         func_223A50
    ctx->pc = 0x287D60u;
    SET_GPR_U32(ctx, 31, 0x287D68u);
    ctx->pc = 0x287D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287D60u;
    // 0x287d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A50u, 0x287D60u, 0x287D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287D68u;
label_287d68:
    // 0x287d68: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x287D68u;
    {
        const bool branch_taken_0x287d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D68u;
        // 0x287d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d68) {
            ctx->pc = 0x287DFCu;
            goto label_287dfc;
        }
    }
    ctx->pc = 0x287D70u;
    // 0x287d70: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x287d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_287d74:
    // 0x287d74: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x287d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x287d78: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x287d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x287d7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x287d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x287d80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x287d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x287d84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x287d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x287d88: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x287d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287d8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x287d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287d90: 0x0  nop
    ctx->pc = 0x287d90u;
    // NOP
    // 0x287d94: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x287D94u;
    {
        const bool branch_taken_0x287d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D94u;
        // 0x287d98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d94) {
            ctx->pc = 0x287DFCu;
            goto label_287dfc;
        }
    }
    ctx->pc = 0x287D9Cu;
    // 0x287d9c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x287D9Cu;
    {
        const bool branch_taken_0x287d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287D9Cu;
        // 0x287da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287d9c) {
            ctx->pc = 0x287DD4u;
            goto label_287dd4;
        }
    }
    ctx->pc = 0x287DA4u;
    // 0x287da4: 0xc089480  jal         func_225200
    ctx->pc = 0x287DA4u;
    SET_GPR_U32(ctx, 31, 0x287DACu);
    ctx->pc = 0x287DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DA4u;
    // 0x287da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287DA4u, 0x287DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DACu;
label_287dac:
    // 0x287dac: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x287DACu;
    {
        const bool branch_taken_0x287dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DACu;
        // 0x287db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dac) {
            ctx->pc = 0x287DECu;
            goto label_287dec;
        }
    }
    ctx->pc = 0x287DB4u;
    // 0x287db4: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287DB4u;
    SET_GPR_U32(ctx, 31, 0x287DBCu);
    ctx->pc = 0x287DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DB4u;
    // 0x287db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287DB4u, 0x287DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DBCu;
label_287dbc:
    // 0x287dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287dc4: 0xc098682  jal         func_261A08
    ctx->pc = 0x287DC4u;
    SET_GPR_U32(ctx, 31, 0x287DCCu);
    ctx->pc = 0x287DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DC4u;
    // 0x287dc8: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x287DC4u, 0x287DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DCCu;
label_287dcc:
    // 0x287dcc: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x287DCCu;
    {
        const bool branch_taken_0x287dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DCCu;
        // 0x287dd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dcc) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287DD4u;
label_287dd4:
    // 0x287dd4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x287DD4u;
    {
        const bool branch_taken_0x287dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DD4u;
        // 0x287dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287dd4) {
            ctx->pc = 0x287DECu;
            goto label_287dec;
        }
    }
    ctx->pc = 0x287DDCu;
    // 0x287ddc: 0xc09905e  jal         func_264178
    ctx->pc = 0x287DDCu;
    SET_GPR_U32(ctx, 31, 0x287DE4u);
    ctx->pc = 0x287DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DDCu;
    // 0x287de0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x287DDCu, 0x287DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DE4u;
label_287de4:
    // 0x287de4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x287DE4u;
    {
        const bool branch_taken_0x287de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DE4u;
        // 0x287de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287de4) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287DECu;
label_287dec:
    // 0x287dec: 0xc0992a0  jal         func_264A80
    ctx->pc = 0x287DECu;
    SET_GPR_U32(ctx, 31, 0x287DF4u);
    ctx->pc = 0x287DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287DECu;
    // 0x287df0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264A80u, 0x287DECu, 0x287DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DF4u;
label_287df4:
    // 0x287df4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x287DF4u;
    {
        const bool branch_taken_0x287df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DF4u;
        // 0x287df8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287df4) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287DFCu;
label_287dfc:
    // 0x287dfc: 0x8c430270  lw          $v1, 0x270($v0)
    ctx->pc = 0x287dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 624)));
    // 0x287e00: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x287E00u;
    {
        const bool branch_taken_0x287e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x287e00) {
            ctx->pc = 0x287E54u;
            goto label_287e54;
        }
    }
    ctx->pc = 0x287E08u;
    // 0x287e08: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x287E08u;
    {
        const bool branch_taken_0x287e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E08u;
        // 0x287e0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e08) {
            ctx->pc = 0x287E40u;
            goto label_287e40;
        }
    }
    ctx->pc = 0x287E10u;
    // 0x287e10: 0xc089480  jal         func_225200
    ctx->pc = 0x287E10u;
    SET_GPR_U32(ctx, 31, 0x287E18u);
    ctx->pc = 0x287E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E10u;
    // 0x287e14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287E10u, 0x287E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E18u;
label_287e18:
    // 0x287e18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x287E18u;
    {
        const bool branch_taken_0x287e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E18u;
        // 0x287e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e18) {
            ctx->pc = 0x287E44u;
            goto label_287e44;
        }
    }
    ctx->pc = 0x287E20u;
    // 0x287e20: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287E20u;
    SET_GPR_U32(ctx, 31, 0x287E28u);
    ctx->pc = 0x287E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E20u;
    // 0x287e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287E20u, 0x287E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E28u;
label_287e28:
    // 0x287e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e30: 0xc098682  jal         func_261A08
    ctx->pc = 0x287E30u;
    SET_GPR_U32(ctx, 31, 0x287E38u);
    ctx->pc = 0x287E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E30u;
    // 0x287e34: 0x240600c1  addiu       $a2, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x287E30u, 0x287E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E38u;
label_287e38:
    // 0x287e38: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x287E38u;
    {
        const bool branch_taken_0x287e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E38u;
        // 0x287e3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e38) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287E40u;
label_287e40:
    // 0x287e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_287e44:
    // 0x287e44: 0xc0988da  jal         func_262368
    ctx->pc = 0x287E44u;
    SET_GPR_U32(ctx, 31, 0x287E4Cu);
    ctx->pc = 0x287E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E44u;
    // 0x287e48: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262368u, 0x287E44u, 0x287E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E4Cu;
label_287e4c:
    // 0x287e4c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x287E4Cu;
    {
        const bool branch_taken_0x287e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E4Cu;
        // 0x287e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e4c) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287E54u;
label_287e54:
    // 0x287e54: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287E54u;
    SET_GPR_U32(ctx, 31, 0x287E5Cu);
    ctx->pc = 0x287E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E54u;
    // 0x287e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287E54u, 0x287E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E5Cu;
label_287e5c:
    // 0x287e5c: 0x1220004f  beqz        $s1, . + 4 + (0x4F << 2)
    ctx->pc = 0x287E5Cu;
    {
        const bool branch_taken_0x287e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E5Cu;
        // 0x287e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e5c) {
            ctx->pc = 0x287F9Cu;
            goto label_287f9c;
        }
    }
    ctx->pc = 0x287E64u;
    // 0x287e64: 0xc089480  jal         func_225200
    ctx->pc = 0x287E64u;
    SET_GPR_U32(ctx, 31, 0x287E6Cu);
    ctx->pc = 0x287E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E64u;
    // 0x287e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225200u, 0x287E64u, 0x287E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E6Cu;
label_287e6c:
    // 0x287e6c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287E6Cu;
    {
        const bool branch_taken_0x287e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E6Cu;
        // 0x287e70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e6c) {
            ctx->pc = 0x287E90u;
            goto label_287e90;
        }
    }
    ctx->pc = 0x287E74u;
    // 0x287e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e78: 0xc098682  jal         func_261A08
    ctx->pc = 0x287E78u;
    SET_GPR_U32(ctx, 31, 0x287E80u);
    ctx->pc = 0x287E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E78u;
    // 0x287e7c: 0x240600c2  addiu       $a2, $zero, 0xC2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261A08u, 0x287E78u, 0x287E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E80u;
label_287e80:
    // 0x287e80: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287E80u;
    SET_GPR_U32(ctx, 31, 0x287E88u);
    ctx->pc = 0x287E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E80u;
    // 0x287e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287E80u, 0x287E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E88u;
label_287e88:
    // 0x287e88: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x287E88u;
    {
        const bool branch_taken_0x287e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E88u;
        // 0x287e8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e88) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287E90u;
label_287e90:
    // 0x287e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x287e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287e94: 0xc089428  jal         func_2250A0
    ctx->pc = 0x287E94u;
    SET_GPR_U32(ctx, 31, 0x287E9Cu);
    ctx->pc = 0x287E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287E94u;
    // 0x287e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2250A0u, 0x287E94u, 0x287E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287E9Cu;
label_287e9c:
    // 0x287e9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287E9Cu;
    {
        const bool branch_taken_0x287e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E9Cu;
        // 0x287ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e9c) {
            ctx->pc = 0x287EC0u;
            goto label_287ec0;
        }
    }
    ctx->pc = 0x287EA4u;
    // 0x287ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ea8: 0xc098720  jal         func_261C80
    ctx->pc = 0x287EA8u;
    SET_GPR_U32(ctx, 31, 0x287EB0u);
    ctx->pc = 0x287EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EA8u;
    // 0x287eac: 0x24060295  addiu       $a2, $zero, 0x295 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 661));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x287EA8u, 0x287EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EB0u;
label_287eb0:
    // 0x287eb0: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287EB0u;
    SET_GPR_U32(ctx, 31, 0x287EB8u);
    ctx->pc = 0x287EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EB0u;
    // 0x287eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287EB0u, 0x287EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EB8u;
label_287eb8:
    // 0x287eb8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x287EB8u;
    {
        const bool branch_taken_0x287eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EB8u;
        // 0x287ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287eb8) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287EC0u;
label_287ec0:
    // 0x287ec0: 0xc088e50  jal         func_223940
    ctx->pc = 0x287EC0u;
    SET_GPR_U32(ctx, 31, 0x287EC8u);
    ctx->pc = 0x287EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EC0u;
    // 0x287ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223940u, 0x287EC0u, 0x287EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EC8u;
label_287ec8:
    // 0x287ec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287EC8u;
    {
        const bool branch_taken_0x287ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EC8u;
        // 0x287ecc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ec8) {
            ctx->pc = 0x287EE0u;
            goto label_287ee0;
        }
    }
    ctx->pc = 0x287ED0u;
    // 0x287ed0: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x287ED0u;
    SET_GPR_U32(ctx, 31, 0x287ED8u);
    ctx->pc = 0x287ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287ED0u;
    // 0x287ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x287ED0u, 0x287ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287ED8u;
label_287ed8:
    // 0x287ed8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287ED8u;
    {
        const bool branch_taken_0x287ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287ED8u;
        // 0x287edc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ed8) {
            ctx->pc = 0x287EFCu;
            goto label_287efc;
        }
    }
    ctx->pc = 0x287EE0u;
label_287ee0:
    // 0x287ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287ee4: 0xc098720  jal         func_261C80
    ctx->pc = 0x287EE4u;
    SET_GPR_U32(ctx, 31, 0x287EECu);
    ctx->pc = 0x287EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EE4u;
    // 0x287ee8: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261C80u, 0x287EE4u, 0x287EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EECu;
label_287eec:
    // 0x287eec: 0xc0a001a  jal         func_280068
    ctx->pc = 0x287EECu;
    SET_GPR_U32(ctx, 31, 0x287EF4u);
    ctx->pc = 0x287EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287EECu;
    // 0x287ef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280068u, 0x287EECu, 0x287EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287EF4u;
label_287ef4:
    // 0x287ef4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x287EF4u;
    {
        const bool branch_taken_0x287ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287EF4u;
        // 0x287ef8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ef4) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287EFCu;
label_287efc:
    // 0x287efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f00: 0xc096384  jal         func_258E10
    ctx->pc = 0x287F00u;
    SET_GPR_U32(ctx, 31, 0x287F08u);
    ctx->pc = 0x287F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F00u;
    // 0x287f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E10u, 0x287F00u, 0x287F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F08u;
label_287f08:
    // 0x287f08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x287F08u;
    {
        const bool branch_taken_0x287f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287f08) {
            ctx->pc = 0x287F30u;
            goto label_287f30;
        }
    }
    ctx->pc = 0x287F10u;
    // 0x287f10: 0xc0e409a  jal         func_390268
    ctx->pc = 0x287F10u;
    SET_GPR_U32(ctx, 31, 0x287F18u);
    ctx->pc = 0x287F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F10u;
    // 0x287f14: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x287F10u, 0x287F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F18u;
label_287f18:
    // 0x287f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x287f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f20: 0xc09be18  jal         func_26F860
    ctx->pc = 0x287F20u;
    SET_GPR_U32(ctx, 31, 0x287F28u);
    ctx->pc = 0x287F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F20u;
    // 0x287f24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F860u, 0x287F20u, 0x287F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F28u;
label_287f28:
    // 0x287f28: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x287F28u;
    {
        const bool branch_taken_0x287f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F28u;
        // 0x287f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f28) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287F30u;
label_287f30:
    // 0x287f30: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x287F30u;
    SET_GPR_U32(ctx, 31, 0x287F38u);
    ctx->pc = 0x287F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F30u;
    // 0x287f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x287F30u, 0x287F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F38u;
label_287f38:
    // 0x287f38: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x287f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x287f3c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x287F3Cu;
    {
        const bool branch_taken_0x287f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F3Cu;
        // 0x287f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f3c) {
            ctx->pc = 0x287FB4u;
            goto label_287fb4;
        }
    }
    ctx->pc = 0x287F44u;
    // 0x287f44: 0xc0963a2  jal         func_258E88
    ctx->pc = 0x287F44u;
    SET_GPR_U32(ctx, 31, 0x287F4Cu);
    ctx->pc = 0x287F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F44u;
    // 0x287f48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258E88u, 0x287F44u, 0x287F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F4Cu;
label_287f4c:
    // 0x287f4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x287F4Cu;
    {
        const bool branch_taken_0x287f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F4Cu;
        // 0x287f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f4c) {
            ctx->pc = 0x287F70u;
            goto label_287f70;
        }
    }
    ctx->pc = 0x287F54u;
    // 0x287f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f58: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x287f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x287f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x287f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287f60: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x287F60u;
    SET_GPR_U32(ctx, 31, 0x287F68u);
    ctx->pc = 0x287F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F60u;
    // 0x287f64: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x287F60u, 0x287F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F68u;
label_287f68:
    // 0x287f68: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x287F68u;
    {
        const bool branch_taken_0x287f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F68u;
        // 0x287f6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f68) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287F70u;
label_287f70:
    // 0x287f70: 0xc09643e  jal         func_2590F8
    ctx->pc = 0x287F70u;
    SET_GPR_U32(ctx, 31, 0x287F78u);
    ctx->pc = 0x287F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F70u;
    // 0x287f74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2590F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2590F8u, 0x287F70u, 0x287F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F78u;
label_287f78:
    // 0x287f78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x287F78u;
    {
        const bool branch_taken_0x287f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F78u;
        // 0x287f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f78) {
            ctx->pc = 0x287FB4u;
            goto label_287fb4;
        }
    }
    ctx->pc = 0x287F80u;
    // 0x287f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x287f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287f84: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x287f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x287f88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x287f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287f8c: 0xc098ab2  jal         func_262AC8
    ctx->pc = 0x287F8Cu;
    SET_GPR_U32(ctx, 31, 0x287F94u);
    ctx->pc = 0x287F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287F8Cu;
    // 0x287f90: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AC8u, 0x287F8Cu, 0x287F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287F94u;
label_287f94:
    // 0x287f94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x287F94u;
    {
        const bool branch_taken_0x287f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F94u;
        // 0x287f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f94) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287F9Cu;
label_287f9c:
    // 0x287f9c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x287F9Cu;
    {
        const bool branch_taken_0x287f9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287F9Cu;
        // 0x287fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287f9c) {
            ctx->pc = 0x287FB4u;
            goto label_287fb4;
        }
    }
    ctx->pc = 0x287FA4u;
    // 0x287fa4: 0xc09905e  jal         func_264178
    ctx->pc = 0x287FA4u;
    SET_GPR_U32(ctx, 31, 0x287FACu);
    ctx->pc = 0x287FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FA4u;
    // 0x287fa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x287FA4u, 0x287FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FACu;
label_287fac:
    // 0x287fac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x287FACu;
    {
        const bool branch_taken_0x287fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FACu;
        // 0x287fb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287fac) {
            ctx->pc = 0x287FC4u;
            goto label_287fc4;
        }
    }
    ctx->pc = 0x287FB4u;
label_287fb4:
    // 0x287fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x287fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287fb8: 0xc09896a  jal         func_2625A8
    ctx->pc = 0x287FB8u;
    SET_GPR_U32(ctx, 31, 0x287FC0u);
    ctx->pc = 0x287FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287FB8u;
    // 0x287fbc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2625A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2625A8u, 0x287FB8u, 0x287FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287FC0u;
label_287fc0:
    // 0x287fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287fc4:
    // 0x287fc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x287fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x287fc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x287fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x287fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x287fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x287fd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x287fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x287fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x287FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287FD8u;
        // 0x287fdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287FE0u;
}
