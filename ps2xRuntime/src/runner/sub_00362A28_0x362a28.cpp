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

// Function: sub_00362A28
// Address: 0x362a28 - 0x362b18
void sub_00362A28_0x362a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A28_0x362a28");
#endif

    switch (ctx->pc) {
        case 0x362a5cu: goto label_362a5c;
        case 0x362a64u: goto label_362a64;
        case 0x362a78u: goto label_362a78;
        case 0x362a80u: goto label_362a80;
        case 0x362a94u: goto label_362a94;
        case 0x362a9cu: goto label_362a9c;
        case 0x362ab0u: goto label_362ab0;
        case 0x362ab8u: goto label_362ab8;
        case 0x362accu: goto label_362acc;
        case 0x362ad4u: goto label_362ad4;
        case 0x362aecu: goto label_362aec;
        default: break;
    }

    ctx->pc = 0x362a28u;

    // 0x362a28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x362a2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362a30: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x362a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x362a34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x362a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x362a38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x362a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x362a44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362a48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x362a4c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x362a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x362a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362a54: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362A54u;
    SET_GPR_U32(ctx, 31, 0x362A5Cu);
    ctx->pc = 0x362A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A54u;
    // 0x362a58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362A54u, 0x362A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A5Cu;
label_362a5c:
    // 0x362a5c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362A5Cu;
    SET_GPR_U32(ctx, 31, 0x362A64u);
    ctx->pc = 0x362A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A5Cu;
    // 0x362a60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362A5Cu, 0x362A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A64u;
label_362a64:
    // 0x362a64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x362a68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x362a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362a70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362A70u;
    SET_GPR_U32(ctx, 31, 0x362A78u);
    ctx->pc = 0x362A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A70u;
    // 0x362a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362A70u, 0x362A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A78u;
label_362a78:
    // 0x362a78: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362A78u;
    SET_GPR_U32(ctx, 31, 0x362A80u);
    ctx->pc = 0x362A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A78u;
    // 0x362a7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362A78u, 0x362A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A80u;
label_362a80:
    // 0x362a80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x362a84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x362a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x362a8c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362A8Cu;
    SET_GPR_U32(ctx, 31, 0x362A94u);
    ctx->pc = 0x362A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A8Cu;
    // 0x362a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362A8Cu, 0x362A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A94u;
label_362a94:
    // 0x362a94: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362A94u;
    SET_GPR_U32(ctx, 31, 0x362A9Cu);
    ctx->pc = 0x362A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A94u;
    // 0x362a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362A94u, 0x362A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A9Cu;
label_362a9c:
    // 0x362a9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362a9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362aa0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x362aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362aa4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x362aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x362aa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362AA8u;
    SET_GPR_U32(ctx, 31, 0x362AB0u);
    ctx->pc = 0x362AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AA8u;
    // 0x362aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362AA8u, 0x362AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AB0u;
label_362ab0:
    // 0x362ab0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362AB0u;
    SET_GPR_U32(ctx, 31, 0x362AB8u);
    ctx->pc = 0x362AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AB0u;
    // 0x362ab4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362AB0u, 0x362AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AB8u;
label_362ab8:
    // 0x362ab8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x362ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x362abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x362ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ac4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362AC4u;
    SET_GPR_U32(ctx, 31, 0x362ACCu);
    ctx->pc = 0x362AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AC4u;
    // 0x362ac8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362AC4u, 0x362ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362ACCu;
label_362acc:
    // 0x362acc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x362ACCu;
    SET_GPR_U32(ctx, 31, 0x362AD4u);
    ctx->pc = 0x362AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362ACCu;
    // 0x362ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x362ACCu, 0x362AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AD4u;
label_362ad4:
    // 0x362ad4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x362ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ad8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x362ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362adc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x362adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ae0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x362ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ae4: 0xc0b33cc  jal         func_2CCF30
    ctx->pc = 0x362AE4u;
    SET_GPR_U32(ctx, 31, 0x362AECu);
    ctx->pc = 0x362AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AE4u;
    // 0x362ae8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCF30u, 0x362AE4u, 0x362AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AECu;
label_362aec:
    // 0x362aec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x362aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362af4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x362af4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362af8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x362af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x362afc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x362afcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362b00: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x362b00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362b04: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x362b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x362B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362B0Cu;
        // 0x362b10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362B14u;
    // 0x362b14: 0x0  nop
    ctx->pc = 0x362b14u;
    // NOP
    ctx->pc = 0x362b18u;
}
