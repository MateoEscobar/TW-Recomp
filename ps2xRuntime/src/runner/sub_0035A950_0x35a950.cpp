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

// Function: sub_0035A950
// Address: 0x35a950 - 0x35aa28
void sub_0035A950_0x35a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A950_0x35a950");
#endif

    switch (ctx->pc) {
        case 0x35a984u: goto label_35a984;
        case 0x35a998u: goto label_35a998;
        case 0x35a9acu: goto label_35a9ac;
        case 0x35a9c0u: goto label_35a9c0;
        case 0x35a9c8u: goto label_35a9c8;
        case 0x35a9dcu: goto label_35a9dc;
        case 0x35a9e4u: goto label_35a9e4;
        case 0x35a9fcu: goto label_35a9fc;
        default: break;
    }

    ctx->pc = 0x35a950u;

    // 0x35a950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35a954: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a958: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x35a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x35a95c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35a95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a964: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x35a964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x35a968: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x35a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x35a96c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35a970: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x35a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x35a974: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x35a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x35a978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a97c: 0xc102488  jal         func_409220
    ctx->pc = 0x35A97Cu;
    SET_GPR_U32(ctx, 31, 0x35A984u);
    ctx->pc = 0x35A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A97Cu;
    // 0x35a980: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A97Cu, 0x35A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A984u;
label_35a984:
    // 0x35a984: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35a984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a98c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35a990: 0xc102488  jal         func_409220
    ctx->pc = 0x35A990u;
    SET_GPR_U32(ctx, 31, 0x35A998u);
    ctx->pc = 0x35A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A990u;
    // 0x35a994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A990u, 0x35A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A998u;
label_35a998:
    // 0x35a998: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35a998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35a9a4: 0xc102488  jal         func_409220
    ctx->pc = 0x35A9A4u;
    SET_GPR_U32(ctx, 31, 0x35A9ACu);
    ctx->pc = 0x35A9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9A4u;
    // 0x35a9a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35A9A4u, 0x35A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9ACu;
label_35a9ac:
    // 0x35a9ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35a9acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35a9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35a9b8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A9B8u;
    SET_GPR_U32(ctx, 31, 0x35A9C0u);
    ctx->pc = 0x35A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9B8u;
    // 0x35a9bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A9B8u, 0x35A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9C0u;
label_35a9c0:
    // 0x35a9c0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35A9C0u;
    SET_GPR_U32(ctx, 31, 0x35A9C8u);
    ctx->pc = 0x35A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9C0u;
    // 0x35a9c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35A9C0u, 0x35A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9C8u;
label_35a9c8:
    // 0x35a9c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35a9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35a9ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9d4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A9D4u;
    SET_GPR_U32(ctx, 31, 0x35A9DCu);
    ctx->pc = 0x35A9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9D4u;
    // 0x35a9d8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A9D4u, 0x35A9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9DCu;
label_35a9dc:
    // 0x35a9dc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35A9DCu;
    SET_GPR_U32(ctx, 31, 0x35A9E4u);
    ctx->pc = 0x35A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9DCu;
    // 0x35a9e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35A9DCu, 0x35A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9E4u;
label_35a9e4:
    // 0x35a9e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35a9e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35a9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35a9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35a9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9f4: 0xc08db16  jal         func_236C58
    ctx->pc = 0x35A9F4u;
    SET_GPR_U32(ctx, 31, 0x35A9FCu);
    ctx->pc = 0x35A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9F4u;
    // 0x35a9f8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C58u, 0x35A9F4u, 0x35A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9FCu;
label_35a9fc:
    // 0x35a9fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x35a9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35aa00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35aa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x35aa04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35aa08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x35aa08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35aa0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35aa0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35aa10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x35aa10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35aa14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x35aa14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35aa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35aa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa1c: 0x3e00008  jr          $ra
    ctx->pc = 0x35AA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA1Cu;
        // 0x35aa20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AA24u;
    // 0x35aa24: 0x0  nop
    ctx->pc = 0x35aa24u;
    // NOP
    ctx->pc = 0x35aa28u;
}
