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

// Function: sub_002FB8A0
// Address: 0x2fb8a0 - 0x2fb918
void sub_002FB8A0_0x2fb8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB8A0_0x2fb8a0");
#endif

    switch (ctx->pc) {
        case 0x2fb8c4u: goto label_2fb8c4;
        case 0x2fb8fcu: goto label_2fb8fc;
        default: break;
    }

    ctx->pc = 0x2fb8a0u;

    // 0x2fb8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb8a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fb8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fb8a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fb8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb8b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb8b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fb8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb8bc: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2FB8BCu;
    SET_GPR_U32(ctx, 31, 0x2FB8C4u);
    ctx->pc = 0x2FB8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8BCu;
    // 0x2fb8c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2FB8BCu, 0x2FB8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8C4u;
label_2fb8c4:
    // 0x2fb8c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb8c8: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FB8C8u;
    {
        const bool branch_taken_0x2fb8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fb8c8) {
            ctx->pc = 0x2FB8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB8C8u;
            // 0x2fb8cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB900u;
            goto label_2fb900;
        }
    }
    ctx->pc = 0x2FB8D0u;
    // 0x2fb8d0: 0x92080014  lbu         $t0, 0x14($s0)
    ctx->pc = 0x2fb8d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fb8d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2fb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2fb8d8: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x2fb8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2fb8dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8e0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2fb8e0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2fb8e4: 0x8402b  sltu        $t0, $zero, $t0
    ctx->pc = 0x2fb8e4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2fb8e8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2fb8ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fb8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb8f4: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2FB8F4u;
    SET_GPR_U32(ctx, 31, 0x2FB8FCu);
    ctx->pc = 0x2FB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8F4u;
    // 0x2fb8f8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2FB8F4u, 0x2FB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8FCu;
label_2fb8fc:
    // 0x2fb8fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fb8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fb900:
    // 0x2fb900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fb900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fb904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb90c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB90Cu;
        // 0x2fb910: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB914u;
    // 0x2fb914: 0x0  nop
    ctx->pc = 0x2fb914u;
    // NOP
    ctx->pc = 0x2fb918u;
}
