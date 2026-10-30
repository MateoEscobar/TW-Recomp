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

// Function: sub_00374350
// Address: 0x374350 - 0x3743f0
void sub_00374350_0x374350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374350_0x374350");
#endif

    switch (ctx->pc) {
        case 0x37437cu: goto label_37437c;
        case 0x374384u: goto label_374384;
        case 0x37439cu: goto label_37439c;
        case 0x3743b0u: goto label_3743b0;
        case 0x3743b8u: goto label_3743b8;
        case 0x3743ccu: goto label_3743cc;
        default: break;
    }

    ctx->pc = 0x374350u;

    // 0x374350: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x374354: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x374354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374358: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x374358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37435c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x374360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x374360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374364: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x374364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374368: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x374368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37436c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37436cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x374370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374374: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374374u;
    SET_GPR_U32(ctx, 31, 0x37437Cu);
    ctx->pc = 0x374378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374374u;
    // 0x374378: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374374u, 0x37437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37437Cu;
label_37437c:
    // 0x37437c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37437Cu;
    SET_GPR_U32(ctx, 31, 0x374384u);
    ctx->pc = 0x374380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37437Cu;
    // 0x374380: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37437Cu, 0x374384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374384u;
label_374384:
    // 0x374384: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x374384u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x374388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37438c: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37438cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x374390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374394: 0xc102488  jal         func_409220
    ctx->pc = 0x374394u;
    SET_GPR_U32(ctx, 31, 0x37439Cu);
    ctx->pc = 0x374398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374394u;
    // 0x374398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x374394u, 0x37439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37439Cu;
label_37439c:
    // 0x37439c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x37439cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3743a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3743a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743a8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3743A8u;
    SET_GPR_U32(ctx, 31, 0x3743B0u);
    ctx->pc = 0x3743ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743A8u;
    // 0x3743ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3743A8u, 0x3743B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743B0u;
label_3743b0:
    // 0x3743b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3743B0u;
    SET_GPR_U32(ctx, 31, 0x3743B8u);
    ctx->pc = 0x3743B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743B0u;
    // 0x3743b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3743B0u, 0x3743B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743B8u;
label_3743b8:
    // 0x3743b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3743b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3743bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3743bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3743c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743c4: 0xc05ac2c  jal         func_16B0B0
    ctx->pc = 0x3743C4u;
    SET_GPR_U32(ctx, 31, 0x3743CCu);
    ctx->pc = 0x3743C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3743C4u;
    // 0x3743c8: 0x23403  sra         $a2, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B0B0u, 0x3743C4u, 0x3743CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743CCu;
label_3743cc:
    // 0x3743cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3743ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3743d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3743d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3743d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3743d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3743d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3743dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3743dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3743e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3743e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3743e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3743E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3743E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743E4u;
        // 0x3743e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3743E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3743ECu;
    // 0x3743ec: 0x0  nop
    ctx->pc = 0x3743ecu;
    // NOP
    ctx->pc = 0x3743f0u;
}
