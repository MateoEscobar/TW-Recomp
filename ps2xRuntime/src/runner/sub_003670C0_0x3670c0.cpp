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

// Function: sub_003670C0
// Address: 0x3670c0 - 0x367160
void sub_003670C0_0x3670c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003670C0_0x3670c0");
#endif

    switch (ctx->pc) {
        case 0x3670ecu: goto label_3670ec;
        case 0x3670f4u: goto label_3670f4;
        case 0x367108u: goto label_367108;
        case 0x367110u: goto label_367110;
        case 0x367124u: goto label_367124;
        case 0x36712cu: goto label_36712c;
        case 0x36713cu: goto label_36713c;
        default: break;
    }

    ctx->pc = 0x3670c0u;

    // 0x3670c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3670c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3670c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3670c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3670c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3670c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3670cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3670ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3670d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3670d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3670d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3670d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3670dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3670dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3670e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3670e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3670E4u;
    SET_GPR_U32(ctx, 31, 0x3670ECu);
    ctx->pc = 0x3670E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3670E4u;
    // 0x3670e8: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3670E4u, 0x3670ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3670ECu;
label_3670ec:
    // 0x3670ec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3670ECu;
    SET_GPR_U32(ctx, 31, 0x3670F4u);
    ctx->pc = 0x3670F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3670ECu;
    // 0x3670f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3670ECu, 0x3670F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3670F4u;
label_3670f4:
    // 0x3670f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3670f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3670f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3670fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367100: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367100u;
    SET_GPR_U32(ctx, 31, 0x367108u);
    ctx->pc = 0x367104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367100u;
    // 0x367104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367100u, 0x367108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367108u;
label_367108:
    // 0x367108: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367108u;
    SET_GPR_U32(ctx, 31, 0x367110u);
    ctx->pc = 0x36710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367108u;
    // 0x36710c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367108u, 0x367110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367110u;
label_367110:
    // 0x367110: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x367110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x367114: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36711c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36711Cu;
    SET_GPR_U32(ctx, 31, 0x367124u);
    ctx->pc = 0x367120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36711Cu;
    // 0x367120: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36711Cu, 0x367124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367124u;
label_367124:
    // 0x367124: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x367124u;
    SET_GPR_U32(ctx, 31, 0x36712Cu);
    ctx->pc = 0x367128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367124u;
    // 0x367128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x367124u, 0x36712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36712Cu;
label_36712c:
    // 0x36712c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36712cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367134: 0xc04773c  jal         func_11DCF0
    ctx->pc = 0x367134u;
    SET_GPR_U32(ctx, 31, 0x36713Cu);
    ctx->pc = 0x367138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367134u;
    // 0x367138: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DCF0u, 0x367134u, 0x36713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36713Cu;
label_36713c:
    // 0x36713c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36713cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367140: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x367140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367144: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x367144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367148: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x367148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36714c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36714cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367150: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x367150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367154: 0x3e00008  jr          $ra
    ctx->pc = 0x367154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367154u;
        // 0x367158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36715Cu;
    // 0x36715c: 0x0  nop
    ctx->pc = 0x36715cu;
    // NOP
    ctx->pc = 0x367160u;
}
