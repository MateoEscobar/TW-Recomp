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

// Function: sub_002FDA68
// Address: 0x2fda68 - 0x2fdae8
void sub_002FDA68_0x2fda68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDA68_0x2fda68");
#endif

    switch (ctx->pc) {
        case 0x2fda8cu: goto label_2fda8c;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdad0u: goto label_2fdad0;
        default: break;
    }

    ctx->pc = 0x2fda68u;

    // 0x2fda68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fda68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fda6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fda6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fda70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fda70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fda74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fda74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fda78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2fda78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2fda7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fda80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2fda80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fda84: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2FDA84u;
    SET_GPR_U32(ctx, 31, 0x2FDA8Cu);
    ctx->pc = 0x2FDA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA84u;
    // 0x2fda88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2FDA84u, 0x2FDA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA8Cu;
label_2fda8c:
    // 0x2fda8c: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FDA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FDA94u);
    ctx->pc = 0x2FDA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA8Cu;
    // 0x2fda90: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FDA8Cu, 0x2FDA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDA94u;
label_2fda94:
    // 0x2fda94: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2fda94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2fda98: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x2FDA98u;
    SET_GPR_U32(ctx, 31, 0x2FDAA0u);
    ctx->pc = 0x2FDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDA98u;
    // 0x2fda9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2FDA98u, 0x2FDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAA0u;
label_2fdaa0:
    // 0x2fdaa0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fdaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdaa4: 0xc086c40  jal         func_21B100
    ctx->pc = 0x2FDAA4u;
    SET_GPR_U32(ctx, 31, 0x2FDAACu);
    ctx->pc = 0x2FDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAA4u;
    // 0x2fdaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x2FDAA4u, 0x2FDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAACu;
label_2fdaac:
    // 0x2fdaac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fdaacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fdab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fdab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fdab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fdab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdabc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fdabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdac0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2fdac0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2fdac4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fdac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdac8: 0xc0968f8  jal         func_25A3E0
    ctx->pc = 0x2FDAC8u;
    SET_GPR_U32(ctx, 31, 0x2FDAD0u);
    ctx->pc = 0x2FDACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FDAC8u;
    // 0x2fdacc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3E0u, 0x2FDAC8u, 0x2FDAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FDAD0u;
label_2fdad0:
    // 0x2fdad0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fdad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fdad4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fdad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdad8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fdad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fdadc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fdadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fdae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDAE0u;
        // 0x2fdae4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDAE8u;
}
