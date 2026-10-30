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

// Function: sub_004CF3A8
// Address: 0x4cf3a8 - 0x4cf440
void sub_004CF3A8_0x4cf3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF3A8_0x4cf3a8");
#endif

    switch (ctx->pc) {
        case 0x4cf3dcu: goto label_4cf3dc;
        case 0x4cf41cu: goto label_4cf41c;
        default: break;
    }

    ctx->pc = 0x4cf3a8u;

    // 0x4cf3a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cf3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4cf3ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cf3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cf3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cf3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cf3b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4cf3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf3b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf3c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cf3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cf3c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4cf3c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf3c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cf3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cf3cc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x4cf3ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf3d0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4cf3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4cf3d4: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CF3D4u;
    SET_GPR_U32(ctx, 31, 0x4CF3DCu);
    ctx->pc = 0x4CF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF3D4u;
    // 0x4cf3d8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CF3D4u, 0x4CF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF3DCu;
label_4cf3dc:
    // 0x4cf3dc: 0x108302  srl         $s0, $s0, 12
    ctx->pc = 0x4cf3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 12));
    // 0x4cf3e0: 0xae330070  sw          $s3, 0x70($s1)
    ctx->pc = 0x4cf3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 19));
    // 0x4cf3e4: 0x108300  sll         $s0, $s0, 12
    ctx->pc = 0x4cf3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 12));
    // 0x4cf3e8: 0xae34006c  sw          $s4, 0x6C($s1)
    ctx->pc = 0x4cf3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 20));
    // 0x4cf3ec: 0xae300058  sw          $s0, 0x58($s1)
    ctx->pc = 0x4cf3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 16));
    // 0x4cf3f0: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x4cf3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x4cf3f4: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x4cf3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
    // 0x4cf3f8: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x4cf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x4cf3fc: 0xae32005c  sw          $s2, 0x5C($s1)
    ctx->pc = 0x4cf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 18));
    // 0x4cf400: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x4cf400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
    // 0x4cf404: 0xae320064  sw          $s2, 0x64($s1)
    ctx->pc = 0x4cf404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 18));
    // 0x4cf408: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x4cf408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x4cf40c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF40Cu;
    {
        const bool branch_taken_0x4cf40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF40Cu;
        // 0x4cf410: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf40c) {
            ctx->pc = 0x4CF420u;
            goto label_4cf420;
        }
    }
    ctx->pc = 0x4CF414u;
    // 0x4cf414: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CF414u;
    SET_GPR_U32(ctx, 31, 0x4CF41Cu);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CF414u, 0x4CF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF41Cu;
label_4cf41c:
    // 0x4cf41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cf41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf420:
    // 0x4cf420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cf420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cf428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf42c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cf42cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf430: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4cf430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cf434: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF434u;
        // 0x4cf438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF43Cu;
    // 0x4cf43c: 0x0  nop
    ctx->pc = 0x4cf43cu;
    // NOP
    ctx->pc = 0x4cf440u;
}
