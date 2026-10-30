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

// Function: sub_001500A8
// Address: 0x1500a8 - 0x150148
void sub_001500A8_0x1500a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001500A8_0x1500a8");
#endif

    switch (ctx->pc) {
        case 0x1500ccu: goto label_1500cc;
        case 0x1500e0u: goto label_1500e0;
        case 0x1500ecu: goto label_1500ec;
        case 0x1500f4u: goto label_1500f4;
        case 0x1500fcu: goto label_1500fc;
        case 0x150104u: goto label_150104;
        case 0x15010cu: goto label_15010c;
        case 0x150114u: goto label_150114;
        default: break;
    }

    ctx->pc = 0x1500a8u;

    // 0x1500a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1500a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1500ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1500acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1500b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1500b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1500b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1500b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1500b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1500bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1500bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1500c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1500c4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1500C4u;
    SET_GPR_U32(ctx, 31, 0x1500CCu);
    ctx->pc = 0x1500C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500C4u;
    // 0x1500c8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1500C4u, 0x1500CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500CCu;
label_1500cc:
    // 0x1500cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1500ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1500d0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1500D0u;
    {
        const bool branch_taken_0x1500d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1500d0) {
            ctx->pc = 0x1500E4u;
            goto label_1500e4;
        }
    }
    ctx->pc = 0x1500D8u;
    // 0x1500d8: 0xc0542d2  jal         func_150B48
    ctx->pc = 0x1500D8u;
    SET_GPR_U32(ctx, 31, 0x1500E0u);
    ctx->pc = 0x150B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B48u, 0x1500D8u, 0x1500E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500E0u;
label_1500e0:
    // 0x1500e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1500e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1500e4:
    // 0x1500e4: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x1500E4u;
    SET_GPR_U32(ctx, 31, 0x1500ECu);
    ctx->pc = 0x1500E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500E4u;
    // 0x1500e8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x1500E4u, 0x1500ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500ECu;
label_1500ec:
    // 0x1500ec: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1500ECu;
    SET_GPR_U32(ctx, 31, 0x1500F4u);
    ctx->pc = 0x1500F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500ECu;
    // 0x1500f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1500ECu, 0x1500F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500F4u;
label_1500f4:
    // 0x1500f4: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x1500F4u;
    SET_GPR_U32(ctx, 31, 0x1500FCu);
    ctx->pc = 0x1500F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500F4u;
    // 0x1500f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x1500F4u, 0x1500FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500FCu;
label_1500fc:
    // 0x1500fc: 0xc05375e  jal         func_14DD78
    ctx->pc = 0x1500FCu;
    SET_GPR_U32(ctx, 31, 0x150104u);
    ctx->pc = 0x150100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500FCu;
    // 0x150100: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DD78u, 0x1500FCu, 0x150104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150104u;
label_150104:
    // 0x150104: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150104u;
    SET_GPR_U32(ctx, 31, 0x15010Cu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150104u, 0x15010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15010Cu;
label_15010c:
    // 0x15010c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x15010Cu;
    SET_GPR_U32(ctx, 31, 0x150114u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x15010Cu, 0x150114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150114u;
label_150114:
    // 0x150114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x150114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150118: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15011c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15011cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150120: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x150120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150128: 0x3e00008  jr          $ra
    ctx->pc = 0x150128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150128u;
        // 0x15012c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150130u;
    // 0x150130: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x150134: 0x0  nop
    ctx->pc = 0x150134u;
    // NOP
    // 0x150138: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15013c: 0x0  nop
    ctx->pc = 0x15013cu;
    // NOP
    // 0x150140: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x150144: 0x0  nop
    ctx->pc = 0x150144u;
    // NOP
    ctx->pc = 0x150148u;
}
