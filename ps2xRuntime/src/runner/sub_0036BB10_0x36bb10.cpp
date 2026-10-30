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

// Function: sub_0036BB10
// Address: 0x36bb10 - 0x36bcb8
void sub_0036BB10_0x36bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BB10_0x36bb10");
#endif

    switch (ctx->pc) {
        case 0x36bb10u: goto label_36bb10;
        case 0x36bb14u: goto label_36bb14;
        case 0x36bb18u: goto label_36bb18;
        case 0x36bb1cu: goto label_36bb1c;
        case 0x36bb20u: goto label_36bb20;
        case 0x36bb24u: goto label_36bb24;
        case 0x36bb28u: goto label_36bb28;
        case 0x36bb2cu: goto label_36bb2c;
        case 0x36bb30u: goto label_36bb30;
        case 0x36bb34u: goto label_36bb34;
        case 0x36bb38u: goto label_36bb38;
        case 0x36bb3cu: goto label_36bb3c;
        case 0x36bb40u: goto label_36bb40;
        case 0x36bb44u: goto label_36bb44;
        case 0x36bb48u: goto label_36bb48;
        case 0x36bb4cu: goto label_36bb4c;
        case 0x36bb50u: goto label_36bb50;
        case 0x36bb54u: goto label_36bb54;
        case 0x36bb58u: goto label_36bb58;
        case 0x36bb5cu: goto label_36bb5c;
        case 0x36bb60u: goto label_36bb60;
        case 0x36bb64u: goto label_36bb64;
        case 0x36bb68u: goto label_36bb68;
        case 0x36bb6cu: goto label_36bb6c;
        case 0x36bb70u: goto label_36bb70;
        case 0x36bb74u: goto label_36bb74;
        case 0x36bb78u: goto label_36bb78;
        case 0x36bb7cu: goto label_36bb7c;
        case 0x36bb80u: goto label_36bb80;
        case 0x36bb84u: goto label_36bb84;
        case 0x36bb88u: goto label_36bb88;
        case 0x36bb8cu: goto label_36bb8c;
        case 0x36bb90u: goto label_36bb90;
        case 0x36bb94u: goto label_36bb94;
        case 0x36bb98u: goto label_36bb98;
        case 0x36bb9cu: goto label_36bb9c;
        case 0x36bba0u: goto label_36bba0;
        case 0x36bba4u: goto label_36bba4;
        case 0x36bba8u: goto label_36bba8;
        case 0x36bbacu: goto label_36bbac;
        case 0x36bbb0u: goto label_36bbb0;
        case 0x36bbb4u: goto label_36bbb4;
        case 0x36bbb8u: goto label_36bbb8;
        case 0x36bbbcu: goto label_36bbbc;
        case 0x36bbc0u: goto label_36bbc0;
        case 0x36bbc4u: goto label_36bbc4;
        case 0x36bbc8u: goto label_36bbc8;
        case 0x36bbccu: goto label_36bbcc;
        case 0x36bbd0u: goto label_36bbd0;
        case 0x36bbd4u: goto label_36bbd4;
        case 0x36bbd8u: goto label_36bbd8;
        case 0x36bbdcu: goto label_36bbdc;
        case 0x36bbe0u: goto label_36bbe0;
        case 0x36bbe4u: goto label_36bbe4;
        case 0x36bbe8u: goto label_36bbe8;
        case 0x36bbecu: goto label_36bbec;
        case 0x36bbf0u: goto label_36bbf0;
        case 0x36bbf4u: goto label_36bbf4;
        case 0x36bbf8u: goto label_36bbf8;
        case 0x36bbfcu: goto label_36bbfc;
        case 0x36bc00u: goto label_36bc00;
        case 0x36bc04u: goto label_36bc04;
        case 0x36bc08u: goto label_36bc08;
        case 0x36bc0cu: goto label_36bc0c;
        case 0x36bc10u: goto label_36bc10;
        case 0x36bc14u: goto label_36bc14;
        case 0x36bc18u: goto label_36bc18;
        case 0x36bc1cu: goto label_36bc1c;
        case 0x36bc20u: goto label_36bc20;
        case 0x36bc24u: goto label_36bc24;
        case 0x36bc28u: goto label_36bc28;
        case 0x36bc2cu: goto label_36bc2c;
        case 0x36bc30u: goto label_36bc30;
        case 0x36bc34u: goto label_36bc34;
        case 0x36bc38u: goto label_36bc38;
        case 0x36bc3cu: goto label_36bc3c;
        case 0x36bc40u: goto label_36bc40;
        case 0x36bc44u: goto label_36bc44;
        case 0x36bc48u: goto label_36bc48;
        case 0x36bc4cu: goto label_36bc4c;
        case 0x36bc50u: goto label_36bc50;
        case 0x36bc54u: goto label_36bc54;
        case 0x36bc58u: goto label_36bc58;
        case 0x36bc5cu: goto label_36bc5c;
        case 0x36bc60u: goto label_36bc60;
        case 0x36bc64u: goto label_36bc64;
        case 0x36bc68u: goto label_36bc68;
        case 0x36bc6cu: goto label_36bc6c;
        case 0x36bc70u: goto label_36bc70;
        case 0x36bc74u: goto label_36bc74;
        case 0x36bc78u: goto label_36bc78;
        case 0x36bc7cu: goto label_36bc7c;
        case 0x36bc80u: goto label_36bc80;
        case 0x36bc84u: goto label_36bc84;
        case 0x36bc88u: goto label_36bc88;
        case 0x36bc8cu: goto label_36bc8c;
        case 0x36bc90u: goto label_36bc90;
        case 0x36bc94u: goto label_36bc94;
        case 0x36bc98u: goto label_36bc98;
        case 0x36bc9cu: goto label_36bc9c;
        case 0x36bca0u: goto label_36bca0;
        case 0x36bca4u: goto label_36bca4;
        case 0x36bca8u: goto label_36bca8;
        case 0x36bcacu: goto label_36bcac;
        case 0x36bcb0u: goto label_36bcb0;
        case 0x36bcb4u: goto label_36bcb4;
        default: break;
    }

    ctx->pc = 0x36bb10u;

