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

// Function: sub_0043D5C0
// Address: 0x43d5c0 - 0x43d668
void sub_0043D5C0_0x43d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043D5C0_0x43d5c0");
#endif

    switch (ctx->pc) {
        case 0x43d5d8u: goto label_43d5d8;
        case 0x43d5e0u: goto label_43d5e0;
        case 0x43d604u: goto label_43d604;
        case 0x43d610u: goto label_43d610;
        case 0x43d634u: goto label_43d634;
        case 0x43d654u: goto label_43d654;
        default: break;
    }

    ctx->pc = 0x43d5c0u;

    // 0x43d5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43d5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43d5c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43d5c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x43d5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43d5cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x43d5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x43d5d0: 0xc10f504  jal         func_43D410
    ctx->pc = 0x43D5D0u;
    SET_GPR_U32(ctx, 31, 0x43D5D8u);
    ctx->pc = 0x43D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43D5D0u;
    // 0x43d5d4: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D410u, 0x43D5D0u, 0x43D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D5D8u;
label_43d5d8:
    // 0x43d5d8: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43D5D8u;
    SET_GPR_U32(ctx, 31, 0x43D5E0u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43D5D8u, 0x43D5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D5E0u;
label_43d5e0:
    // 0x43d5e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43d5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x43d5e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43d5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43d5e8: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x43d5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x43d5ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x43d5ecu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x43d5f0: 0xf  sync
    ctx->pc = 0x43d5f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43d5f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43D5F4u;
    {
        const bool branch_taken_0x43d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D5F4u;
        // 0x43d5f8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43d5f4) {
            ctx->pc = 0x43D608u;
            goto label_43d608;
        }
    }
    ctx->pc = 0x43D5FCu;
    // 0x43d5fc: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43D5FCu;
    SET_GPR_U32(ctx, 31, 0x43D604u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43D5FCu, 0x43D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D604u;
label_43d604:
    // 0x43d604: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x43d604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_43d608:
    // 0x43d608: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x43d608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x43d60c: 0x0  nop
    ctx->pc = 0x43d60cu;
    // NOP
label_43d610:
    // 0x43d610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x43d610u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x43d614: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x43d614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x43d618: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43D618u;
    {
        const bool branch_taken_0x43d618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43d618) {
            ctx->pc = 0x43D62Cu;
            goto label_43d62c;
        }
    }
    ctx->pc = 0x43D620u;
    // 0x43d620: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43d624: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x43D624u;
    {
        const bool branch_taken_0x43d624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d624) {
            ctx->pc = 0x43D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43d610;
        }
    }
    ctx->pc = 0x43D62Cu;
label_43d62c:
    // 0x43d62c: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x43D62Cu;
    SET_GPR_U32(ctx, 31, 0x43D634u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x43D62Cu, 0x43D634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D634u;
label_43d634:
    // 0x43d634: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x43d634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43d638: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x43d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x43d63c: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x43d63cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3)); // MMIO: 0x1000f000
    // 0x43d640: 0xf  sync
    ctx->pc = 0x43d640u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x43d644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43D644u;
    {
        const bool branch_taken_0x43d644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x43d644) {
            ctx->pc = 0x43D654u;
            goto label_43d654;
        }
    }
    ctx->pc = 0x43D64Cu;
    // 0x43d64c: 0xc110cc4  jal         func_443310
    ctx->pc = 0x43D64Cu;
    SET_GPR_U32(ctx, 31, 0x43D654u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x43D64Cu, 0x43D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43D654u;
label_43d654:
    // 0x43d654: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x43d654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x43d658: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43d658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43d65c: 0x3e00008  jr          $ra
    ctx->pc = 0x43D65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43D65Cu;
        // 0x43d660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43D65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43D664u;
    // 0x43d664: 0x0  nop
    ctx->pc = 0x43d664u;
    // NOP
    ctx->pc = 0x43d668u;
}
