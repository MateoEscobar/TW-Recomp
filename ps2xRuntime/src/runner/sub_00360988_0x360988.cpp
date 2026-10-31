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

// Function: sub_00360988
// Address: 0x360988 - 0x360ac8
void sub_00360988_0x360988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360988_0x360988");
#endif

    switch (ctx->pc) {
        case 0x3609c0u: goto label_3609c0;
        case 0x3609c8u: goto label_3609c8;
        case 0x3609d4u: goto label_3609d4;
        case 0x3609ecu: goto label_3609ec;
        case 0x360a04u: goto label_360a04;
        case 0x360a0cu: goto label_360a0c;
        case 0x360a20u: goto label_360a20;
        case 0x360a34u: goto label_360a34;
        case 0x360a3cu: goto label_360a3c;
        case 0x360a50u: goto label_360a50;
        case 0x360a58u: goto label_360a58;
        case 0x360a6cu: goto label_360a6c;
        case 0x360a74u: goto label_360a74;
        case 0x360a98u: goto label_360a98;
        default: break;
    }

    ctx->pc = 0x360988u;

    // 0x360988: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x360988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36098c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360990: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x360990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x360994: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x360994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360998: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x360998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36099c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x36099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3609a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3609a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3609a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3609a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3609a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3609a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3609ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3609acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3609b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3609b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3609b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3609b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3609b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3609B8u;
    SET_GPR_U32(ctx, 31, 0x3609C0u);
    ctx->pc = 0x3609BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609B8u;
    // 0x3609bc: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3609B8u, 0x3609C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609C0u;
label_3609c0:
    // 0x3609c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3609C0u;
    SET_GPR_U32(ctx, 31, 0x3609C8u);
    ctx->pc = 0x3609C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609C0u;
    // 0x3609c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3609C0u, 0x3609C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609C8u;
label_3609c8:
    // 0x3609c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3609c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609cc: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x3609CCu;
    SET_GPR_U32(ctx, 31, 0x3609D4u);
    ctx->pc = 0x3609D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609CCu;
    // 0x3609d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x3609CCu, 0x3609D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609D4u;
label_3609d4:
    // 0x3609d4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3609d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3609d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3609D8u;
    {
        const bool branch_taken_0x3609d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3609DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3609D8u;
        // 0x3609dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3609d8) {
            ctx->pc = 0x3609F0u;
            goto label_3609f0;
        }
    }
    ctx->pc = 0x3609E0u;
    // 0x3609e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3609e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609e4: 0xc0c8e00  jal         func_323800
    ctx->pc = 0x3609E4u;
    SET_GPR_U32(ctx, 31, 0x3609ECu);
    ctx->pc = 0x3609E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609E4u;
    // 0x3609e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323800u, 0x3609E4u, 0x3609ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3609ECu;
label_3609ec:
    // 0x3609ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3609ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3609f0:
    // 0x3609f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3609f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3609f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3609f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3609f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3609fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3609FCu;
    SET_GPR_U32(ctx, 31, 0x360A04u);
    ctx->pc = 0x360A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3609FCu;
    // 0x360a00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3609FCu, 0x360A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A04u;
label_360a04:
    // 0x360a04: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360A04u;
    SET_GPR_U32(ctx, 31, 0x360A0Cu);
    ctx->pc = 0x360A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A04u;
    // 0x360a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360A04u, 0x360A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A0Cu;
label_360a0c:
    // 0x360a0c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x360a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x360a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x360a18: 0xc1024c6  jal         func_409318
    ctx->pc = 0x360A18u;
    SET_GPR_U32(ctx, 31, 0x360A20u);
    ctx->pc = 0x360A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A18u;
    // 0x360a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x360A18u, 0x360A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A20u;
label_360a20:
    // 0x360a20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a24: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x360a24u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360a28: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x360a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x360a2c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360A2Cu;
    SET_GPR_U32(ctx, 31, 0x360A34u);
    ctx->pc = 0x360A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A2Cu;
    // 0x360a30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360A2Cu, 0x360A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A34u;
label_360a34:
    // 0x360a34: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360A34u;
    SET_GPR_U32(ctx, 31, 0x360A3Cu);
    ctx->pc = 0x360A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A34u;
    // 0x360a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360A34u, 0x360A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A3Cu;
label_360a3c:
    // 0x360a3c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x360a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a44: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x360a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x360a48: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360A48u;
    SET_GPR_U32(ctx, 31, 0x360A50u);
    ctx->pc = 0x360A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A48u;
    // 0x360a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360A48u, 0x360A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A50u;
label_360a50:
    // 0x360a50: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x360A50u;
    SET_GPR_U32(ctx, 31, 0x360A58u);
    ctx->pc = 0x360A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A50u;
    // 0x360a54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x360A50u, 0x360A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A58u;
label_360a58:
    // 0x360a58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360a58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x360a5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x360a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x360a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a64: 0xc102472  jal         func_4091C8
    ctx->pc = 0x360A64u;
    SET_GPR_U32(ctx, 31, 0x360A6Cu);
    ctx->pc = 0x360A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A64u;
    // 0x360a68: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x360A64u, 0x360A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A6Cu;
label_360a6c:
    // 0x360a6c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x360A6Cu;
    SET_GPR_U32(ctx, 31, 0x360A74u);
    ctx->pc = 0x360A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A6Cu;
    // 0x360a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x360A6Cu, 0x360A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A74u;
label_360a74:
    // 0x360a74: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x360a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x360a78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x360a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x360a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x360a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a84: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x360a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a88: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x360a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360a8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x360a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x360a90: 0xc0b819c  jal         func_2E0670
    ctx->pc = 0x360A90u;
    SET_GPR_U32(ctx, 31, 0x360A98u);
    ctx->pc = 0x360A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360A90u;
    // 0x360a94: 0x24c03  sra         $t1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0670u, 0x360A90u, 0x360A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360A98u;
label_360a98:
    // 0x360a98: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x360a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x360a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x360a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360aa0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x360aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x360aa4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x360aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x360aa8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x360aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x360aac: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x360aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360ab0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x360ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360ab4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x360ab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x360ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360abc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x360abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x360ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x360AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360AC0u;
        // 0x360ac4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360AC8u;
}