label_36bb10:
    // 0x36bb10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_36bb14:
    // 0x36bb14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36bb18:
    // 0x36bb18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x36bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_36bb1c:
    // 0x36bb1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36bb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_36bb20:
    // 0x36bb20: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36bb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bb24:
    // 0x36bb24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36bb24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36bb28:
    // 0x36bb28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36bb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_36bb2c:
    // 0x36bb2c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x36bb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_36bb30:
    // 0x36bb30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36bb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bb34:
    // 0x36bb34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36bb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_36bb38:
    // 0x36bb38: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x36bb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_36bb3c:
    // 0x36bb3c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x36bb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_36bb40:
    // 0x36bb40: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x36bb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_36bb44:
    // 0x36bb44: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x36bb44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
label_36bb48:
    // 0x36bb48: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x36bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_36bb4c:
    // 0x36bb4c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x36bb4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36bb50:
    // 0x36bb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36bb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_36bb54:
    // 0x36bb54: 0xc102472  jal         func_4091C8
label_36bb58:
    if (ctx->pc == 0x36BB58u) {
        ctx->pc = 0x36BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB54u;
        // 0x36bb58: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BB5Cu;
        goto label_36bb5c;
    }
    ctx->pc = 0x36BB54u;
    SET_GPR_U32(ctx, 31, 0x36BB5Cu);
    ctx->pc = 0x36BB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB54u;
    // 0x36bb58: 0x220b82d  daddu       $s7, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BB54u, 0x36BB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB5Cu;
