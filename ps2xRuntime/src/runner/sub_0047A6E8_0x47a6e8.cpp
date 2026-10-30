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

// Function: sub_0047A6E8
// Address: 0x47a6e8 - 0x47a758
void sub_0047A6E8_0x47a6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A6E8_0x47a6e8");
#endif

    switch (ctx->pc) {
        case 0x47a6fcu: goto label_47a6fc;
        default: break;
    }

    ctx->pc = 0x47a6e8u;

    // 0x47a6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47a6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x47a6ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47a6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47a6f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x47a6f4: 0xc11e6e8  jal         func_479BA0
    ctx->pc = 0x47A6F4u;
    SET_GPR_U32(ctx, 31, 0x47A6FCu);
    ctx->pc = 0x47A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47A6F4u;
    // 0x47a6f8: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x479BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479BA0u, 0x47A6F4u, 0x47A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A6FCu;
label_47a6fc:
    // 0x47a6fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x47a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a700: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x47A700u;
    {
        const bool branch_taken_0x47a700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A700u;
        // 0x47a704: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a700) {
            ctx->pc = 0x47A744u;
            goto label_47a744;
        }
    }
    ctx->pc = 0x47A708u;
    // 0x47a708: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x47a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x47a70c: 0x2442f680  addiu       $v0, $v0, -0x980
    ctx->pc = 0x47a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964864));
    // 0x47a710: 0x24040114  addiu       $a0, $zero, 0x114
    ctx->pc = 0x47a710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
    // 0x47a714: 0x240334f9  addiu       $v1, $zero, 0x34F9
    ctx->pc = 0x47a714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13561));
    // 0x47a718: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x47a718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x47a71c: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x47a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x47a720: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x47a720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47a724: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x47a724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x47a728: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x47a728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x47a72c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x47a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x47a730: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x47a730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x47a734: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x47a734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x47a738: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47a738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x47a73c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x47A73Cu;
    {
        const bool branch_taken_0x47a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A73Cu;
        // 0x47a740: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47a73c) {
            ctx->pc = 0x47A748u;
            goto label_47a748;
        }
    }
    ctx->pc = 0x47A744u;
label_47a744:
    // 0x47a744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47a744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a748:
    // 0x47a748: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47a748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47a74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47a74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47a750: 0x3e00008  jr          $ra
    ctx->pc = 0x47A750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A750u;
        // 0x47a754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47A758u;
}
