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

// Function: sub_0035C090
// Address: 0x35c090 - 0x35c120
void sub_0035C090_0x35c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C090_0x35c090");
#endif

    switch (ctx->pc) {
        case 0x35c0b8u: goto label_35c0b8;
        case 0x35c0c0u: goto label_35c0c0;
        case 0x35c0d4u: goto label_35c0d4;
        case 0x35c0dcu: goto label_35c0dc;
        case 0x35c0f0u: goto label_35c0f0;
        case 0x35c100u: goto label_35c100;
        default: break;
    }

    ctx->pc = 0x35c090u;

    // 0x35c090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35c094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35c094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c098: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35c09c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35c0a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c0a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c0b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C0B0u;
    SET_GPR_U32(ctx, 31, 0x35C0B8u);
    ctx->pc = 0x35C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0B0u;
    // 0x35c0b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C0B0u, 0x35C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0B8u;
label_35c0b8:
    // 0x35c0b8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C0B8u;
    SET_GPR_U32(ctx, 31, 0x35C0C0u);
    ctx->pc = 0x35C0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0B8u;
    // 0x35c0bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C0B8u, 0x35C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0C0u;
label_35c0c0:
    // 0x35c0c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c0cc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C0CCu;
    SET_GPR_U32(ctx, 31, 0x35C0D4u);
    ctx->pc = 0x35C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0CCu;
    // 0x35c0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C0CCu, 0x35C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0D4u;
label_35c0d4:
    // 0x35c0d4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C0D4u;
    SET_GPR_U32(ctx, 31, 0x35C0DCu);
    ctx->pc = 0x35C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0D4u;
    // 0x35c0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C0D4u, 0x35C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0DCu;
label_35c0dc:
    // 0x35c0dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35c0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35c0e8: 0xc102488  jal         func_409220
    ctx->pc = 0x35C0E8u;
    SET_GPR_U32(ctx, 31, 0x35C0F0u);
    ctx->pc = 0x35C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0E8u;
    // 0x35c0ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35C0E8u, 0x35C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0F0u;
label_35c0f0:
    // 0x35c0f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35c0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0f8: 0xc08df80  jal         func_237E00
    ctx->pc = 0x35C0F8u;
    SET_GPR_U32(ctx, 31, 0x35C100u);
    ctx->pc = 0x35C0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0F8u;
    // 0x35c0fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E00u, 0x35C0F8u, 0x35C100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C100u;
label_35c100:
    // 0x35c100: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c108: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c10c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c10cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c114: 0x3e00008  jr          $ra
    ctx->pc = 0x35C114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C114u;
        // 0x35c118: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C11Cu;
    // 0x35c11c: 0x0  nop
    ctx->pc = 0x35c11cu;
    // NOP
    ctx->pc = 0x35c120u;
}