label_36bb5c:
    // 0x36bb5c: 0xc10b108  jal         func_42C420
label_36bb60:
    if (ctx->pc == 0x36BB60u) {
        ctx->pc = 0x36BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB5Cu;
        // 0x36bb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BB64u;
        goto label_36bb64;
    }
    ctx->pc = 0x36BB5Cu;
    SET_GPR_U32(ctx, 31, 0x36BB64u);
    ctx->pc = 0x36BB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB5Cu;
    // 0x36bb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BB5Cu, 0x36BB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB64u;
label_36bb64:
    // 0x36bb64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36bb64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bb68:
    // 0x36bb68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36bb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36bb6c:
    // 0x36bb6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36bb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bb70:
    // 0x36bb70: 0xc102472  jal         func_4091C8
label_36bb74:
    if (ctx->pc == 0x36BB74u) {
        ctx->pc = 0x36BB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB70u;
        // 0x36bb74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BB78u;
        goto label_36bb78;
    }
    ctx->pc = 0x36BB70u;
    SET_GPR_U32(ctx, 31, 0x36BB78u);
    ctx->pc = 0x36BB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB70u;
    // 0x36bb74: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36BB70u, 0x36BB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB78u;
label_36bb78:
    // 0x36bb78: 0xc10b108  jal         func_42C420
label_36bb7c:
    if (ctx->pc == 0x36BB7Cu) {
        ctx->pc = 0x36BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB78u;
        // 0x36bb7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BB80u;
        goto label_36bb80;
    }
    ctx->pc = 0x36BB78u;
    SET_GPR_U32(ctx, 31, 0x36BB80u);
    ctx->pc = 0x36BB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB78u;
    // 0x36bb7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BB78u, 0x36BB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB80u;
label_36bb80:
    // 0x36bb80: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x36bb80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_36bb84:
    // 0x36bb84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36bb84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bb88:
    // 0x36bb88: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x36bb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_36bb8c:
    // 0x36bb8c: 0x264892b0  addiu       $t0, $s2, -0x6D50
    ctx->pc = 0x36bb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939312));
label_36bb90:
    // 0x36bb90: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x36bb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_36bb94:
    // 0x36bb94: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x36bb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_36bb98:
    // 0x36bb98: 0x24a592a8  addiu       $a1, $a1, -0x6D58
    ctx->pc = 0x36bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939304));
label_36bb9c:
    // 0x36bb9c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x36bb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36bba0:
    // 0x36bba0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x36bba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_36bba4:
    // 0x36bba4: 0x24093eef  addiu       $t1, $zero, 0x3EEF
    ctx->pc = 0x36bba4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16111));
label_36bba8:
    // 0x36bba8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x36bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_36bbac:
    // 0x36bbac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36bbacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bbb0:
    // 0x36bbb0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x36bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_36bbb4:
    // 0x36bbb4: 0x40f809  jalr        $v0
label_36bbb8:
    if (ctx->pc == 0x36BBB8u) {
        ctx->pc = 0x36BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBB4u;
        // 0x36bbb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBBCu;
        goto label_36bbbc;
    }
    ctx->pc = 0x36BBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36BBBCu);
        ctx->pc = 0x36BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBB4u;
        // 0x36bbb8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BBB4u, 0x36BBBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BBBCu;
label_36bbbc:
    // 0x36bbbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36bbbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bbc0:
    // 0x36bbc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36bbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bbc4:
    // 0x36bbc4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x36bbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36bbc8:
    // 0x36bbc8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36bbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36bbcc:
    // 0x36bbcc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36bbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bbd0:
    // 0x36bbd0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36bbd4:
    // 0x36bbd4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36bbd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36bbd8:
    // 0x36bbd8: 0xc1024e8  jal         func_4093A0
