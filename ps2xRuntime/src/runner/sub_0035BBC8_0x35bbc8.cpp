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

// Function: sub_0035BBC8
// Address: 0x35bbc8 - 0x35bc40
void sub_0035BBC8_0x35bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BBC8_0x35bbc8");
#endif

    switch (ctx->pc) {
        case 0x35bbf0u: goto label_35bbf0;
        case 0x35bbf8u: goto label_35bbf8;
        case 0x35bc0cu: goto label_35bc0c;
        case 0x35bc14u: goto label_35bc14;
        case 0x35bc24u: goto label_35bc24;
        default: break;
    }

    ctx->pc = 0x35bbc8u;

    // 0x35bbc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35bbcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35bbd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35bbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35bbd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35bbd8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35bbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35bbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35bbe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bbe8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BBE8u;
    SET_GPR_U32(ctx, 31, 0x35BBF0u);
    ctx->pc = 0x35BBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBE8u;
    // 0x35bbec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BBE8u, 0x35BBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBF0u;
label_35bbf0:
    // 0x35bbf0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35BBF0u;
    SET_GPR_U32(ctx, 31, 0x35BBF8u);
    ctx->pc = 0x35BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBF0u;
    // 0x35bbf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35BBF0u, 0x35BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBF8u;
label_35bbf8:
    // 0x35bbf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35bbf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35bbfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35BC04u;
    SET_GPR_U32(ctx, 31, 0x35BC0Cu);
    ctx->pc = 0x35BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC04u;
    // 0x35bc08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35BC04u, 0x35BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC0Cu;
label_35bc0c:
    // 0x35bc0c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35BC0Cu;
    SET_GPR_U32(ctx, 31, 0x35BC14u);
    ctx->pc = 0x35BC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC0Cu;
    // 0x35bc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35BC0Cu, 0x35BC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC14u;
label_35bc14:
    // 0x35bc14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35bc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35bc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc1c: 0xc08def8  jal         func_237BE0
    ctx->pc = 0x35BC1Cu;
    SET_GPR_U32(ctx, 31, 0x35BC24u);
    ctx->pc = 0x35BC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BC1Cu;
    // 0x35bc20: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237BE0u, 0x35BC1Cu, 0x35BC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BC24u;
label_35bc24:
    // 0x35bc24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35bc24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35bc28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35bc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35bc30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35bc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35bc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x35BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC38u;
        // 0x35bc3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BC40u;
}
