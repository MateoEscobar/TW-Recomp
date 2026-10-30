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

// Function: sub_00378160
// Address: 0x378160 - 0x3781d8
void sub_00378160_0x378160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378160_0x378160");
#endif

    switch (ctx->pc) {
        case 0x378180u: goto label_378180;
        case 0x378188u: goto label_378188;
        case 0x378190u: goto label_378190;
        case 0x37819cu: goto label_37819c;
        case 0x3781b4u: goto label_3781b4;
        case 0x3781c0u: goto label_3781c0;
        default: break;
    }

    ctx->pc = 0x378160u;

    // 0x378160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x378160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x378164: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x378164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x378168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37816c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37816cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x378170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x378174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378178: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378178u;
    SET_GPR_U32(ctx, 31, 0x378180u);
    ctx->pc = 0x37817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378178u;
    // 0x37817c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378178u, 0x378180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378180u;
label_378180:
    // 0x378180: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378180u;
    SET_GPR_U32(ctx, 31, 0x378188u);
    ctx->pc = 0x378184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378180u;
    // 0x378184: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378180u, 0x378188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378188u;
label_378188:
    // 0x378188: 0xc105bb4  jal         func_416ED0
    ctx->pc = 0x378188u;
    SET_GPR_U32(ctx, 31, 0x378190u);
    ctx->pc = 0x37818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378188u;
    // 0x37818c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416ED0u, 0x378188u, 0x378190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378190u;
label_378190:
    // 0x378190: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x378190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378194: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x378194u;
    SET_GPR_U32(ctx, 31, 0x37819Cu);
    ctx->pc = 0x378198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378194u;
    // 0x378198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x378194u, 0x37819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37819Cu;
label_37819c:
    // 0x37819c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37819Cu;
    {
        const bool branch_taken_0x37819c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3781A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37819Cu;
        // 0x3781a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37819c) {
            ctx->pc = 0x3781B8u;
            goto label_3781b8;
        }
    }
    ctx->pc = 0x3781A4u;
    // 0x3781a4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3781a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3781a8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3781a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3781ac: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3781ACu;
    SET_GPR_U32(ctx, 31, 0x3781B4u);
    ctx->pc = 0x3781B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781ACu;
    // 0x3781b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3781ACu, 0x3781B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3781B4u;
label_3781b4:
    // 0x3781b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3781b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3781b8:
    // 0x3781b8: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3781B8u;
    SET_GPR_U32(ctx, 31, 0x3781C0u);
    ctx->pc = 0x3781BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3781B8u;
    // 0x3781bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3781B8u, 0x3781C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3781C0u;
label_3781c0:
    // 0x3781c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3781c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3781c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3781c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3781c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3781c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3781cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3781ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3781d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3781D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3781D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781D0u;
        // 0x3781d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3781D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3781D8u;
}