label_36bbdc:
    if (ctx->pc == 0x36BBDCu) {
        ctx->pc = 0x36BBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBD8u;
        // 0x36bbdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBE0u;
        goto label_36bbe0;
    }
    ctx->pc = 0x36BBD8u;
    SET_GPR_U32(ctx, 31, 0x36BBE0u);
    ctx->pc = 0x36BBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BBD8u;
    // 0x36bbdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36BBD8u, 0x36BBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BBE0u;
label_36bbe0:
    // 0x36bbe0: 0xc10b108  jal         func_42C420
label_36bbe4:
    if (ctx->pc == 0x36BBE4u) {
        ctx->pc = 0x36BBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBE0u;
        // 0x36bbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBE8u;
        goto label_36bbe8;
    }
    ctx->pc = 0x36BBE0u;
    SET_GPR_U32(ctx, 31, 0x36BBE8u);
    ctx->pc = 0x36BBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BBE0u;
    // 0x36bbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36BBE0u, 0x36BBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BBE8u;
label_36bbe8:
    // 0x36bbe8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36bbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36bbec:
    // 0x36bbec: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x36bbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_36bbf0:
    // 0x36bbf0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_36bbf4:
    if (ctx->pc == 0x36BBF4u) {
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF0u;
        // 0x36bbf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BBF8u;
        goto label_36bbf8;
    }
    ctx->pc = 0x36BBF0u;
    {
        const bool branch_taken_0x36bbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BBF0u;
        // 0x36bbf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bbf0) {
            ctx->pc = 0x36BBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bbc8;
        }
    }
    ctx->pc = 0x36BBF8u;
label_36bbf8:
    // 0x36bbf8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36bbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36bbfc:
    // 0x36bbfc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x36bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_36bc00:
    // 0x36bc00: 0xc10758a  jal         func_41D628
label_36bc04:
    if (ctx->pc == 0x36BC04u) {
        ctx->pc = 0x36BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC00u;
        // 0x36bc04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC08u;
        goto label_36bc08;
    }
    ctx->pc = 0x36BC00u;
    SET_GPR_U32(ctx, 31, 0x36BC08u);
    ctx->pc = 0x36BC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC00u;
    // 0x36bc04: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D628u, 0x36BC00u, 0x36BC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC08u;
label_36bc08:
    // 0x36bc08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36bc08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bc0c:
    // 0x36bc0c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x36bc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_36bc10:
    // 0x36bc10: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x36bc10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_36bc14:
    // 0x36bc14: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_36bc18:
    // 0x36bc18: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x36bc18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36bc1c:
    // 0x36bc1c: 0xc10b0b4  jal         func_42C2D0
label_36bc20:
    if (ctx->pc == 0x36BC20u) {
        ctx->pc = 0x36BC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC1Cu;
        // 0x36bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC24u;
        goto label_36bc24;
    }
    ctx->pc = 0x36BC1Cu;
    SET_GPR_U32(ctx, 31, 0x36BC24u);
    ctx->pc = 0x36BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC1Cu;
    // 0x36bc20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36BC1Cu, 0x36BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC24u;
label_36bc24:
    // 0x36bc24: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
label_36bc28:
    if (ctx->pc == 0x36BC28u) {
        ctx->pc = 0x36BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC24u;
        // 0x36bc28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC2Cu;
        goto label_36bc2c;
    }
    ctx->pc = 0x36BC24u;
    {
        const bool branch_taken_0x36bc24 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x36BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC24u;
        // 0x36bc28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc24) {
            ctx->pc = 0x36BC40u;
            goto label_36bc40;
        }
    }
    ctx->pc = 0x36BC2Cu;
label_36bc2c:
    // 0x36bc2c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36bc2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
label_36bc30:
    // 0x36bc30: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x36bc30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_36bc34:
    // 0x36bc34: 0xc10af26  jal         func_42BC98
