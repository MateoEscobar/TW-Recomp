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

// Function: sub_00375648
// Address: 0x375648 - 0x3756c8
void sub_00375648_0x375648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375648_0x375648");
#endif

    switch (ctx->pc) {
        case 0x37566cu: goto label_37566c;
        case 0x375674u: goto label_375674;
        case 0x375688u: goto label_375688;
        case 0x37569cu: goto label_37569c;
        case 0x3756acu: goto label_3756ac;
        default: break;
    }

    ctx->pc = 0x375648u;

    // 0x375648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37564c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375650: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x375650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x375654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x375654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x375658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37565c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x375660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375664: 0xc102472  jal         func_4091C8
    ctx->pc = 0x375664u;
    SET_GPR_U32(ctx, 31, 0x37566Cu);
    ctx->pc = 0x375668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375664u;
    // 0x375668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x375664u, 0x37566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37566Cu;
label_37566c:
    // 0x37566c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37566Cu;
    SET_GPR_U32(ctx, 31, 0x375674u);
    ctx->pc = 0x375670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37566Cu;
    // 0x375670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37566Cu, 0x375674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375674u;
label_375674:
    // 0x375674: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x375674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x375678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37567c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37567cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375680: 0xc102488  jal         func_409220
    ctx->pc = 0x375680u;
    SET_GPR_U32(ctx, 31, 0x375688u);
    ctx->pc = 0x375684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375680u;
    // 0x375684: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x375680u, 0x375688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375688u;
label_375688:
    // 0x375688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x375688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37568c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375690: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x375690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375694: 0xc1024c6  jal         func_409318
    ctx->pc = 0x375694u;
    SET_GPR_U32(ctx, 31, 0x37569Cu);
    ctx->pc = 0x375698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375694u;
    // 0x375698: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x375694u, 0x37569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37569Cu;
label_37569c:
    // 0x37569c: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x37569cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3756a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3756a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3756a4: 0xc0c5914  jal         func_316450
    ctx->pc = 0x3756A4u;
    SET_GPR_U32(ctx, 31, 0x3756ACu);
    ctx->pc = 0x3756A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3756A4u;
    // 0x3756a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316450u, 0x3756A4u, 0x3756ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3756ACu;
label_3756ac:
    // 0x3756ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3756acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3756b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3756b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3756b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3756b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3756b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3756b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3756bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3756bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3756c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3756C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3756C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3756C0u;
        // 0x3756c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3756C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3756C8u;
}
