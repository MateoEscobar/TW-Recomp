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

// Function: sub_00222908
// Address: 0x222908 - 0x222980
void sub_00222908_0x222908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222908_0x222908");
#endif

    switch (ctx->pc) {
        case 0x22293cu: goto label_22293c;
        case 0x22294cu: goto label_22294c;
        default: break;
    }

    ctx->pc = 0x222908u;

    // 0x222908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22290c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22290cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x222910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x222914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222918: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x222918u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x22291c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22291cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x222920: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222920u;
    {
        const bool branch_taken_0x222920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222920u;
        // 0x222924: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222920) {
            ctx->pc = 0x222944u;
            goto label_222944;
        }
    }
    ctx->pc = 0x222928u;
    // 0x222928: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x22292c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x222930: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x222930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x222934: 0xc107908  jal         func_41E420
    ctx->pc = 0x222934u;
    SET_GPR_U32(ctx, 31, 0x22293Cu);
    ctx->pc = 0x222938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222934u;
    // 0x222938: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x222934u, 0x22293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22293Cu;
label_22293c:
    // 0x22293c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22293Cu;
    {
        const bool branch_taken_0x22293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22293Cu;
        // 0x222940: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22293c) {
            ctx->pc = 0x222970u;
            goto label_222970;
        }
    }
    ctx->pc = 0x222944u;
label_222944:
    // 0x222944: 0xc087502  jal         func_21D408
    ctx->pc = 0x222944u;
    SET_GPR_U32(ctx, 31, 0x22294Cu);
    ctx->pc = 0x222948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222944u;
    // 0x222948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x222944u, 0x22294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22294Cu;
label_22294c:
    // 0x22294c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x222950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x222954: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222954u;
    {
        const bool branch_taken_0x222954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222954) {
            ctx->pc = 0x222958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222954u;
            // 0x222958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222970u;
            goto label_222970;
        }
    }
    ctx->pc = 0x22295Cu;
    // 0x22295c: 0x82030378  lb          $v1, 0x378($s0)
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x222960: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x222960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x222964: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x222964u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x222968: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x222968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22296c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22296cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_222970:
    // 0x222970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222974: 0x3e00008  jr          $ra
    ctx->pc = 0x222974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222974u;
        // 0x222978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22297Cu;
    // 0x22297c: 0x0  nop
    ctx->pc = 0x22297cu;
    // NOP
    ctx->pc = 0x222980u;
}
