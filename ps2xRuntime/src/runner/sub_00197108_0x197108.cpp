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

// Function: sub_00197108
// Address: 0x197108 - 0x197168
void sub_00197108_0x197108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197108_0x197108");
#endif

    switch (ctx->pc) {
        case 0x197138u: goto label_197138;
        case 0x197140u: goto label_197140;
        case 0x197150u: goto label_197150;
        default: break;
    }

    ctx->pc = 0x197108u;

    // 0x197108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19710c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19710cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197118: 0x92020011  lbu         $v0, 0x11($s0)
    ctx->pc = 0x197118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 17)));
    // 0x19711c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19711Cu;
    {
        const bool branch_taken_0x19711c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19711Cu;
        // 0x197120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19711c) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x197124u;
    // 0x197124: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x197124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x197128: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197128u;
    {
        const bool branch_taken_0x197128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197128u;
        // 0x19712c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197128) {
            ctx->pc = 0x197158u;
            goto label_197158;
        }
    }
    ctx->pc = 0x197130u;
    // 0x197130: 0xc065e40  jal         func_197900
    ctx->pc = 0x197130u;
    SET_GPR_U32(ctx, 31, 0x197138u);
    ctx->pc = 0x197900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197900u, 0x197130u, 0x197138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197138u;
label_197138:
    // 0x197138: 0xc1144bc  jal         func_4512F0
    ctx->pc = 0x197138u;
    SET_GPR_U32(ctx, 31, 0x197140u);
    ctx->pc = 0x19713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197138u;
    // 0x19713c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4512F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4512F0u, 0x197138u, 0x197140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197140u;
label_197140:
    // 0x197140: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x197140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x197144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197148: 0xc065df2  jal         func_1977C8
    ctx->pc = 0x197148u;
    SET_GPR_U32(ctx, 31, 0x197150u);
    ctx->pc = 0x19714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197148u;
    // 0x19714c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1977C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1977C8u, 0x197148u, 0x197150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197150u;
label_197150:
    // 0x197150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197150u;
    {
        const bool branch_taken_0x197150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197150u;
        // 0x197154: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197150) {
            ctx->pc = 0x19715Cu;
            goto label_19715c;
        }
    }
    ctx->pc = 0x197158u;
label_197158:
    // 0x197158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19715c:
    // 0x19715c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197160: 0x3e00008  jr          $ra
    ctx->pc = 0x197160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197160u;
        // 0x197164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197168u;
}
