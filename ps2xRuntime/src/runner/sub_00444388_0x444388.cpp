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

// Function: sub_00444388
// Address: 0x444388 - 0x444408
void sub_00444388_0x444388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444388_0x444388");
#endif

    switch (ctx->pc) {
        case 0x4443b8u: goto label_4443b8;
        case 0x4443d0u: goto label_4443d0;
        case 0x4443e0u: goto label_4443e0;
        default: break;
    }

    ctx->pc = 0x444388u;

    // 0x444388: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x444388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44438c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x444390: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x444390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x444394: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x444394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444398: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x444398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44439c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x44439cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4443a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4443a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4443a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4443a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4443ac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4443acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4443b0: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4443B0u;
    SET_GPR_U32(ctx, 31, 0x4443B8u);
    ctx->pc = 0x4443B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443B0u;
    // 0x4443b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4443B0u, 0x4443B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443B8u;
label_4443b8:
    // 0x4443b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4443b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4443bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4443c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4443c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443c8: 0xc1110a4  jal         func_444290
    ctx->pc = 0x4443C8u;
    SET_GPR_U32(ctx, 31, 0x4443D0u);
    ctx->pc = 0x4443CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443C8u;
    // 0x4443cc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444290u, 0x4443C8u, 0x4443D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443D0u;
label_4443d0:
    // 0x4443d0: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x4443D0u;
    {
        const bool branch_taken_0x4443d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4443D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4443D0u;
        // 0x4443d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4443d0) {
            ctx->pc = 0x4443E0u;
            goto label_4443e0;
        }
    }
    ctx->pc = 0x4443D8u;
    // 0x4443d8: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4443D8u;
    SET_GPR_U32(ctx, 31, 0x4443E0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4443D8u, 0x4443E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443E0u;
label_4443e0:
    // 0x4443e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4443e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4443e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4443e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4443e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4443ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4443ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4443f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4443f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4443f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4443f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4443f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4443f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4443fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4443FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4443FCu;
        // 0x444400: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4443FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444404u;
    // 0x444404: 0x0  nop
    ctx->pc = 0x444404u;
    // NOP
    ctx->pc = 0x444408u;
}
