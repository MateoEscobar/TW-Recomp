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

// Function: sub_004B3278
// Address: 0x4b3278 - 0x4b32d0
void sub_004B3278_0x4b3278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3278_0x4b3278");
#endif

    switch (ctx->pc) {
        case 0x4b3290u: goto label_4b3290;
        case 0x4b32a4u: goto label_4b32a4;
        case 0x4b32acu: goto label_4b32ac;
        case 0x4b32b4u: goto label_4b32b4;
        case 0x4b32c8u: goto label_4b32c8;
        default: break;
    }

    ctx->pc = 0x4b3278u;

    // 0x4b3278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b3278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b327c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b327cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b3280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b3284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b3284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4b3288: 0xc12bea2  jal         func_4AFA88
    ctx->pc = 0x4B3288u;
    SET_GPR_U32(ctx, 31, 0x4B3290u);
    ctx->pc = 0x4B328Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3288u;
    // 0x4b328c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA88u, 0x4B3288u, 0x4B3290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3290u;
label_4b3290:
    // 0x4b3290: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b3290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b3294: 0x24630548  addiu       $v1, $v1, 0x548
    ctx->pc = 0x4b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1352));
    // 0x4b3298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b329c: 0xc12db7e  jal         func_4B6DF8
    ctx->pc = 0x4B329Cu;
    SET_GPR_U32(ctx, 31, 0x4B32A4u);
    ctx->pc = 0x4B32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B329Cu;
    // 0x4b32a0: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6DF8u, 0x4B329Cu, 0x4B32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B32A4u;
label_4b32a4:
    // 0x4b32a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B32A4u;
    {
        const bool branch_taken_0x4b32a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32A4u;
        // 0x4b32a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b32a4) {
            ctx->pc = 0x4B32B4u;
            goto label_4b32b4;
        }
    }
    ctx->pc = 0x4B32ACu;
label_4b32ac:
    // 0x4b32ac: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B32ACu;
    SET_GPR_U32(ctx, 31, 0x4B32B4u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B32ACu, 0x4B32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B32B4u;
label_4b32b4:
    // 0x4b32b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B32B4u;
    {
        const bool branch_taken_0x4b32b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B32B4u;
        // 0x4b32b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b32b4) {
            ctx->pc = 0x4B32D8u;
            return;
        }
    }
    ctx->pc = 0x4B32BCu;
    // 0x4b32bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b32bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32c0: 0xc12beb0  jal         func_4AFAC0
    ctx->pc = 0x4B32C0u;
    SET_GPR_U32(ctx, 31, 0x4B32C8u);
    ctx->pc = 0x4B32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B32C0u;
    // 0x4b32c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFAC0u, 0x4B32C0u, 0x4B32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B32C8u;
label_4b32c8:
    // 0x4b32c8: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x4B32C8u;
    {
        const bool branch_taken_0x4b32c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b32c8) {
            ctx->pc = 0x4B32ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b32ac;
        }
    }
    ctx->pc = 0x4B32D0u;
}
