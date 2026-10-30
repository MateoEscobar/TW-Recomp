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

// Function: sub_003714A0
// Address: 0x3714a0 - 0x371540
void sub_003714A0_0x3714a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003714A0_0x3714a0");
#endif

    switch (ctx->pc) {
        case 0x3714c8u: goto label_3714c8;
        case 0x3714d0u: goto label_3714d0;
        case 0x3714e4u: goto label_3714e4;
        case 0x3714f8u: goto label_3714f8;
        case 0x37150cu: goto label_37150c;
        case 0x371520u: goto label_371520;
        default: break;
    }

    ctx->pc = 0x3714a0u;

    // 0x3714a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3714a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3714a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3714a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3714a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3714a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3714ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3714acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3714b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3714b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3714b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3714b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3714b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3714bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3714bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3714c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3714C0u;
    SET_GPR_U32(ctx, 31, 0x3714C8u);
    ctx->pc = 0x3714C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714C0u;
    // 0x3714c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3714C0u, 0x3714C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714C8u;
label_3714c8:
    // 0x3714c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3714C8u;
    SET_GPR_U32(ctx, 31, 0x3714D0u);
    ctx->pc = 0x3714CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714C8u;
    // 0x3714cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3714C8u, 0x3714D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714D0u;
label_3714d0:
    // 0x3714d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3714d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3714d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3714d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3714dc: 0xc102488  jal         func_409220
    ctx->pc = 0x3714DCu;
    SET_GPR_U32(ctx, 31, 0x3714E4u);
    ctx->pc = 0x3714E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714DCu;
    // 0x3714e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3714DCu, 0x3714E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714E4u;
label_3714e4:
    // 0x3714e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3714e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3714e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3714ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3714f0: 0xc102488  jal         func_409220
    ctx->pc = 0x3714F0u;
    SET_GPR_U32(ctx, 31, 0x3714F8u);
    ctx->pc = 0x3714F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3714F0u;
    // 0x3714f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3714F0u, 0x3714F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3714F8u;
label_3714f8:
    // 0x3714f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3714f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3714fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3714fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371500: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x371500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x371504: 0xc102488  jal         func_409220
    ctx->pc = 0x371504u;
    SET_GPR_U32(ctx, 31, 0x37150Cu);
    ctx->pc = 0x371508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371504u;
    // 0x371508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371504u, 0x37150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37150Cu;
label_37150c:
    // 0x37150c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37150cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371514: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371518: 0xc044fb4  jal         func_113ED0
    ctx->pc = 0x371518u;
    SET_GPR_U32(ctx, 31, 0x371520u);
    ctx->pc = 0x37151Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371518u;
    // 0x37151c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113ED0u, 0x371518u, 0x371520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371520u;
label_371520:
    // 0x371520: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x371520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x371524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371528: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x371528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37152c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37152cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371530: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x371530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371538: 0x3e00008  jr          $ra
    ctx->pc = 0x371538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371538u;
        // 0x37153c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371540u;
}
