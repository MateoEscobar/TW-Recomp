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

// Function: sub_00370690
// Address: 0x370690 - 0x370728
void sub_00370690_0x370690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370690_0x370690");
#endif

    switch (ctx->pc) {
        case 0x3706bcu: goto label_3706bc;
        case 0x3706c4u: goto label_3706c4;
        case 0x3706d8u: goto label_3706d8;
        case 0x3706ecu: goto label_3706ec;
        case 0x3706f4u: goto label_3706f4;
        case 0x370704u: goto label_370704;
        default: break;
    }

    ctx->pc = 0x370690u;

    // 0x370690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x370690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x370694: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370698: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x370698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37069c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3706a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3706a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3706a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3706a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3706ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3706acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3706b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3706b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3706b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3706B4u;
    SET_GPR_U32(ctx, 31, 0x3706BCu);
    ctx->pc = 0x3706B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706B4u;
    // 0x3706b8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3706B4u, 0x3706BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706BCu;
label_3706bc:
    // 0x3706bc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3706BCu;
    SET_GPR_U32(ctx, 31, 0x3706C4u);
    ctx->pc = 0x3706C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706BCu;
    // 0x3706c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3706BCu, 0x3706C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706C4u;
label_3706c4:
    // 0x3706c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3706c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3706c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3706ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3706d0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x3706D0u;
    SET_GPR_U32(ctx, 31, 0x3706D8u);
    ctx->pc = 0x3706D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706D0u;
    // 0x3706d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x3706D0u, 0x3706D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706D8u;
label_3706d8:
    // 0x3706d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3706d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706dc: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3706dcu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3706e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3706e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3706E4u;
    SET_GPR_U32(ctx, 31, 0x3706ECu);
    ctx->pc = 0x3706E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706E4u;
    // 0x3706e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3706E4u, 0x3706ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706ECu;
label_3706ec:
    // 0x3706ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3706ECu;
    SET_GPR_U32(ctx, 31, 0x3706F4u);
    ctx->pc = 0x3706F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706ECu;
    // 0x3706f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3706ECu, 0x3706F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3706F4u;
label_3706f4:
    // 0x3706f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3706f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3706f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3706fc: 0xc06d0a6  jal         func_1B4298
    ctx->pc = 0x3706FCu;
    SET_GPR_U32(ctx, 31, 0x370704u);
    ctx->pc = 0x370700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3706FCu;
    // 0x370700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4298u, 0x3706FCu, 0x370704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370704u;
label_370704:
    // 0x370704: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x370704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370708: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37070c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37070cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x370710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370714: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x370714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37071c: 0x3e00008  jr          $ra
    ctx->pc = 0x37071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37071Cu;
        // 0x370720: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370724u;
    // 0x370724: 0x0  nop
    ctx->pc = 0x370724u;
    // NOP
    ctx->pc = 0x370728u;
}