label_36bc38:
    if (ctx->pc == 0x36BC38u) {
        ctx->pc = 0x36BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC34u;
        // 0x36bc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC3Cu;
        goto label_36bc3c;
    }
    ctx->pc = 0x36BC34u;
    SET_GPR_U32(ctx, 31, 0x36BC3Cu);
    ctx->pc = 0x36BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC34u;
    // 0x36bc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x36BC34u, 0x36BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC3Cu;
label_36bc3c:
    // 0x36bc3c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36bc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36bc40:
    // 0x36bc40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36bc40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bc44:
    // 0x36bc44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36bc48:
    // 0x36bc48: 0xc102576  jal         func_4095D8
label_36bc4c:
    if (ctx->pc == 0x36BC4Cu) {
        ctx->pc = 0x36BC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC48u;
        // 0x36bc4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC50u;
        goto label_36bc50;
    }
    ctx->pc = 0x36BC48u;
    SET_GPR_U32(ctx, 31, 0x36BC50u);
    ctx->pc = 0x36BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BC48u;
    // 0x36bc4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36BC48u, 0x36BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BC50u;
label_36bc50:
    // 0x36bc50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36bc50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36bc54:
    // 0x36bc54: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x36bc54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_36bc58:
    // 0x36bc58: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_36bc5c:
    if (ctx->pc == 0x36BC5Cu) {
        ctx->pc = 0x36BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC58u;
        // 0x36bc5c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC60u;
        goto label_36bc60;
    }
    ctx->pc = 0x36BC58u;
    {
        const bool branch_taken_0x36bc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC58u;
        // 0x36bc5c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc58) {
            ctx->pc = 0x36BC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36bc10;
        }
    }
    ctx->pc = 0x36BC60u;
label_36bc60:
    // 0x36bc60: 0x8ee827e4  lw          $t0, 0x27E4($s7)
    ctx->pc = 0x36bc60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 10212)));
label_36bc64:
    // 0x36bc64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36bc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36bc68:
    // 0x36bc68: 0x26c692b0  addiu       $a2, $s6, -0x6D50
    ctx->pc = 0x36bc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294939312));
label_36bc6c:
    // 0x36bc6c: 0x24073f02  addiu       $a3, $zero, 0x3F02
    ctx->pc = 0x36bc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16130));
label_36bc70:
    // 0x36bc70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x36bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_36bc74:
    // 0x36bc74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x36bc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_36bc78:
    // 0x36bc78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x36bc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_36bc7c:
    // 0x36bc7c: 0x60f809  jalr        $v1
label_36bc80:
    if (ctx->pc == 0x36BC80u) {
        ctx->pc = 0x36BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC7Cu;
        // 0x36bc80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BC84u;
        goto label_36bc84;
    }
    ctx->pc = 0x36BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36BC84u);
        ctx->pc = 0x36BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BC7Cu;
        // 0x36bc80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BC7Cu, 0x36BC84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36BC84u;
label_36bc84:
    // 0x36bc84: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x36bc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36bc88:
    // 0x36bc88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36bc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bc8c:
    // 0x36bc8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36bc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36bc90:
    // 0x36bc90: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x36bc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36bc94:
    // 0x36bc94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36bc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36bc98:
    // 0x36bc98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36bc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36bc9c:
    // 0x36bc9c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x36bc9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36bca0:
    // 0x36bca0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x36bca0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36bca4:
    // 0x36bca4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x36bca4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36bca8:
    // 0x36bca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36bca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36bcac:
    // 0x36bcac: 0x3e00008  jr          $ra
label_36bcb0:
    if (ctx->pc == 0x36BCB0u) {
        ctx->pc = 0x36BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCACu;
        // 0x36bcb0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36BCB4u;
        goto label_36bcb4;
    }
    ctx->pc = 0x36BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BCACu;
        // 0x36bcb0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BCB4u;
label_36bcb4:
    // 0x36bcb4: 0x0  nop
    ctx->pc = 0x36bcb4u;
    // NOP
    ctx->pc = 0x36bcb8u;
}
